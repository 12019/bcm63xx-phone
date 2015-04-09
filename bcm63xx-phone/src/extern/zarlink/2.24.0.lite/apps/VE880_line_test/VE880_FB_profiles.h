/*
 * VE880_FB_profiles.h --
 *
 * This header file exports the Profile data types
 *
 * Project Info --
 *   File:   X:\shafer\lightning\ztap2012\ztap\applications\quickstarts\sdk_examples\VE880_initialization\VE880_FB_profiles.vpw
 *   Type:   VE880 Tracker Configuration for a 100V Flyback Power Supply, Lite Narrowband Coefficients and PCM/MPI Interface at 8.192MHz PCLK
 *   Date:   Tuesday, August 07, 2012 11:49:08
 *   Device: VE880 Le88506
 *
 *   This file was generated with Profile Wizard Version: P2.3.0
 */

#ifndef VE880_FB_PROFILES_H
#define VE880_FB_PROFILES_H

#ifdef VP_API_TYPES_H
#include "vp_api_types.h"
#else
typedef unsigned char VpProfileDataType;
#endif


/************** Device Parameters **************/
extern const VpProfileDataType FB_DEV_PROFILE[];     /* Device Configuration Data - VE880 Tracker 100V Flyback, PCM/MPI Interface */

/************** AC Coefficients **************/
extern const VpProfileDataType FB_AC_600_FXS[];      /* AC FXS RF14 600R Normal Coefficients (Default)  */

/************** DC Feed Parameters **************/
extern const VpProfileDataType FB_DC_25MA_CC[];      /* DC FXS Default -- Use for for all countries unless country file exists - 25 mA current feed */

/************** Ring Parameters **************/
extern const VpProfileDataType FB_RING_25HZ_SINE[];  /* Default Ringing 25Hz 60Vrms Tracking - Use for all countries unless country file exists */

/************** Call Progress Tones **************/

/************** Cadence Definitions **************/

/************** Caller ID **************/

/************** Metering Profile **************/

#endif /* VE880_FB_PROFILES_H */

