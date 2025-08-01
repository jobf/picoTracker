/*
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 2024 xiphonics, inc.
 *
 * This file is part of the picoTracker firmware
 */

// picoTrackerMidiInDevice.h
#pragma once
#include "Services/Midi/MidiInDevice.h"

class picoTrackerMidiInDevice : public MidiInDevice {
public:
  picoTrackerMidiInDevice(const char *name);
  virtual ~picoTrackerMidiInDevice();

  // Poll the MIDI input buffer for new messages
  virtual void poll();

  virtual bool Start();
  virtual void Stop();

protected:
  // Driver specific implementation
  virtual bool initDriver();
  virtual void closeDriver();
  virtual bool startDriver();
  virtual void stopDriver();
};