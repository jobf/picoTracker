/*
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 2024 xiphonics, inc.
 *
 * This file is part of the picoTracker firmware
 */

#include "picoTrackerEventQueue.h"

picoTrackerEventQueue::picoTrackerEventQueue(){};

void picoTrackerEventQueue::push(picoTrackerEvent event) {
  if (!queue_.full()) {
    queue_.push(event);
  }
};

void picoTrackerEventQueue::pop_into(picoTrackerEvent &event) {
  if (!queue_.empty()) {
    event.type_ = queue_.front().type_;
    queue_.pop();
  }
};

bool picoTrackerEventQueue::empty() { return queue_.empty(); }
