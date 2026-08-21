
/* v8::internal::TransitionsAccessor::SearchSpecial(v8::internal::Symbol) */

ulong __thiscall
v8::internal::TransitionsAccessor::SearchSpecial(TransitionsAccessor *this,long param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  if ((*(int *)(this + 0x20) == 4) && (uVar2 = *(ulong *)(this + 0x18), 3 < *(int *)(uVar2 + 3))) {
    iVar6 = *(int *)(uVar2 + 0xb);
    if (iVar6 >> 1 != 0) {
      if (iVar6 < 0x12) {
        if (iVar6 < 2) {
          return 0;
        }
        uVar5 = 0;
        iVar3 = 0xf;
        while (*(uint *)(uVar2 + (long)iVar3) != (uint)param_2) {
          uVar5 = uVar5 + 1;
          iVar3 = iVar3 + 8;
          if ((uint)(iVar6 >> 1) == uVar5) {
            return 0;
          }
        }
      }
      else {
        iVar6 = *(int *)(uVar2 + 0xb) >> 1;
        iVar3 = iVar6 + -1;
        if (iVar3 != 0) {
          iVar4 = 0;
          do {
            iVar1 = iVar3 - iVar4;
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            iVar1 = iVar4 + (iVar1 >> 1);
            if (*(uint *)((uVar2 & 0xffffffff00000000 |
                          (ulong)*(uint *)(uVar2 + ((long)(iVar1 * 8 + 8) | 7U))) + 3) <
                *(uint *)(param_2 + 3)) {
              iVar4 = iVar1 + 1;
              iVar1 = iVar3;
            }
            iVar3 = iVar1;
          } while (iVar3 != iVar4);
          if (iVar6 <= iVar3) {
            return 0;
          }
        }
        uVar5 = (ulong)iVar3;
        iVar6 = iVar6 - iVar3;
        iVar3 = iVar3 * 8 + 0xf;
        while( true ) {
          if (*(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + (long)iVar3)) + 3) !=
              *(uint *)(param_2 + 3)) {
            return 0;
          }
          if (*(uint *)(uVar2 + (long)iVar3) == (uint)param_2) break;
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + -1;
          iVar3 = iVar3 + 8;
          if (iVar6 == 0) {
            return 0;
          }
        }
      }
      if ((int)uVar5 != -1) {
        return uVar2 & 0xffffffff00000000 |
               (ulong)*(uint *)(uVar2 + (long)((int)uVar5 * 8 + 0xc) + 7) & 0xfffffffd;
      }
      return 0;
    }
  }
  return 0;
}

