
/* v8::internal::DateParser::TimeZoneComposer::Write(double*) */

undefined8 __thiscall
v8::internal::DateParser::TimeZoneComposer::Write(TimeZoneComposer *this,double *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if (*(int *)this == 0x7fffffff) {
    dVar5 = NAN;
  }
  else {
    iVar3 = *(int *)(this + 4);
    if (iVar3 == 0x7fffffff) {
      iVar3 = 0;
      *(undefined4 *)(this + 4) = 0;
    }
    iVar4 = *(int *)(this + 8);
    if (iVar4 == 0x7fffffff) {
      iVar4 = 0;
      *(undefined4 *)(this + 8) = 0;
    }
    uVar2 = iVar3 * 0xe10 + iVar4 * 0x3c;
    if (uVar2 >> 0x1e != 0) {
      return 0;
    }
    uVar1 = -uVar2;
    if (-1 < *(int *)this) {
      uVar1 = uVar2;
    }
    dVar5 = (double)(int)uVar1;
  }
  param_1[7] = dVar5;
  return 1;
}

