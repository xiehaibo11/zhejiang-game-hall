
size_t FUN_01079484(long param_1,undefined4 param_2,uint param_3,undefined8 *param_4,long param_5)

{
  size_t sVar1;
  size_t sVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  size_t sVar8;
  char *pcVar9;
  
                    /* try { // try from 010794a4 to 011794e3 has its CatchHandler @ 01079424 */
                    /* catch() { ... } // from try @ 0107947c with catch @ 010794b8 */
  switch(param_2) {
  case 0:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
                    /* catch() { ... } // from try @ 01079458 with catch @ 010794d0 */
    uVar3 = *(undefined1 *)(param_1 + 0x299);
    goto LAB_01079a48;
  case 1:
    if (3 < param_3) {
      return 0xffffffffffffffff;
    }
                    /* try { // try from 010794e4 to 01179537 has its CatchHandler @ 010794e4
                       catch() { ... } // from try @ 010794e4 with catch @ 010794e4
                       catch() { ... } // from try @ 01079564 with catch @ 010794e4 */
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (param_5 < 8) {
      return 8;
    }
    switch(param_3) {
    case 0:
      uVar7 = *(undefined8 *)(param_1 + 0x2a0);
      break;
    case 1:
      uVar7 = *(undefined8 *)(param_1 + 0x2a8);
      break;
    case 2:
      uVar7 = *(undefined8 *)(param_1 + 0x2b0);
      break;
    case 3:
      uVar7 = *(undefined8 *)(param_1 + 0x2b8);
      break;
    default:
switchD_01079550_default:
      uVar7 = 0;
    }
    goto LAB_01079a28;
  case 2:
    if (3 < param_3) {
      return 0xffffffffffffffff;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (param_5 < 8) {
      return 8;
    }
                    /* try { // try from 01079538 to 01179563 has its CatchHandler @ 01079574 */
    switch(param_3) {
    case 0:
      uVar7 = *(undefined8 *)(param_1 + 0x2d0);
      break;
    case 1:
      uVar7 = *(undefined8 *)(param_1 + 0x2d8);
      break;
    case 2:
      uVar7 = *(undefined8 *)(param_1 + 0x2e0);
      break;
    case 3:
      uVar7 = *(undefined8 *)(param_1 + 0x2e8);
      break;
    default:
      goto switchD_01079550_default;
    }
    goto LAB_01079a28;
  case 3:
                    /* try { // try from 01079564 to 0117958f has its CatchHandler @ 010794e4 */
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x298);
                    /* catch() { ... } // from try @ 01079538 with catch @ 01079574 */
    goto LAB_01079a48;
  case 4:
    pcVar9 = *(char **)(param_1 + 0x218);
    goto LAB_01079a58;
  case 5:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x138);
    goto LAB_01079950;
  case 6:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x278);
    goto LAB_01079950;
  case 7:
    if (param_3 < *(uint *)(param_1 + 0x278)) {
      pcVar9 = *(char **)(*(long *)(param_1 + 0x280) + (ulong)param_3 * 8);
      sVar1 = strlen(pcVar9);
      sVar2 = sVar1 + 1;
      sVar8 = sVar2;
joined_r0x01079664:
      if (param_4 == (undefined8 *)0x0) {
        return sVar2;
      }
      if ((long)sVar2 <= param_5) {
        memcpy(param_4,pcVar9,sVar8);
        *(undefined1 *)((long)param_4 + sVar1) = 0;
        return sVar2;
      }
      return sVar2;
    }
    break;
  case 8:
    if (param_3 < *(uint *)(param_1 + 0x278)) {
      sVar8 = *(size_t *)(*(long *)(param_1 + 0x290) + (ulong)param_3 * 8);
      sVar2 = sVar8 + 1;
      if (param_4 == (undefined8 *)0x0) {
        return sVar2;
      }
      if (param_5 <= (long)sVar8) {
        return sVar2;
      }
      lVar6 = *(long *)(param_1 + 0x288);
LAB_010796c8:
      memcpy(param_4,*(void **)(lVar6 + (ulong)param_3 * 8),sVar8);
      *(undefined1 *)((long)param_4 + sVar8) = 0;
      return sVar2;
    }
    break;
  case 9:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x220);
    goto LAB_01079950;
  case 10:
    if ((*(int *)(param_1 + 0x220) == 1) && (param_3 < *(uint *)(param_1 + 0x228))) {
                    /* try { // try from 0107964c to 011796e7 has its CatchHandler @ 0107964c
                       catch(type#1 @ 00000000) { ... } // from try @ 0107964c with catch @ 0107964c
                       catch(type#1 @ 00000000) { ... } // from try @ 01079760 with catch @ 0107964c
                        */
      pcVar9 = *(char **)(*(long *)(param_1 + 0x240) + (ulong)param_3 * 8);
      sVar1 = strlen(pcVar9);
      sVar2 = sVar1 + 1;
      sVar8 = sVar1;
      goto joined_r0x01079664;
    }
    break;
  case 0xb:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x260);
    goto LAB_01079950;
  case 0xc:
    if (param_3 < *(uint *)(param_1 + 0x260)) {
      sVar8 = *(size_t *)(*(long *)(param_1 + 0x270) + (ulong)param_3 * 8);
      sVar2 = sVar8 + 1;
      if (param_4 == (undefined8 *)0x0) {
        return sVar2;
      }
      if (param_5 <= (long)sVar8) {
        return sVar2;
      }
      lVar6 = *(long *)(param_1 + 0x268);
      goto LAB_010796c8;
    }
    break;
  case 0xd:
                    /* try { // try from 010796e8 to 011796ef has its CatchHandler @ 01079818 */
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x1b8);
    goto LAB_01079a08;
  case 0xe:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x1ba);
    goto LAB_01079a08;
  case 0xf:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x140);
    goto LAB_01079a48;
  case 0x10:
    if (param_3 < *(byte *)(param_1 + 0x140)) {
      if (param_4 == (undefined8 *)0x0) {
        return 2;
      }
                    /* try { // try from 01079740 to 01179743 has its CatchHandler @ 010797e0 */
      if (param_5 < 2) {
        return 2;
      }
                    /* try { // try from 01079750 to 0117975f has its CatchHandler @ 010797e4 */
      uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 0x144);
      goto LAB_01079a08;
    }
    break;
  case 0x11:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
                    /* try { // try from 01079760 to 01179853 has its CatchHandler @ 0107964c */
    if (param_5 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x1b4);
    goto LAB_01079950;
  case 0x12:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x141);
    goto LAB_01079a48;
  case 0x13:
    if (param_3 < *(byte *)(param_1 + 0x141)) {
      if (param_4 == (undefined8 *)0x0) {
        return 2;
      }
      if (param_5 < 2) {
        return 2;
      }
      uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 0x160);
      goto LAB_01079a08;
    }
    break;
  case 0x14:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x142);
    goto LAB_01079a48;
  case 0x15:
    if (param_3 < *(byte *)(param_1 + 0x142)) {
      if (param_4 == (undefined8 *)0x0) {
        return 2;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01079740 with catch @ 010797e0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01079750 with catch @ 010797e4
                        */
      if (param_5 < 2) {
        return 2;
      }
      uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 0x174);
      goto LAB_01079a08;
    }
    break;
  case 0x16:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x143);
    goto LAB_01079a48;
  case 0x17:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010796e8 with catch @ 01079818
                        */
    if (param_3 < *(byte *)(param_1 + 0x143)) {
      if (param_4 == (undefined8 *)0x0) {
        return 2;
      }
      if (param_5 < 2) {
        return 2;
      }
      uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 400);
      goto LAB_01079a08;
    }
    break;
  case 0x18:
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (param_5 < 8) {
      return 8;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x1a8);
    goto LAB_01079a28;
  case 0x19:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x1b0);
    goto LAB_01079950;
  case 0x1a:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x1bc);
    goto LAB_01079a48;
  case 0x1b:
    if (param_3 < *(byte *)(param_1 + 0x1bc)) {
                    /* try { // try from 0107987c to 011798ab has its CatchHandler @ 0107987c
                       catch(type#1 @ 00000000) { ... } // from try @ 0107987c with catch @ 0107987c
                       catch(type#1 @ 00000000) { ... } // from try @ 01079900 with catch @ 0107987c
                        */
      if (param_4 == (undefined8 *)0x0) {
        return 2;
      }
      if (param_5 < 2) {
        return 2;
      }
      uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 0x1c0);
      goto LAB_01079a08;
    }
    break;
  case 0x1c:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x1bd);
                    /* try { // try from 010798ac to 011798b3 has its CatchHandler @ 01079944 */
    goto LAB_01079a48;
  case 0x1d:
    if (param_3 < *(byte *)(param_1 + 0x1bd)) {
                    /* try { // try from 010798bc to 011798bf has its CatchHandler @ 01079914 */
      if (param_4 == (undefined8 *)0x0) {
        return 2;
      }
      if (param_5 < 2) {
        return 2;
      }
      uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 0x1da);
      goto LAB_01079a08;
    }
    break;
  case 0x1e:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x1be);
    goto LAB_01079a48;
  case 0x1f:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
                    /* try { // try from 010798fc to 011798ff has its CatchHandler @ 01079910 */
                    /* try { // try from 01079900 to 0117995f has its CatchHandler @ 0107987c */
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x1bf);
    goto LAB_01079a48;
  case 0x20:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010798fc with catch @ 01079910
                        */
    if (param_3 < 2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010798bc with catch @ 01079914
                        */
      if (param_4 == (undefined8 *)0x0) {
        return 2;
      }
      if (param_5 < 2) {
        return 2;
      }
      uVar4 = *(undefined2 *)(param_1 + (ulong)param_3 * 2 + 0x210);
      goto LAB_01079a08;
    }
    break;
  case 0x21:
    if (param_4 == (undefined8 *)0x0) {
      return 4;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010798ac with catch @ 01079944
                        */
    if (param_5 < 4) {
      return 4;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x13c);
LAB_01079950:
    *(undefined4 *)param_4 = uVar5;
    return 4;
  case 0x22:
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (param_5 < 8) {
      return 8;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x208);
    goto LAB_01079a28;
  case 0x23:
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (param_5 < 8) {
      return 8;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x200);
    goto LAB_01079a28;
  case 0x24:
    pcVar9 = *(char **)(param_1 + 0xf8);
    goto LAB_01079a58;
  case 0x25:
    pcVar9 = *(char **)(param_1 + 0x100);
    goto LAB_01079a58;
  case 0x26:
    pcVar9 = *(char **)(param_1 + 0x108);
    goto LAB_01079a58;
  case 0x27:
    pcVar9 = *(char **)(param_1 + 0x110);
    goto LAB_01079a58;
  case 0x28:
    pcVar9 = *(char **)(param_1 + 0x118);
LAB_01079a58:
    sVar2 = strlen(pcVar9);
    sVar2 = sVar2 + 1;
    if (param_4 == (undefined8 *)0x0) {
      return sVar2;
    }
    if ((long)sVar2 <= param_5) {
      memcpy(param_4,pcVar9,sVar2);
      return sVar2;
    }
    return sVar2;
  case 0x29:
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x128);
LAB_01079a48:
    *(undefined1 *)param_4 = uVar3;
    return 1;
  case 0x2a:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x12a);
    goto LAB_01079a08;
  case 0x2b:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 300);
    goto LAB_01079a08;
  case 0x2c:
    if (param_4 == (undefined8 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x130);
LAB_01079a08:
    *(undefined2 *)param_4 = uVar4;
    return 2;
  case 0x2d:
    if (param_4 == (undefined8 *)0x0) {
      return 8;
    }
    if (param_5 < 8) {
      return 8;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x120);
LAB_01079a28:
    *param_4 = uVar7;
    return 8;
  }
  return 0xffffffffffffffff;
}

