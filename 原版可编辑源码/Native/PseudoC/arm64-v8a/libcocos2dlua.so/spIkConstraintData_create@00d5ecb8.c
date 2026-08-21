
undefined8 * spIkConstraintData_create(char *param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *__dest;
  
                    /* try { // try from 00d5ecd4 to 00e5ed17 has its CatchHandler @ 00d5ecd4
                       catch() { ... } // from try @ 00d5ecd4 with catch @ 00d5ecd4
                       catch() { ... } // from try @ 00d5f4a8 with catch @ 00d5ecd4 */
  puVar1 = (undefined8 *)
           _spCalloc(1,0x28,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/IkConstraintData.c"
                     ,0x23);
  sVar2 = strlen(param_1);
  __dest = (char *)_spMalloc(sVar2 + 1,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/IkConstraintData.c"
                             ,0x24);
  *puVar1 = __dest;
  strcpy(__dest,param_1);
                    /* try { // try from 00d5ed18 to 00e5ed27 has its CatchHandler @ 00d5f740 */
  puVar1[4] = 0x3f80000000000001;
  return puVar1;
}

