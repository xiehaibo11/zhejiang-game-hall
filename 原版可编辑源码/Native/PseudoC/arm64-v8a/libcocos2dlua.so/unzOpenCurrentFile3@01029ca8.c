
/* WARNING: Removing unreachable block (ram,0x0102a1a8) */
/* cocos2d::unzOpenCurrentFile3(void*, int*, int*, int, char const*) */

int cocos2d::unzOpenCurrentFile3(void *param_1,int *param_2,int *param_3,int param_4,char *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong local_80;
  long local_78;
  byte local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = -0x66;
  if ((param_1 == (void *)0x0) || (param_5 != (char *)0x0)) goto LAB_01029d5c;
  if (*(long *)((long)param_1 + 0x90) == 0) {
    iVar2 = -0x66;
    goto LAB_01029d5c;
  }
  puVar9 = *(undefined8 **)((long)param_1 + 0x140);
  if (puVar9 != (undefined8 *)0x0) {
    if ((void *)*puVar9 != (void *)0x0) {
      free((void *)*puVar9);
    }
    *puVar9 = 0;
    if (puVar9[0x10] == 8) {
      inflateEnd(puVar9 + 1);
    }
    free(puVar9);
    *(undefined8 *)((long)param_1 + 0x140) = 0;
  }
  lVar4 = call_zseek64(param_1,*(void **)((long)param_1 + 0x60),
                       *(long *)((long)param_1 + 0x78) + *(long *)((long)param_1 + 0x138),0);
  if (lVar4 == 0) {
    iVar2 = FUN_0102a978(param_1,*(undefined8 *)((long)param_1 + 0x60),&local_78);
    if (iVar2 == 0) {
      iVar2 = 0;
      if (local_78 != 0x4034b50) {
        iVar2 = -0x67;
      }
    }
    else {
      iVar2 = -1;
    }
    uVar10 = *(undefined8 *)((long)param_1 + 0x60);
    iVar3 = (**(code **)((long)param_1 + 8))
                      (*(undefined8 *)((long)param_1 + 0x38),uVar10,local_6c,1);
    if (iVar3 == 1) {
      uVar12 = (ulong)local_6c[0];
LAB_01029e04:
      iVar3 = (**(code **)((long)param_1 + 8))
                        (*(undefined8 *)((long)param_1 + 0x38),uVar10,local_6c,1);
      if (iVar3 == 1) {
        uVar7 = (ulong)local_6c[0];
      }
      else {
        iVar3 = (**(code **)((long)param_1 + 0x30))(*(undefined8 *)((long)param_1 + 0x38),uVar10);
        uVar7 = uVar12;
        if (iVar3 != 0) goto LAB_01029e44;
      }
      local_80 = uVar12 | uVar7 << 8;
    }
    else {
      iVar3 = (**(code **)((long)param_1 + 0x30))(*(undefined8 *)((long)param_1 + 0x38),uVar10);
      uVar12 = 0;
      if (iVar3 == 0) goto LAB_01029e04;
LAB_01029e44:
      local_80 = 0;
      iVar2 = -1;
    }
    uVar10 = *(undefined8 *)((long)param_1 + 0x60);
    iVar3 = (**(code **)((long)param_1 + 8))
                      (*(undefined8 *)((long)param_1 + 0x38),uVar10,local_6c,1);
    bVar11 = local_6c[0];
    if (iVar3 == 1) {
LAB_01029e9c:
      iVar3 = (**(code **)((long)param_1 + 8))
                        (*(undefined8 *)((long)param_1 + 0x38),uVar10,local_6c,1);
      if ((iVar3 == 1) ||
         (iVar3 = (**(code **)((long)param_1 + 0x30))(*(undefined8 *)((long)param_1 + 0x38),uVar10),
         iVar3 == 0)) {
        bVar11 = bVar11 & 8;
      }
      else {
        bVar11 = 0;
        iVar2 = -1;
      }
    }
    else {
      iVar3 = (**(code **)((long)param_1 + 0x30))(*(undefined8 *)((long)param_1 + 0x38),uVar10);
      bVar11 = 0;
      if (iVar3 == 0) goto LAB_01029e9c;
      iVar2 = -1;
    }
    uVar10 = *(undefined8 *)((long)param_1 + 0x60);
    iVar3 = (**(code **)((long)param_1 + 8))
                      (*(undefined8 *)((long)param_1 + 0x38),uVar10,local_6c,1);
    if (iVar3 == 1) {
      uVar12 = (ulong)local_6c[0];
LAB_01029f1c:
      iVar3 = (**(code **)((long)param_1 + 8))
                        (*(undefined8 *)((long)param_1 + 0x38),uVar10,local_6c,1);
      if (iVar3 == 1) {
        uVar7 = (ulong)local_6c[0];
      }
      else {
        iVar3 = (**(code **)((long)param_1 + 0x30))(*(undefined8 *)((long)param_1 + 0x38),uVar10);
        uVar7 = uVar12;
        if (iVar3 != 0) goto LAB_01029f58;
      }
      local_80 = uVar12 | uVar7 << 8;
      if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 0102a314 with catch @ 01029f90 */
        if (((local_80 == *(ulong *)((long)param_1 + 200)) && (local_80 < 0xd)) &&
           ((1L << (uVar12 & 0x3f) & 0x1101U) != 0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = -0x67;
        }
      }
    }
    else {
      iVar3 = (**(code **)((long)param_1 + 0x30))(*(undefined8 *)((long)param_1 + 0x38),uVar10);
      if (iVar3 == 0) {
        uVar12 = 0;
        goto LAB_01029f1c;
      }
LAB_01029f58:
      local_80 = 0;
      iVar2 = -1;
    }
    iVar3 = FUN_0102a978(param_1,*(undefined8 *)((long)param_1 + 0x60),&local_80);
    if (iVar3 != 0) {
      iVar2 = -1;
    }
    iVar3 = FUN_0102a978(param_1,*(undefined8 *)((long)param_1 + 0x60),&local_80);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        if (local_80 == *(ulong *)((long)param_1 + 0xd8)) {
          iVar2 = 0;
        }
        else {
          iVar2 = -0x67;
          if (bVar11 != 0) {
            iVar2 = 0;
          }
        }
      }
    }
    else {
      iVar2 = -1;
    }
    iVar3 = FUN_0102a978(param_1,*(undefined8 *)((long)param_1 + 0x60),&local_80);
    if (iVar3 == 0) {
      if ((iVar2 == 0) && (local_80 != 0xffffffff)) {
        if (local_80 == *(ulong *)((long)param_1 + 0xe0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = -0x67;
          if (bVar11 != 0) {
            iVar2 = 0;
          }
        }
      }
    }
    else {
      iVar2 = -1;
    }
                    /* try { // try from 0102a01c to 0112a02b has its CatchHandler @ 0102a42c */
    iVar3 = FUN_0102a978(param_1,*(undefined8 *)((long)param_1 + 0x60),&local_80);
    if (iVar3 == 0) {
      if ((iVar2 == 0) && (local_80 != 0xffffffff)) {
        if (local_80 == *(ulong *)((long)param_1 + 0xe8)) {
          iVar2 = 0;
        }
        else {
          iVar2 = -0x67;
          if (bVar11 != 0) {
            iVar2 = 0;
          }
        }
      }
    }
    else {
      iVar2 = -1;
    }
    uVar10 = *(undefined8 *)((long)param_1 + 0x60);
    iVar3 = (**(code **)((long)param_1 + 8))
                      (*(undefined8 *)((long)param_1 + 0x38),uVar10,local_6c,1);
    if (iVar3 == 1) {
      uVar12 = (ulong)local_6c[0];
LAB_0102a070:
                    /* try { // try from 0102a07c to 0112a08b has its CatchHandler @ 0102a3d4 */
      iVar3 = (**(code **)((long)param_1 + 8))
                        (*(undefined8 *)((long)param_1 + 0x38),uVar10,local_6c,1);
      if (iVar3 == 1) {
        uVar7 = (ulong)local_6c[0];
      }
      else {
        iVar3 = (**(code **)((long)param_1 + 0x30))(*(undefined8 *)((long)param_1 + 0x38),uVar10);
        uVar7 = uVar12;
        if (iVar3 != 0) goto LAB_0102a100;
      }
      uVar12 = uVar12 | uVar7 << 8;
      if ((iVar2 == 0) && (iVar2 = 0, uVar12 != *(ulong *)((long)param_1 + 0xf0))) {
        iVar2 = -0x67;
      }
    }
    else {
      iVar3 = (**(code **)((long)param_1 + 0x30))(*(undefined8 *)((long)param_1 + 0x38),uVar10);
      uVar12 = 0;
      if (iVar3 == 0) goto LAB_0102a070;
LAB_0102a100:
      uVar12 = 0;
      iVar2 = -1;
    }
    uVar10 = *(undefined8 *)((long)param_1 + 0x60);
    iVar3 = (**(code **)((long)param_1 + 8))
                      (*(undefined8 *)((long)param_1 + 0x38),uVar10,local_6c,1);
    if (iVar3 == 1) {
      uVar13 = (uint)local_6c[0];
    }
    else {
      iVar3 = (**(code **)((long)param_1 + 0x30))(*(undefined8 *)((long)param_1 + 0x38),uVar10);
      if (iVar3 != 0) goto LAB_01029d50;
      uVar13 = 0;
    }
    iVar3 = (**(code **)((long)param_1 + 8))
                      (*(undefined8 *)((long)param_1 + 0x38),uVar10,local_6c,1);
                    /* try { // try from 0102a178 to 0112a18f has its CatchHandler @ 0102a430 */
    if (iVar3 == 1) {
      uVar6 = (uint)local_6c[0];
    }
    else {
      iVar3 = (**(code **)((long)param_1 + 0x30))(*(undefined8 *)((long)param_1 + 0x38),uVar10);
                    /* try { // try from 0102a198 to 0112a1a7 has its CatchHandler @ 0102a428 */
      uVar6 = uVar13;
      if (iVar3 != 0) goto LAB_01029d50;
    }
    uVar13 = uVar13 | uVar6 << 8;
    if (iVar2 == 0) {
      lVar4 = *(long *)((long)param_1 + 0x138);
                    /* try { // try from 0102a1bc to 0112a1cb has its CatchHandler @ 0102a42c */
      puVar9 = malloc(0x140);
      if (puVar9 == (undefined8 *)0x0) {
                    /* try { // try from 0102a234 to 0112a24b has its CatchHandler @ 0102a430 */
        iVar2 = -0x68;
        goto LAB_01029d5c;
      }
      pvVar5 = malloc(0x4000);
      *puVar9 = pvVar5;
      puVar9[0x11] = uVar12 + lVar4 + 0x1e;
      *(uint *)(puVar9 + 0x12) = uVar13;
      puVar9[0x13] = 0;
      *(int *)(puVar9 + 0x27) = param_4;
      if (pvVar5 == (void *)0x0) {
        free(puVar9);
        iVar2 = -0x68;
        goto LAB_01029d5c;
      }
      puVar9[0x10] = 0;
      if (param_2 != (int *)0x0) {
        *param_2 = (int)*(undefined8 *)((long)param_1 + 200);
      }
      if (param_3 != (int *)0x0) {
        *param_3 = 6;
                    /* try { // try from 0102a210 to 0112a21f has its CatchHandler @ 0102a3a8 */
        uVar7 = *(ulong *)((long)param_1 + 0xc0) & 6;
        if (uVar7 == 2) {
          iVar2 = 9;
        }
        else if (uVar7 == 4) {
                    /* try { // try from 0102a26c to 0112a27b has its CatchHandler @ 0102a3b0 */
          iVar2 = 2;
        }
        else {
          if (uVar7 != 6) goto LAB_0102a27c;
          iVar2 = 1;
        }
        *param_3 = iVar2;
      }
LAB_0102a27c:
      uVar10 = *(undefined8 *)((long)param_1 + 0xd8);
      puVar9[0x14] = 0;
      puVar9[0x15] = 0;
      puVar9[0x16] = uVar10;
      lVar8 = *(long *)((long)param_1 + 200);
      puVar9[0x24] = *(undefined8 *)((long)param_1 + 0x60);
      puVar9[0x25] = lVar8;
      uVar15 = *(undefined8 *)((long)param_1 + 8);
      uVar14 = *(undefined8 *)param_1;
                    /* try { // try from 0102a298 to 0112a2ab has its CatchHandler @ 0102a3d0 */
      uVar10 = *(undefined8 *)((long)param_1 + 0x10);
      puVar9[0x1c] = *(undefined8 *)((long)param_1 + 0x18);
      puVar9[0x1b] = uVar10;
      puVar9[0x1a] = uVar15;
      puVar9[0x19] = uVar14;
      uVar18 = *(undefined8 *)((long)param_1 + 0x38);
      uVar17 = *(undefined8 *)((long)param_1 + 0x30);
      uVar14 = *(undefined8 *)((long)param_1 + 0x40);
      uVar10 = *(undefined8 *)((long)param_1 + 0x50);
      uVar16 = *(undefined8 *)((long)param_1 + 0x28);
      uVar15 = *(undefined8 *)((long)param_1 + 0x20);
      puVar9[0x22] = *(undefined8 *)((long)param_1 + 0x48);
      puVar9[0x21] = uVar14;
      puVar9[0x23] = uVar10;
      puVar9[0x20] = uVar18;
      puVar9[0x1f] = uVar17;
                    /* try { // try from 0102a2bc to 0112a2cf has its CatchHandler @ 0102a3ac */
      puVar9[0x1e] = uVar16;
      puVar9[0x1d] = uVar15;
      uVar10 = *(undefined8 *)((long)param_1 + 0x78);
      puVar9[6] = 0;
      puVar9[0x26] = uVar10;
      if ((param_4 == 0) && (lVar8 == 0xc)) {
        *(undefined4 *)(puVar9 + 0x27) = 1;
      }
      else if ((param_4 == 0) && (lVar8 == 8)) {
                    /* try { // try from 0102a304 to 0112a313 has its CatchHandler @ 0102a3d8 */
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 2) = 0;
        puVar9[10] = 0;
        puVar9[0xb] = 0;
        puVar9[9] = 0;
                    /* try { // try from 0102a314 to 0112a44b has its CatchHandler @ 01029f90 */
        iVar2 = inflateInit2_(puVar9 + 1,0xfffffff1,"1.2.8",0x70);
        if (iVar2 != 0) {
          free(puVar9);
          goto LAB_01029d5c;
        }
        puVar9[0x10] = 8;
        lVar4 = *(long *)((long)param_1 + 0x138);
      }
      uVar14 = *(undefined8 *)((long)param_1 + 0xe8);
      uVar10 = *(undefined8 *)((long)param_1 + 0xe0);
      iVar2 = 0;
      *(undefined4 *)(puVar9 + 2) = 0;
      puVar9[0xf] = (ulong)(uVar13 + (int)uVar12) + lVar4 + 0x1e;
      puVar9[0x18] = uVar14;
      puVar9[0x17] = uVar10;
      *(undefined8 **)((long)param_1 + 0x140) = puVar9;
      *(undefined4 *)((long)param_1 + 0x148) = 0;
      goto LAB_01029d5c;
    }
  }
LAB_01029d50:
  iVar2 = -0x67;
LAB_01029d5c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

