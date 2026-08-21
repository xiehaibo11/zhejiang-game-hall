
/* cocos2d::extension::ControlSaturationBrightnessPicker::checkSliderPosition(cocos2d::Vec2) */

void cocos2d::extension::ControlSaturationBrightnessPicker::checkSliderPosition
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_68 [8];
  float local_60;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar4 = *(float *)(param_3 + 0x70);
  (**(code **)(*(long *)param_3[0x6c] + 0x370))(auStack_68);
  fVar5 = *(float *)((long)param_3 + 900);
  fVar3 = local_60 * 0.5;
  (**(code **)(*(long *)param_3[0x6c] + 0x370))(auStack_68);
  fVar4 = (float)param_1 - (fVar4 + fVar3);
  fVar3 = (float)param_2 - (fVar5 + local_5c * 0.5);
  (**(code **)(*(long *)param_3[0x6c] + 0x370))(auStack_68);
  bVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= local_60 * 0.5;
  if (bVar2) {
    updateSliderPosition(param_1,param_2,param_3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e10570 with catch @ 00e10804
                        */
    (**(code **)(*param_3 + 0x688))(param_3,0x100);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e1051c with catch @ 00e10808
                        */
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

