
uint FUN_00e31568(long param_1,char param_2)

{
  undefined4 uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_70 [8];
  uint local_68;
  uint local_64;
  
  lVar12 = *(long *)(param_1 + 0xc0);
  lVar14 = *(long *)(param_1 + 0x4c0);
  uVar11 = *(undefined8 *)(lVar12 + 0x38);
  if (param_2 == '\0') {
    *(undefined1 *)(lVar14 + 0x40) = 1;
    pcVar10 = *(code **)(param_1 + 0x340);
    uVar1 = 0x48564152;
  }
  else {
    *(undefined1 *)(lVar14 + 0x50) = 1;
    pcVar10 = *(code **)(param_1 + 0x340);
    uVar1 = 0x56564152;
  }
  local_68 = (*pcVar10)(param_1,uVar1,lVar12,auStack_70);
  if (local_68 == 0) {
    lVar6 = FUN_00e1d4a0(lVar12);
    sVar2 = FUN_00e1bcf8(lVar12,&local_68);
    if ((local_68 == 0) && (local_68 = FUN_00e1bc6c(lVar12,2), local_68 == 0)) {
      if (sVar2 == 1) {
        lVar7 = FUN_00e1c3a4(lVar12,&local_68);
        if ((local_68 == 0) && (lVar12 = FUN_00e1c3a4(lVar12,&local_68), local_68 == 0)) {
          puVar8 = (uint *)FUN_00e1388c(uVar11,0x38,&local_68);
          if (param_2 == '\0') {
            *(uint **)(lVar14 + 0x48) = puVar8;
          }
          else {
            *(uint **)(lVar14 + 0x58) = puVar8;
          }
          if ((local_68 == 0) &&
             (local_68 = FUN_00e306ac(*(undefined8 *)(param_1 + 0xc0),
                                      *(undefined8 *)(param_1 + 0x4c0),lVar7 + lVar6,puVar8),
             local_68 == 0)) {
            if (lVar12 != 0) {
              lVar7 = *(long *)(param_1 + 0xc0);
              uVar11 = *(undefined8 *)(lVar7 + 0x38);
              local_64 = FUN_00e1bb5c(lVar7,lVar12 + lVar6);
              if (local_64 != 0) {
                return local_64;
              }
              uVar4 = FUN_00e1bcf8(lVar7,&local_64);
              if (local_64 != 0) {
                return local_64;
              }
              uVar3 = FUN_00e1bcf8(lVar7,&local_64);
              puVar8[8] = (uint)uVar3;
              if (local_64 != 0) {
                return local_64;
              }
              if ((uVar4 & 0xffc0) != 0) {
                return 8;
              }
              uVar9 = FUN_00e13bcc(uVar11,4,0,uVar3,0,&local_64);
              *(undefined8 *)(puVar8 + 0xc) = uVar9;
              if (local_64 != 0) {
                return local_64;
              }
              uVar11 = FUN_00e13bcc(uVar11,4,0,puVar8[8],0,&local_64);
              *(undefined8 *)(puVar8 + 10) = uVar11;
              if (local_64 != 0) {
                return local_64;
              }
              if (puVar8[8] != 0) {
                uVar13 = 0;
                do {
                  uVar15 = 0;
                  uVar16 = 0xffffffff;
                  do {
                    uVar5 = FUN_00e1dabc(lVar7,&local_64);
                    if (local_64 != 0) {
                      return local_64;
                    }
                    uVar15 = uVar5 & 0xff | uVar15 << 8;
                    uVar16 = uVar16 + 1;
                  } while (uVar16 < ((uVar4 & 0xffff) >> 4 & 3));
                  uVar16 = uVar15 >> (ulong)((uVar4 & 0xf) + 1);
                  if (*puVar8 <= uVar16) {
                    return 8;
                  }
                  *(uint *)(*(long *)(puVar8 + 10) + uVar13 * 4) = uVar16;
                  uVar15 = uVar15 & (2 << (ulong)(uVar4 & 0xf)) - 1U;
                  if (*(uint *)(*(long *)(puVar8 + 2) + (ulong)uVar16 * 0x18) <= uVar15) {
                    return 8;
                  }
                  *(uint *)(*(long *)(puVar8 + 0xc) + uVar13 * 4) = uVar15;
                  uVar13 = uVar13 + 1;
                } while (uVar13 < puVar8[8]);
              }
            }
            local_68 = 0;
            if (param_2 == '\0') {
              *(undefined1 *)(lVar14 + 0x41) = 1;
              uVar4 = *(uint *)(param_1 + 0x4c8) | 2;
            }
            else {
              *(undefined1 *)(lVar14 + 0x51) = 1;
              uVar4 = *(uint *)(param_1 + 0x4c8) | 0x10;
            }
            *(uint *)(param_1 + 0x4c8) = uVar4;
          }
        }
      }
      else {
        local_68 = 8;
      }
    }
  }
  return local_68;
}

