
/* v8::internal::Factory::NewBigInt(int, v8::internal::AllocationType) */

void __thiscall v8::internal::Factory::NewBigInt(Factory *this,uint param_1,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (0x1000000 < param_1) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory((Heap *)(this + 0x8850),"invalid BigInt length");
  }
  uVar7 = *(undefined8 *)(this + 0x1c0);
  uVar1 = param_1 * 8 + 8;
  uVar5 = (ulong)uVar1;
  if (((param_3 & 0xff) == 0) && ((int)uVar1 < 0x20001)) {
    lVar6 = *(long *)(this + 0x8938);
    lVar2 = *(long *)(lVar6 + 0x68);
    if ((uVar5 <= (ulong)(*(long *)(lVar6 + 0x70) - lVar2)) &&
       ((FLAG_inline_new != '\0' && (FLAG_gc_interval == 0)))) {
      uVar3 = lVar2 + 1;
      *(long *)(lVar6 + 0x68) = lVar2 + (int)uVar1;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar2,uVar5,1,1);
      goto LAB_00f74f54;
    }
  }
  uVar3 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar5,param_3,1,0);
LAB_00f74f54:
  *(int *)(uVar3 - 1) = (int)uVar7;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
  }
  return;
}

