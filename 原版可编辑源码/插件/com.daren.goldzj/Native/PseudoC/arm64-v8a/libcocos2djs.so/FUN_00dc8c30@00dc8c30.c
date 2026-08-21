
void FUN_00dc8c30(long param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                 uint param_6,int param_7,uint param_8,undefined1 *param_9)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  long lVar17;
  uint *puVar18;
  long local_78;
  int local_6c;
  int iStack_68;
  uint local_64;
  
  lVar11 = (ulong)param_5 * 4;
  uVar10 = -(ulong)(param_8 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_8 << 2;
  iVar1 = param_5 * 3 + param_8 * 4;
  param_7 = param_7 * 0x12;
  lVar17 = param_2 + lVar11 + uVar10;
  local_78 = lVar17 + lVar11 + uVar10;
  iVar5 = param_7 + 3;
  if (-1 < param_7) {
    iVar5 = param_7;
  }
  lVar11 = local_78 + lVar11 + uVar10;
  if (((param_6 | param_5) & 3) == 0) {
    if (3 < param_6) {
      uVar10 = (ulong)((param_5 >> 2) - 1);
      lVar8 = uVar10 * 0x10 + (long)iVar1 * 4 + 0x10;
      puVar12 = (uint *)(param_2 + 0xc);
      param_9 = param_9 + 8;
      do {
        lVar13 = 0;
        puVar15 = param_9;
        puVar18 = puVar12;
        iVar14 = -(param_5 >> 2);
        do {
          uVar6 = puVar15[8];
          uVar7 = puVar15[9];
          puVar2 = (uint *)(lVar11 + lVar13);
          puVar3 = (uint *)(lVar17 + lVar13);
          puVar4 = (uint *)(local_78 + lVar13);
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[-8],uVar6,uVar7,&local_64,
                         &iStack_68,&local_6c);
          puVar18[-3] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[-7],uVar6,uVar7,&local_64,
                         &iStack_68,&local_6c);
          puVar18[-2] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[-6],uVar6,uVar7,&local_64,
                         &iStack_68,&local_6c);
          puVar18[-1] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[-5],uVar6,uVar7,&local_64,
                         &iStack_68,&local_6c);
          *puVar18 = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[-4],uVar6,uVar7,&local_64,
                         &iStack_68,&local_6c);
          *puVar3 = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[-3],uVar6,uVar7,&local_64,
                         &iStack_68,&local_6c);
          puVar3[1] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[-2],uVar6,uVar7,&local_64,
                         &iStack_68,&local_6c);
          puVar3[2] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[-1],uVar6,uVar7,&local_64,
                         &iStack_68,&local_6c);
          puVar3[3] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*puVar15,uVar6,uVar7,&local_64,&iStack_68,
                         &local_6c);
          *puVar4 = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[1],uVar6,uVar7,&local_64,&iStack_68
                         ,&local_6c);
          puVar4[1] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[2],uVar6,uVar7,&local_64,&iStack_68
                         ,&local_6c);
          puVar4[2] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[3],uVar6,uVar7,&local_64,&iStack_68
                         ,&local_6c);
          puVar4[3] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[4],uVar6,uVar7,&local_64,&iStack_68
                         ,&local_6c);
          *puVar2 = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[5],uVar6,uVar7,&local_64,&iStack_68
                         ,&local_6c);
          puVar2[1] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[6],uVar6,uVar7,&local_64,&iStack_68
                         ,&local_6c);
          puVar2[2] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[7],uVar6,uVar7,&local_64,&iStack_68
                         ,&local_6c);
          puVar18 = puVar18 + 4;
          iVar14 = iVar14 + 1;
          lVar13 = lVar13 + 0x10;
          puVar15 = puVar15 + 0x12;
          puVar2[3] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
        } while (iVar14 != 0);
        lVar17 = lVar17 + lVar8;
        param_9 = param_9 + (long)(iVar5 >> 2) + uVar10 * 0x12 + 0x12;
        param_6 = param_6 - 4;
        puVar12 = puVar12 + (long)iVar1 + uVar10 * 4 + 4;
        lVar11 = lVar11 + lVar8;
        local_78 = local_78 + lVar8;
      } while (3 < param_6);
    }
  }
  else if (param_6 != 0) {
    lVar8 = (long)iVar1 * 4;
    do {
      if (param_5 != 0) {
        lVar13 = 0;
        uVar16 = param_5;
        do {
          puVar15 = param_9;
          uVar6 = puVar15[0x10];
          uVar7 = puVar15[0x11];
          if (uVar16 != 1) {
            if (uVar16 != 2) {
              if (uVar16 != 3) {
                if (param_6 != 1) {
                  if (param_6 != 2) {
                    if (param_6 != 3) {
                      TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[0xf],uVar6,uVar7,
                                     &local_64,&iStack_68,&local_6c);
                      *(uint *)(lVar11 + lVar13 + 0xc) =
                           local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
                    }
                    TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[0xb],uVar6,uVar7,
                                   &local_64,&iStack_68,&local_6c);
                    *(uint *)(local_78 + lVar13 + 0xc) =
                         local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
                  }
                  TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[7],uVar6,uVar7,&local_64,
                                 &iStack_68,&local_6c);
                  *(uint *)(lVar17 + lVar13 + 0xc) =
                       local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
                }
                TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[3],uVar6,uVar7,&local_64,
                               &iStack_68,&local_6c);
                *(uint *)(param_2 + lVar13 + 0xc) =
                     local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
              }
              if (param_6 != 1) {
                if (param_6 != 2) {
                  if (param_6 != 3) {
                    TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[0xe],uVar6,uVar7,
                                   &local_64,&iStack_68,&local_6c);
                    *(uint *)(lVar11 + lVar13 + 8) =
                         local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
                  }
                  TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[10],uVar6,uVar7,&local_64,
                                 &iStack_68,&local_6c);
                  *(uint *)(local_78 + lVar13 + 8) =
                       local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
                }
                TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[6],uVar6,uVar7,&local_64,
                               &iStack_68,&local_6c);
                *(uint *)(lVar17 + lVar13 + 8) =
                     local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
              }
              TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[2],uVar6,uVar7,&local_64,
                             &iStack_68,&local_6c);
              *(uint *)(param_2 + lVar13 + 8) =
                   local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
            }
            if (param_6 != 1) {
              if (param_6 != 2) {
                if (param_6 != 3) {
                  TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[0xd],uVar6,uVar7,&local_64,
                                 &iStack_68,&local_6c);
                  *(uint *)(lVar11 + lVar13 + 4) =
                       local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
                }
                TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[9],uVar6,uVar7,&local_64,
                               &iStack_68,&local_6c);
                *(uint *)(local_78 + lVar13 + 4) =
                     local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
              }
              TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[5],uVar6,uVar7,&local_64,
                             &iStack_68,&local_6c);
              *(uint *)(lVar17 + lVar13 + 4) =
                   local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
            }
            TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[1],uVar6,uVar7,&local_64,
                           &iStack_68,&local_6c);
            *(uint *)(param_2 + lVar13 + 4) =
                 local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          }
          if (param_6 != 1) {
            if (param_6 != 2) {
              if (param_6 != 3) {
                TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[0xc],uVar6,uVar7,&local_64,
                               &iStack_68,&local_6c);
                *(uint *)(lVar11 + lVar13) =
                     local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
              }
              TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[8],uVar6,uVar7,&local_64,
                             &iStack_68,&local_6c);
              *(uint *)(local_78 + lVar13) =
                   local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
            }
            TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar15[4],uVar6,uVar7,&local_64,
                           &iStack_68,&local_6c);
            *(uint *)(lVar17 + lVar13) = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          }
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*puVar15,uVar6,uVar7,&local_64,&iStack_68,
                         &local_6c);
          *(uint *)(param_2 + lVar13) = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          if (uVar16 < 4) {
            lVar9 = (ulong)uVar16 * 4;
            param_2 = param_2 + lVar9 + lVar13;
            local_78 = local_78 + lVar9 + lVar13;
            lVar17 = lVar17 + lVar9 + lVar13;
            lVar11 = lVar11 + lVar9 + lVar13;
            goto LAB_00dc91c4;
          }
          uVar16 = uVar16 - 4;
          lVar13 = lVar13 + 0x10;
          param_9 = puVar15 + 0x12;
        } while (uVar16 != 0);
        lVar17 = lVar17 + lVar13;
        param_2 = param_2 + lVar13;
        local_78 = local_78 + lVar13;
        lVar11 = lVar11 + lVar13;
LAB_00dc91c4:
        param_9 = puVar15 + 0x12;
      }
      if (param_6 < 5) {
        return;
      }
      param_6 = param_6 - 4;
      param_2 = param_2 + lVar8;
      local_78 = local_78 + lVar8;
      lVar17 = lVar17 + lVar8;
      lVar11 = lVar11 + lVar8;
      param_9 = param_9 + (iVar5 >> 2);
    } while (param_6 != 0);
  }
  return;
}

