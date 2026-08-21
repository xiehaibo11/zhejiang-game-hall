
/* v8::internal::Debug::ClearAllDebuggerHints() */

void __thiscall v8::internal::Debug::ClearAllDebuggerHints(Debug *this)

{
  undefined8 *puVar1;
  DebugInfoListNode *pDVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  DebugInfoListNode *pDVar6;
  DebugInfoListNode *pDVar7;
  undefined8 *local_98;
  undefined **local_90 [4];
  undefined ***local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70 = local_90;
  local_90[0] = &PTR_FUN_01ca4670;
  if (*(DebugInfoListNode **)(this + 0x18) != (DebugInfoListNode *)0x0) {
    pDVar7 = (DebugInfoListNode *)0x0;
    pDVar6 = *(DebugInfoListNode **)(this + 0x18);
    do {
      puVar1 = *(undefined8 **)pDVar6;
      pDVar2 = *(DebugInfoListNode **)(pDVar6 + 8);
      local_98 = puVar1;
      if (local_70 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      (*(code *)(*local_70)[6])(local_70,&local_98);
      local_98 = (undefined8 *)*puVar1;
      uVar4 = DebugInfo::IsEmpty((DebugInfo *)&local_98);
      if ((uVar4 & 1) != 0) {
        FreeDebugInfoListNode(this,pDVar7,pDVar6);
        pDVar6 = pDVar7;
      }
      pDVar7 = pDVar6;
      pDVar6 = pDVar2;
    } while (pDVar2 != (DebugInfoListNode *)0x0);
  }
  if (local_90 == local_70) {
    pcVar5 = (code *)(*local_70)[4];
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00f06d10;
    pcVar5 = (code *)(*local_70)[5];
  }
  (*pcVar5)();
LAB_00f06d10:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

