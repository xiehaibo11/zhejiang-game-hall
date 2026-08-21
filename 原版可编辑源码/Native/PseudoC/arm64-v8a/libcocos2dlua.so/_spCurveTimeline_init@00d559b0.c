
void _spCurveTimeline_init
               (undefined4 *param_1,undefined4 param_2,int param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x50);
  *(undefined8 **)(param_1 + 2) = puVar1;
  puVar1[1] = param_6;
  puVar1[2] = param_4;
  *puVar1 = param_5;
  uVar2 = _spCalloc((long)(param_3 * 0x13 + -0x13),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x71);
  *(undefined8 *)(param_1 + 4) = uVar2;
  return;
}

