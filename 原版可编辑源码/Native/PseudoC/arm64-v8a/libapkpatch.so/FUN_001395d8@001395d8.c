
undefined8 FUN_001395d8(long param_1)

{
  ulong uVar1;
  char *__s;
  int iVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    if (*(int *)(param_1 + 0xa4) == *(int *)(param_1 + 0x90)) {
      if (*(long *)(param_1 + 0xb0) == *(long *)(param_1 + 0x38)) {
        if (*(long *)(param_1 + 0xb8) == *(long *)(param_1 + 0x48)) {
          if (*(long *)(param_1 + 0xc0) == *(long *)(param_1 + 0x68)) {
            uVar1 = FUN_0013f208(*(undefined8 *)(param_1 + 0x10),param_1 + 0xd0);
            if ((uVar1 & 1) == 0) {
              __s = "Zipper_copyExtra_before_fileHeader(self->_out_newZip,&self->_newZipVCE) ERROR!"
              ;
            }
            else {
              if (0 < *(int *)(param_1 + 0x90)) {
                iVar2 = 0;
                do {
                  uVar1 = FUN_0013f22c(*(undefined8 *)(param_1 + 0x10),param_1 + 0xd0,iVar2);
                  if ((uVar1 & 1) == 0) {
                    __s = "Zipper_fileHeader_append(self->_out_newZip,&self->_newZipVCE,i) ERROR!";
                    goto LAB_001396ec;
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < *(int *)(param_1 + 0x90));
              }
              uVar1 = FUN_0013f298(*(undefined8 *)(param_1 + 0x10),param_1 + 0xd0);
              if ((uVar1 & 1) != 0) {
                *(undefined1 *)(param_1 + 8) = 1;
                return 1;
              }
              __s = "Zipper_endCentralDirectory_append(self->_out_newZip,&self->_newZipVCE) ERROR!";
            }
          }
          else {
            __s = "self->_curNewReCompressSizeIndex==self->_newReCompressSizeCount ERROR!";
          }
        }
        else {
          __s = "self->_curNewOtherCompressIndex==self->_newRefOtherCompressedCount ERROR!";
        }
      }
      else {
        __s = "self->_curSamePairIndex==self->_samePairCount ERROR!";
      }
    }
    else {
      __s = "self->_curFileIndex==self->_fileCount ERROR!";
    }
  }
  else {
    __s = "!self->isFinish ERROR!";
  }
LAB_001396ec:
  puts(__s);
  return 0;
}

