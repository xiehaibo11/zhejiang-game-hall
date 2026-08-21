
/* v8::internal::Factory::NewFunction(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::NewFunction
          (Factory *this,long *param_2,ulong *param_3,ulong *param_4,undefined4 param_5)

{
  byte bVar1;
  Factory *pFVar2;
  byte bVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong local_48;
  
  uVar4 = New(this,param_2,param_5);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(this + 0x95a0);
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
    uVar4 = *puVar5;
  }
  pFVar2 = this + 0x168;
  if ((*(uint *)(((ulong)this | 0xb) + (ulong)*(uint *)(uVar4 - 1)) & 0x200000) != 0) {
    pFVar2 = this + 0x410;
  }
  *(undefined4 *)(uVar4 + 3) = *(undefined4 *)pFVar2;
  uVar4 = *puVar5;
  uVar8 = uVar4 & 0xffffffff00000000;
  bVar3 = *(byte *)((uVar8 | *(uint *)(uVar4 - 1)) + 10);
  if (((bVar3 < 0x30) || (bVar1 = bVar3 & 0xf8, bVar1 == 0x78)) || ((byte)((bVar3 >> 3) - 6) < 6)) {
    puVar9 = (undefined4 *)(uVar8 + 0x168);
  }
  else if (bVar1 == 0x68) {
    puVar9 = (undefined4 *)(uVar8 + 0x3e0);
  }
  else if ((byte)((bVar3 >> 3) - 0x11) < 0xb) {
    puVar9 = (undefined4 *)(uVar8 + 0x3c0);
  }
  else {
    if (bVar1 != 0x60) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    puVar9 = (undefined4 *)(uVar8 + 1000);
  }
  *(undefined4 *)(uVar4 + 7) = *puVar9;
  uVar8 = *puVar5;
  uVar4 = *param_3;
  puVar9 = (undefined4 *)(uVar8 + 0xb);
  *puVar9 = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,puVar9,uVar4);
      uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,puVar9,uVar4);
    }
  }
  local_48 = *param_3;
  uVar8 = *puVar5;
  uVar4 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_48);
  *(int *)(uVar8 + 0x17) = (int)uVar4;
  if (((uVar4 & 1) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x17);
  }
  uVar8 = *puVar5;
  uVar4 = *param_4;
  *(int *)(uVar8 + 0xf) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xf,uVar4);
      uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xf,uVar4);
    }
  }
  uVar8 = *puVar5;
  uVar4 = *(ulong *)(this + 0xe90);
  *(int *)(uVar8 + 0x13) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x13,uVar4);
      uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x13,uVar4);
    }
  }
  if (*(char *)(*param_2 + 9) < '\0') {
    uVar8 = *puVar5;
    uVar4 = *(ulong *)(this + 0xa8);
    *(int *)(uVar8 + 0x1b) = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x1b,uVar4);
        uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x1b,uVar4);
      }
    }
    uVar6 = 0x20;
  }
  else {
    uVar6 = 0x1c;
  }
  InitializeJSObjectBody(this,puVar5,param_2,uVar6);
  return puVar5;
}

