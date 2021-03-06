/*
 * HeliOS Embedded Operating System
 * Copyright (C) 2020 Manny Peterson <me@mannypeterson.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "HeliOS.h"
#include "list.h"
#include "mem.h"
#include "task.h"
#include "timer.h"

unsigned long TimerGetNow() {
#if defined(ARDUINO_ARCH_AVR)
  return micros();
#elif defined(ARDUINO_ARCH_SAM)
  return micros();
#elif defined(ARDUINO_ARCH_SAMD)
  return micros();
#else
        #error “HeliOS is currently supported on the Arduino AVR, SAM and SAMD architectures. Other architectures may require porting of HeliOS.”
#endif
}
