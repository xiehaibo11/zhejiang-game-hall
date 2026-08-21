
/* v8::internal::compiler::LoopFinderImpl::SerializeLoop(v8::internal::compiler::LoopTree::Loop*) */

void __thiscall
v8::internal::compiler::LoopFinderImpl::SerializeLoop(LoopFinderImpl *this,Loop *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  Node *pNVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar3 = *(long *)(this + 200);
  lVar9 = *(long *)(this + 0x88);
  uVar5 = (long)param_1 - *(long *)(lVar3 + 0x28);
  *(int *)(param_1 + 0x30) = (int)((ulong)(*(long *)(lVar3 + 0x70) - *(long *)(lVar3 + 0x68)) >> 3);
  iVar6 = (int)(uVar5 >> 6);
  lVar4 = *(long *)(this + 200);
  iVar1 = iVar6 + 1;
  lVar3 = (long)(uVar5 * 0x4000000) >> 0x20;
  for (pNVar7 = *(Node **)(lVar9 + (long)iVar6 * 0x28 + 8); pNVar7 != (Node *)0x0;
      pNVar7 = *(Node **)(pNVar7 + 8)) {
    if (*(undefined8 **)(lVar4 + 0x70) == *(undefined8 **)(lVar4 + 0x78)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)(lVar4 + 0x68),(Node **)pNVar7);
    }
    else {
      **(undefined8 **)(lVar4 + 0x70) = *(undefined8 *)pNVar7;
      *(long *)(lVar4 + 0x70) = *(long *)(lVar4 + 0x70) + 8;
    }
    *(int *)(*(long *)(*(long *)(this + 200) + 0x48) +
            ((ulong)*(uint *)(*(Node **)pNVar7 + 0x14) & 0xffffff) * 4) = iVar1;
    lVar4 = *(long *)(this + 200);
  }
  *(int *)(param_1 + 0x34) = (int)((ulong)(*(long *)(lVar4 + 0x70) - *(long *)(lVar4 + 0x68)) >> 3);
  for (pNVar7 = *(Node **)(lVar9 + lVar3 * 0x28 + 0x18); pNVar7 != (Node *)0x0;
      pNVar7 = *(Node **)(pNVar7 + 8)) {
    lVar4 = *(long *)(this + 200);
    if (*(undefined8 **)(lVar4 + 0x70) == *(undefined8 **)(lVar4 + 0x78)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)(lVar4 + 0x68),(Node **)pNVar7);
    }
    else {
      **(undefined8 **)(lVar4 + 0x70) = *(undefined8 *)pNVar7;
      *(long *)(lVar4 + 0x70) = *(long *)(lVar4 + 0x70) + 8;
    }
    *(int *)(*(long *)(*(long *)(this + 200) + 0x48) +
            ((ulong)*(uint *)(*(Node **)pNVar7 + 0x14) & 0xffffff) * 4) = iVar1;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  for (puVar8 = *(undefined8 **)(param_1 + 0x10); puVar8 != puVar2; puVar8 = puVar8 + 1) {
    SerializeLoop(this,(Loop *)*puVar8);
  }
  *(int *)(param_1 + 0x38) =
       (int)((ulong)(*(long *)(*(long *)(this + 200) + 0x70) -
                    *(long *)(*(long *)(this + 200) + 0x68)) >> 3);
  pNVar7 = *(Node **)(lVar9 + lVar3 * 0x28 + 0x10);
  while( true ) {
    lVar3 = *(long *)(this + 200);
    if (pNVar7 == (Node *)0x0) break;
    if (*(undefined8 **)(lVar3 + 0x70) == *(undefined8 **)(lVar3 + 0x78)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)(lVar3 + 0x68),(Node **)pNVar7);
    }
    else {
      **(undefined8 **)(lVar3 + 0x70) = *(Node **)pNVar7;
      *(long *)(lVar3 + 0x70) = *(long *)(lVar3 + 0x70) + 8;
    }
    *(int *)(*(long *)(*(long *)(this + 200) + 0x48) +
            ((ulong)*(uint *)(*(Node **)pNVar7 + 0x14) & 0xffffff) * 4) = iVar1;
    pNVar7 = *(Node **)(pNVar7 + 8);
  }
  *(int *)(param_1 + 0x3c) = (int)((ulong)(*(long *)(lVar3 + 0x70) - *(long *)(lVar3 + 0x68)) >> 3);
  return;
}

