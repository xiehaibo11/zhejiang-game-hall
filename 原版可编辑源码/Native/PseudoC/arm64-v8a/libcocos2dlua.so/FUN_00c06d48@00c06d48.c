
uint FUN_00c06d48(long param_1,ulong *param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte bVar11;
  
  uVar4 = *(uint *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
  while (-1 < (char)(&DAT_01410f61)[(int)uVar4]) {
    switch(uVar4) {
    default:
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar3 = (uint)*pbVar6;
      }
      else {
        uVar3 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar3;
      return uVar4;
    case 9:
    case 0xb:
    case 0xc:
    case 0x20:
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
        *(uint *)(param_1 + 0x30) = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
        *(uint *)(param_1 + 0x30) = uVar4;
      }
      break;
    case 10:
    case 0xd:
      FUN_00c065b0(param_1);
      uVar4 = *(uint *)(param_1 + 0x30);
      break;
    case 0x22:
    case 0x27:
      plVar1 = (long *)(param_1 + 0x40);
      puVar7 = *(undefined1 **)(param_1 + 0x40);
      if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar7) {
        puVar7 = (undefined1 *)FUN_00c1a4a8(plVar1,1);
      }
      *puVar7 = (char)uVar4;
      pbVar6 = *(byte **)(param_1 + 0x20);
      *(undefined1 **)(param_1 + 0x40) = puVar7 + 1;
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar3 = (uint)*pbVar6;
      }
      else {
        uVar3 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar3;
      goto LAB_00c06e70;
    case 0x2d:
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      if (uVar4 != 0x2d) {
        return 0x2d;
      }
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      if (uVar4 == 0x5b) {
        iVar2 = FUN_00c06324(param_1);
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
        if (iVar2 < 0) {
          uVar4 = *(uint *)(param_1 + 0x30);
          goto LAB_00c06fe8;
        }
        FUN_00c06804(param_1,0);
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
        uVar4 = *(uint *)(param_1 + 0x30);
      }
      else {
LAB_00c06fe8:
        while ((uVar4 != 0xd && uVar4 != 10 && (uVar4 != 0xffffffff))) {
          pbVar6 = *(byte **)(param_1 + 0x20);
          if (pbVar6 < *(byte **)(param_1 + 0x28)) {
            *(byte **)(param_1 + 0x20) = pbVar6 + 1;
            uVar4 = (uint)*pbVar6;
          }
          else {
            uVar4 = FUN_00c062d0(param_1);
          }
          *(uint *)(param_1 + 0x30) = uVar4;
        }
      }
      break;
    case 0x2e:
      puVar7 = *(undefined1 **)(param_1 + 0x40);
      if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar7) {
        puVar7 = (undefined1 *)FUN_00c1a4a8(param_1 + 0x40,1);
      }
      *puVar7 = 0x2e;
      pbVar6 = *(byte **)(param_1 + 0x20);
      *(undefined1 **)(param_1 + 0x40) = puVar7 + 1;
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      if (uVar4 == 0x2e) {
        pbVar6 = *(byte **)(param_1 + 0x20);
        if (pbVar6 < *(byte **)(param_1 + 0x28)) {
          *(byte **)(param_1 + 0x20) = pbVar6 + 1;
          uVar4 = (uint)*pbVar6;
        }
        else {
          uVar4 = FUN_00c062d0(param_1);
        }
        *(uint *)(param_1 + 0x30) = uVar4;
        if (uVar4 != 0x2e) {
          return 0x117;
        }
        pbVar6 = *(byte **)(param_1 + 0x20);
        if (pbVar6 < *(byte **)(param_1 + 0x28)) {
          *(byte **)(param_1 + 0x20) = pbVar6 + 1;
          uVar4 = (uint)*pbVar6;
        }
        else {
          uVar4 = FUN_00c062d0(param_1);
        }
        *(uint *)(param_1 + 0x30) = uVar4;
        return 0x118;
      }
      if (((byte)(&DAT_01410f61)[(int)uVar4] >> 3 & 1) == 0) {
        return 0x2e;
      }
      goto LAB_00c07078;
    case 0x3a:
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      if (uVar4 != 0x3a) {
        return 0x3a;
      }
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      return 0x11d;
    case 0x3c:
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      if (uVar4 != 0x3d) {
        return 0x3c;
      }
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      return 0x11b;
    case 0x3d:
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      if (uVar4 != 0x3d) {
        return 0x3d;
      }
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      return 0x119;
    case 0x3e:
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      if (uVar4 != 0x3d) {
        return 0x3e;
      }
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      return 0x11a;
    case 0x5b:
      iVar2 = FUN_00c06324(param_1);
      if (-1 < iVar2) {
        FUN_00c06804(param_1,param_2);
        return 0x120;
      }
      if (iVar2 == -1) {
        return 0x5b;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00c064c4(param_1,0x120,0x8ee);
    case 0x7e:
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      if (uVar4 != 0x3d) {
        return 0x7e;
      }
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      return 0x11c;
    case 0xffffffff:
      return 0x121;
    }
  }
  if (((byte)(&DAT_01410f61)[(int)uVar4] >> 3 & 1) == 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x40);
    do {
      if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar7) {
        puVar7 = (undefined1 *)FUN_00c1a4a8((undefined8 *)(param_1 + 0x40),1);
      }
      puVar10 = puVar7 + 1;
      *puVar7 = (char)uVar4;
      pbVar6 = *(byte **)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x40) = puVar10;
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = FUN_00c062d0(param_1);
        puVar10 = *(undefined1 **)(param_1 + 0x40);
      }
      *(uint *)(param_1 + 0x30) = uVar4;
      puVar7 = puVar10;
    } while ((char)(&DAT_01410f61)[(int)uVar4] < '\0');
    uVar8 = FUN_00c0a8f4(param_1,*(undefined8 *)(param_1 + 0x50),
                         (int)puVar10 - (int)*(undefined8 *)(param_1 + 0x50));
    *param_2 = uVar8 | 0xfffd800000000000;
    if (*(byte *)(uVar8 + 10) != 0) {
      return *(byte *)(uVar8 + 10) + 0x100;
    }
    return 0x11f;
  }
LAB_00c07078:
  FUN_00c06ac0(param_1,param_2);
  return 0x11e;
LAB_00c06e70:
  if (uVar4 == uVar3) {
    puVar7 = *(undefined1 **)(param_1 + 0x40);
    if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar7) {
      puVar7 = (undefined1 *)FUN_00c1a4a8(plVar1,1);
    }
    puVar10 = puVar7 + 1;
    *puVar7 = (char)uVar3;
    pbVar6 = *(byte **)(param_1 + 0x20);
    *(undefined1 **)(param_1 + 0x40) = puVar10;
    if (pbVar6 < *(byte **)(param_1 + 0x28)) {
      *(byte **)(param_1 + 0x20) = pbVar6 + 1;
      uVar4 = (uint)*pbVar6;
    }
    else {
      uVar4 = FUN_00c062d0(param_1);
      puVar10 = *(undefined1 **)(param_1 + 0x40);
    }
    *(uint *)(param_1 + 0x30) = uVar4;
    uVar8 = FUN_00c0a8f4(param_1,*(long *)(param_1 + 0x50) + 1,
                         ((int)puVar10 - (int)*(long *)(param_1 + 0x50)) + -2);
    *param_2 = uVar8 | 0xfffd800000000000;
    return 0x120;
  }
  if (uVar3 == 10) {
LAB_00c072ec:
                    /* WARNING: Subroutine does not return */
    FUN_00c064c4(param_1,0x120,0x8c4);
  }
  if ((int)uVar3 < 0xb) {
    if (uVar3 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00c064c4(param_1,0x121,0x8c4);
    }
LAB_00c07290:
    pbVar6 = (byte *)*plVar1;
    if ((int)*(undefined8 *)(param_1 + 0x48) == (int)pbVar6) {
LAB_00c07548:
      pbVar6 = (byte *)FUN_00c1a4a8(plVar1,1);
    }
  }
  else {
    if (uVar3 == 0xd) goto LAB_00c072ec;
    if (uVar3 != 0x5c) goto LAB_00c07290;
    pbVar6 = *(byte **)(param_1 + 0x20);
    if (pbVar6 < *(byte **)(param_1 + 0x28)) {
      *(byte **)(param_1 + 0x20) = pbVar6 + 1;
      uVar3 = (uint)*pbVar6;
    }
    else {
      uVar3 = FUN_00c062d0(param_1);
    }
    *(uint *)(param_1 + 0x30) = uVar3;
    switch(uVar3) {
    default:
      if (((byte)(&DAT_01410f61)[(int)uVar3] >> 3 & 1) == 0) {
LAB_00c079a0:
                    /* WARNING: Subroutine does not return */
        FUN_00c064c4(param_1,0x120,0x8d6);
      }
      pbVar6 = *(byte **)(param_1 + 0x20);
      iVar2 = uVar3 - 0x30;
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar3 = (uint)*pbVar6;
      }
      else {
        uVar3 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar3;
      if (((byte)(&DAT_01410f61)[(int)uVar3] >> 3 & 1) != 0) {
        pbVar6 = *(byte **)(param_1 + 0x20);
        iVar2 = iVar2 * 10 + (uVar3 - 0x30);
        if (pbVar6 < *(byte **)(param_1 + 0x28)) {
          *(byte **)(param_1 + 0x20) = pbVar6 + 1;
          uVar3 = (uint)*pbVar6;
        }
        else {
          uVar3 = FUN_00c062d0(param_1);
        }
        *(uint *)(param_1 + 0x30) = uVar3;
        if (((byte)(&DAT_01410f61)[(int)uVar3] >> 3 & 1) != 0) {
          iVar2 = (uVar3 - 0x30) + iVar2 * 10;
          if (0xff < iVar2) goto LAB_00c079a0;
          pbVar6 = *(byte **)(param_1 + 0x20);
          if (pbVar6 < *(byte **)(param_1 + 0x28)) {
            *(byte **)(param_1 + 0x20) = pbVar6 + 1;
            uVar3 = (uint)*pbVar6;
          }
          else {
            uVar3 = FUN_00c062d0(param_1);
          }
          *(uint *)(param_1 + 0x30) = uVar3;
        }
      }
      puVar7 = (undefined1 *)*plVar1;
      if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar7) {
        puVar7 = (undefined1 *)FUN_00c1a4a8(plVar1,1);
      }
      *puVar7 = (char)iVar2;
      *plVar1 = (long)(puVar7 + 1);
      uVar3 = *(uint *)(param_1 + 0x30);
      goto LAB_00c06e70;
    case 10:
    case 0xd:
      puVar7 = (undefined1 *)*plVar1;
      if ((int)*(undefined8 *)(param_1 + 0x48) == (int)puVar7) {
        puVar7 = (undefined1 *)FUN_00c1a4a8(plVar1,1);
      }
      *puVar7 = 10;
      *plVar1 = (long)(puVar7 + 1);
      FUN_00c065b0(param_1);
      uVar3 = *(uint *)(param_1 + 0x30);
      goto LAB_00c06e70;
    case 0x22:
    case 0x27:
    case 0x5c:
      pbVar6 = (byte *)*plVar1;
      uVar3 = uVar3 & 0xff;
      break;
    case 0x61:
      pbVar6 = (byte *)*plVar1;
      uVar3 = 7;
      break;
    case 0x62:
      pbVar6 = (byte *)*plVar1;
      uVar3 = 8;
      break;
    case 0x66:
      pbVar6 = (byte *)*plVar1;
      uVar3 = 0xc;
      break;
    case 0x6e:
      pbVar6 = (byte *)*plVar1;
      uVar3 = 10;
      break;
    case 0x72:
      pbVar6 = (byte *)*plVar1;
      uVar3 = 0xd;
      break;
    case 0x74:
      pbVar6 = (byte *)*plVar1;
      uVar3 = 9;
      break;
    case 0x75:
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar3 = (uint)*pbVar6;
      }
      else {
        uVar3 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar3;
      if (uVar3 != 0x7b) goto LAB_00c079a0;
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar5 = (uint)*pbVar6;
      }
      else {
        uVar5 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar5;
      uVar3 = 0;
      do {
        uVar3 = uVar5 & 0xf | uVar3 << 4;
        if (((byte)(&DAT_01410f61)[(int)uVar5] >> 3 & 1) == 0) {
          if (((byte)(&DAT_01410f61)[(int)uVar5] >> 4 & 1) == 0) goto LAB_00c079a0;
          uVar3 = uVar3 + 9;
        }
        if (0x10ffff < (int)uVar3) goto LAB_00c079a0;
        pbVar6 = *(byte **)(param_1 + 0x20);
        if (pbVar6 < *(byte **)(param_1 + 0x28)) {
          *(byte **)(param_1 + 0x20) = pbVar6 + 1;
          uVar5 = (uint)*pbVar6;
        }
        else {
          uVar5 = FUN_00c062d0(param_1);
        }
        *(uint *)(param_1 + 0x30) = uVar5;
      } while (uVar5 != 0x7d);
      if ((int)uVar3 < 0x800) {
        if ((int)uVar3 < 0x80) goto LAB_00c07838;
        pbVar9 = (byte *)*plVar1;
        bVar11 = (byte)((int)uVar3 >> 6) | 0xc0;
        if ((int)*(undefined8 *)(param_1 + 0x48) == (int)pbVar9) goto LAB_00c078c0;
      }
      else {
        if ((int)uVar3 < 0x10000) {
          if (uVar3 - 0xd800 < 0x800) goto LAB_00c079a0;
          pbVar6 = (byte *)*plVar1;
          bVar11 = (byte)((int)uVar3 >> 0xc) | 0xe0;
          if ((int)*(undefined8 *)(param_1 + 0x48) == (int)pbVar6) goto LAB_00c07948;
        }
        else {
          pbVar6 = (byte *)*plVar1;
          if ((int)*(undefined8 *)(param_1 + 0x48) == (int)pbVar6) {
            pbVar6 = (byte *)FUN_00c1a4a8(plVar1,1);
          }
          *pbVar6 = (byte)((int)uVar3 >> 0x12) | 0xf0;
          pbVar6 = pbVar6 + 1;
          *plVar1 = (long)pbVar6;
          bVar11 = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
          if ((int)*(undefined8 *)(param_1 + 0x48) == (int)pbVar6) {
LAB_00c07948:
            pbVar6 = (byte *)FUN_00c1a4a8(plVar1,1);
          }
        }
        *pbVar6 = bVar11;
        bVar11 = (byte)(uVar3 >> 6) & 0x3f | 0x80;
        *plVar1 = (long)(pbVar6 + 1);
        pbVar9 = (byte *)*plVar1;
        if ((int)*(undefined8 *)(param_1 + 0x48) == (int)pbVar9) {
LAB_00c078c0:
          pbVar9 = (byte *)FUN_00c1a4a8(plVar1,1);
        }
      }
      uVar3 = uVar3 & 0x3f | 0x80;
      pbVar6 = pbVar9 + 1;
      *pbVar9 = bVar11;
      *plVar1 = (long)pbVar6;
      break;
    case 0x76:
      pbVar6 = (byte *)*plVar1;
      uVar3 = 0xb;
      break;
    case 0x78:
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar3 = (uint)*pbVar6;
      }
      else {
        uVar3 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar3;
      iVar2 = (uVar3 & 0xf) * 0x10;
      if (((byte)(&DAT_01410f61)[(int)uVar3] >> 3 & 1) == 0) {
        if (((byte)(&DAT_01410f61)[(int)uVar3] >> 4 & 1) == 0) goto LAB_00c079a0;
        iVar2 = iVar2 + 0x90;
      }
      pbVar6 = *(byte **)(param_1 + 0x20);
      if (pbVar6 < *(byte **)(param_1 + 0x28)) {
        *(byte **)(param_1 + 0x20) = pbVar6 + 1;
        uVar5 = (uint)*pbVar6;
      }
      else {
        uVar5 = FUN_00c062d0(param_1);
      }
      *(uint *)(param_1 + 0x30) = uVar5;
      uVar3 = (uVar5 & 0xf) + iVar2;
      if (((byte)(&DAT_01410f61)[(int)uVar5] >> 3 & 1) == 0) {
        if (((byte)(&DAT_01410f61)[(int)uVar5] >> 4 & 1) == 0) goto LAB_00c079a0;
        pbVar6 = (byte *)*plVar1;
        uVar3 = uVar3 + 9 & 0xff;
      }
      else {
LAB_00c07838:
        uVar3 = uVar3 & 0xff;
        pbVar6 = (byte *)*plVar1;
      }
      break;
    case 0x7a:
      goto switchD_00c07468_caseD_7a;
    case 0xffffffff:
      uVar3 = 0xffffffff;
      goto LAB_00c06e70;
    }
    if ((int)*(undefined8 *)(param_1 + 0x48) == (int)pbVar6) goto LAB_00c07548;
  }
  *pbVar6 = (byte)uVar3;
  pbVar9 = *(byte **)(param_1 + 0x20);
  *plVar1 = (long)(pbVar6 + 1);
  if (pbVar9 < *(byte **)(param_1 + 0x28)) {
    *(byte **)(param_1 + 0x20) = pbVar9 + 1;
    uVar3 = (uint)*pbVar9;
    *(uint *)(param_1 + 0x30) = uVar3;
  }
  else {
    uVar3 = FUN_00c062d0(param_1);
    *(uint *)(param_1 + 0x30) = uVar3;
  }
  goto LAB_00c06e70;
switchD_00c07468_caseD_7a:
  do {
    pbVar6 = *(byte **)(param_1 + 0x20);
    if (pbVar6 < *(byte **)(param_1 + 0x28)) {
      *(byte **)(param_1 + 0x20) = pbVar6 + 1;
      uVar3 = (uint)*pbVar6;
    }
    else {
      uVar3 = FUN_00c062d0(param_1);
    }
    *(uint *)(param_1 + 0x30) = uVar3;
    bVar11 = (&DAT_01410f61)[(int)uVar3];
    while( true ) {
      if ((bVar11 >> 1 & 1) == 0) goto LAB_00c06e70;
      if ((uVar3 != 0xd) && (uVar3 != 10)) break;
      FUN_00c065b0(param_1);
      uVar3 = *(uint *)(param_1 + 0x30);
      bVar11 = (&DAT_01410f61)[(int)uVar3];
    }
  } while( true );
}

