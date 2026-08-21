
undefined8 * spAtlasPage_create(undefined8 param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *__dest;
  
                    /* try { // try from 00d4dbdc to 00e4dbdf has its CatchHandler @ 00d4dbe8 */
                    /* try { // try from 00d4dbe0 to 00e4dc0b has its CatchHandler @ 00d4dacc */
                    /* catch() { ... } // from try @ 00d4dbdc with catch @ 00d4dbe8 */
                    /* catch() { ... } // from try @ 00d4dbbc with catch @ 00d4dbec */
                    /* catch() { ... } // from try @ 00d4db24 with catch @ 00d4dbf0 */
  puVar1 = (undefined8 *)
           _spCalloc(1,0x40,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.c",
                     0x24);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4dc64 with catch @ 00d4dc0c
                       catch(type#1 @ 00000000) { ... } // from try @ 00d4ddc8 with catch @ 00d4dc0c
                       catch(type#1 @ 00000000) { ... } // from try @ 00d4de54 with catch @ 00d4dc0c
                       catch(type#1 @ 00000000) { ... } // from try @ 00d4de9c with catch @ 00d4dc0c
                       catch(type#1 @ 00000000) { ... } // from try @ 00d4e004 with catch @ 00d4dc0c
                        */
  *puVar1 = param_1;
  sVar2 = strlen(param_2);
  __dest = (char *)_spMalloc(sVar2 + 1,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.c"
                             ,0x26);
  puVar1[1] = __dest;
  strcpy(__dest,param_2);
  return puVar1;
}

