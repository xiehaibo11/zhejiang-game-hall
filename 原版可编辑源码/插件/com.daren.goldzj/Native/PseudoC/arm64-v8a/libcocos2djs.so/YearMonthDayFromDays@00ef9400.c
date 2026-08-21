
/* v8::internal::DateCache::YearMonthDayFromDays(int, int*, int*, int*) */

void __thiscall
v8::internal::DateCache::YearMonthDayFromDays
          (DateCache *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((this[0x22c] != (DateCache)0x0) &&
     (iVar7 = (param_1 - *(int *)(this + 0x230)) + *(int *)(this + 0x23c), iVar7 - 1U < 0x1c)) {
    *(int *)(this + 0x23c) = iVar7;
    *(int *)(this + 0x230) = param_1;
    *param_2 = *(int *)(this + 0x234);
    *param_3 = *(int *)(this + 0x238);
    *param_4 = iVar7;
    return;
  }
  iVar7 = (param_1 + 0x8c03e10) % 0x23ab1;
  iVar2 = iVar7 + -1;
  bVar5 = iVar7 + 0x8eaaU < 0x11d57;
  iVar8 = iVar2 % 0x8eac;
  iVar7 = iVar8 + 1;
  iVar9 = iVar7 % 0x5b5;
  iVar3 = iVar9 + -1;
  bVar1 = 0xb68 < iVar8 + 0x5b5U;
  bVar6 = iVar9 + 0x16bU < 0x2d9;
  iVar8 = iVar3 % 0x16d + (uint)((bVar5 || bVar1) && bVar6);
  iVar9 = 0x3b;
  if ((bVar5 || bVar1) && bVar6) {
    iVar9 = 0x3c;
  }
  iVar4 = iVar8 - iVar9;
  *param_2 = (iVar2 / 0x8eac) * 100 + ((param_1 + 0x8c03e10) / 0x23ab1) * 400 + (iVar7 / 0x5b5) * 4
             + iVar3 / 0x16d + -400000;
  if (iVar8 < iVar9) {
    iVar7 = iVar8 + -0x1e;
    if (iVar7 == 0 || iVar8 < 0x1e) {
      *param_3 = 0;
      iVar7 = iVar8 + 1;
    }
    else {
      *param_3 = 1;
    }
  }
  else {
    if (iVar4 < 0x1f) {
      iVar8 = 2;
      iVar7 = iVar4;
    }
    else {
      iVar7 = iVar4 + -0x1f;
      if (iVar7 < 0x1e) {
        iVar8 = 3;
      }
      else {
        iVar7 = iVar4 + -0x3d;
        if (iVar7 < 0x1f) {
          iVar8 = 4;
        }
        else {
          iVar7 = iVar4 + -0x5c;
          if (iVar7 < 0x1e) {
            iVar8 = 5;
          }
          else {
            iVar7 = iVar4 + -0x7a;
            if (iVar7 < 0x1f) {
              iVar8 = 6;
            }
            else {
              iVar7 = iVar4 + -0x99;
              if (iVar7 < 0x1f) {
                iVar8 = 7;
              }
              else {
                iVar7 = iVar4 + -0xb8;
                if (iVar7 < 0x1e) {
                  iVar8 = 8;
                }
                else {
                  iVar7 = iVar4 + -0xd6;
                  if (iVar7 < 0x1f) {
                    iVar8 = 9;
                  }
                  else {
                    iVar7 = iVar4 + -0xf5;
                    if (iVar7 < 0x1e) {
                      iVar8 = 10;
                    }
                    else {
                      iVar7 = iVar4 + -0x113;
                      if (0x1e < iVar7) goto LAB_00ef966c;
                      iVar8 = 0xb;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *param_3 = iVar8;
    iVar7 = iVar7 + 1;
  }
  *param_4 = iVar7;
LAB_00ef966c:
  this[0x22c] = (DateCache)0x1;
  *(int *)(this + 0x234) = *param_2;
  *(int *)(this + 0x238) = *param_3;
  iVar7 = *param_4;
  *(int *)(this + 0x230) = param_1;
  *(int *)(this + 0x23c) = iVar7;
  return;
}

