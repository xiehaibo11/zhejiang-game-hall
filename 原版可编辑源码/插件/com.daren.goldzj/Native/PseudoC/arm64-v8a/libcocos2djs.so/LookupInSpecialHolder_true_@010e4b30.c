
/* v8::internal::LookupIterator::State
   v8::internal::LookupIterator::LookupInSpecialHolder<true>(v8::internal::Map,
   v8::internal::JSReceiver) */

ulong __thiscall
v8::internal::LookupIterator::LookupInSpecialHolder<true>
          (LookupIterator *this,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long local_38;
  
  switch(*(undefined4 *)(this + 4)) {
  case 0:
    goto switchD_010e4b74_caseD_0;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 2:
switchD_010e4b74_caseD_2:
    if ((*(short *)(param_2 + 7) != 0xaa) || (*(ulong *)(this + 0x48) < 0xffffffff)) {
      uVar7 = LookupInRegularHolder<true>(this,param_2,param_3);
      return uVar7;
    }
    lVar6 = *(long *)(this + 0x18);
    plVar1 = *(long **)(this + 0x20);
    local_38 = *plVar1;
    uVar7 = (ulong)*(uint *)(param_3 + 3) + lVar6;
    if ((*(uint *)(local_38 + 3) & 1) == 0) {
      uVar5 = *(uint *)(local_38 + 3) >> 3;
    }
    else {
      uVar5 = String::ComputeAndSetHash((String *)&local_38);
    }
    uVar2 = *(uint *)(lVar6 + 0xa0);
    uVar3 = (*(int *)(uVar7 + 0xf) >> 1) - 1;
    uVar5 = uVar3 & uVar5;
    lVar6 = uVar7 + 7;
    uVar9 = *(uint *)(lVar6 + (int)(uVar5 * 4 + 0x14));
    if (uVar9 != uVar2) {
      iVar10 = 1;
      do {
        if (*(int *)((uVar7 & 0xffffffff00000000 | (ulong)uVar9) + 3) == (int)*plVar1) {
          *(ulong *)(this + 0x50) = (ulong)uVar5;
          lVar8 = *(long *)(this + 0x18);
          lVar6 = (ulong)*(uint *)(lVar6 + (int)(uVar5 * 4 + 0x14)) + lVar8;
          uVar7 = (ulong)*(uint *)(lVar6 + 0xb) + lVar8;
          if (((uVar7 & 1) != 0) && ((int)uVar7 == *(int *)(lVar8 + 0xa8))) {
            return 4;
          }
          uVar2 = *(uint *)(lVar6 + 7);
          this[8] = (LookupIterator)0x1;
          uVar5 = 5;
          if ((uVar2 & 2) == 0) {
            uVar5 = 6;
          }
          *(int *)(this + 0x10) = (int)uVar2 >> 1;
          return (ulong)uVar5;
        }
        uVar5 = uVar5 + iVar10 & uVar3;
        uVar9 = *(uint *)(lVar6 + (int)(uVar5 * 4 + 0x14));
        iVar10 = iVar10 + 1;
      } while (uVar9 != uVar2);
    }
    *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
    return 4;
  case 4:
    if (*(short *)(param_2 + 7) == 0xa9) {
      return 3;
    }
    if ((*(byte *)(param_2 + 9) >> 5 & 1) != 0) {
      return 0;
    }
switchD_010e4b74_caseD_0:
    if (((byte)*this & 1) != 0) {
      bVar4 = *(byte *)(param_2 + 9) >> 2;
      if (*(ulong *)(this + 0x48) < 0xffffffff) {
        bVar4 = *(byte *)(param_2 + 9) >> 3;
      }
      if ((bVar4 & 1) == 1) {
        lVar6 = GetInterceptor<true>(this,param_3);
        iVar10 = *(int *)(this + 0xc);
        if ((*(byte *)(lVar6 + 0x23) >> 3 & 1) == 0) {
          if (iVar10 != 2) {
            return 2;
          }
        }
        else if (iVar10 != 1) {
          if (iVar10 != 0) {
            return 2;
          }
          *(undefined4 *)(this + 0xc) = 1;
        }
      }
    }
    goto switchD_010e4b74_caseD_2;
  case 5:
  case 6:
    return 4;
  }
}

