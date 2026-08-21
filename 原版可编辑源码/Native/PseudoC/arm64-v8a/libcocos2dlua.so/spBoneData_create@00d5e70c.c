
undefined4 * spBoneData_create(undefined4 param_1,char *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *__dest;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)
           _spCalloc(1,0x40,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/BoneData.c"
                     ,0x23);
  *puVar1 = param_1;
  sVar2 = strlen(param_2);
  __dest = (char *)_spMalloc(sVar2 + 1,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/BoneData.c"
                             ,0x25);
  *(char **)(puVar1 + 2) = __dest;
  strcpy(__dest,param_2);
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(puVar1 + 4) = param_3;
  *(undefined8 *)(puVar1 + 10) = uVar3;
  puVar1[0xe] = 0;
  return puVar1;
}

