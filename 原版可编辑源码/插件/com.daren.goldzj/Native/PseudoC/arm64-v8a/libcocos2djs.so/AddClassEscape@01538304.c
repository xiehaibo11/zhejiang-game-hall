
/* v8::internal::CharacterRange::AddClassEscape(char,
   v8::internal::ZoneList<v8::internal::CharacterRange>*, v8::internal::Zone*) */

void v8::internal::CharacterRange::AddClassEscape(char param_1,ZoneList *param_2,Zone *param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  
  switch(param_1) {
  case '*':
    uVar4 = *(uint *)(param_2 + 8);
    iVar7 = *(int *)(param_2 + 0xc);
    if ((int)uVar4 <= iVar7) {
      pvVar2 = *(void **)(param_3 + 0x10);
      uVar10 = uVar4 << 1 | 1;
      uVar9 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar9) {
        pvVar2 = (void *)Zone::NewExpand(param_3,uVar9);
      }
      else {
        *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar9;
      }
      uVar5 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar5) {
        MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
        uVar5 = *(uint *)(param_2 + 0xc);
      }
      *(void **)param_2 = pvVar2;
      uVar8 = 0x10ffff00000000;
LAB_01538adc:
      *(uint *)(param_2 + 8) = uVar10;
      goto LAB_01538ae0;
    }
    lVar6 = *(long *)param_2;
    *(int *)(param_2 + 0xc) = iVar7 + 1;
    uVar8 = 0x10ffff00000000;
    goto LAB_01538710;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case '.':
    uVar4 = *(uint *)(param_2 + 8);
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < (int)uVar4) {
      pvVar2 = *(void **)param_2;
    }
    else {
      pvVar2 = *(void **)(param_3 + 0x10);
      uVar10 = uVar4 << 1 | 1;
      uVar9 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar9) {
        pvVar2 = (void *)Zone::NewExpand(param_3,uVar9);
      }
      else {
        *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar9;
      }
      uVar5 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar5) {
        MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
        uVar5 = *(uint *)(param_2 + 0xc);
      }
      *(void **)param_2 = pvVar2;
      *(uint *)(param_2 + 8) = uVar10;
    }
    *(uint *)(param_2 + 0xc) = uVar5 + 1;
    *(undefined8 *)((long)pvVar2 + (long)(int)uVar5 * 8) = 0x900000000;
    uVar4 = *(uint *)(param_2 + 8);
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < (int)uVar4) {
      pvVar2 = *(void **)param_2;
    }
    else {
      pvVar2 = *(void **)(param_3 + 0x10);
      uVar10 = uVar4 << 1 | 1;
      uVar9 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar9) {
        pvVar2 = (void *)Zone::NewExpand(param_3,uVar9);
      }
      else {
        *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar9;
      }
      uVar5 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar5) {
        MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
        uVar5 = *(uint *)(param_2 + 0xc);
      }
      *(void **)param_2 = pvVar2;
      *(uint *)(param_2 + 8) = uVar10;
    }
    *(uint *)(param_2 + 0xc) = uVar5 + 1;
    *(undefined8 *)((long)pvVar2 + (long)(int)uVar5 * 8) = 0xc0000000b;
    uVar4 = *(uint *)(param_2 + 8);
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < (int)uVar4) {
      pvVar2 = *(void **)param_2;
    }
    else {
      pvVar2 = *(void **)(param_3 + 0x10);
      uVar10 = uVar4 << 1 | 1;
      uVar9 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar9) {
        pvVar2 = (void *)Zone::NewExpand(param_3,uVar9);
      }
      else {
        *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar9;
      }
      uVar5 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar5) {
        MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
        uVar5 = *(uint *)(param_2 + 0xc);
      }
      *(void **)param_2 = pvVar2;
      *(uint *)(param_2 + 8) = uVar10;
    }
    *(uint *)(param_2 + 0xc) = uVar5 + 1;
    *(undefined8 *)((long)pvVar2 + (long)(int)uVar5 * 8) = 0x20270000000e;
    uVar4 = *(uint *)(param_2 + 8);
    iVar7 = *(int *)(param_2 + 0xc);
    uVar9 = 0x202a;
    goto LAB_01538a08;
  case 'D':
    uVar4 = *(uint *)(param_2 + 8);
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < (int)uVar4) {
      pvVar2 = *(void **)param_2;
    }
    else {
      pvVar2 = *(void **)(param_3 + 0x10);
      uVar10 = uVar4 << 1 | 1;
      uVar9 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar9) {
        pvVar2 = (void *)Zone::NewExpand(param_3,uVar9);
      }
      else {
        *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar9;
      }
      uVar5 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar5) {
        MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
        uVar5 = *(uint *)(param_2 + 0xc);
      }
      *(void **)param_2 = pvVar2;
      *(uint *)(param_2 + 8) = uVar10;
    }
    *(uint *)(param_2 + 0xc) = uVar5 + 1;
    *(undefined8 *)((long)pvVar2 + (long)(int)uVar5 * 8) = 0x2f00000000;
    uVar4 = *(uint *)(param_2 + 8);
    iVar7 = *(int *)(param_2 + 0xc);
    uVar9 = 0x3a;
    goto LAB_01538a08;
  case 'S':
    uVar9 = 0;
    uVar3 = 0;
    do {
      uVar4 = *(uint *)(param_2 + 8);
      uVar5 = *(uint *)(param_2 + 0xc);
      uVar11 = uVar3 | (ulong)((&DAT_01a4b12c)[uVar9] - 1) << 0x20;
      if ((int)uVar5 < (int)uVar4) {
        pvVar2 = *(void **)param_2;
      }
      else {
        pvVar2 = *(void **)(param_3 + 0x10);
        uVar10 = uVar4 << 1 | 1;
        uVar3 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
        if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar3) {
          pvVar2 = (void *)Zone::NewExpand(param_3,uVar3);
        }
        else {
          *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar3;
        }
        uVar5 = *(uint *)(param_2 + 0xc);
        if (0 < (int)uVar5) {
          MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
          uVar5 = *(uint *)(param_2 + 0xc);
        }
        *(void **)param_2 = pvVar2;
        *(uint *)(param_2 + 8) = uVar10;
      }
      *(uint *)(param_2 + 0xc) = uVar5 + 1;
      uVar3 = (ulong)(ushort)(&DAT_01a4b130)[uVar9 * 2];
      uVar9 = uVar9 + 2;
      *(ulong *)((long)pvVar2 + (long)(int)uVar5 * 8) = uVar11;
    } while (uVar9 < 0x14);
    uVar4 = *(uint *)(param_2 + 8);
    iVar7 = *(int *)(param_2 + 0xc);
    uVar9 = 0xff00;
LAB_01538a08:
    uVar9 = uVar9 | 0x10ffff00000000;
    if (iVar7 < (int)uVar4) {
LAB_01538a1c:
      *(int *)(param_2 + 0xc) = iVar7 + 1;
      *(ulong *)(*(long *)param_2 + (long)iVar7 * 8) = uVar9;
    }
    else {
LAB_015383bc:
      pvVar2 = *(void **)(param_3 + 0x10);
      uVar5 = uVar4 << 1 | 1;
      uVar3 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar5 << 3;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar3) {
        pvVar2 = (void *)Zone::NewExpand(param_3,uVar3);
      }
      else {
        *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar3;
      }
      uVar4 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar4) {
        MemCopy(pvVar2,*(void **)param_2,(ulong)uVar4 << 3);
        uVar4 = *(uint *)(param_2 + 0xc);
      }
      *(void **)param_2 = pvVar2;
      *(uint *)(param_2 + 8) = uVar5;
      *(uint *)(param_2 + 0xc) = uVar4 + 1;
      *(ulong *)((long)pvVar2 + (long)(int)uVar4 * 8) = uVar9;
    }
    break;
  case 'W':
    uVar9 = 0;
    uVar3 = 0;
    do {
      uVar4 = *(uint *)(param_2 + 8);
      uVar5 = *(uint *)(param_2 + 0xc);
      uVar11 = uVar3 | (ulong)((&DAT_01a4b180)[uVar9] - 1) << 0x20;
      if ((int)uVar5 < (int)uVar4) {
        pvVar2 = *(void **)param_2;
      }
      else {
        pvVar2 = *(void **)(param_3 + 0x10);
        uVar10 = uVar4 << 1 | 1;
        uVar3 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
        if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar3) {
          pvVar2 = (void *)Zone::NewExpand(param_3,uVar3);
        }
        else {
          *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar3;
        }
        uVar5 = *(uint *)(param_2 + 0xc);
        if (0 < (int)uVar5) {
          MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
          uVar5 = *(uint *)(param_2 + 0xc);
        }
        *(void **)param_2 = pvVar2;
        *(uint *)(param_2 + 8) = uVar10;
      }
      *(uint *)(param_2 + 0xc) = uVar5 + 1;
      uVar3 = (ulong)*(ushort *)(&DAT_01a4b184 + uVar9);
      uVar9 = uVar9 + 2;
      *(ulong *)((long)pvVar2 + (long)(int)uVar5 * 8) = uVar11;
    } while (uVar9 < 8);
    uVar4 = *(uint *)(param_2 + 8);
    iVar7 = *(int *)(param_2 + 0xc);
    if ((int)uVar4 <= iVar7) {
      pvVar2 = *(void **)(param_3 + 0x10);
      uVar10 = uVar4 << 1 | 1;
      uVar9 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar9) {
        pvVar2 = (void *)Zone::NewExpand(param_3,uVar9);
      }
      else {
        *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar9;
      }
      uVar5 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar5) {
        MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
        uVar5 = *(uint *)(param_2 + 0xc);
      }
      uVar8 = 0x10ffff0000007b;
      *(void **)param_2 = pvVar2;
      goto LAB_01538adc;
    }
    lVar6 = *(long *)param_2;
    *(int *)(param_2 + 0xc) = iVar7 + 1;
    uVar8 = 0x10ffff0000007b;
LAB_01538710:
    *(undefined8 *)(lVar6 + (long)iVar7 * 8) = uVar8;
    break;
  case 'd':
    uVar4 = *(uint *)(param_2 + 8);
    iVar7 = *(int *)(param_2 + 0xc);
    uVar9 = 0x3900000030;
    if ((int)uVar4 <= iVar7) goto LAB_015383bc;
    goto LAB_01538a1c;
  case 'n':
    uVar4 = *(uint *)(param_2 + 8);
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < (int)uVar4) {
      pvVar2 = *(void **)param_2;
    }
    else {
      pvVar2 = *(void **)(param_3 + 0x10);
      uVar10 = uVar4 << 1 | 1;
      uVar9 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar9) {
        pvVar2 = (void *)Zone::NewExpand(param_3,uVar9);
      }
      else {
        *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar9;
      }
      uVar5 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar5) {
        MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
        uVar5 = *(uint *)(param_2 + 0xc);
      }
      *(void **)param_2 = pvVar2;
      *(uint *)(param_2 + 8) = uVar10;
    }
    *(uint *)(param_2 + 0xc) = uVar5 + 1;
    *(undefined8 *)((long)pvVar2 + (long)(int)uVar5 * 8) = 0xa0000000a;
    uVar4 = *(uint *)(param_2 + 8);
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < (int)uVar4) {
      pvVar2 = *(void **)param_2;
    }
    else {
      pvVar2 = *(void **)(param_3 + 0x10);
      uVar10 = uVar4 << 1 | 1;
      uVar9 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar9) {
        pvVar2 = (void *)Zone::NewExpand(param_3,uVar9);
      }
      else {
        *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar9;
      }
      uVar5 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar5) {
        MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
        uVar5 = *(uint *)(param_2 + 0xc);
      }
      *(void **)param_2 = pvVar2;
      *(uint *)(param_2 + 8) = uVar10;
    }
    *(uint *)(param_2 + 0xc) = uVar5 + 1;
    *(undefined8 *)((long)pvVar2 + (long)(int)uVar5 * 8) = 0xd0000000d;
    uVar4 = *(uint *)(param_2 + 8);
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < (int)uVar4) {
      pvVar2 = *(void **)param_2;
    }
    else {
      pvVar2 = *(void **)(param_3 + 0x10);
      uVar10 = uVar4 << 1 | 1;
      uVar9 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar9) {
        pvVar2 = (void *)Zone::NewExpand(param_3,uVar9);
      }
      else {
        *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar9;
      }
      uVar5 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar5) {
        MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
        uVar5 = *(uint *)(param_2 + 0xc);
      }
      *(void **)param_2 = pvVar2;
      *(uint *)(param_2 + 8) = uVar10;
    }
    uVar8 = 0x202900002028;
LAB_01538ae0:
    *(uint *)(param_2 + 0xc) = uVar5 + 1;
    *(undefined8 *)((long)pvVar2 + (long)(int)uVar5 * 8) = uVar8;
    break;
  case 's':
    uVar9 = 0;
    do {
      uVar1 = (&DAT_01a4b12c)[uVar9];
      iVar7 = *(int *)(&DAT_01a4b130 + uVar9 * 2);
      uVar4 = *(uint *)(param_2 + 8);
      uVar5 = *(uint *)(param_2 + 0xc);
      if ((int)uVar5 < (int)uVar4) {
        pvVar2 = *(void **)param_2;
      }
      else {
        pvVar2 = *(void **)(param_3 + 0x10);
        uVar10 = uVar4 << 1 | 1;
        uVar3 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
        if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar3) {
          pvVar2 = (void *)Zone::NewExpand(param_3,uVar3);
        }
        else {
          *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar3;
        }
        uVar5 = *(uint *)(param_2 + 0xc);
        if (0 < (int)uVar5) {
          MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
          uVar5 = *(uint *)(param_2 + 0xc);
        }
        *(void **)param_2 = pvVar2;
        *(uint *)(param_2 + 8) = uVar10;
      }
      uVar9 = uVar9 + 2;
      *(uint *)(param_2 + 0xc) = uVar5 + 1;
      *(ulong *)((long)pvVar2 + (long)(int)uVar5 * 8) = CONCAT44(iVar7 + -1,uVar1);
    } while (uVar9 < 0x14);
    break;
  case 'w':
    uVar9 = 0;
    do {
      uVar1 = (&DAT_01a4b180)[uVar9];
      iVar7 = (&DAT_01a4b184)[uVar9];
      uVar4 = *(uint *)(param_2 + 8);
      uVar5 = *(uint *)(param_2 + 0xc);
      if ((int)uVar5 < (int)uVar4) {
        pvVar2 = *(void **)param_2;
      }
      else {
        pvVar2 = *(void **)(param_3 + 0x10);
        uVar10 = uVar4 << 1 | 1;
        uVar3 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar10 << 3;
        if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar2) < uVar3) {
          pvVar2 = (void *)Zone::NewExpand(param_3,uVar3);
        }
        else {
          *(ulong *)(param_3 + 0x10) = (long)pvVar2 + uVar3;
        }
        uVar5 = *(uint *)(param_2 + 0xc);
        if (0 < (int)uVar5) {
          MemCopy(pvVar2,*(void **)param_2,(ulong)uVar5 << 3);
          uVar5 = *(uint *)(param_2 + 0xc);
        }
        *(void **)param_2 = pvVar2;
        *(uint *)(param_2 + 8) = uVar10;
      }
      uVar9 = uVar9 + 2;
      *(uint *)(param_2 + 0xc) = uVar5 + 1;
      *(ulong *)((long)pvVar2 + (long)(int)uVar5 * 8) = CONCAT44(iVar7 + -1,uVar1);
    } while (uVar9 < 8);
  }
  return;
}

