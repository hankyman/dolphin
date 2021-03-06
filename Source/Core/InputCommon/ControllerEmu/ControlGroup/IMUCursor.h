// Copyright 2019 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include <chrono>
#include <string>

#include "InputCommon/ControllerEmu/StickGate.h"
#include "InputCommon/ControllerInterface/Device.h"

namespace ControllerEmu
{
class IMUCursor : public ControlGroup
{
public:
  IMUCursor(std::string name, std::string ui_name);

  // Yaw movement in radians.
  ControlState GetTotalYaw() const;

private:
  SettingValue<double> m_yaw_setting;
};
}  // namespace ControllerEmu
