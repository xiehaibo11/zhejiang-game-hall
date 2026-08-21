
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00e37b94(long param_1,uint param_2,uint param_3,undefined8 *param_4,ulong param_5)

{
  uint *puVar1;
  size_t sVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong __n;
  char *pcVar9;
  ulong uVar10;
  
  if (0x2d < param_2) {
    return 0xffffffffffffffff;
  }
  uVar10 = param_5 & ((long)param_5 >> 0x3f ^ 0xffffffffffffffffU);
  switch(param_2) {
  case 0:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if ((long)param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x2a1);
    goto LAB_00e38154;
  case 1:
    if (3 < param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (uVar10 < 8) {
      return 8;
    }
    switch(param_3) {
    case 0:
      puVar8 = (undefined8 *)(param_1 + 0x2a8);
      break;
    case 1:
      puVar8 = (undefined8 *)(param_1 + 0x2b0);
      break;
    case 2:
      puVar8 = (undefined8 *)(param_1 + 0x2b8);
      break;
    case 3:
      puVar8 = (undefined8 *)(param_1 + 0x2c0);
      break;
    default:
switchD_00e37c6c_default:
      uVar7 = 0;
      goto LAB_00e38238;
    }
    goto LAB_00e38234;
  case 2:
    if (3 < param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (uVar10 < 8) {
      return 8;
    }
    switch(param_3) {
    case 0:
      puVar8 = (undefined8 *)(param_1 + 0x2d8);
      break;
    case 1:
      puVar8 = (undefined8 *)(param_1 + 0x2e0);
      break;
    case 2:
      puVar8 = (undefined8 *)(param_1 + 0x2e8);
      break;
    case 3:
      puVar8 = (undefined8 *)(param_1 + 0x2f0);
      break;
    default:
      goto switchD_00e37c6c_default;
    }
LAB_00e38234:
    uVar7 = *puVar8;
    goto LAB_00e38238;
  case 3:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if ((long)param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x2a0);
    goto LAB_00e38154;
  case 4:
    pcVar9 = *(char **)(param_1 + 0x218);
    goto joined_r0x00e380b8;
  case 5:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar10 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x138);
    goto LAB_00e38054;
  case 6:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar10 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x280);
    goto LAB_00e38054;
  case 7:
    if (*(uint *)(param_1 + 0x280) <= param_3) {
      return 0xffffffffffffffff;
    }
    pcVar9 = *(char **)(*(long *)(param_1 + 0x288) + (ulong)param_3 * 8);
    sVar2 = strlen(pcVar9);
    __n = sVar2 + 1;
    if ((param_4 != (undefined8 *)0x0) && (__n <= uVar10)) {
      memcpy(param_4,pcVar9,__n);
      *(undefined1 *)((long)param_4 + sVar2) = 0;
    }
    goto joined_r0x00e381f8;
  case 8:
    if (*(uint *)(param_1 + 0x280) <= param_3) {
      return 0xffffffffffffffff;
    }
    __n = (ulong)(*(int *)(*(long *)(param_1 + 0x298) + (ulong)param_3 * 4) + 1);
    if ((param_4 != (undefined8 *)0x0) && (__n <= uVar10)) {
      lVar6 = *(long *)(param_1 + 0x290);
LAB_00e381dc:
      memcpy(param_4,*(void **)(lVar6 + (ulong)param_3 * 8),__n - 1);
      *(undefined1 *)((long)param_4 + (__n - 1)) = 0;
    }
    goto joined_r0x00e381f8;
  case 9:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar10 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x220);
    goto LAB_00e38054;
  case 10:
    if (*(int *)(param_1 + 0x220) != 1) {
      return 0xffffffffffffffff;
    }
    if (*(uint *)(param_1 + 0x228) <= param_3) {
      return 0xffffffffffffffff;
    }
    pcVar9 = *(char **)(*(long *)(param_1 + 0x240) + (ulong)param_3 * 8);
    sVar2 = strlen(pcVar9);
    __n = sVar2 + 1;
    if ((param_4 != (undefined8 *)0x0) && (__n <= uVar10)) {
      memcpy(param_4,pcVar9,sVar2);
      *(undefined1 *)((long)param_4 + sVar2) = 0;
    }
    goto joined_r0x00e381f8;
  case 0xb:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar10 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x260);
    goto LAB_00e38054;
  case 0xc:
    if (*(long *)(param_1 + 0x278) == 0) {
      if (*(uint *)(param_1 + 0x260) <= param_3) {
        return 0xffffffffffffffff;
      }
      lVar6 = *(long *)(param_1 + 0x268);
    }
    else {
      puVar1 = (uint *)FUN_00e148b4(param_3);
      if (puVar1 == (uint *)0x0) {
        return 0xffffffffffffffff;
      }
      param_3 = *puVar1;
      lVar6 = *(long *)(param_1 + 0x268);
    }
    if (lVar6 == 0) {
      return 0xffffffffffffffff;
    }
    __n = (ulong)(*(int *)(*(long *)(param_1 + 0x270) + (ulong)param_3 * 4) + 1);
    if ((param_4 != (undefined8 *)0x0) && (__n <= uVar10)) goto LAB_00e381dc;
    goto joined_r0x00e381f8;
  case 0xd:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar10 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x1b8);
    break;
  case 0xe:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar10 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x1ba);
    break;
  case 0xf:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if ((long)param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x140);
    goto LAB_00e38154;
  case 0x10:
    if (*(byte *)(param_1 + 0x140) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar10 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 0x144);
    break;
  case 0x11:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar10 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x1b4);
    goto LAB_00e38054;
  case 0x12:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if ((long)param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x141);
    goto LAB_00e38154;
  case 0x13:
    if (*(byte *)(param_1 + 0x141) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar10 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 0x160);
    break;
  case 0x14:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if ((long)param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x142);
    goto LAB_00e38154;
  case 0x15:
    if (*(byte *)(param_1 + 0x142) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar10 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 0x174);
    break;
  case 0x16:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if ((long)param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x143);
    goto LAB_00e38154;
  case 0x17:
    if (*(byte *)(param_1 + 0x143) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar10 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 400);
    break;
  case 0x18:
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (uVar10 < 8) {
      return 8;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x1a8);
    goto LAB_00e38238;
  case 0x19:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar10 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x1b0);
    goto LAB_00e38054;
  case 0x1a:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if ((long)param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x1bc);
    goto LAB_00e38154;
  case 0x1b:
    if (*(byte *)(param_1 + 0x1bc) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar10 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 0x1c0);
    break;
  case 0x1c:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if ((long)param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x1bd);
    goto LAB_00e38154;
  case 0x1d:
    if (*(byte *)(param_1 + 0x1bd) <= param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar10 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 0x1da);
    break;
  case 0x1e:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if ((long)param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x1be);
    goto LAB_00e38154;
  case 0x1f:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if ((long)param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x1bf);
    goto LAB_00e38154;
  case 0x20:
    if (1 < param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar10 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 0x210);
    break;
  case 0x21:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (uVar10 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x13c);
LAB_00e38054:
    *(undefined4 *)param_4 = uVar5;
    return 4;
  case 0x22:
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (uVar10 < 8) {
      return 8;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x208);
    goto LAB_00e38238;
  case 0x23:
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (uVar10 < 8) {
      return 8;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x200);
    goto LAB_00e38238;
  case 0x24:
    pcVar9 = *(char **)(param_1 + 0xf8);
    goto joined_r0x00e380b8;
  case 0x25:
    pcVar9 = *(char **)(param_1 + 0x100);
    goto joined_r0x00e380b8;
  case 0x26:
    pcVar9 = *(char **)(param_1 + 0x108);
    goto joined_r0x00e380b8;
  case 0x27:
    pcVar9 = *(char **)(param_1 + 0x110);
    goto joined_r0x00e380b8;
  case 0x28:
    pcVar9 = *(char **)(param_1 + 0x118);
joined_r0x00e380b8:
    if (pcVar9 != (char *)0x0) {
      sVar2 = strlen(pcVar9);
      __n = sVar2 + 1;
      if ((param_4 != (undefined8 *)0x0) && (__n <= uVar10)) {
        memcpy(param_4,pcVar9,__n);
      }
joined_r0x00e381f8:
      if (__n != 0) {
        return __n;
      }
    }
    return 0xffffffffffffffff;
  case 0x29:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if ((long)param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x128);
LAB_00e38154:
    *(undefined1 *)param_4 = uVar3;
    return 1;
  case 0x2a:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar10 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x12a);
    break;
  case 0x2b:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar10 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 300);
    break;
  case 0x2c:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (uVar10 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x130);
    break;
  case 0x2d:
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (uVar10 < 8) {
      return 8;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x120);
LAB_00e38238:
    *param_4 = uVar7;
    return 8;
  }
  *(undefined2 *)param_4 = uVar4;
  return 2;
}

