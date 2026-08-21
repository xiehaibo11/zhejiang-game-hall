
/* cocos2d::PUBehaviourTranslator::translate(cocos2d::PUScriptCompiler*, cocos2d::PUAbstractNode*)
    */

void __thiscall
cocos2d::PUBehaviourTranslator::translate
          (PUBehaviourTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  PUAbstractNode PVar1;
  long lVar2;
  char *pcVar3;
  PUBehaviourManager *pPVar4;
  long *plVar5;
  long lVar6;
  PUParticleSystem3D *this_00;
  ulong uVar7;
  long lVar8;
  PUAbstractNode *pPVar9;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)(param_2 + 0x28);
  local_68 = 0;
  local_60 = (char *)0x0;
  local_70 = 0;
  PVar1 = param_2[0x60];
  if (((byte)PVar1 & 1) == 0) {
    if ((byte)PVar1 >> 1 == 0) goto LAB_00e4ef7c;
  }
  else if (*(long *)(param_2 + 0x68) == 0) goto LAB_00e4ef7c;
  if ((PUAbstractNode *)&local_70 != param_2 + 0x60) {
    uVar7 = *(ulong *)(param_2 + 0x68);
    pPVar9 = *(PUAbstractNode **)(param_2 + 0x70);
    if (((byte)PVar1 & 1) == 0) {
      pPVar9 = param_2 + 0x61;
      uVar7 = (ulong)((byte)PVar1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_70,(char *)pPVar9,uVar7);
  }
  pPVar4 = (PUBehaviourManager *)PUBehaviourManager::Instance();
  plVar5 = (long *)PUBehaviourManager::getTranslator(pPVar4,(basic_string *)&local_70);
  if (plVar5 != (long *)0x0) {
    pPVar4 = (PUBehaviourManager *)PUBehaviourManager::Instance();
    lVar6 = PUBehaviourManager::createBehaviour(pPVar4,(basic_string *)&local_70);
    *(long *)(this + 8) = lVar6;
    if (lVar6 != 0) {
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar6 + 0x30) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          &local_70) {
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
      if ((lVar8 != 0) &&
         (this_00 = *(PUParticleSystem3D **)(lVar8 + 0x30), this_00 != (PUParticleSystem3D *)0x0)) {
        PUParticleSystem3D::addBehaviourTemplate(this_00,*(PUBehaviour **)(this + 8));
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
    }
  }
LAB_00e4ef7c:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

