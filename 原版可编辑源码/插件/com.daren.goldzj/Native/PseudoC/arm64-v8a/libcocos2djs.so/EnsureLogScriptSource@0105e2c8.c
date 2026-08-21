
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105e44c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::EnsureLogScriptSource(v8::internal::Script) */

undefined8 __thiscall v8::internal::Logger::EnsureLogScriptSource(Logger *this,ulong param_2)

{
  Logger *pLVar1;
  int iVar2;
  uint uVar3;
  __tree_node_base *p_Var4;
  MessageBuilder *pMVar5;
  Log *pLVar6;
  Logger *pLVar7;
  long lVar8;
  Logger *pLVar9;
  undefined8 uVar10;
  Logger *pLVar11;
  Logger *pLVar12;
  ulong uVar13;
  MessageBuilder aMStack_50 [8];
  Mutex *local_48;
  
  pLVar6 = *(Log **)(this + 0x28);
  if ((*pLVar6 != (Log)0x0) || (*(long *)(pLVar6 + 8) == 0)) {
    return 0;
  }
  Log::MessageBuilder::MessageBuilder(aMStack_50,pLVar6);
  pLVar12 = this + 0x58;
  pLVar7 = *(Logger **)pLVar12;
  iVar2 = *(int *)(param_2 + 0x1f) >> 1;
  pLVar11 = pLVar12;
  pLVar9 = pLVar7;
  if (pLVar7 == (Logger *)0x0) {
    lVar8 = *(long *)pLVar12;
joined_r0x0105e3d8:
    if (lVar8 == 0) {
      p_Var4 = operator_new(0x20);
      *(int *)(p_Var4 + 0x1c) = iVar2;
      *(undefined8 *)p_Var4 = 0;
      *(undefined8 *)(p_Var4 + 8) = 0;
      *(Logger **)(p_Var4 + 0x10) = pLVar12;
      *(__tree_node_base **)pLVar11 = p_Var4;
      if (**(long **)(this + 0x50) != 0) {
        *(long *)(this + 0x50) = **(long **)(this + 0x50);
        p_Var4 = *(__tree_node_base **)pLVar11;
      }
      pMVar5 = *(MessageBuilder **)(this + 0x58);
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)pMVar5,p_Var4);
      *(long *)(this + 0x60) = *(long *)(this + 0x60) + 1;
      uVar3 = *(uint *)(param_2 + 3);
    }
    else {
      uVar3 = *(uint *)(param_2 + 3);
      pMVar5 = (MessageBuilder *)this;
    }
    if ((uVar3 & 1) != 0) {
      uVar13 = param_2 & 0xffffffff00000000;
      if (*(ushort *)((uVar13 | 7) + (ulong)*(uint *)((uVar13 | uVar3) - 1)) < 0x40) {
        Log::MessageBuilder::operator<<(aMStack_50,"script-source");
        pMVar5 = Log::MessageBuilder::operator<<(pMVar5,0);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar5 + 0x10),
                   iVar2);
        Log::MessageBuilder::operator<<(pMVar5,0);
        if (((*(uint *)(param_2 + 7) & 1) == 0) ||
           (0x3f < *(ushort *)
                    ((uVar13 | 7) + (ulong)*(uint *)((uVar13 | *(uint *)(param_2 + 7)) - 1)))) {
          Log::MessageBuilder::operator<<(aMStack_50,"<unknown>");
        }
        else {
          Log::MessageBuilder::operator<<();
        }
        Log::MessageBuilder::operator<<(pMVar5,0);
        Log::MessageBuilder::operator<<(pMVar5,uVar13 | uVar3);
        Log::MessageBuilder::WriteToLogFile(aMStack_50);
        goto LAB_0105e4cc;
      }
    }
    uVar10 = 0;
  }
  else {
    do {
      if (iVar2 <= *(int *)(pLVar9 + 0x1c)) {
        pLVar11 = pLVar9;
      }
      pLVar1 = pLVar9 + (ulong)(*(int *)(pLVar9 + 0x1c) < iVar2) * 8;
      pLVar9 = *(Logger **)pLVar1;
    } while (*(Logger **)pLVar1 != (Logger *)0x0);
    if ((pLVar11 == pLVar12) || (iVar2 < *(int *)(pLVar11 + 0x1c))) {
      pLVar11 = this + 0x58;
      do {
        while (pLVar12 = pLVar7, iVar2 < *(int *)(pLVar12 + 0x1c)) {
          pLVar7 = *(Logger **)pLVar12;
          pLVar11 = pLVar12;
          if (*(Logger **)pLVar12 == (Logger *)0x0) {
            lVar8 = *(long *)pLVar12;
            goto joined_r0x0105e3d8;
          }
        }
        if (iVar2 <= *(int *)(pLVar12 + 0x1c)) break;
        pLVar11 = pLVar12 + 8;
        pLVar7 = *(Logger **)pLVar11;
      } while (*(Logger **)pLVar11 != (Logger *)0x0);
      lVar8 = *(long *)pLVar11;
      goto joined_r0x0105e3d8;
    }
LAB_0105e4cc:
    uVar10 = 1;
  }
  base::Mutex::Unlock(local_48);
  return uVar10;
}

