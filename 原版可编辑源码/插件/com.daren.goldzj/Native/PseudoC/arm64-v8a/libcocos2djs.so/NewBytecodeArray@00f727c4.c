
/* v8::internal::Factory::NewBytecodeArray(int, unsigned char const*, int, int,
   v8::internal::Handle<v8::internal::FixedArray>) */

ulong * __thiscall
v8::internal::Factory::NewBytecodeArray
          (Factory *this,uint param_1,undefined1 *param_2,undefined4 param_3,int param_4,
          ulong *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0x1fffffdf) {
    uVar3 = *(undefined4 *)(this + 0x1d0);
    uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath
                      ((Heap *)(this + 0x8850),param_1 + 0x25 & 0xfffffffc,1,1,0);
    *(undefined4 *)(uVar4 - 1) = uVar3;
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(this + 0x95a0);
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)(this + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar4;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
      uVar4 = *puVar5;
    }
    *(uint *)(uVar4 + 3) = param_1 << 1;
    *(undefined4 *)(*puVar5 + 0x13) = param_3;
    *(int *)(*puVar5 + 0x17) = param_4 << 3;
    *(undefined4 *)(*puVar5 + 0x1b) = 0;
    *(undefined1 *)(*puVar5 + 0x1f) = 0;
    *(undefined1 *)(*puVar5 + 0x20) = 0;
    uVar8 = *puVar5;
    uVar4 = *param_6;
    *(int *)(uVar8 + 7) = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,uVar8 + 7,uVar4);
        uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,uVar8 + 7,uVar4);
      }
    }
    uVar8 = *puVar5;
    uVar4 = *(ulong *)(this + 0x3c0);
    *(int *)(uVar8 + 0xb) = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar7 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar4);
        uVar7 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar4);
      }
    }
    uVar8 = *puVar5;
    uVar4 = *(ulong *)(this + 0xa0);
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
    if (param_1 != 0) {
      uVar4 = (ulong)(int)param_1;
      puVar6 = (undefined1 *)(*puVar5 + 0x21);
      if (param_1 < 8) {
        do {
          uVar4 = uVar4 - 1;
          *puVar6 = *param_2;
          puVar6 = puVar6 + 1;
          param_2 = param_2 + 1;
        } while (uVar4 != 0);
      }
      else {
        MemCopy((undefined1 *)(*puVar5 + 0x21),param_2,uVar4);
      }
    }
    iVar2 = *(int *)(*puVar5 + 3) >> 1;
    iVar1 = iVar2 + 0x22;
    memset((void *)(*puVar5 + (long)iVar1 + -1),0,(long)(int)((iVar2 + 0x25U & 0xfffffffc) - iVar1))
    ;
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  Heap::FatalProcessOutOfMemory((Heap *)(this + 0x8850),"invalid array length");
}

