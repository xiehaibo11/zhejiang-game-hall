
/* v8::internal::DateParser::TimeComposer::Write(double*) */

undefined8 __thiscall
v8::internal::DateParser::TimeComposer::Write(TimeComposer *this,double *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x10);
  while (iVar1 < 4) {
    *(int *)(this + 0x10) = iVar1 + 1;
    *(undefined4 *)(this + (long)iVar1 * 4) = 0;
    iVar1 = *(int *)(this + 0x10);
  }
  uVar2 = *(uint *)this;
  if (*(int *)(this + 0x14) != 0x7fffffff) {
    if (0xc < uVar2) {
      return 0;
    }
    uVar2 = *(int *)(this + 0x14) + (uVar2 & 0xff) % 0xc;
    *(uint *)this = uVar2;
  }
  if (uVar2 < 0x18) {
    if (((0x3b < *(uint *)(this + 4)) || (0x3b < *(uint *)(this + 8))) ||
       (999 < *(uint *)(this + 0xc))) {
      return 0;
    }
  }
  else {
    if (uVar2 != 0x18) {
      return 0;
    }
    if (*(int *)(this + 4) != 0) {
      return 0;
    }
    if (*(int *)(this + 8) != 0) {
      return 0;
    }
    if (*(int *)(this + 0xc) != 0) {
      return 0;
    }
  }
  param_1[3] = (double)(int)uVar2;
  param_1[4] = (double)(long)*(int *)(this + 4);
  param_1[5] = (double)(long)*(int *)(this + 8);
  param_1[6] = (double)(long)*(int *)(this + 0xc);
  return 1;
}

