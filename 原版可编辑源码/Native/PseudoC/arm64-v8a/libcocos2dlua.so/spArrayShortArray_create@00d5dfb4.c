
undefined4 * spArrayShortArray_create(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)
           _spCalloc(1,0x10,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Array.c",
                     0x27);
  *puVar1 = 0;
  puVar1[1] = param_1;
  uVar2 = _spCalloc((long)param_1,8,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Array.c",
                    0x27);
  *(undefined8 *)(puVar1 + 2) = uVar2;
  return puVar1;
}

