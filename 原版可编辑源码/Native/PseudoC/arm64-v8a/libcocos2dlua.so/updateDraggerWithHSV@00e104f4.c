
/* cocos2d::extension::ControlSaturationBrightnessPicker::updateDraggerWithHSV(cocos2d::extension::HSV)
    */

void cocos2d::extension::ControlSaturationBrightnessPicker::updateDraggerWithHSV
               (undefined1 param_1 [16],double param_2,double param_3,long param_4)

{
                    /* try { // try from 00e1051c to 00f1051f has its CatchHandler @ 00e10808 */
  updateSliderPosition
            ((float)((1.0 - param_2) * (double)(long)*(int *)(param_4 + 0x38c) +
                    (double)((float)*(undefined8 *)(param_4 + 0x380) +
                            (float)*(int *)(param_4 + 0x388))),
             (float)(param_3 * (double)(long)*(int *)(param_4 + 0x38c) +
                    (double)((float)((ulong)*(undefined8 *)(param_4 + 0x380) >> 0x20) +
                            (float)*(int *)(param_4 + 0x388))));
  return;
}

