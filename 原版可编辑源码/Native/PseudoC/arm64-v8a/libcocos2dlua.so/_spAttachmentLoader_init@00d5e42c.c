
void _spAttachmentLoader_init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           _spCalloc(1,0x20,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AttachmentLoader.c"
                     ,0x32);
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  puVar1[2] = param_5;
  puVar1[3] = param_2;
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}

