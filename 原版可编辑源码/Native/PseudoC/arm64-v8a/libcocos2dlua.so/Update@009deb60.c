
/* universe::utils::CMD5Checksum::Update(unsigned char*, unsigned int) */

void __thiscall
universe::utils::CMD5Checksum::Update(CMD5Checksum *this,uchar *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong __n;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = *(uint *)(this + 0x48);
  iVar1 = *(int *)(this + 0x4c);
  uVar4 = (ulong)(uVar3 >> 3) & 0x3f;
  *(uint *)(this + 0x48) = uVar3 + param_2 * 8;
  if (CARRY4(uVar3,param_2 * 8)) {
    iVar1 = iVar1 + 1;
    *(int *)(this + 0x4c) = iVar1;
  }
  uVar3 = (uint)uVar4;
  __n = (ulong)(0x40 - uVar3);
  *(uint *)(this + 0x4c) = iVar1 + (param_2 >> 0x1d);
  if (param_2 < 0x40 - uVar3) {
    __n = 0;
  }
  else {
    memcpy(this + 8 + uVar4,param_1,__n);
    Transform(this,(uchar *)(this + 8));
    if ((uVar3 ^ 0x7f) < param_2) {
      uVar3 = 0x7f - uVar3;
      do {
        uVar2 = uVar3;
        Transform(this,param_1 + (uVar2 - 0x3f));
        uVar3 = uVar2 + 0x40;
      } while (uVar2 + 0x40 < param_2);
      uVar4 = 0;
      __n = (ulong)(uVar2 + 1);
    }
    else {
      uVar4 = 0;
    }
  }
  memcpy(this + uVar4 + 8,param_1 + __n,(ulong)(param_2 - (int)__n));
  return;
}

