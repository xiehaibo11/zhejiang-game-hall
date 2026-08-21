
undefined8 FUN_00a1124c(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = (uint)*param_3;
  if (*param_3 != 0x5c) goto LAB_00a11594;
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  if (param_3[1] == 0x75) {
    if (param_4 == 2) {
      return 0xfffffffe;
    }
    bVar1 = param_3[2];
    uVar2 = bVar1 - 0x30;
    if (9 < uVar2) {
      uVar2 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar2 = uVar2 - 0x37;
      }
      else {
        if (0x19 < uVar2 - 0x61) goto LAB_00a11590;
        uVar2 = uVar2 - 0x57;
      }
    }
    if (param_4 == 3) {
      return 0xfffffffe;
    }
    bVar1 = param_3[3];
    uVar3 = bVar1 - 0x30;
    if (9 < uVar3) {
      uVar3 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar3 = uVar3 - 0x37;
      }
      else {
        if (0x19 < uVar3 - 0x61) goto LAB_00a11590;
        uVar3 = uVar3 - 0x57;
      }
    }
    if (param_4 == 4) {
      return 0xfffffffe;
    }
    bVar1 = param_3[4];
    uVar4 = bVar1 - 0x30;
    if (9 < uVar4) {
      uVar4 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar4 = uVar4 - 0x37;
      }
      else {
        if (0x19 < uVar4 - 0x61) goto LAB_00a11590;
        uVar4 = uVar4 - 0x57;
      }
    }
    if (param_4 == 5) {
      return 0xfffffffe;
    }
    bVar1 = param_3[5];
    uVar5 = bVar1 - 0x30;
    if (9 < uVar5) {
      uVar5 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar5 = uVar5 - 0x37;
      }
      else {
        if (0x19 < uVar5 - 0x61) goto LAB_00a11590;
        uVar5 = uVar5 - 0x57;
      }
    }
    uVar2 = (uVar2 & 0xff) << 0xc | (uVar3 & 0xff) << 8 | (uVar4 & 0xff) << 4;
    uVar3 = uVar2 | uVar5 & 0xff;
    if ((uVar2 & 0xff800) != 0xd800) {
      *param_2 = uVar3;
      return 6;
    }
    if (uVar2 >> 10 < 0x37) {
      if (param_4 < 7) {
        return 0xfffffffe;
      }
      if (param_3[6] == 0x5c) {
        if (param_4 < 8) {
          return 0xfffffffe;
        }
        if (param_3[7] == 0x75) {
          if (param_4 == 8) {
            return 0xfffffffe;
          }
          bVar1 = param_3[8];
          uVar2 = bVar1 - 0x30;
          if (9 < uVar2) {
            uVar2 = (uint)bVar1;
            if (bVar1 - 0x41 < 0x1a) {
              uVar2 = uVar2 - 0x37;
            }
            else {
              if (0x19 < uVar2 - 0x61) goto LAB_00a11590;
              uVar2 = uVar2 - 0x57;
            }
          }
          if (param_4 == 9) {
            return 0xfffffffe;
          }
          bVar1 = param_3[9];
          uVar4 = bVar1 - 0x30;
          if (9 < uVar4) {
            uVar4 = (uint)bVar1;
            if (bVar1 - 0x41 < 0x1a) {
              uVar4 = uVar4 - 0x37;
            }
            else {
              if (0x19 < uVar4 - 0x61) goto LAB_00a11590;
              uVar4 = uVar4 - 0x57;
            }
          }
          if (param_4 == 10) {
            return 0xfffffffe;
          }
          bVar1 = param_3[10];
          uVar5 = bVar1 - 0x30;
          if (9 < uVar5) {
            uVar5 = (uint)bVar1;
            if (bVar1 - 0x41 < 0x1a) {
              uVar5 = uVar5 - 0x37;
            }
            else {
              if (0x19 < uVar5 - 0x61) goto LAB_00a11590;
              uVar5 = uVar5 - 0x57;
            }
          }
          if (param_4 == 0xb) {
            return 0xfffffffe;
          }
          bVar1 = param_3[0xb];
          uVar6 = bVar1 - 0x30;
          if (9 < uVar6) {
            uVar6 = (uint)bVar1;
            if (bVar1 - 0x41 < 0x1a) {
              uVar6 = uVar6 - 0x37;
            }
            else {
              if (0x19 < uVar6 - 0x61) goto LAB_00a11590;
              uVar6 = uVar6 - 0x57;
            }
          }
          uVar2 = (uVar2 & 0xff) << 0xc | (uVar4 & 0xff) << 8 | (uVar5 & 0xff) << 4;
          if ((uVar2 & 0xffc00) == 0xdc00) {
            *param_2 = (uVar2 | uVar6 & 0xff) + uVar3 * 0x400 + 0xfca02400;
            return 0xc;
          }
        }
      }
    }
  }
LAB_00a11590:
  uVar2 = 0x5c;
LAB_00a11594:
  *param_2 = uVar2;
  return 1;
}

