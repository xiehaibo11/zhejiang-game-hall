
/* cocos2d::PUEventHandlerTranslator::translate(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUEventHandlerTranslator::translate
          (PUEventHandlerTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  PUAbstractNode PVar1;
  long lVar2;
  char *pcVar3;
  PUEventHandlerManager *pPVar4;
  long *plVar5;
  long lVar6;
  PUObserver *this_00;
  ulong uVar7;
  long lVar8;
  PUAbstractNode *pPVar9;
  ulong local_88;
  ulong local_80;
  char *local_78;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00e4d690 to 00f4d697 has its CatchHandler @ 00e4d8dc */
                    /* try { // try from 00e4d698 to 00f4d6ab has its CatchHandler @ 00e4d8e4 */
  lVar8 = *(long *)(param_2 + 0x28);
  local_68 = 0;
  local_60 = (char *)0x0;
  local_70 = 0;
  PVar1 = param_2[0x60];
  if (((byte)PVar1 & 1) == 0) {
    if ((byte)PVar1 >> 1 == 0) goto LAB_00e4d7d8;
  }
  else if (*(long *)(param_2 + 0x68) == 0) goto LAB_00e4d7d8;
  if ((PUAbstractNode *)&local_70 != param_2 + 0x60) {
    uVar7 = *(ulong *)(param_2 + 0x68);
    pPVar9 = *(PUAbstractNode **)(param_2 + 0x70);
                    /* try { // try from 00e4d6d8 to 00f4d6e3 has its CatchHandler @ 00e4d8d4 */
    if (((byte)PVar1 & 1) == 0) {
      pPVar9 = param_2 + 0x61;
      uVar7 = (ulong)((byte)PVar1 >> 1);
    }
                    /* try { // try from 00e4d6e4 to 00f4d6f3 has its CatchHandler @ 00e4d8d0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_70,(char *)pPVar9,uVar7);
  }
  pPVar4 = (PUEventHandlerManager *)PUEventHandlerManager::Instance();
                    /* try { // try from 00e4d6f4 to 00f4d703 has its CatchHandler @ 00e4d8b8 */
  plVar5 = (long *)PUEventHandlerManager::getTranslator(pPVar4,(basic_string *)&local_70);
  if (plVar5 != (long *)0x0) {
    pPVar4 = (PUEventHandlerManager *)PUEventHandlerManager::Instance();
    lVar6 = PUEventHandlerManager::createEventHandler(pPVar4,(basic_string *)&local_70);
    *(long *)(this + 8) = lVar6;
    if (lVar6 != 0) {
                    /* try { // try from 00e4d714 to 00f4d723 has its CatchHandler @ 00e4d8b4 */
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar6 + 0x30) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          &local_70) {
                    /* try { // try from 00e4d724 to 00f4d733 has its CatchHandler @ 00e4d8b0 */
        uVar7 = local_70 >> 1 & 0x7f;
        pcVar3 = (char *)((ulong)&local_70 | 1);
        if ((local_70 & 1) != 0) {
          uVar7 = local_68;
          pcVar3 = local_60;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar6 + 0x30),pcVar3,uVar7);
      }
                    /* try { // try from 00e4d744 to 00f4d847 has its CatchHandler @ 00e4d8f4 */
      if ((lVar8 != 0) && (this_00 = *(PUObserver **)(lVar8 + 0x30), this_00 != (PUObserver *)0x0))
      {
        PUObserver::addEventHandler(this_00,*(PUEventHandler **)(this + 8));
      }
      local_80 = 0;
      local_78 = (char *)0x0;
      local_88 = 0;
      if (*(long *)(param_2 + 0xd8) != 0) {
        PUScriptTranslator::getString
                  (*(PUAbstractNode **)(*(long *)(param_2 + 0xd0) + 0x10),(basic_string *)&local_88)
        ;
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (*(long *)(this + 8) + 0x48) !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_88) {
          uVar7 = local_88 >> 1 & 0x7f;
          pcVar3 = (char *)((ulong)&local_88 | 1);
          if ((local_88 & 1) != 0) {
            uVar7 = local_80;
            pcVar3 = local_78;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(*(long *)(this + 8) + 0x48),pcVar3,uVar7);
        }
      }
      pPVar9 = *(PUAbstractNode **)(param_2 + 0xb8);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(this + 8);
      for (; pPVar9 != param_2 + 0xb0; pPVar9 = *(PUAbstractNode **)(pPVar9 + 8)) {
        lVar8 = *(long *)(pPVar9 + 0x10);
        if (*(int *)(lVar8 + 0x24) == 2) {
          uVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1,lVar8);
          if ((uVar7 & 1) == 0) {
            PUScriptTranslator::processNode
                      ((PUScriptTranslator *)this,param_1,*(PUAbstractNode **)(pPVar9 + 0x10));
          }
        }
        else if (*(int *)(lVar8 + 0x24) == 3) {
                    /* try { // try from 00e4d848 to 00f4d84b has its CatchHandler @ 00e4d8ac */
                    /* try { // try from 00e4d84c to 00f4d917 has its CatchHandler @ 00e4d620 */
          uVar7 = (**(code **)(*plVar5 + 0x18))(plVar5,param_1,lVar8);
          if ((uVar7 & 1) == 0) {
            PUScriptTranslator::errorUnexpectedProperty
                      ((PUScriptCompiler *)this,(PUPropertyAbstractNode *)param_1);
          }
        }
        else {
          PUScriptTranslator::errorUnexpectedToken
                    ((PUScriptCompiler *)this,(PUAbstractNode *)param_1);
        }
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
    }
  }
LAB_00e4d7d8:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

