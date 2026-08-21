
/* v8::internal::Factory::NewPropertyArray(int) */

Factory * __thiscall v8::internal::Factory::NewPropertyArray(Factory *this,int param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  Factory *pFVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  if (param_1 == 0) {
    pFVar3 = this + 0x3b8;
  }
  else {
    if (0x7fffffd < (uint)param_1) {
                    /* WARNING: Subroutine does not return */
      Heap::FatalProcessOutOfMemory((Heap *)(this + 0x8850),"invalid array length");
    }
    uVar2 = AllocateRawArray(this,param_1 * 4 + 8,0);
    *(undefined4 *)(uVar2 - 1) = *(undefined4 *)(this + 0x248);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pFVar3 = *(Factory **)(this + 0x95a0);
      if (pFVar3 == *(Factory **)(this + 0x95a8)) {
        pFVar3 = (Factory *)HandleScope::Extend((Isolate *)this);
      }
      *(Factory **)(this + 0x95a0) = pFVar3 + 8;
      *(ulong *)pFVar3 = uVar2;
    }
    else {
      pFVar3 = (Factory *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
      uVar2 = *(ulong *)pFVar3;
    }
    *(int *)(uVar2 + 3) = param_1 << 1;
    lVar4 = *(long *)pFVar3;
    uVar1 = *(undefined4 *)(this + 0xa0);
    uVar2 = (ulong)param_1;
    if ((uint)param_1 < 8) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar2 & 0xfffffffffffffff8;
      puVar8 = (undefined8 *)(lVar4 + 0x17);
      uVar9 = uVar7;
      do {
        puVar8[-1] = CONCAT44(uVar1,uVar1);
        puVar8[-2] = CONCAT44(uVar1,uVar1);
        puVar8[1] = CONCAT44(uVar1,uVar1);
        *puVar8 = CONCAT44(uVar1,uVar1);
        uVar9 = uVar9 - 8;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      if (uVar7 == uVar2) {
        return pFVar3;
      }
    }
    lVar6 = uVar2 - uVar7;
    puVar5 = (undefined4 *)(lVar4 + 7 + uVar7 * 4);
    do {
      lVar6 = lVar6 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  return pFVar3;
}

