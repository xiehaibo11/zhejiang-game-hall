
/* v8::internal::GlobalHandles::CreateTraced(v8::internal::Object, unsigned long*, bool) */

TracedNode * __thiscall
v8::internal::GlobalHandles::CreateTraced
          (GlobalHandles *this,ulong param_2,ulong param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  TracedNode TVar5;
  TracedNode *pTVar6;
  byte bVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  TracedNode *local_38;
  
  pauVar9 = *(undefined1 (**) [16])(this + 0x28);
  local_38 = *(TracedNode **)(pauVar9[1] + 8);
  if (local_38 == (TracedNode *)0x0) {
    local_38 = operator_new(0x2030);
    auVar10 = NEON_ext(*pauVar9,*pauVar9,8,1);
    lVar8 = 0;
    do {
      lVar1 = lVar8 + 0x40;
      local_38[lVar8 + 0xb] = (TracedNode)((byte)local_38[lVar8 + 0xb] & 0xfb);
      local_38[lVar8 + 0x2b] = (TracedNode)((byte)local_38[lVar8 + 0x2b] & 0xfb);
      lVar8 = lVar1;
    } while (lVar1 != 0x2000);
    *(ulong *)(local_38 + 0x2008) = auVar10._8_8_;
    *(ulong *)(local_38 + 0x2000) = auVar10._0_8_;
    *(undefined1 (**) [16])(local_38 + 0x2010) = pauVar9;
    *(undefined4 *)(local_38 + 0x2028) = 0;
    *(ulong *)(local_38 + 0x2020) = 0;
    *(ulong *)(local_38 + 0x2018) = 0;
    TVar5 = (TracedNode)0xff;
    *(TracedNode **)(*pauVar9 + 8) = local_38;
    lVar8 = 0x2000;
    pTVar6 = *(TracedNode **)(pauVar9[1] + 8);
    do {
      lVar3 = lVar8 + -0x20;
      *(undefined8 *)(local_38 + lVar3) = 0x1baffed00baffedf;
      *(TracedNode **)(local_38 + lVar8 + -0x10) = pTVar6;
      *(undefined8 *)(local_38 + lVar8 + -8) = 0;
      lVar1 = lVar8 + -0x20;
      local_38[lVar8 + -0x16] = TVar5;
      local_38[lVar8 + -0x15] = (TracedNode)((byte)local_38[lVar8 + -0x15] & 0xfc | 0x28);
      TVar5 = (TracedNode)((char)TVar5 + -1);
      *(undefined2 *)(local_38 + lVar8 + -0x18) = 0;
      lVar8 = lVar1;
      pTVar6 = local_38 + lVar3;
    } while (lVar1 != 0);
    *(TracedNode **)(pauVar9[1] + 8) = local_38;
  }
  *(ulong *)(pauVar9[1] + 8) = *(ulong *)(local_38 + 0x10);
  *(ulong *)local_38 = param_2;
  *(ulong *)(local_38 + 0x10) = 0;
  local_38[0xb] = (TracedNode)((byte)local_38[0xb] & 0xfc | 1);
  pTVar6 = local_38 + (ulong)(byte)local_38[10] * -0x20;
  iVar2 = *(int *)(pTVar6 + 0x2028);
  *(int *)(pTVar6 + 0x2028) = iVar2 + 1;
  if (iVar2 == 0) {
    lVar8 = *(long *)pauVar9[1];
    *(TracedNode **)pauVar9[1] = pTVar6;
    *(undefined8 *)(pTVar6 + 0x2020) = 0;
    *(long *)(pTVar6 + 0x2018) = lVar8;
    if (lVar8 != 0) {
      *(TracedNode **)(lVar8 + 0x2020) = pTVar6;
    }
  }
  lVar8 = *(long *)(**(long **)*pauVar9 + 0x9520);
  if (*(char *)(lVar8 + 0x1778) == '\0') {
    *(char *)(lVar8 + 0x1778) = '\x01';
    piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar8 + 0x1760))
    ;
    *(int **)(lVar8 + 6000) = piVar4;
  }
  else {
    piVar4 = *(int **)(lVar8 + 6000);
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(long *)(*(long *)*pauVar9 + 0x48) = *(long *)(*(long *)*pauVar9 + 0x48) + 1;
  if ((((param_2 & 1) != 0) && ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
     (((byte)local_38[0xb] >> 2 & 1) == 0)) {
    if (*(undefined8 **)(this + 0x38) == *(undefined8 **)(this + 0x40)) {
      std::__ndk1::
      vector<v8::internal::GlobalHandles::TracedNode*,std::__ndk1::allocator<v8::internal::GlobalHandles::TracedNode*>>
      ::__push_back_slow_path<v8::internal::GlobalHandles::TracedNode*const&>
                ((vector<v8::internal::GlobalHandles::TracedNode*,std::__ndk1::allocator<v8::internal::GlobalHandles::TracedNode*>>
                  *)(this + 0x30),&local_38);
    }
    else {
      **(undefined8 **)(this + 0x38) = local_38;
      *(long *)(this + 0x38) = *(long *)(this + 0x38) + 8;
    }
    local_38[0xb] = (TracedNode)((byte)local_38[0xb] | 4);
  }
  bVar7 = 0x10;
  if ((param_4 & 1) == 0) {
    bVar7 = 0;
  }
  *(ulong *)(local_38 + 0x10) = param_3;
  local_38[0xb] = (TracedNode)((byte)local_38[0xb] & 0xef | bVar7);
  return local_38;
}

