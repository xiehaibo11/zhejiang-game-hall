
void png_free_data(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar2 = *(long *)(param_2 + 0xa0);
  if ((lVar2 != 0) && (((param_3 & *(uint *)(param_2 + 0x11c)) >> 0xe & 1) != 0)) {
    if (param_4 == 0xffffffff) {
      if (0 < *(int *)(param_2 + 0x94)) {
        lVar5 = 0;
        lVar7 = 8;
        do {
          png_free(param_1,*(undefined8 *)(lVar2 + lVar7));
          lVar2 = *(long *)(param_2 + 0xa0);
          lVar5 = lVar5 + 1;
          lVar7 = lVar7 + 0x38;
        } while (lVar5 < *(int *)(param_2 + 0x94));
      }
      png_free(param_1);
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(undefined4 *)(param_2 + 0x94) = 0;
    }
    else {
      png_free(param_1,*(undefined8 *)(lVar2 + (long)(int)param_4 * 0x38 + 8));
      *(undefined8 *)(*(long *)(param_2 + 0xa0) + (long)(int)param_4 * 0x38 + 8) = 0;
    }
  }
  puVar3 = (uint *)(param_2 + 0x11c);
  uVar4 = *puVar3;
  if (((param_3 & uVar4) >> 0xd & 1) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0xb8));
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffef;
    uVar4 = *puVar3;
  }
  if (((param_3 & uVar4) >> 8 & 1) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x140));
    png_free(param_1,*(undefined8 *)(param_2 + 0x148));
    *(undefined8 *)(param_2 + 0x140) = 0;
    *(undefined8 *)(param_2 + 0x148) = 0;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffbfff;
    uVar4 = *puVar3;
  }
  if (((param_3 & uVar4) >> 7 & 1) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0xf8));
    png_free(param_1,*(undefined8 *)(param_2 + 0x108));
    lVar2 = *(long *)(param_2 + 0x110);
    *(undefined8 *)(param_2 + 0xf8) = 0;
    *(undefined8 *)(param_2 + 0x108) = 0;
    if (lVar2 != 0) {
      if (*(char *)(param_2 + 0x119) != '\0') {
        lVar5 = 0;
        do {
          png_free(param_1,*(undefined8 *)(lVar2 + lVar5 * 8));
          lVar2 = *(long *)(param_2 + 0x110);
          lVar5 = lVar5 + 1;
        } while (lVar5 < (long)(ulong)*(byte *)(param_2 + 0x119));
      }
      png_free(param_1);
      *(undefined8 *)(param_2 + 0x110) = 0;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffbff;
    uVar4 = *puVar3;
  }
  if (((param_3 & uVar4) >> 4 & 1) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x80));
    png_free(param_1,*(undefined8 *)(param_2 + 0x88));
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffefff;
  }
  lVar2 = *(long *)(param_2 + 0x130);
  if ((lVar2 != 0) && (((param_3 & *puVar3) >> 5 & 1) != 0)) {
    if (param_4 == 0xffffffff) {
      if (*(int *)(param_2 + 0x138) != 0) {
        if (0 < *(int *)(param_2 + 0x138)) {
          lVar7 = 0;
          lVar5 = 0;
          do {
            png_free(param_1,*(undefined8 *)(lVar2 + lVar7));
            png_free(param_1,*(undefined8 *)(*(long *)(param_2 + 0x130) + lVar7 + 0x10));
            lVar2 = *(long *)(param_2 + 0x130);
            lVar5 = lVar5 + 1;
            lVar7 = lVar7 + 0x20;
          } while (lVar5 < *(int *)(param_2 + 0x138));
        }
        png_free(param_1);
        *(undefined8 *)(param_2 + 0x130) = 0;
        *(undefined4 *)(param_2 + 0x138) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffdfff;
      lVar2 = *(long *)(param_2 + 0x120);
      goto joined_r0x010bcc7c;
    }
    uVar6 = -(ulong)(param_4 >> 0x1f) & 0xffffffe000000000 | (ulong)param_4 << 5;
    png_free(param_1,*(undefined8 *)(lVar2 + uVar6));
    png_free(param_1,*(undefined8 *)(*(long *)(param_2 + 0x130) + uVar6 + 0x10));
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x130) + uVar6);
    *puVar1 = 0;
    puVar1[2] = 0;
  }
  lVar2 = *(long *)(param_2 + 0x120);
joined_r0x010bcc7c:
  if ((lVar2 != 0) && (((param_3 & *puVar3) >> 9 & 1) != 0)) {
    if (param_4 == 0xffffffff) {
      if (*(int *)(param_2 + 0x128) != 0) {
        if (0 < *(int *)(param_2 + 0x128)) {
          lVar5 = 0;
          lVar7 = 8;
          do {
            png_free(param_1,*(undefined8 *)(lVar2 + lVar7));
            lVar2 = *(long *)(param_2 + 0x120);
            lVar5 = lVar5 + 1;
            lVar7 = lVar7 + 0x20;
          } while (lVar5 < *(int *)(param_2 + 0x128));
        }
        png_free(param_1);
        *(undefined8 *)(param_2 + 0x120) = 0;
        *(undefined4 *)(param_2 + 0x128) = 0;
      }
    }
    else {
      uVar6 = -(ulong)(param_4 >> 0x1f) & 0xffffffe000000000 | (ulong)param_4 << 5;
      png_free(param_1,*(undefined8 *)(lVar2 + uVar6 + 8));
      *(undefined8 *)(*(long *)(param_2 + 0x120) + uVar6 + 8) = 0;
    }
  }
  uVar4 = *puVar3;
  if (((param_3 & uVar4) >> 3 & 1) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0xf0));
    *(undefined8 *)(param_2 + 0xf0) = 0;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffbf;
    uVar4 = *puVar3;
  }
  if (((param_3 & uVar4) >> 0xc & 1) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x18));
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x20) = 0;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
    uVar4 = *puVar3;
  }
  if (((param_3 & uVar4) >> 6 & 1) != 0) {
    lVar2 = *(long *)(param_2 + 0x150);
    if (lVar2 != 0) {
      if (*(int *)(param_2 + 4) != 0) {
        uVar4 = 0;
        do {
          png_free(param_1,*(undefined8 *)(lVar2 + (ulong)uVar4 * 8));
          lVar2 = *(long *)(param_2 + 0x150);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_2 + 4));
      }
      png_free(param_1);
      *(undefined8 *)(param_2 + 0x150) = 0;
      uVar4 = *puVar3;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffff7fff;
  }
  if (param_4 != 0xffffffff) {
    param_3 = param_3 & 0xffffbddf;
  }
  *puVar3 = uVar4 & (param_3 ^ 0xffffffff);
  return;
}

