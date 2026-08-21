
void png_set_keep_unknown_chunks(long param_1,uint param_2,undefined *param_3,uint param_4)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  uint uVar5;
  int *__dest;
  int *piVar6;
  uint uVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (3 < param_2) {
    pcVar1 = "png_set_keep_unknown_chunks: invalid keep";
LAB_00d789d8:
    png_app_error(param_1,pcVar1);
    return;
  }
  if ((int)param_4 < 1) {
    *(uint *)(param_1 + 0x438) = param_2;
    if (param_4 == 0) {
      return;
    }
    param_4 = 0x11;
    param_3 = &UNK_0194cb2b;
  }
  else if (param_3 == (undefined *)0x0) {
    pcVar1 = "png_set_keep_unknown_chunks: no chunk list";
    goto LAB_00d789d8;
  }
  __dest = *(int **)(param_1 + 0x440);
  uVar7 = 0;
  if (__dest != (int *)0x0) {
    uVar7 = *(uint *)(param_1 + 0x43c);
  }
  if (0x33333333 < uVar7 + param_4) {
    pcVar1 = "png_set_keep_unknown_chunks: too many chunks";
    goto LAB_00d789d8;
  }
  if (param_2 == 0) {
    if (uVar7 != 0) goto LAB_00d78a24;
LAB_00d78b3c:
    __dest = (int *)0x0;
LAB_00d78b40:
    iVar2 = 0;
    piVar6 = __dest;
  }
  else {
    __dest = (int *)png_malloc(param_1,(uVar7 + param_4) * 5);
    if (uVar7 == 0) {
LAB_00d78a24:
      if (__dest != (int *)0x0) goto LAB_00d78a28;
      goto LAB_00d78b40;
    }
    memcpy(__dest,*(void **)(param_1 + 0x440),(ulong)(uVar7 * 5));
    if (__dest == (int *)0x0) goto LAB_00d78b40;
LAB_00d78a28:
    if (param_2 == 0) {
      uVar3 = 0;
      do {
        if (uVar7 != 0) {
          uVar5 = 0;
          piVar6 = __dest;
          do {
            if (*piVar6 == *(int *)(param_3 + (uint)((int)uVar3 * 5))) {
              *(undefined1 *)(piVar6 + 1) = 0;
              break;
            }
            uVar5 = uVar5 + 1;
            piVar6 = (int *)((long)piVar6 + 5);
          } while (uVar5 < uVar7);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != param_4);
    }
    else {
      uVar3 = 0;
      do {
        piVar6 = __dest;
        if (uVar7 != 0) {
          uVar5 = 0;
          do {
            if (*piVar6 == *(int *)(param_3 + (uint)((int)uVar3 * 5))) goto LAB_00d78a78;
            uVar5 = uVar5 + 1;
            piVar6 = (int *)((long)piVar6 + 5);
          } while (uVar5 < uVar7);
        }
        uVar7 = uVar7 + 1;
        *piVar6 = *(int *)(param_3 + (uint)((int)uVar3 * 5));
LAB_00d78a78:
        uVar3 = uVar3 + 1;
        *(char *)(piVar6 + 1) = (char)param_2;
      } while (uVar3 != param_4);
    }
    if (uVar7 == 0) {
LAB_00d78b24:
      if (*(int **)(param_1 + 0x440) == __dest) {
        piVar6 = (int *)0x0;
        iVar2 = 0;
        goto LAB_00d78b4c;
      }
      png_free(param_1,__dest);
      goto LAB_00d78b3c;
    }
    iVar2 = 0;
    piVar6 = __dest;
    piVar4 = __dest;
    do {
      if ((char)piVar4[1] != '\0') {
        if (piVar4 != piVar6) {
          *(char *)(piVar6 + 1) = (char)piVar4[1];
          *piVar6 = *piVar4;
        }
        piVar6 = (int *)((long)piVar6 + 5);
        iVar2 = iVar2 + 1;
      }
      uVar7 = uVar7 - 1;
      piVar4 = (int *)((long)piVar4 + 5);
    } while (uVar7 != 0);
    piVar6 = __dest;
    if (iVar2 == 0) goto LAB_00d78b24;
  }
  __dest = *(int **)(param_1 + 0x440);
LAB_00d78b4c:
  *(int *)(param_1 + 0x43c) = iVar2;
  if (__dest != piVar6) {
    if (__dest != (int *)0x0) {
      png_free(param_1,__dest);
    }
    *(int **)(param_1 + 0x440) = piVar6;
  }
  return;
}

