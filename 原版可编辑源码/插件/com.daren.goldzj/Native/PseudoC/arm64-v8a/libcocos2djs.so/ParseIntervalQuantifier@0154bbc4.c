
/* v8::internal::RegExpParser::ParseIntervalQuantifier(int*, int*) */

undefined8 __thiscall
v8::internal::RegExpParser::ParseIntervalQuantifier(RegExpParser *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(this + 0x40);
  Advance(this);
  iVar2 = *(int *)(this + 0x38);
  uVar3 = iVar2 - 0x30;
  if (9 < uVar3) goto LAB_0154bd48;
  iVar4 = 0;
  do {
    if ((-0x7fffffd1 - iVar2) / 10 < iVar4) goto LAB_0154bc5c;
    iVar4 = uVar3 + iVar4 * 10;
    Advance(this);
    iVar2 = *(int *)(this + 0x38);
    uVar3 = iVar2 - 0x30;
  } while (uVar3 < 10);
  goto LAB_0154bc78;
LAB_0154bd00:
  do {
    Advance(this);
    iVar2 = *(int *)(this + 0x38);
  } while (iVar2 - 0x30U < 10);
  iVar5 = 0x7fffffff;
  goto joined_r0x0154bd44;
LAB_0154bc5c:
  do {
    Advance(this);
    iVar2 = *(int *)(this + 0x38);
  } while (iVar2 - 0x30U < 10);
  iVar4 = 0x7fffffff;
LAB_0154bc78:
  iVar5 = iVar4;
  if (iVar2 != 0x7d) {
    if (iVar2 != 0x2c) {
LAB_0154bd48:
      *(int *)(this + 0x40) = iVar1 + -1;
      this[0x4c] = (RegExpParser)(iVar1 <= *(int *)(*(long *)(this + 0x30) + 0x24));
      Advance(this);
      return 0;
    }
    Advance(this);
    iVar2 = *(int *)(this + 0x38);
    if (iVar2 == 0x7d) {
      iVar5 = 0x7fffffff;
    }
    else {
      uVar3 = iVar2 - 0x30;
      if (uVar3 < 10) {
        iVar5 = 0;
        do {
          if ((-0x7fffffd1 - iVar2) / 10 < iVar5) goto LAB_0154bd00;
          iVar5 = uVar3 + iVar5 * 10;
          Advance(this);
          iVar2 = *(int *)(this + 0x38);
          uVar3 = iVar2 - 0x30;
        } while (uVar3 < 10);
      }
      else {
        iVar5 = 0;
      }
joined_r0x0154bd44:
      if (iVar2 != 0x7d) goto LAB_0154bd48;
    }
  }
  Advance(this);
  *param_1 = iVar4;
  *param_2 = iVar5;
  return 1;
}

