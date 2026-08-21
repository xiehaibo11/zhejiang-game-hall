
/* v8::internal::Factory::NewRawTwoByteString(int, v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::NewRawTwoByteString(Factory *this,uint param_1,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (0xffffff0 < param_1) {
    puVar3 = (undefined8 *)NewInvalidStringLengthError(this);
    Isolate::Throw((Isolate *)this,*puVar3,0);
    return (ulong *)0x0;
  }
  uVar8 = *(undefined8 *)(this + 0x2e0);
  uVar1 = param_1 * 2 + 0xf & 0xfffffffc;
  uVar6 = (ulong)uVar1;
  if (((param_3 & 0xff) == 0) && ((int)uVar1 < 0x20001)) {
    lVar7 = *(long *)(this + 0x8938);
    lVar2 = *(long *)(lVar7 + 0x68);
    if ((uVar6 <= (ulong)(*(long *)(lVar7 + 0x70) - lVar2)) &&
       ((FLAG_inline_new != '\0' && (FLAG_gc_interval == 0)))) {
      uVar4 = lVar2 + 1;
      *(ulong *)(lVar7 + 0x68) = lVar2 + uVar6;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar2,uVar6,1,1);
      goto LAB_00f6dec8;
    }
  }
  uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar6,param_3,1,0);
LAB_00f6dec8:
  *(int *)(uVar4 - 1) = (int)uVar8;
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
  *(uint *)(uVar4 + 7) = param_1;
  *(undefined4 *)(*puVar5 + 3) = 7;
  return puVar5;
}

