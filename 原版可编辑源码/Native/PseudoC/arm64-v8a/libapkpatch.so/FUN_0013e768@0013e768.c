
void FUN_0013e768(long param_1,int param_2,long param_3,int param_4,uint param_5)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  byte bVar11;
  undefined2 uVar13;
  long lVar12;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  short sVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 local_870;
  undefined8 uStack_868;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  lVar12 = *(long *)(param_3 + 0x50);
  uVar14 = (ulong)*(uint *)(*(long *)(param_3 + 0x58) + (long)param_4 * 4);
  uVar17 = *(undefined4 *)(*(long *)(param_1 + 0x88) + (long)param_2 * 4);
  lVar1 = lVar12 + uVar14;
  sVar18 = *(short *)(lVar1 + 10);
  bVar7 = sVar18 != 0;
  if (*(char *)(param_1 + 0x120) != '\0') {
    cVar2 = *(char *)(param_1 + 0x121);
    *(undefined1 *)(param_1 + 0x120) = 0;
    if (((bool)cVar2 == (sVar18 != 0)) || (cVar2 != '\0')) {
      lVar12 = *(long *)(param_3 + 0x50);
      uVar14 = (ulong)*(uint *)(*(long *)(param_3 + 0x58) + (long)param_4 * 4);
      bVar7 = sVar18 != 0;
      if ((bool)cVar2 != (sVar18 != 0)) {
        bVar7 = cVar2 != '\0';
      }
    }
    else {
      lVar12 = *(long *)(param_3 + 0x50);
      uVar14 = (ulong)*(uint *)(*(long *)(param_3 + 0x58) + (long)param_4 * 4);
      uVar17 = *(undefined4 *)(lVar12 + uVar14 + 0x18);
      bVar7 = false;
    }
  }
  uVar3 = *(ushort *)(lVar1 + 0x1e);
  uVar20 = (ulong)uVar3;
  uVar4 = *(ushort *)(lVar12 + uVar14 + 0x1c);
  uVar16 = (ulong)uVar4;
  if (((param_5 & 1) != 0) || (bVar7)) {
LAB_0013e8b0:
    uVar9 = local_870;
    if ((param_5 & 1) == 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x80) + (long)param_2 * 4) =
           *(undefined4 *)(param_1 + 0x58);
      uVar13 = 0x403;
    }
    else {
      uVar13 = 0x201;
    }
    local_870._4_4_ = SUB84(uVar9,4);
    local_870._0_4_ = CONCAT13((char)((ushort)uVar13 >> 8),CONCAT12((char)uVar13,0x4b50));
    uVar14 = FUN_0013e3d8(param_1,&local_870,4);
    if ((uVar14 & 1) == 0) {
      pcVar10 = "_writeUInt32(self,isFullInfo?kCENTRALHEADERMAGIC:kLOCALHEADERMAGIC)";
    }
    else if (((param_5 & 1) == 0) || (uVar14 = FUN_0013e3d8(param_1,lVar1 + 4,2), (uVar14 & 1) != 0)
            ) {
      uVar14 = FUN_0013e3d8(param_1,lVar1 + 6,4);
      if ((uVar14 & 1) == 0) {
        pcVar10 = "_write(self,headBuf+6,4)";
      }
      else {
        bVar11 = 8;
        if (!bVar7) {
          bVar11 = 0;
        }
        local_870._0_2_ = (ushort)bVar11;
        uVar14 = FUN_0013e3d8(param_1,&local_870,2);
        if ((uVar14 & 1) == 0) {
          pcVar10 = "_writeUInt16(self,isCompressed?Z_DEFLATED:0)";
        }
        else {
          uVar14 = FUN_0013e3d8(param_1,lVar1 + 0xc,4);
          if ((uVar14 & 1) == 0) {
            pcVar10 = "_write(self,headBuf+12,4)";
          }
          else if (*(char *)(param_1 + 0x118) == '\0') {
            uVar14 = FUN_0013e3d8(param_1,lVar1 + 0x10,4);
            if ((uVar14 & 1) != 0) goto LAB_0013eb30;
            pcVar10 = "_write(self,headBuf+16,4)";
          }
          else {
            *(undefined1 *)(param_1 + 0x118) = 0;
            local_870 = CONCAT44(local_870._4_4_,*(undefined4 *)(param_1 + 0x11c));
            uVar14 = FUN_0013e3d8(param_1,&local_870,4);
            if ((uVar14 & 1) == 0) {
              pcVar10 = "_writeUInt32(self,self->_newCrc32)";
            }
            else {
LAB_0013eb30:
              uVar14 = FUN_0013f540(param_1,uVar17);
              if ((uVar14 & 1) == 0) {
                pcVar10 = "_writeUInt32(self,compressedSize)";
              }
              else {
                uVar14 = FUN_0013e3d8(param_1,lVar1 + 0x18,6);
                if ((uVar14 & 1) == 0) {
                  pcVar10 = "_write(self,headBuf+24,30-24)";
                }
                else {
                  local_870 = CONCAT62(local_870._2_6_,(short)uVar20);
                  uVar14 = FUN_0013e3d8(param_1,&local_870,2);
                  if ((uVar14 & 1) != 0) {
                    if ((param_5 & 1) == 0) {
                      sVar18 = 0;
LAB_0013ec3c:
                      uVar14 = FUN_0013e3d8(param_1,lVar1 + 0x2e,(uint)uVar4 + (uint)uVar3);
                      if ((uVar14 & 1) == 0) {
                        pcVar10 = "_write(self,headBuf+46,fileNameLen+extraFieldLen)";
                      }
                      else {
                        uVar19 = (uint)uVar3;
                        if ((uVar19 < ((uint)uVar20 & 0xffff)) &&
                           (uVar14 = FUN_0013f9b4(param_1,(long)(int)(((uint)uVar20 & 0xffff) -
                                                                     uVar19)), (uVar14 & 1) == 0)) {
                          pcVar10 = "_writeAlignSkip(self,extraFieldLen_for_align-extraFieldLen)";
                        }
                        else {
                          if ((sVar18 == 0) ||
                             (uVar14 = FUN_0013e3d8(param_1,lVar1 + 0x2e + uVar16 + (ulong)uVar19,
                                                    sVar18), (uVar14 & 1) != 0)) {
                            uVar9 = 1;
                            goto LAB_0013eaec;
                          }
                          pcVar10 = 
                          "_write(self,headBuf+46+fileNameLen+extraFieldLen,fileCommentLen)";
                        }
                      }
                    }
                    else {
                      sVar18 = *(short *)(lVar1 + 0x20);
                      local_870 = CONCAT62(local_870._2_6_,*(short *)(lVar1 + 0x20));
                      uVar14 = FUN_0013e3d8(param_1,&local_870,2);
                      if ((uVar14 & 1) == 0) {
                        pcVar10 = "_writeUInt16(self,fileCommentLen)";
                      }
                      else {
                        uVar14 = FUN_0013e3d8(param_1,lVar1 + 0x22,8);
                        if ((uVar14 & 1) == 0) {
                          pcVar10 = "_write(self,headBuf+34,42-34)";
                        }
                        else {
                          uVar14 = FUN_0013f540(param_1,*(undefined4 *)
                                                         (*(long *)(param_1 + 0x80) +
                                                         (long)param_2 * 4));
                          if ((uVar14 & 1) != 0) goto LAB_0013ec3c;
                          pcVar10 = "_writeUInt32(self,self->_fileEntryOffsets[fileIndex])";
                        }
                      }
                    }
                    FUN_0013fb24(&DAT_0016ba80,pcVar10,DAT_0016ba88);
                    uVar9 = 0;
                    goto LAB_0013eaec;
                  }
                  pcVar10 = "_writeUInt16(self,extraFieldLen_for_align)";
                }
              }
            }
          }
        }
      }
    }
    else {
      pcVar10 = "_write(self,headBuf+4,2)";
    }
    FUN_0013fb24(&DAT_0016ba80,pcVar10,DAT_0016ba88);
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x68);
    uVar8 = uVar16 + uVar20 + (ulong)*(uint *)(param_1 + 0x58) + uVar15 + 0x1d;
    uVar5 = 0;
    if (uVar15 != 0) {
      uVar5 = uVar8 / uVar15;
    }
    uVar15 = uVar15 + ~(uVar8 - uVar5 * uVar15);
    if (uVar15 == 0) goto LAB_0013e8b0;
    if (param_2 != 0) {
      local_870 = 0;
      uStack_868 = 0;
      do {
        uVar14 = uVar15;
        if (0xf < uVar15) {
          uVar14 = 0x10;
        }
        uVar8 = FUN_0013e3d8(param_1,&local_870,uVar14);
        if ((uVar8 & 1) == 0) {
          FUN_0013fb24(&DAT_0016ba80,"_write(self,_alignSkipBuf,wlen)",DAT_0016ba88);
          FUN_0013fb24(&DAT_0016ba80,"_writeAlignSkip(self,skipLen)",DAT_0016ba88);
          uVar9 = 0;
          goto LAB_0013eaec;
        }
        uVar15 = uVar15 - uVar14;
      } while (uVar15 != 0);
      goto LAB_0013e8b0;
    }
    if (uVar4 < 0x800) {
      uVar20 = (ulong)((uint)uVar3 + (int)uVar15);
      __memcpy_chk(&local_870,lVar12 + uVar14 + 0x2e,uVar16,0x800);
      *(undefined1 *)((long)&local_870 + uVar16) = 0;
      printf("WARNING: \"");
      printf("%s",&local_870);
      printf("\" file\'s extraField adding %d byte 0 for align!\n",uVar15 & 0xffffffff);
      goto LAB_0013e8b0;
    }
  }
  uVar9 = 0;
LAB_0013eaec:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

