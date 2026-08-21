
/* v8::internal::GlobalHandles::Create(v8::internal::Object) */

Node * __thiscall v8::internal::GlobalHandles::Create(GlobalHandles *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  Node NVar5;
  Node *pNVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  Node *local_28;
  
  pauVar8 = *(undefined1 (**) [16])(this + 8);
  local_28 = *(Node **)(pauVar8[1] + 8);
  if (local_28 == (Node *)0x0) {
    local_28 = operator_new(0x2030);
    auVar9 = NEON_ext(*pauVar8,*pauVar8,8,1);
    lVar7 = 0;
    do {
      lVar1 = lVar7 + 0x40;
      local_28[lVar7 + 0xb] = (Node)((byte)local_28[lVar7 + 0xb] & 0xf7);
      local_28[lVar7 + 0x2b] = (Node)((byte)local_28[lVar7 + 0x2b] & 0xf7);
      lVar7 = lVar1;
    } while (lVar1 != 0x2000);
    *(ulong *)(local_28 + 0x2008) = auVar9._8_8_;
    *(ulong *)(local_28 + 0x2000) = auVar9._0_8_;
    *(undefined1 (**) [16])(local_28 + 0x2010) = pauVar8;
    *(undefined4 *)(local_28 + 0x2028) = 0;
    *(ulong *)(local_28 + 0x2020) = 0;
    *(ulong *)(local_28 + 0x2018) = 0;
    NVar5 = (Node)0xff;
    *(Node **)(*pauVar8 + 8) = local_28;
    lVar7 = 0x2000;
    pNVar6 = *(Node **)(pauVar8[1] + 8);
    do {
      lVar3 = lVar7 + -0x20;
      *(undefined8 *)(local_28 + lVar3) = 0x1baffed00baffedf;
      *(Node **)(local_28 + lVar7 + -0x10) = pNVar6;
      *(undefined8 *)(local_28 + lVar7 + -8) = 0;
      lVar1 = lVar7 + -0x20;
      local_28[lVar7 + -0x16] = NVar5;
      local_28[lVar7 + -0x15] = (Node)((byte)local_28[lVar7 + -0x15] & 0xf8);
      NVar5 = (Node)((char)NVar5 + -1);
      *(undefined2 *)(local_28 + lVar7 + -0x18) = 0;
      lVar7 = lVar1;
      pNVar6 = local_28 + lVar3;
    } while (lVar1 != 0);
    *(Node **)(pauVar8[1] + 8) = local_28;
  }
  *(ulong *)(pauVar8[1] + 8) = *(ulong *)(local_28 + 0x10);
  *(ulong *)local_28 = param_2;
  *(ulong *)(local_28 + 0x10) = 0;
  local_28[0xb] = (Node)((byte)local_28[0xb] & 0xf8 | 1);
  pNVar6 = local_28 + (ulong)(byte)local_28[10] * -0x20;
  iVar2 = *(int *)(pNVar6 + 0x2028);
  *(int *)(pNVar6 + 0x2028) = iVar2 + 1;
  if (iVar2 == 0) {
    lVar7 = *(long *)pauVar8[1];
    *(Node **)pauVar8[1] = pNVar6;
    *(undefined8 *)(pNVar6 + 0x2020) = 0;
    *(long *)(pNVar6 + 0x2018) = lVar7;
    if (lVar7 != 0) {
      *(Node **)(lVar7 + 0x2020) = pNVar6;
    }
  }
  lVar7 = *(long *)(**(long **)*pauVar8 + 0x9520);
  if (*(char *)(lVar7 + 0x1778) == '\0') {
    *(char *)(lVar7 + 0x1778) = '\x01';
    piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar7 + 0x1760))
    ;
    *(int **)(lVar7 + 6000) = piVar4;
  }
  else {
    piVar4 = *(int **)(lVar7 + 6000);
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(long *)(*(long *)*pauVar8 + 0x48) = *(long *)(*(long *)*pauVar8 + 0x48) + 1;
  if ((((param_2 & 1) != 0) && ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
     (((byte)local_28[0xb] >> 3 & 1) == 0)) {
    if (*(undefined8 **)(this + 0x18) == *(undefined8 **)(this + 0x20)) {
      std::__ndk1::
      vector<v8::internal::GlobalHandles::Node*,std::__ndk1::allocator<v8::internal::GlobalHandles::Node*>>
      ::__push_back_slow_path<v8::internal::GlobalHandles::Node*const&>
                ((vector<v8::internal::GlobalHandles::Node*,std::__ndk1::allocator<v8::internal::GlobalHandles::Node*>>
                  *)(this + 0x10),&local_28);
    }
    else {
      **(undefined8 **)(this + 0x18) = local_28;
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + 8;
    }
    local_28[0xb] = (Node)((byte)local_28[0xb] | 8);
  }
  return local_28;
}

