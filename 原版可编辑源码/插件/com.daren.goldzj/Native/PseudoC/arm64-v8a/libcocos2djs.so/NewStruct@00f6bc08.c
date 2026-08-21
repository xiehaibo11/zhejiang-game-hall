
/* v8::internal::Factory::NewStruct(v8::internal::InstanceType, v8::internal::AllocationType) */

void __thiscall v8::internal::Factory::NewStruct(Factory *this,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  
  lVar5 = Map::GetStructMap();
  bVar4 = *(byte *)(lVar5 + 3);
  uVar9 = (ulong)bVar4 * 4;
  if ((param_3 & 0xff) == 0) {
    lVar8 = *(long *)(this + 0x8938);
    lVar2 = *(long *)(lVar8 + 0x68);
    if (((uVar9 <= (ulong)(*(long *)(lVar8 + 0x70) - lVar2)) && (FLAG_inline_new != '\0')) &&
       (FLAG_gc_interval == 0)) {
      uVar6 = lVar2 + 1;
      *(ulong *)(lVar8 + 0x68) = lVar2 + uVar9;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar2,uVar9,1,1);
      goto LAB_00f6bc84;
    }
  }
  uVar6 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar9,param_3,1,0);
LAB_00f6bc84:
  *(int *)(uVar6 - 1) = (int)lVar5;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(this + 0x95a0);
    if (puVar7 == *(ulong **)(this + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar6;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
    uVar6 = *puVar7;
  }
  if (1 < bVar4) {
    uVar3 = *(undefined4 *)((uVar6 & 0xffffffff00000000) + 0xa0);
    lVar5 = 3;
    do {
      uVar1 = lVar5 + 5;
      *(undefined4 *)(uVar6 + lVar5) = uVar3;
      lVar5 = lVar5 + 4;
    } while (uVar1 < uVar9);
  }
  return;
}

