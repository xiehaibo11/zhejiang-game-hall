
ulong FUN_00e0685c(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong local_210 [64];
  
  if ((long)param_3 < 1) {
    return param_1;
  }
  local_210[1] = 1;
  local_210[0] = 0xedb88320;
  local_210[3] = 4;
  local_210[2] = 2;
  local_210[5] = 0x10;
  local_210[4] = 8;
  local_210[7] = 0x40;
  local_210[6] = 0x20;
  local_210[9] = 0x100;
  local_210[8] = 0x80;
  local_210[0xb] = 0x400;
  local_210[10] = 0x200;
  local_210[0xd] = 0x1000;
  local_210[0xc] = 0x800;
  local_210[0xf] = 0x4000;
  local_210[0xe] = 0x2000;
  local_210[0x11] = 0x10000;
  local_210[0x10] = 0x8000;
  local_210[0x13] = 0x40000;
  local_210[0x12] = 0x20000;
  local_210[0x15] = 0x100000;
  local_210[0x14] = 0x80000;
  local_210[0x17] = 0x400000;
  local_210[0x16] = 0x200000;
  local_210[0x19] = 0x1000000;
  local_210[0x18] = 0x800000;
  local_210[0x1b] = 0x4000000;
  local_210[0x1a] = 0x2000000;
  lVar2 = 0;
  uVar3 = 0xedb88320;
  local_210[0x1d] = 0x10000000;
  local_210[0x1c] = 0x8000000;
  local_210[0x1f] = 0x40000000;
  local_210[0x1e] = 0x20000000;
LAB_00e0695c:
  uVar5 = 0;
  puVar4 = local_210;
  do {
    if ((uVar3 & 1) != 0) {
      uVar5 = *puVar4 ^ uVar5;
    }
    uVar3 = uVar3 >> 1;
    puVar4 = puVar4 + 1;
  } while (uVar3 != 0);
  while( true ) {
    local_210[lVar2 + 0x20] = uVar5;
    lVar2 = lVar2 + 1;
    if (lVar2 == 0x20) break;
    uVar3 = local_210[lVar2];
    if (uVar3 != 0) goto LAB_00e0695c;
    uVar5 = 0;
  }
  lVar2 = 0;
  do {
    uVar3 = local_210[lVar2 + 0x20];
    if (uVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      puVar4 = local_210 + 0x20;
      do {
        if ((uVar3 & 1) != 0) {
          uVar5 = *puVar4 ^ uVar5;
        }
        uVar3 = uVar3 >> 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != 0);
    }
    local_210[lVar2] = uVar5;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x20);
  do {
    lVar2 = 0;
    do {
      uVar3 = local_210[lVar2];
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        puVar4 = local_210;
        do {
          if ((uVar3 & 1) != 0) {
            uVar5 = *puVar4 ^ uVar5;
          }
          uVar3 = uVar3 >> 1;
          puVar4 = puVar4 + 1;
        } while (uVar3 != 0);
      }
      local_210[lVar2 + 0x20] = uVar5;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x20);
    uVar1 = (uint)param_3;
    uVar3 = param_1;
    if ((param_3 & 1) != 0) {
      if (param_1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        puVar4 = local_210 + 0x20;
        do {
          if ((param_1 & 1) != 0) {
            uVar3 = *puVar4 ^ uVar3;
          }
          param_1 = param_1 >> 1;
          puVar4 = puVar4 + 1;
        } while (param_1 != 0);
      }
    }
    param_1 = uVar3;
    if ((long)param_3 >> 1 == 0) break;
    lVar2 = 0;
    do {
      uVar3 = local_210[lVar2 + 0x20];
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        puVar4 = local_210 + 0x20;
        do {
          if ((uVar3 & 1) != 0) {
            uVar5 = *puVar4 ^ uVar5;
          }
          uVar3 = uVar3 >> 1;
          puVar4 = puVar4 + 1;
        } while (uVar3 != 0);
      }
      local_210[lVar2] = uVar5;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x20);
    param_3 = (long)param_3 >> 2;
    uVar3 = param_1;
    if ((uVar1 >> 1 & 1) != 0) {
      if (param_1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        puVar4 = local_210;
        do {
          if ((param_1 & 1) != 0) {
            uVar3 = *puVar4 ^ uVar3;
          }
          param_1 = param_1 >> 1;
          puVar4 = puVar4 + 1;
        } while (param_1 != 0);
      }
    }
    param_1 = uVar3;
  } while (param_3 != 0);
  return param_1 ^ param_2;
}

