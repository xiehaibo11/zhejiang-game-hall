
undefined8 * spAnimation_create(char *param_1,uint param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *__dest;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x25);
  sVar2 = strlen(param_1);
  __dest = (char *)_spMalloc(sVar2 + 1,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                             ,0x26);
  *puVar1 = __dest;
  strcpy(__dest,param_1);
  *(uint *)((long)puVar1 + 0xc) = param_2;
  uVar3 = _spMalloc(-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x28);
  puVar1[2] = uVar3;
  return puVar1;
}

