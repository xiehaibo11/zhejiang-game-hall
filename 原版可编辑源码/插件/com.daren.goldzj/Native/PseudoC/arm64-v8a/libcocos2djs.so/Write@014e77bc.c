
/* v8::internal::DateParser::DayComposer::Write(double*) */

undefined8 __thiscall
v8::internal::DateParser::DayComposer::Write(DayComposer *this,double *param_1)

{
  int iVar1;
  DayComposer DVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = *(int *)(this + 0xc);
  if (iVar1 < 1) {
    return 0;
  }
  while (iVar1 < 3) {
    *(int *)(this + 0xc) = iVar1 + 1;
    *(undefined4 *)(this + (long)iVar1 * 4) = 1;
    iVar1 = *(int *)(this + 0xc);
  }
  uVar7 = *(uint *)(this + 0x10);
  if (uVar7 == 0x7fffffff) {
    DVar2 = this[0x14];
    if (DVar2 != (DayComposer)0x0) {
      uVar4 = *(uint *)this;
LAB_014e7808:
      uVar7 = *(uint *)(this + 4);
      uVar5 = *(uint *)(this + 8);
      uVar6 = uVar4;
      goto joined_r0x014e7834;
    }
    uVar4 = *(uint *)this;
    if (iVar1 == 3) {
      if (0x1e < uVar4 - 1) goto LAB_014e7808;
      uVar5 = *(uint *)(this + 4);
      uVar6 = *(uint *)(this + 8);
      goto joined_r0x014e7874;
    }
    uVar5 = *(uint *)(this + 4);
    uVar6 = 0;
  }
  else {
    uVar4 = *(uint *)this;
    DVar2 = this[0x14];
    uVar5 = uVar4;
    uVar6 = *(uint *)(this + 4);
    if (0x1e < uVar4 - 1) {
      uVar5 = *(uint *)(this + 4);
      uVar6 = uVar4;
    }
joined_r0x014e7834:
    uVar4 = uVar7;
    uVar7 = uVar6;
    if (DVar2 != (DayComposer)0x0) goto LAB_014e7888;
joined_r0x014e7874:
    if (0x31 < uVar6) {
      uVar7 = uVar6 + 0x76c;
      if (0x31 < uVar6 - 0x32) {
        uVar7 = uVar6;
      }
      goto LAB_014e7888;
    }
  }
  uVar7 = uVar6 + 2000;
LAB_014e7888:
  if ((long)(int)uVar7 + 0x40000000U >> 0x1f != 0) {
    return 0;
  }
  uVar3 = 0;
  if ((uVar4 - 1 < 0xc) && (uVar5 - 1 < 0x1f)) {
    uVar3 = 1;
    *param_1 = (double)(int)uVar7;
    param_1[1] = (double)(int)(uVar4 - 1);
    param_1[2] = (double)(int)uVar5;
  }
  return uVar3;
}

