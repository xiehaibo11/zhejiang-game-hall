
undefined8 FUN_00138f98(long *param_1,long param_2,void *param_3,long param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  char *pcVar16;
  size_t __n;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  
  lVar17 = *param_1;
  if (*(char *)(lVar17 + 8) == '\0') {
    uVar20 = *(ulong *)(lVar17 + 0xa8);
    __n = param_4 - (long)param_3;
    if (uVar20 < __n + param_2) {
      iVar9 = FUN_00138f98();
      if (iVar9 == 0) {
        puts("_NewStream_write(stream,writeToPos,data,data+leftLen) ERROR!");
        pcVar16 = "_NewStream_write(stream,writeToPos,data,data+leftLen)";
      }
      else {
        iVar9 = FUN_00138f98(param_1,uVar20,(long)param_3 + (uVar20 - param_2),param_4);
        if (iVar9 != 0) {
          return 1;
        }
        puts("_NewStream_write(stream,writeToPos+leftLen,data+leftLen,data_end) ERROR!");
        pcVar16 = "_NewStream_write(stream,writeToPos+leftLen,data+leftLen,data_end)";
      }
      goto LAB_00138fdc;
    }
    if (*(int *)(lVar17 + 0xa4) < 0) {
      memcpy((void *)(*(long *)(lVar17 + 0x168) + *(long *)(lVar17 + 0x98) + param_2),param_3,__n);
    }
    else {
      if (*(int *)(lVar17 + 0x90) <= *(int *)(lVar17 + 0xa4)) {
        puts("self->_curFileIndex<self->_fileCount ERROR!");
        pcVar16 = "self->_curFileIndex<self->_fileCount";
        goto LAB_00138fdc;
      }
      uVar20 = FUN_0013f1c8(*(undefined8 *)(lVar17 + 0x10),param_3,__n);
      if ((uVar20 & 1) == 0) {
        puts("Zipper_file_append_part(self->_out_newZip,data,dataSize) ERROR!");
        pcVar16 = "Zipper_file_append_part(self->_out_newZip,data,dataSize)";
        goto LAB_00138fdc;
      }
    }
    if (__n + param_2 < *(ulong *)(lVar17 + 0xa8)) {
      return 1;
    }
    if (*(int *)(lVar17 + 0xa4) < 0) {
      uVar20 = FUN_0013d41c(lVar17 + 0xd0,*(undefined1 *)(lVar17 + 0x20),
                            *(undefined8 *)(lVar17 + 0x28));
      if ((uVar20 & 1) == 0) {
        puts(
            "UnZipper_updateVirtualVCE(&self->_newZipVCE,self->_newZipIsDataNormalized,self->_newZipCESize) ERROR!"
            );
        pcVar16 = 
        "UnZipper_updateVirtualVCE(&self->_newZipVCE,self->_newZipIsDataNormalized,self->_newZipCESize)"
        ;
        goto LAB_00138fdc;
      }
      bVar5 = false;
      if (*(char *)(lVar17 + 0x150) != '\0') {
        bVar5 = *(ulong *)(lVar17 + 0x160) < *(ulong *)(lVar17 + 0x120);
      }
      lVar15 = *(long *)(lVar17 + 0x18);
      if (*(char *)(lVar15 + 0x80) == '\0') {
        bVar6 = true;
      }
      else {
        bVar6 = *(ulong *)(lVar15 + 0x50) <= *(ulong *)(lVar15 + 0x90);
      }
      *(char *)(lVar17 + 200) = bVar5 & bVar6;
      FUN_0013dd38(*(undefined8 *)(lVar17 + 0x10),*(undefined4 *)(lVar17 + 0xa0));
    }
    else {
      uVar20 = FUN_0013ef7c(*(undefined8 *)(lVar17 + 0x10));
      if ((uVar20 & 1) == 0) {
LAB_0013913c:
        puts("Zipper_file_append_end(self->_out_newZip) ERROR!");
        pcVar16 = "Zipper_file_append_end(self->_out_newZip)";
        goto LAB_00138fdc;
      }
    }
    iVar12 = *(int *)(lVar17 + 0x90);
    iVar9 = *(int *)(lVar17 + 0xa4) + 1;
    *(int *)(lVar17 + 0xa4) = iVar9;
    if (iVar9 < iVar12) {
      pcVar16 = 
      "UnZipper_file_uncompressedSize(&self->_newZipVCE,newFileIndex)==uncompressedSize ERROR!";
      do {
        if ((*(ulong *)(lVar17 + 0xb0) < *(ulong *)(lVar17 + 0x38)) &&
           (piVar1 = (int *)(*(long *)(lVar17 + 0x30) + *(ulong *)(lVar17 + 0xb0) * 8),
           iVar9 == *piVar1)) {
          iVar3 = piVar1[1];
          bVar7 = FUN_0013c9ec(*(undefined8 *)(lVar17 + 0x18),iVar3);
          iVar10 = FUN_0013d560(*(undefined8 *)(lVar17 + 0x18),iVar3);
          iVar11 = FUN_0013d580(*(undefined8 *)(lVar17 + 0x18),iVar3);
          iVar12 = FUN_0013d574(*(undefined8 *)(lVar17 + 0x18),iVar3);
          iVar13 = FUN_0013d560(lVar17 + 0xd0,iVar9);
          if (iVar13 == iVar10) {
            iVar13 = FUN_0013d580(lVar17 + 0xd0,iVar9);
            if (iVar13 == iVar11) {
              bVar8 = FUN_0013c9ec(lVar17 + 0xd0,iVar9);
              cVar4 = *(char *)(lVar17 + 200);
              bVar2 = bVar7 & (bVar8 ^ 0xff) & 1;
              iVar11 = FUN_0013d574(lVar17 + 0xd0,iVar9);
              if (iVar11 != 0) {
                iVar12 = iVar11;
              }
              if ((bVar8 & 1) == 0) {
                iVar12 = iVar10;
              }
              *(int *)(*(long *)(lVar17 + 0x130) + (long)iVar9 * 4) = iVar12;
              uVar20 = FUN_0013e4c8(*(undefined8 *)(lVar17 + 0x10),lVar17 + 0xd0,iVar9,
                                    (cVar4 == '\0' && bVar2 == 0) & bVar7,iVar10);
              if ((uVar20 & 1) == 0) {
                pcVar16 = 
                "Zipper_file_append_begin(self->_out_newZip,&self->_newZipVCE,newFileIndex, appendDataIsCompressed, is0FileSize?0:uncompressedSize,is0FileSize?0:compressedSize) ERROR!"
                ;
              }
              else {
                lVar15 = FUN_0013f1b4(*(undefined8 *)(lVar17 + 0x10));
                if (lVar15 == 0) {
LAB_00139394:
                  uVar20 = FUN_0013ef7c(*(undefined8 *)(lVar17 + 0x10));
                  if ((uVar20 & 1) != 0) {
                    *(long *)(lVar17 + 0xb0) = *(long *)(lVar17 + 0xb0) + 1;
                    goto LAB_001393ac;
                  }
                  pcVar16 = "Zipper_file_append_end(self->_out_newZip) ERROR!";
                }
                else if (cVar4 == '\0' && bVar2 == 0) {
                  uVar20 = FUN_0013d5a0(*(undefined8 *)(lVar17 + 0x18),iVar3,lVar15,0);
                  if ((uVar20 & 1) != 0) goto LAB_00139394;
                  pcVar16 = "UnZipper_fileData_copyTo(self->_oldZip,oldFileIndex,outStream) ERROR!";
                }
                else {
                  uVar20 = FUN_0013d97c();
                  if ((uVar20 & 1) != 0) goto LAB_00139394;
                  pcVar16 = 
                  "UnZipper_fileData_decompressTo(self->_oldZip,oldFileIndex,outStream) ERROR!";
                }
              }
            }
            else {
              pcVar16 = "UnZipper_file_crc32(&self->_newZipVCE,newFileIndex)==crc32 ERROR!";
            }
          }
          puts(pcVar16);
          puts("_copy_same_file(self,pairNewiOldi[0],pairNewiOldi[1]) ERROR!");
          pcVar16 = "_copy_same_file(self,pairNewiOldi[0],pairNewiOldi[1])";
          goto LAB_00138fdc;
        }
        iVar9 = FUN_0013d560(lVar17 + 0xd0,iVar9);
        if ((iVar9 != 0) ||
           (uVar20 = FUN_0013c9ec(lVar17 + 0xd0,*(undefined4 *)(lVar17 + 0xa4)), (uVar20 & 1) != 0))
        break;
        *(undefined4 *)(*(long *)(lVar17 + 0x130) + (long)*(int *)(lVar17 + 0xa4) * 4) = 0;
        uVar20 = FUN_0013e4c8(*(undefined8 *)(lVar17 + 0x10),lVar17 + 0xd0,
                              *(undefined4 *)(lVar17 + 0xa4),0,0,0);
        if ((uVar20 & 1) == 0) {
          puts(
              "Zipper_file_append_begin(self->_out_newZip,&self->_newZipVCE,self->_curFileIndex,false,0,0) ERROR!"
              );
          pcVar16 = 
          "Zipper_file_append_begin(self->_out_newZip,&self->_newZipVCE,self->_curFileIndex,false,0,0)"
          ;
          goto LAB_00138fdc;
        }
        uVar20 = FUN_0013ef7c(*(undefined8 *)(lVar17 + 0x10));
        if ((uVar20 & 1) == 0) goto LAB_0013913c;
LAB_001393ac:
        iVar9 = *(int *)(lVar17 + 0xa4) + 1;
        *(int *)(lVar17 + 0xa4) = iVar9;
      } while (iVar9 < *(int *)(lVar17 + 0x90));
      iVar9 = *(int *)(lVar17 + 0xa4);
      iVar12 = *(int *)(lVar17 + 0x90);
    }
    if (iVar12 <= iVar9) {
      uVar20 = FUN_001395d8(lVar17);
      if ((uVar20 & 1) != 0) {
        return 1;
      }
      puts("_file_entry_end(self) ERROR!");
      pcVar16 = "_file_entry_end(self)";
      goto LAB_00138fdc;
    }
    uVar14 = FUN_0013d560(lVar17 + 0xd0,iVar9);
    uVar18 = (ulong)uVar14;
    uVar20 = FUN_0013c9ec(lVar17 + 0xd0,*(undefined4 *)(lVar17 + 0xa4));
    uVar19 = uVar14;
    if ((uVar20 & 1) != 0) {
      uVar20 = *(ulong *)(lVar17 + 0xc0);
      if (*(ulong *)(lVar17 + 0x68) <= uVar20) {
        puts("self->_curNewReCompressSizeIndex<self->_newReCompressSizeCount ERROR!");
        pcVar16 = "self->_curNewReCompressSizeIndex<self->_newReCompressSizeCount";
        goto LAB_00138fdc;
      }
      uVar19 = *(uint *)(*(long *)(lVar17 + 0x60) + uVar20 * 4);
      *(ulong *)(lVar17 + 0xc0) = uVar20 + 1;
    }
    *(uint *)(*(long *)(lVar17 + 0x130) + (long)*(int *)(lVar17 + 0xa4) * 4) = uVar19;
    uVar20 = *(ulong *)(lVar17 + 0xb8);
    if (uVar20 < *(ulong *)(lVar17 + 0x48)) {
      iVar3 = *(int *)(*(long *)(lVar17 + 0x40) + uVar20 * 4);
      iVar9 = *(int *)(lVar17 + 0xa4);
      if (iVar3 == iVar9) {
        *(ulong *)(lVar17 + 0xb8) = uVar20 + 1;
        if (*(char *)(lVar17 + 0x50) != '\0') {
          uVar20 = FUN_0013e4d4(*(undefined8 *)(lVar17 + 0x10),lVar17 + 0xd0,iVar3,0,uVar18,uVar19,
                                *(undefined4 *)(lVar17 + 0x54),*(undefined4 *)(lVar17 + 0x58));
          if ((uVar20 & 1) == 0) {
            puts(
                "Zipper_file_append_beginWith(self->_out_newZip,&self->_newZipVCE,self->_curFileIndex, false,is0FileSize?0:uncompressedSize,is0FileSize?0:compressedSize, self->_newOtherCompressLevel,self->_newOtherCompressMemLevel) ERROR!"
                );
            pcVar16 = 
            "Zipper_file_append_beginWith(self->_out_newZip,&self->_newZipVCE,self->_curFileIndex, false,is0FileSize?0:uncompressedSize,is0FileSize?0:compressedSize, self->_newOtherCompressLevel,self->_newOtherCompressMemLevel)"
            ;
            goto LAB_00138fdc;
          }
          goto LAB_00139548;
        }
        iVar12 = 1;
        iVar9 = iVar3;
      }
      else {
        iVar12 = 0;
      }
    }
    else {
      iVar9 = *(int *)(lVar17 + 0xa4);
      iVar12 = 0;
    }
    uVar20 = FUN_0013e4c8(*(undefined8 *)(lVar17 + 0x10),lVar17 + 0xd0,iVar9,iVar12,uVar18,uVar19);
    if ((uVar20 & 1) != 0) {
      if (iVar12 == 0) {
        uVar19 = uVar14;
      }
      uVar18 = (ulong)uVar19;
LAB_00139548:
      *(ulong *)(lVar17 + 0xa8) = *(long *)(lVar17 + 0xa8) + uVar18;
      return 1;
    }
    puts(
        "Zipper_file_append_begin(self->_out_newZip,&self->_newZipVCE,self->_curFileIndex, isWriteOtherCompressedData, is0FileSize?0:uncompressedSize,is0FileSize?0:compressedSize) ERROR!"
        );
    pcVar16 = 
    "Zipper_file_append_begin(self->_out_newZip,&self->_newZipVCE,self->_curFileIndex, isWriteOtherCompressedData, is0FileSize?0:uncompressedSize,is0FileSize?0:compressedSize)"
    ;
  }
  else {
    puts("!self->isFinish ERROR!");
    pcVar16 = "!self->isFinish";
  }
LAB_00138fdc:
  FUN_0013fb24(&DAT_0016ba70,pcVar16,"in New Stream.");
  return 0;
}

