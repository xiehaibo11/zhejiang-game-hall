
undefined8 FUN_0184f300(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  int *piVar5;
  size_t sVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  char *pcVar17;
  ulong local_18;
  long local_10;
  long local_8;
  char *pcVar18;
  
  memset(param_2,0,0x680);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  if (*(long *)(param_1 + 0x318) == 0) {
    return 5;
  }
  puVar3 = (uint *)_Unwind_Find_FDE(*(long *)(param_1 + 0x318) +
                                    (-1 - (*(long *)(param_1 + 0x340) >> 0x3f)),param_1 + 0x328);
  if (puVar3 == (uint *)0x0) {
    if (**(int **)(param_1 + 0x318) != -0x2d7fee98) {
      return 5;
    }
    if ((*(int **)(param_1 + 0x318))[1] != -0x2bffffff) {
      return 5;
    }
    lVar15 = *(long *)(param_1 + 0x310);
    param_2[0xc6] = 0x1f;
    *(undefined4 *)(param_2 + 200) = 1;
    lVar10 = lVar15 + 0x130;
    param_2[0xc5] = 0x130;
    lVar4 = 8;
    plVar7 = param_2;
    do {
      *(undefined4 *)(plVar7 + 1) = 1;
      *plVar7 = lVar4;
      lVar4 = lVar4 + 8;
      plVar7 = plVar7 + 2;
    } while (lVar4 != 0x100);
    for (piVar5 = (int *)(lVar15 + 0x250); *piVar5 != 0;
        piVar5 = (int *)((long)piVar5 + (ulong)(uint)piVar5[1])) {
      if (*piVar5 == 0x46508001) {
        plVar7 = param_2 + 0x80;
        do {
          *(undefined4 *)(plVar7 + 1) = 1;
          plVar14 = plVar7 + 2;
          *plVar7 = (long)piVar5 + ((-0x3f0 - lVar10) - (long)param_2) + (long)plVar7;
          plVar7 = plVar14;
        } while (plVar14 != param_2 + 0xc0);
      }
    }
    *(undefined1 *)((long)param_2 + 0x673) = 1;
    param_2[0x3e] = (lVar15 + 0x230) - lVar10;
    *(undefined4 *)(param_2 + 0x3f) = 1;
    *(undefined4 *)(param_2 + 0xc1) = 4;
    param_2[0xc0] = *(long *)(lVar15 + 0x238) - lVar10;
    param_2[0xcd] = 0x60;
LAB_0184f6fc:
    uVar11 = 0;
  }
  else {
    puVar16 = (uint *)((long)puVar3 + (4 - (long)(int)puVar3[1]));
    param_2[0xc9] = *(long *)(param_1 + 0x338);
    pcVar18 = (char *)((long)puVar16 + 9);
    sVar6 = strlen(pcVar18);
    plVar14 = (long *)(pcVar18 + sVar6 + 1);
    plVar7 = plVar14;
    if ((*(char *)((long)puVar16 + 9) == 'e') && (*(char *)((long)puVar16 + 10) == 'h')) {
      plVar7 = plVar14 + 1;
      pcVar18 = (char *)((long)puVar16 + 0xb);
      param_2[0xcf] = *plVar14;
    }
    if ((byte)puVar16[2] < 4) {
LAB_0184f4d8:
      uVar11 = FUN_0184e8b8(plVar7,&local_18);
      param_2[0xcc] = local_18;
      pbVar8 = (byte *)FUN_0184e8e0(uVar11,&local_10);
      param_2[0xcb] = local_10;
      if ((char)puVar16[2] == '\x01') {
        pbVar9 = pbVar8 + 1;
        uVar12 = (ulong)*pbVar8;
      }
      else {
        pbVar9 = (byte *)FUN_0184e8b8(pbVar8,&local_18);
        uVar12 = local_18;
      }
      param_2[0xcd] = uVar12;
      *(undefined1 *)((long)param_2 + 0x671) = 0xff;
      pbVar8 = (byte *)0x0;
      if (*pcVar18 == 'z') {
        pcVar18 = pcVar18 + 1;
        pbVar9 = (byte *)FUN_0184e8b8(pbVar9,&local_18);
        *(undefined1 *)((long)param_2 + 0x672) = 1;
        pbVar8 = pbVar9 + local_18;
      }
      while( true ) {
        pcVar17 = pcVar18 + 1;
        cVar2 = *pcVar18;
        if (cVar2 == '\0') break;
        pcVar18 = pcVar17;
        if (cVar2 == 'L') {
          *(byte *)((long)param_2 + 0x671) = *pbVar9;
LAB_0184f594:
          pbVar9 = pbVar9 + 1;
        }
        else {
          if (cVar2 == 'R') {
            *(byte *)(param_2 + 0xce) = *pbVar9;
            goto LAB_0184f594;
          }
          if (cVar2 == 'P') {
            bVar1 = *pbVar9;
            uVar11 = FUN_0184ed90(bVar1,param_1);
            pbVar9 = (byte *)FUN_0184e920(bVar1,uVar11,pbVar9 + 1,&local_8);
            param_2[0xca] = local_8;
          }
          else {
            if (cVar2 != 'S') goto LAB_0184f604;
            *(undefined1 *)((long)param_2 + 0x673) = 1;
          }
        }
      }
      if (pbVar8 == (byte *)0x0) {
        pbVar8 = pbVar9;
      }
LAB_0184f604:
      if (pbVar8 != (byte *)0x0) {
        FUN_0184ee08(pbVar8,(long)puVar16 + (ulong)*puVar16 + 4,param_1,param_2);
        if (*(byte *)(param_2 + 0xce) == 0xff) {
          iVar13 = 0;
        }
        else {
          switch(*(byte *)(param_2 + 0xce) & 7) {
          case 0:
          case 4:
            iVar13 = 8;
            break;
          default:
                    /* WARNING: Subroutine does not return */
            abort();
          case 2:
            iVar13 = 2;
            break;
          case 3:
            iVar13 = 4;
          }
        }
        lVar4 = 0;
        lVar10 = (long)puVar3 + (ulong)(uint)(iVar13 << 1) + 8;
        if (*(char *)((long)param_2 + 0x672) != '\0') {
          lVar10 = FUN_0184e8b8(lVar10,&local_8);
          lVar4 = lVar10 + local_8;
        }
        cVar2 = *(char *)((long)param_2 + 0x671);
        if (cVar2 != -1) {
          uVar11 = FUN_0184ed90(cVar2,param_1);
          lVar10 = FUN_0184e920(cVar2,uVar11,lVar10,&local_8);
          *(long *)(param_1 + 800) = local_8;
        }
        if (lVar4 == 0) {
          lVar4 = lVar10;
        }
        FUN_0184ee08(lVar4,(long)puVar3 + (ulong)*puVar3 + 4,param_1,param_2);
        goto LAB_0184f6fc;
      }
    }
    else if (((char)*plVar7 == '\b') && (*(char *)((long)plVar7 + 1) == '\0')) {
      plVar7 = (long *)((long)plVar7 + 2);
      goto LAB_0184f4d8;
    }
    uVar11 = 3;
  }
  return uVar11;
}

