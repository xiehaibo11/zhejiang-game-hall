
/* v8::internal::Debug::ClearAllDebugInfos(std::__ndk1::function<void
   (v8::internal::Handle<v8::internal::DebugInfo>)> const&) */

void __thiscall v8::internal::Debug::ClearAllDebugInfos(Debug *this,function *param_1)

{
  undefined8 *puVar1;
  DebugInfoListNode *pDVar2;
  long *plVar3;
  ulong uVar4;
  DebugInfoListNode *pDVar5;
  DebugInfoListNode *pDVar6;
  undefined8 *local_48;
  
  if (*(DebugInfoListNode **)(this + 0x18) != (DebugInfoListNode *)0x0) {
    pDVar2 = *(DebugInfoListNode **)(this + 0x18);
    pDVar6 = (DebugInfoListNode *)0x0;
    do {
      while( true ) {
        pDVar5 = pDVar2;
        puVar1 = *(undefined8 **)pDVar5;
        pDVar2 = *(DebugInfoListNode **)(pDVar5 + 8);
        plVar3 = *(long **)(param_1 + 0x20);
        local_48 = puVar1;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_008589d0();
        }
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
        local_48 = (undefined8 *)*puVar1;
        uVar4 = DebugInfo::IsEmpty((DebugInfo *)&local_48);
        if ((uVar4 & 1) != 0) break;
        pDVar6 = pDVar5;
        if (pDVar2 == (DebugInfoListNode *)0x0) {
          return;
        }
      }
      FreeDebugInfoListNode(this,pDVar6,pDVar5);
    } while (pDVar2 != (DebugInfoListNode *)0x0);
  }
  return;
}

