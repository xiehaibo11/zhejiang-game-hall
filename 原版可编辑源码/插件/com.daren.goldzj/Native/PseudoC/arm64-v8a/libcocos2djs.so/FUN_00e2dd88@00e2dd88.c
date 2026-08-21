
int FUN_00e2dd88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  void *__dest;
  uint *puVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined4 uVar25;
  uint uVar26;
  long lVar27;
  uint *puVar28;
  undefined4 *puVar29;
  ushort *puVar30;
  ulong uVar31;
  ulong uVar32;
  long *plVar33;
  undefined8 uVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  undefined8 uVar38;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined2 local_98;
  ushort local_96;
  undefined1 auStack_90 [8];
  ushort local_88;
  ushort local_86;
  ushort local_82;
  ushort local_80;
  int local_74;
  undefined1 auStack_70 [12];
  int local_64;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uVar34 = *(undefined8 *)(param_1 + 0xc0);
  local_74 = 0;
  puVar28 = *(uint **)(param_1 + 0x4c0);
  if (puVar28 == (uint *)0x0) {
    local_74 = (**(code **)(param_1 + 0x340))(param_1,0x67766172,uVar34,auStack_70);
    if ((local_74 != 0) &&
       (local_74 = (**(code **)(param_1 + 0x340))(param_1,0x43464632,uVar34,auStack_70),
       local_74 != 0)) {
      return local_74;
    }
    local_74 = (**(code **)(param_1 + 0x340))(param_1,0x66766172,uVar34,auStack_70);
    if (local_74 != 0) {
      return local_74;
    }
    lVar35 = FUN_00e1d4a0(uVar34);
    local_74 = FUN_00e1dd74(uVar34,&DAT_01975c78,auStack_90);
    uVar7 = local_86;
    if (local_74 != 0) {
      return local_74;
    }
    puVar10 = (uint *)FUN_00e1388c(uVar1,0x90,&local_74);
    *(uint **)(param_1 + 0x4c0) = puVar10;
    if (local_74 != 0) {
      return local_74;
    }
    uVar37 = (uint)local_86;
    bVar3 = (uint)uVar7 * 4 + 6 == (uint)local_80;
    *puVar10 = uVar37;
  }
  else {
    uVar37 = *puVar28;
    bVar3 = false;
    lVar35 = 0;
    puVar10 = puVar28;
  }
  uVar31 = (ulong)uVar37;
  uVar2 = *(uint *)(param_1 + 0x18) >> 0x10;
  uVar36 = (ulong)uVar2;
  uVar32 = (uVar31 * 0x30 | 8) - 1 & 0x3ffffffff0;
  uVar23 = uVar31 * 2 + 7 & 0x3fffffff8;
  uVar21 = (ulong)((uVar2 << 4 | 8) - 1 & 0xffff0);
  lVar16 = (ulong)(uVar2 * uVar37) * 8;
  if (puVar28 != (uint *)0x0) goto joined_r0x00e2e64c;
  lVar14 = uVar37 * 5 + uVar23 + uVar32 + lVar16 + uVar21 + 0x20;
  *(long *)(puVar10 + 8) = lVar14;
  puVar28 = (uint *)FUN_00e1388c(uVar1,lVar14,&local_74);
  if (local_74 != 0) {
    return local_74;
  }
  lVar14 = (long)puVar28 + uVar23 + 0x20;
  plVar33 = (long *)(lVar14 + uVar32);
  *(uint **)(*(long *)(param_1 + 0x4c0) + 0x18) = puVar28;
  *puVar28 = uVar37;
  puVar28[1] = 0xffffffff;
  puVar28[2] = uVar2;
  *(long *)(puVar28 + 4) = lVar14;
  *(long **)(puVar28 + 6) = plVar33;
  if (uVar2 != 0) {
    plVar17 = plVar33;
    lVar14 = (long)plVar33 + uVar21;
    do {
      *plVar17 = lVar14;
      uVar36 = uVar36 - 1;
      lVar14 = lVar14 + uVar31 * 8;
      plVar17 = plVar17 + 2;
    } while (uVar36 != 0);
  }
  if (uVar37 != 0) {
    lVar14 = (long)plVar33 + uVar21 + lVar16;
    if (uVar37 == 1) {
      uVar18 = 0;
    }
    else {
      uVar18 = uVar31 & 0xfffffffe;
      lVar14 = lVar14 + uVar18 * 5;
      lVar19 = (long)puVar28 + uVar32 + uVar21 + uVar23 + lVar16 + 0x25;
      plVar33 = (long *)((long)puVar28 + uVar23 + 0x50);
      uVar36 = uVar18;
      do {
        lVar27 = lVar19 + -5;
        *plVar33 = lVar19;
        lVar19 = lVar19 + 10;
        uVar36 = uVar36 - 2;
        plVar33[-6] = lVar27;
        plVar33 = plVar33 + 0xc;
      } while (uVar36 != 0);
      if (uVar18 == uVar31) goto LAB_00e2e14c;
    }
    lVar19 = uVar31 - uVar18;
    plVar33 = (long *)((long)puVar28 + uVar23 + uVar18 * 0x30 + 0x20);
    do {
      *plVar33 = lVar14;
      lVar19 = lVar19 + -1;
      lVar14 = lVar14 + 5;
      plVar33 = plVar33 + 6;
    } while (lVar19 != 0);
  }
LAB_00e2e14c:
  iVar8 = FUN_00e1bb5c(uVar34,lVar35 + (ulong)local_88);
  if (iVar8 != 0) {
    return iVar8;
  }
  if (uVar37 != 0) {
    lVar35 = 0;
    plVar33 = *(long **)(puVar28 + 4);
    do {
      local_74 = 0;
      iVar8 = FUN_00e1dd74(uVar34,&DAT_01975c9c,&local_b8);
      if (iVar8 != 0) {
        return iVar8;
      }
      plVar33[4] = local_b8;
      plVar33[2] = lStack_a8;
      plVar33[1] = local_b0;
      plVar33[3] = local_a0;
      *(uint *)(plVar33 + 5) = (uint)local_96;
      *(char *)*plVar33 = (char)((ulong)local_b8 >> 0x18);
      *(char *)(*plVar33 + 1) = (char)((ulong)plVar33[4] >> 0x10);
      *(char *)(*plVar33 + 2) = (char)((ulong)plVar33[4] >> 8);
      *(char *)(*plVar33 + 3) = (char)plVar33[4];
      *(undefined1 *)(*plVar33 + 4) = 0;
      *(undefined2 *)((long)puVar28 + lVar35 * 2 + 0x20) = local_98;
      lVar14 = plVar33[2];
      if ((lVar14 < plVar33[1]) || (plVar33[3] < lVar14)) {
        plVar33[1] = lVar14;
        plVar33[3] = lVar14;
      }
      lVar35 = lVar35 + 1;
      plVar33 = plVar33 + 6;
    } while ((uint)lVar35 < uVar37);
  }
  local_74 = 0;
  lVar35 = FUN_00e13bcc(uVar1,8,0,(ulong)(uVar2 * uVar37),0,&local_74);
  lVar14 = *(long *)(param_1 + 0x4c0);
  *(long *)(lVar14 + 0x28) = lVar35;
  if (local_74 != 0) {
    return local_74;
  }
  if (local_82 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(char *)(lVar14 + 0x30) == '\0') {
      uVar11 = FUN_00e1d4a0(uVar34);
      FUN_00e30304(param_1);
      iVar8 = FUN_00e1bb5c(uVar34,uVar11);
      if (iVar8 != 0) {
        return iVar8;
      }
      uVar9 = (uint)local_82;
      local_74 = 0;
      if (local_82 == 0) goto LAB_00e2e368;
      lVar35 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x28);
      local_74 = 0;
    }
    plVar33 = *(long **)(puVar28 + 6);
    lVar14 = 4;
    if (bVar3) {
      lVar14 = 6;
    }
    lVar14 = lVar14 + uVar31 * 4;
    if (uVar37 == 0) {
      if (bVar3) {
        uVar26 = 0;
        puVar10 = (uint *)(plVar33 + 1);
        do {
          local_74 = FUN_00e1d718(uVar34,lVar14);
          if (local_74 != 0) {
            return local_74;
          }
          uVar9 = FUN_00e1d970(uVar34);
          *puVar10 = uVar9 & 0xffff;
          FUN_00e1d970(uVar34);
          uVar9 = FUN_00e1d970(uVar34);
          puVar10[1] = uVar9 & 0xffff;
          FUN_00e304e8(*(undefined8 *)(param_1 + 0x4c0),0,*(undefined8 *)(puVar10 + -2),lVar35);
          FUN_00e1d90c(uVar34);
          uVar9 = (uint)local_82;
          uVar26 = uVar26 + 1;
          puVar10 = puVar10 + 4;
        } while (uVar26 < local_82);
      }
      else {
        puVar29 = (undefined4 *)((long)plVar33 + 0xc);
        uVar26 = 0;
        do {
          local_74 = FUN_00e1d718(uVar34,lVar14);
          if (local_74 != 0) {
            return local_74;
          }
          uVar9 = FUN_00e1d970(uVar34);
          puVar29[-1] = uVar9 & 0xffff;
          FUN_00e1d970(uVar34);
          *puVar29 = 0xffff;
          FUN_00e304e8(*(undefined8 *)(param_1 + 0x4c0),0,*(undefined8 *)(puVar29 + -3),lVar35);
          FUN_00e1d90c(uVar34);
          uVar9 = (uint)local_82;
          uVar26 = uVar26 + 1;
          puVar29 = puVar29 + 4;
        } while (uVar26 < local_82);
      }
    }
    else {
      uVar26 = 0;
      do {
        local_74 = FUN_00e1d718(uVar34,lVar14);
        if (local_74 != 0) {
          return local_74;
        }
        uVar9 = FUN_00e1d970(uVar34);
        *(uint *)(plVar33 + 1) = uVar9 & 0xffff;
        FUN_00e1d970(uVar34);
        lVar27 = *plVar33;
        lVar19 = 0;
        do {
          uVar11 = FUN_00e1da20(uVar34);
          *(undefined8 *)(lVar27 + lVar19 * 8) = uVar11;
          lVar19 = lVar19 + 1;
        } while (uVar37 != (uint)lVar19);
        if (bVar3) {
          uVar9 = FUN_00e1d970(uVar34);
          uVar9 = uVar9 & 0xffff;
        }
        else {
          uVar9 = 0xffff;
        }
        *(uint *)((long)plVar33 + 0xc) = uVar9;
        FUN_00e304e8(*(undefined8 *)(param_1 + 0x4c0),uVar37,*plVar33,lVar35);
        lVar35 = lVar35 + uVar31 * 8;
        FUN_00e1d90c(uVar34);
        uVar9 = (uint)local_82;
        uVar26 = uVar26 + 1;
        plVar33 = plVar33 + 2;
      } while (uVar26 < local_82);
    }
  }
LAB_00e2e368:
  if (uVar2 != uVar9) {
    lVar35 = *(long *)(param_1 + 0x370);
    uVar25 = 0x11;
    cVar4 = (**(code **)(lVar35 + 0x128))(param_1,0x11,&local_b8,&local_64);
    if (cVar4 == '\0') {
      uVar25 = 2;
      cVar4 = (**(code **)(lVar35 + 0x128))(param_1,2,&local_b8,&local_64);
      if (cVar4 == '\0') goto LAB_00e2e5f0;
    }
    cVar4 = (**(code **)(lVar35 + 0x128))(param_1,6,&local_b8,&local_64);
    if (cVar4 != '\0') {
      lVar14 = *(long *)(puVar28 + 6);
      lVar35 = lVar14 + (ulong)local_82 * 0x10;
      *(undefined4 *)(lVar35 + 8) = uVar25;
      *(undefined4 *)(lVar35 + 0xc) = 6;
      if (uVar37 != 0) {
        puVar15 = *(undefined8 **)(lVar14 + (ulong)local_82 * 0x10);
        uVar36 = (ulong)(uVar37 - 1);
        lVar35 = *(long *)(puVar28 + 4);
        if ((uVar36 + 1 < 5) ||
           ((puVar15 < (undefined8 *)(lVar35 + uVar36 * 0x30 + 0x18) &&
            ((undefined8 *)(lVar35 + 0x10U) < puVar15 + uVar36 + 1)))) {
          lVar14 = 0;
        }
        else {
          uVar2 = 4;
          if ((uVar37 & 3) != 0) {
            uVar2 = uVar37 & 3;
          }
          lVar14 = (uVar36 + 1) - (ulong)uVar2;
          puVar20 = (undefined8 *)(lVar35 + 0x70);
          puVar24 = puVar15 + 2;
          lVar35 = lVar35 + lVar14 * 0x30;
          puVar15 = puVar15 + lVar14;
          lVar19 = (uVar36 + 1) - (ulong)uVar2;
          do {
            uVar34 = puVar20[-0xc];
            uVar11 = puVar20[6];
            uVar38 = *puVar20;
            lVar19 = lVar19 + -4;
            puVar24[-1] = puVar20[-6];
            puVar24[-2] = uVar34;
            puVar24[1] = uVar11;
            *puVar24 = uVar38;
            puVar24 = puVar24 + 4;
            puVar20 = puVar20 + 0x18;
          } while (lVar19 != 0);
        }
        iVar8 = uVar37 - (int)lVar14;
        puVar20 = (undefined8 *)(lVar35 + 0x10);
        do {
          iVar8 = iVar8 + -1;
          *puVar15 = *puVar20;
          puVar15 = puVar15 + 1;
          puVar20 = puVar20 + 6;
        } while (iVar8 != 0);
      }
    }
  }
LAB_00e2e5f0:
  lVar14 = *(long *)(param_1 + 0xc0);
  lVar35 = *(long *)(param_1 + 0x4c0);
  uVar34 = *(undefined8 *)(lVar14 + 0x38);
  local_64 = (**(code **)(param_1 + 0x340))(param_1,0x4d564152,lVar14,&local_b8);
  if (local_64 == 0) {
    lVar19 = FUN_00e1d4a0(lVar14);
    sVar5 = FUN_00e1bcf8(lVar14,&local_64);
    if (((local_64 == 0) && (local_64 = FUN_00e1bc6c(lVar14,2), sVar5 == 1)) && (local_64 == 0)) {
      uVar11 = FUN_00e1388c(uVar34,0x30,&local_64);
      *(undefined8 *)(lVar35 + 0x60) = uVar11;
      if ((local_64 == 0) && (local_64 = FUN_00e1bc6c(lVar14,4), local_64 == 0)) {
        uVar6 = FUN_00e1bcf8(lVar14,&local_64);
        **(undefined2 **)(lVar35 + 0x60) = uVar6;
        if ((local_64 == 0) && (uVar7 = FUN_00e1bcf8(lVar14,&local_64), local_64 == 0)) {
          uVar11 = FUN_00e1d4a0(lVar14);
          local_64 = FUN_00e306ac(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x4c0),
                                  lVar19 + (ulong)uVar7,*(long *)(lVar35 + 0x60) + 8);
          if (local_64 == 0) {
            uVar34 = FUN_00e13bcc(uVar34,0x10,0,**(undefined2 **)(lVar35 + 0x60),0,&local_64);
            *(undefined8 *)(*(long *)(lVar35 + 0x60) + 0x28) = uVar34;
            if (((local_64 == 0) && (local_64 = FUN_00e1bb5c(lVar14,uVar11), local_64 == 0)) &&
               (local_64 = FUN_00e1d718(lVar14,(ulong)**(ushort **)(lVar35 + 0x60) << 3),
               local_64 == 0)) {
              puVar30 = *(ushort **)(lVar35 + 0x60);
              if ((ulong)*puVar30 != 0) {
                puVar15 = *(undefined8 **)(puVar30 + 0x14);
                puVar20 = puVar15 + (ulong)*puVar30 * 2;
                do {
                  uVar34 = FUN_00e1da20(lVar14);
                  *puVar15 = uVar34;
                  uVar6 = FUN_00e1d970(lVar14);
                  *(undefined2 *)(puVar15 + 1) = uVar6;
                  uVar7 = FUN_00e1d970(lVar14);
                  *(ushort *)((long)puVar15 + 10) = uVar7;
                  if ((*(uint *)(puVar30 + 4) <= (uint)*(ushort *)(puVar15 + 1)) ||
                     (*(uint *)(*(long *)(puVar30 + 8) + (ulong)*(ushort *)(puVar15 + 1) * 0x18) <=
                      (uint)uVar7)) {
                    local_64 = 8;
                    break;
                  }
                  puVar15 = puVar15 + 2;
                } while (puVar15 < puVar20);
              }
              FUN_00e1d90c(lVar14);
              if (local_64 == 0) {
                uVar36 = (ulong)**(ushort **)(lVar35 + 0x60);
                if (uVar36 != 0) {
                  puVar15 = *(undefined8 **)(*(ushort **)(lVar35 + 0x60) + 0x14);
                  puVar20 = puVar15 + uVar36 * 2;
                  do {
                    puVar12 = (undefined2 *)FUN_00e30bf8(param_1,*puVar15);
                    if (puVar12 != (undefined2 *)0x0) {
                      *(undefined2 *)((long)puVar15 + 0xc) = *puVar12;
                    }
                    puVar15 = puVar15 + 2;
                  } while (puVar15 < puVar20);
                }
                *(uint *)(param_1 + 0x4c8) = *(uint *)(param_1 + 0x4c8) | 0x100;
              }
            }
          }
        }
      }
    }
  }
joined_r0x00e2e64c:
  if ((param_2 != (undefined8 *)0x0) &&
     (__dest = (void *)FUN_00e1388c(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x4c0) + 0x20),
                                    &local_74), local_74 == 0)) {
    memcpy(__dest,*(void **)(*(long *)(param_1 + 0x4c0) + 0x18),
           *(size_t *)(*(long *)(param_1 + 0x4c0) + 0x20));
    uVar2 = *(uint *)((long)__dest + 8);
    plVar33 = (long *)((long)__dest + uVar23 + 0x20);
    plVar17 = (long *)((long)plVar33 + uVar32);
    *(long **)((long)__dest + 0x10) = plVar33;
    *(long **)((long)__dest + 0x18) = plVar17;
    if (uVar2 != 0) {
      uVar36 = 0;
      plVar22 = plVar17;
      lVar35 = (long)plVar17 + uVar21;
      do {
        uVar36 = uVar36 + 1;
        *plVar22 = lVar35;
        lVar35 = lVar35 + uVar31 * 8;
        plVar22 = plVar22 + 2;
      } while (uVar36 < uVar2);
    }
    if (uVar37 != 0) {
      lVar16 = (long)plVar17 + uVar21 + lVar16;
      do {
        lVar35 = plVar33[4];
        *plVar33 = lVar16;
        if (lVar35 < 0x77647468) {
          pcVar13 = "OpticalSize";
          if ((lVar35 == 0x6f70737a) || (pcVar13 = "Slant", lVar35 == 0x736c6e74))
          goto LAB_00e2df2c;
        }
        else {
          if (lVar35 == 0x77676874) {
            pcVar13 = "Weight";
          }
          else {
            if (lVar35 != 0x77647468) goto LAB_00e2df30;
            pcVar13 = "Width";
          }
LAB_00e2df2c:
          *plVar33 = (long)pcVar13;
        }
LAB_00e2df30:
        lVar16 = lVar16 + 5;
        uVar37 = uVar37 - 1;
        plVar33 = plVar33 + 6;
      } while (uVar37 != 0);
    }
    *param_2 = __dest;
  }
  return local_74;
}

