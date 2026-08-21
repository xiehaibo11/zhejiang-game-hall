
undefined8 * spPathConstraintData_create(char *param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *__dest;
  
                    /* try { // try from 00d5ed68 to 00e5ed6b has its CatchHandler @ 00d5f738 */
                    /* try { // try from 00d5ed70 to 00e5ed7f has its CatchHandler @ 00d5f730 */
                    /* try { // try from 00d5ed80 to 00e5ed93 has its CatchHandler @ 00d5f698 */
  puVar1 = (undefined8 *)
           _spCalloc(1,0x40,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/PathConstraintData.c"
                     ,0x23);
                    /* try { // try from 00d5ed94 to 00e5ed9f has its CatchHandler @ 00d5f680 */
  sVar2 = strlen(param_1);
  __dest = (char *)_spMalloc(sVar2 + 1,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/PathConstraintData.c"
                             ,0x24);
  *puVar1 = __dest;
  strcpy(__dest,param_1);
                    /* try { // try from 00d5edb8 to 00e5edc7 has its CatchHandler @ 00d5f678 */
                    /* try { // try from 00d5edc8 to 00e5eddb has its CatchHandler @ 00d5f674 */
  return puVar1;
}

