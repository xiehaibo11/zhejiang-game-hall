
void FUN_00912f5c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  void *__dest;
  long *****ppppplVar4;
  long lVar5;
  void *__src;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar6;
  long *plVar7;
  long *****ppppplVar8;
  ulong uVar9;
  LuaValue aLStack_88 [24];
  long ****local_70;
  long ****local_68;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 00912f98 to 00a12f9f has its CatchHandler @ 009130b8 */
                    /* try { // try from 00912fa0 to 00a12fcf has its CatchHandler @ 00912d44 */
  if (*(int *)(lVar2 + 0xb0) == 1) {
                    /* try { // try from 00912fd0 to 00a12fe7 has its CatchHandler @ 00913074 */
    if ((*(int *)(lVar2 + 0x90) == 4) && (*(char *)(lVar2 + 0x120) == '\0')) {
                    /* try { // try from 0091302c to 00a1306b has its CatchHandler @ 00912d44 */
      lVar5 = cocos2d::LuaEngine::getInstance();
      plVar7 = *(long **)(lVar5 + 8);
      if ((plVar7 != (long *)0x0) && (plVar7[5] != 0)) {
        local_70 = (long ****)&local_70;
        local_60 = 0;
        local_68 = local_70;
        __dest = operator_new__(*(ulong *)(lVar2 + 0x88),(nothrow_t *)&std::nothrow);
        uVar3 = 0;
        if (__dest == (void *)0x0) goto LAB_00913000;
        if ((*(byte *)(lVar2 + 0x70) & 1) == 0) {
                    /* try { // try from 0091306c to 00a13073 has its CatchHandler @ 009130b8 */
          __src = (void *)(lVar2 + 0x71);
        }
        else {
                    /* catch() { ... } // from try @ 00912fd0 with catch @ 00913074
                       try { // try from 00913074 to 00a1317b has its CatchHandler @ 00912d44 */
          __src = *(void **)(lVar2 + 0x80);
        }
        memcpy(__dest,__src,*(size_t *)(lVar2 + 0x88));
        if (*(long *)(lVar2 + 0x88) != 0) {
          uVar9 = 0;
          uVar3 = extraout_x1;
          do {
            cocos2d::LuaValue::intValue
                      ((LuaValue *)(ulong)*(byte *)((long)__dest + uVar9),(int)uVar3);
            ppppplVar4 = operator_new(0x28);
            *ppppplVar4 = (long ****)0x0;
            cocos2d::LuaValue::LuaValue((LuaValue *)(ppppplVar4 + 2),aLStack_88);
                    /* catch() { ... } // from try @ 00912f98 with catch @ 009130b8
                       catch() { ... } // from try @ 00913020 with catch @ 009130b8
                       catch() { ... } // from try @ 0091306c with catch @ 009130b8 */
            *ppppplVar4 = local_70;
            ppppplVar4[1] = (long ****)&local_70;
            local_70[1] = (long ***)ppppplVar4;
            local_60 = local_60 + 1;
            local_70 = (long ****)ppppplVar4;
            cocos2d::LuaValue::~LuaValue(aLStack_88);
            uVar9 = uVar9 + 1;
            uVar3 = extraout_x1_00;
          } while (uVar9 < *(ulong *)(lVar2 + 0x88));
        }
        (**(code **)(*plVar7 + 0xb0))(plVar7,&local_70);
        operator_delete__(__dest);
                    /* catch() { ... } // from try @ 00912e60 with catch @ 00913108 */
                    /* catch() { ... } // from try @ 00912e3c with catch @ 0091310c */
        if (local_60 != 0) {
          pppplVar6 = (long ****)*local_68;
          pppplVar6[1] = local_70[1];
                    /* catch() { ... } // from try @ 00912dcc with catch @ 0091312c */
          *local_70[1] = (long **)pppplVar6;
          local_60 = 0;
          ppppplVar4 = (long *****)local_68;
          while (ppppplVar4 != &local_70) {
            ppppplVar8 = (long *****)ppppplVar4[1];
            cocos2d::LuaValue::~LuaValue((LuaValue *)(ppppplVar4 + 2));
            operator_delete(ppppplVar4);
                    /* catch() { ... } // from try @ 00912e18 with catch @ 0091314c */
            ppppplVar4 = ppppplVar8;
          }
        }
        goto LAB_00912ffc;
      }
    }
  }
  else if ((*(int *)(lVar2 + 0xb0) != 4) ||
          ((*(int *)(lVar2 + 0x90) == 4 && (*(char *)(lVar2 + 0x120) == '\0')))) {
    if ((*(byte *)(lVar2 + 0x70) & 1) == 0) {
      lVar5 = lVar2 + 0x71;
    }
    else {
      lVar5 = *(long *)(lVar2 + 0x80);
    }
    lua_pushlstring(param_1,lVar5,*(undefined8 *)(lVar2 + 0x88));
LAB_00912ffc:
    uVar3 = 1;
    goto LAB_00913000;
  }
  uVar3 = 0;
                    /* try { // try from 00912fe8 to 00a1301f has its CatchHandler @ 00912d44 */
LAB_00913000:
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00913020 to 00a1302b has its CatchHandler @ 009130b8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

