
int FUN_01072f9c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  long *plVar19;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  ushort local_7e;
  long local_78;
  ushort local_70;
  short local_6e;
  ushort local_6c;
  short local_6a;
  ushort local_68;
  ushort local_66;
  int local_5c;
  ulong local_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  local_5c = 0;
  if (*(long *)(param_1 + 0x450) == 0) {
    local_5c = (**(code **)(param_1 + 0x330))(param_1,0x67766172,uVar3,&local_58);
    if (local_5c != 0) {
      return local_5c;
    }
    local_5c = (**(code **)(param_1 + 0x330))(param_1,0x66766172,uVar3,&local_58);
    if (local_5c != 0) {
      return local_5c;
    }
    lVar10 = FT_Stream_Pos(uVar3);
    local_5c = FT_Stream_ReadFields(uVar3,&DAT_0145d200,&local_78);
    if (local_5c != 0) {
      return local_5c;
    }
    if ((((local_78 == 0x10000) && (local_6e == 2)) && (local_6a == 0x14)) && (local_6c < 0x3fff)) {
      if ((((uint)local_6c * 4 + 4 == (uint)local_66) && ((byte)(local_68 >> 8) < 0x7f)) &&
         ((uint)local_6c * 0x14 + (uint)local_68 * (uint)local_66 + (uint)local_70 <= local_58)) {
        lVar8 = ft_mem_alloc(uVar2,0x50,&local_5c);
        *(long *)(param_1 + 0x450) = lVar8;
        if (local_5c != 0) {
          return local_5c;
        }
        lVar18 = (ulong)local_6c * 0x35 + (ulong)local_68 * 0x10 +
                 (ulong)local_68 * (ulong)local_6c * 8 + 0x20;
        *(long *)(lVar8 + 0x18) = lVar18;
        puVar7 = (uint *)ft_mem_alloc(uVar2,lVar18,&local_5c);
        if (local_5c != 0) {
          return local_5c;
        }
        *(uint **)(*(long *)(param_1 + 0x450) + 0x10) = puVar7;
        uVar12 = (ulong)local_6c;
        *puVar7 = (uint)local_6c;
        puVar7[1] = 0xffffffff;
        uVar16 = (ulong)local_68;
        puVar13 = puVar7 + 8 + (ulong)(uint)local_6c * 0xc;
        *(uint **)(puVar7 + 4) = puVar7 + 8;
        *(uint **)(puVar7 + 6) = puVar13;
        puVar7[2] = (uint)local_68;
        if (uVar16 != 0) {
          lVar8 = 0;
          puVar13 = puVar7 + uVar16 * 4 + uVar12 * 0xc + 8;
          puVar14 = puVar7 + uVar12 * 0xc + 8;
          do {
            lVar8 = lVar8 + 1;
            *(uint **)puVar14 = puVar13;
            puVar13 = puVar13 + uVar12 * 2;
            puVar14 = puVar14 + 4;
          } while (lVar8 < (long)uVar16);
        }
        uVar6 = (uint)local_6c;
        if (uVar6 != 0) {
          if (uVar6 == 1) {
            lVar8 = 0;
          }
          else {
            lVar8 = uVar12 - (uVar12 & 1);
            if (lVar8 != 0) {
              puVar14 = (uint *)((long)puVar13 + (uVar12 * 5 - (ulong)(-(uVar6 & 1) & 5)));
              puVar17 = puVar7 + 0x14;
              lVar18 = lVar8;
              do {
                lVar1 = (long)puVar13 + 5;
                *(uint **)(puVar17 + -0xc) = puVar13;
                puVar13 = (uint *)((long)puVar13 + 10);
                lVar18 = lVar18 + -2;
                *(long *)puVar17 = lVar1;
                puVar17 = puVar17 + 0x18;
              } while (lVar18 != 0);
              puVar13 = puVar14;
              if ((local_6c & 1) == 0) goto LAB_01073388;
            }
          }
          puVar14 = puVar7 + lVar8 * 0xc + 8;
          do {
            lVar8 = lVar8 + 1;
            *(uint **)puVar14 = puVar13;
            puVar13 = (uint *)((long)puVar13 + 5);
            puVar14 = puVar14 + 0xc;
          } while (lVar8 < (long)uVar12);
        }
LAB_01073388:
        iVar4 = FT_Stream_Seek(uVar3,lVar10 + (ulong)local_70);
        if (iVar4 != 0) {
          return iVar4;
        }
        if (local_6c != 0) {
          iVar4 = 0;
          plVar19 = *(long **)(puVar7 + 4);
          do {
            local_5c = 0;
            iVar5 = FT_Stream_ReadFields(uVar3,&DAT_0145d224,&local_a0);
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar4 = iVar4 + 1;
            plVar19[4] = local_a0;
            plVar19[2] = lStack_90;
            plVar19[1] = local_98;
            plVar19[3] = local_88;
            *(uint *)(plVar19 + 5) = (uint)local_7e;
            *(char *)*plVar19 = (char)((ulong)local_a0 >> 0x18);
            *(char *)(*plVar19 + 1) = (char)((ulong)plVar19[4] >> 0x10);
            *(char *)(*plVar19 + 2) = (char)((ulong)plVar19[4] >> 8);
            *(char *)(*plVar19 + 3) = (char)plVar19[4];
            *(undefined1 *)(*plVar19 + 4) = 0;
            plVar19 = plVar19 + 6;
          } while (iVar4 < (int)(uint)local_6c);
        }
        local_5c = 0;
        if (local_68 != 0) {
          plVar19 = *(long **)(puVar7 + 6);
          iVar4 = FT_Stream_EnterFrame(uVar3,(ulong)local_6c * 4 + 4);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = 0;
          local_5c = 0;
          while( true ) {
            uVar6 = FT_Stream_GetUShort(uVar3);
            *(uint *)(plVar19 + 1) = uVar6 & 0xffff;
            FT_Stream_GetUShort(uVar3);
            if (local_6c != 0) {
              lVar10 = 0;
              do {
                uVar9 = FT_Stream_GetULong(uVar3);
                *(undefined8 *)(*plVar19 + lVar10 * 8) = uVar9;
                lVar10 = lVar10 + 1;
              } while (lVar10 < (long)(ulong)local_6c);
            }
            FT_Stream_ExitFrame(uVar3);
            iVar4 = iVar4 + 1;
            if ((int)(uint)local_68 <= iVar4) break;
            plVar19 = plVar19 + 2;
            local_5c = FT_Stream_EnterFrame(uVar3,(ulong)local_6c * 4 + 4);
            if (local_5c != 0) {
              return local_5c;
            }
          }
        }
        goto LAB_01072fd0;
      }
    }
    local_5c = 8;
  }
  else {
LAB_01072fd0:
    if ((param_2 != (undefined8 *)0x0) &&
       (puVar7 = (uint *)ft_mem_alloc(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x450) + 0x18),
                                      &local_5c), local_5c == 0)) {
      memcpy(puVar7,*(void **)(*(long *)(param_1 + 0x450) + 0x10),
             *(size_t *)(*(long *)(param_1 + 0x450) + 0x18));
      uVar6 = *puVar7;
      uVar12 = (ulong)uVar6;
      uVar15 = puVar7[2];
      puVar13 = puVar7 + 8;
      puVar14 = puVar13 + uVar12 * 0xc;
      *(uint **)(puVar7 + 4) = puVar13;
      *(uint **)(puVar7 + 6) = puVar14;
      if (uVar15 != 0) {
        uVar16 = 0;
        puVar14 = puVar7 + (ulong)uVar15 * 4 + uVar12 * 0xc + 8;
        puVar17 = puVar7 + uVar12 * 0xc + 8;
        do {
          uVar16 = uVar16 + 1;
          *(uint **)puVar17 = puVar14;
          puVar14 = puVar14 + uVar12 * 2;
          puVar17 = puVar17 + 4;
        } while (uVar16 < uVar15);
      }
      if (uVar6 != 0) {
        uVar15 = 0;
        do {
          lVar10 = *(long *)(puVar13 + 8);
          *(uint **)puVar13 = puVar14;
          if (lVar10 < 0x77647468) {
            pcVar11 = "OpticalSize";
            if ((lVar10 == 0x6f70737a) || (pcVar11 = "Slant", lVar10 == 0x736c6e74))
            goto LAB_010731f4;
          }
          else {
            if (lVar10 == 0x77647468) {
              pcVar11 = "Width";
            }
            else {
              pcVar11 = "Weight";
              if (lVar10 != 0x77676874) goto LAB_010731f8;
            }
LAB_010731f4:
            *(char **)puVar13 = pcVar11;
          }
LAB_010731f8:
          uVar15 = uVar15 + 1;
          puVar14 = (uint *)((long)puVar14 + 5);
          puVar13 = puVar13 + 0xc;
        } while (uVar15 < uVar6);
      }
      *param_2 = puVar7;
    }
  }
  return local_5c;
}

