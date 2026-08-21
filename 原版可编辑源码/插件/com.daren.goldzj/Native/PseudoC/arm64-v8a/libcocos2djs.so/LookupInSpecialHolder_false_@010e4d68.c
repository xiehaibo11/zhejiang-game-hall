
/* v8::internal::LookupIterator::State
   v8::internal::LookupIterator::LookupInSpecialHolder<false>(v8::internal::Map,
   v8::internal::JSReceiver) */

ulong __thiscall
v8::internal::LookupIterator::LookupInSpecialHolder<false>
          (LookupIterator *this,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long local_38;
  
  uVar7 = 4;
  switch(*(undefined4 *)(this + 4)) {
  case 0:
    goto switchD_010e4dac_caseD_0;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 2:
    goto switchD_010e4dac_caseD_2;
  case 4:
    if ((*(short *)(param_2 + 7) == 0xa9) &&
       ((*(short *)((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(**(long **)(this + 0x20) + -1))
         != 0x40 || ((*(byte *)(**(long **)(this + 0x20) + 7) & 1) == 0)))) {
      return 3;
    }
    if (((*(byte *)(param_2 + 9) >> 5 & 1) != 0) &&
       ((*(short *)((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(**(long **)(this + 0x20) + -1))
         != 0x40 || ((*(byte *)(**(long **)(this + 0x20) + 7) & 1) == 0)))) {
      return 0;
    }
switchD_010e4dac_caseD_0:
    if ((((((byte)*this & 1) == 0) || ((*(byte *)(param_2 + 9) >> 2 & 1) == 0)) ||
        (bVar5 = SkipInterceptor<false>(this,param_3), bVar5)) ||
       ((*(short *)((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(**(long **)(this + 0x20) + -1))
         == 0x40 && ((*(byte *)(**(long **)(this + 0x20) + 7) & 1) != 0)))) {
switchD_010e4dac_caseD_2:
      if (*(short *)(param_2 + 7) != 0xaa) {
        uVar7 = LookupInRegularHolder<false>(this,param_2,param_3);
        return uVar7;
      }
      lVar1 = *(long *)(this + 0x18);
      plVar2 = *(long **)(this + 0x20);
      local_38 = *plVar2;
      uVar7 = (ulong)*(uint *)(param_3 + 3) + lVar1;
      if ((*(uint *)(local_38 + 3) & 1) == 0) {
        uVar6 = *(uint *)(local_38 + 3) >> 3;
      }
      else {
        uVar6 = String::ComputeAndSetHash((String *)&local_38);
      }
      uVar3 = *(uint *)(lVar1 + 0xa0);
      uVar4 = (*(int *)(uVar7 + 0xf) >> 1) - 1;
      uVar6 = uVar4 & uVar6;
      lVar1 = uVar7 + 7;
      uVar9 = *(uint *)(lVar1 + (int)(uVar6 * 4 + 0x14));
      if (uVar9 != uVar3) {
        iVar10 = 1;
        do {
          if (*(int *)((uVar7 & 0xffffffff00000000 | (ulong)uVar9) + 3) == (int)*plVar2) {
            *(ulong *)(this + 0x50) = (ulong)uVar6;
            lVar8 = *(long *)(this + 0x18);
            lVar1 = (ulong)*(uint *)(lVar1 + (int)(uVar6 * 4 + 0x14)) + lVar8;
            uVar7 = (ulong)*(uint *)(lVar1 + 0xb) + lVar8;
            if (((uVar7 & 1) != 0) && ((int)uVar7 == *(int *)(lVar8 + 0xa8))) {
              return 4;
            }
            uVar3 = *(uint *)(lVar1 + 7);
            this[8] = (LookupIterator)0x1;
            uVar6 = 5;
            if ((uVar3 & 2) == 0) {
              uVar6 = 6;
            }
            *(int *)(this + 0x10) = (int)uVar3 >> 1;
            return (ulong)uVar6;
          }
          uVar6 = uVar6 + iVar10 & uVar4;
          uVar9 = *(uint *)(lVar1 + (int)(uVar6 * 4 + 0x14));
          iVar10 = iVar10 + 1;
        } while (uVar9 != uVar3);
      }
      *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
      uVar7 = 4;
    }
    else {
      uVar7 = 2;
    }
switchD_010e4dac_caseD_5:
    return uVar7;
  case 5:
  case 6:
    goto switchD_010e4dac_caseD_5;
  }
}

