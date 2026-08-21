
/* v8::internal::Factory::NewEmbedderDataArray(int) */

void __thiscall v8::internal::Factory::NewEmbedderDataArray(Factory *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar13 = *(undefined8 *)(this + 0x2d0);
  uVar1 = param_1 * 8 + 8;
  uVar6 = (ulong)uVar1;
  if ((int)uVar1 < 0x20001) {
    lVar7 = *(long *)(this + 0x8938);
    lVar9 = *(long *)(lVar7 + 0x68);
    if (((uVar6 <= (ulong)(*(long *)(lVar7 + 0x70) - lVar9)) && (FLAG_inline_new != '\0')) &&
       (FLAG_gc_interval == 0)) {
      uVar4 = lVar9 + 1;
      *(long *)(lVar7 + 0x68) = lVar9 + (int)uVar1;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar9,uVar6,1,1);
      goto LAB_00f6cc64;
    }
  }
  uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar6,0,1,0);
LAB_00f6cc64:
  *(int *)(uVar4 - 1) = (int)uVar13;
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
  *(int *)(uVar4 + 3) = param_1 << 1;
  if (0 < param_1) {
    uVar6 = *puVar5;
    uVar3 = *(uint *)(uVar6 + 3) & 0x3ffffffe;
    uVar1 = uVar3 << 2;
    if (uVar3 != 0) {
      uVar2 = *(undefined4 *)(this + 0xa0);
      uVar4 = (ulong)(long)(int)uVar1 >> 2;
      if (uVar1 < 0x20) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar4 & 0x3ffffffffffffff8;
        puVar11 = (undefined8 *)(uVar6 + 0x17);
        uVar12 = uVar10;
        do {
          puVar11[-1] = CONCAT44(uVar2,uVar2);
          puVar11[-2] = CONCAT44(uVar2,uVar2);
          puVar11[1] = CONCAT44(uVar2,uVar2);
          *puVar11 = CONCAT44(uVar2,uVar2);
          uVar12 = uVar12 - 8;
          puVar11 = puVar11 + 4;
        } while (uVar12 != 0);
        if (uVar4 == uVar10) {
          return;
        }
      }
      lVar9 = uVar4 - uVar10;
      puVar8 = (undefined4 *)(uVar6 + 7 + uVar10 * 4);
      do {
        lVar9 = lVar9 + -1;
        *puVar8 = uVar2;
        puVar8 = puVar8 + 1;
      } while (lVar9 != 0);
    }
  }
  return;
}

