
undefined4 FUN_0013f298(long param_1,long param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined2 uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined2 local_54 [2];
  undefined2 local_50 [2];
  undefined1 local_4c;
  undefined1 local_4b;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_1 + 0x60) == *(int *)(param_1 + 0x78)) {
    if (*(char *)(param_1 + 0x118) == '\0') {
      if (*(char *)(param_1 + 0x120) == '\0') {
        iVar2 = *(int *)(param_1 + 0x58);
        iVar3 = *(int *)(param_1 + 0x7c);
        uVar6 = FUN_0013e3d8(param_1,*(undefined8 *)(param_2 + 0x48),8);
        if ((uVar6 & 1) == 0) {
          pcVar7 = "_write(self,endBuf+0,8-0)";
        }
        else {
          local_54[0] = (undefined2)*(undefined4 *)(param_1 + 0x60);
          uVar6 = FUN_0013e3d8(param_1,local_54,2);
          if ((uVar6 & 1) != 0) {
            local_50[0] = (undefined2)*(undefined4 *)(param_1 + 0x60);
            uVar6 = FUN_0013e3d8(param_1,local_50,2);
            if ((uVar6 & 1) != 0) {
              uVar6 = FUN_0013f540(param_1,iVar2 - iVar3);
              if ((uVar6 & 1) == 0) {
                pcVar7 = "_writeUInt32(self,centralDirectory_size)";
              }
              else {
                uVar6 = FUN_0013f540(param_1,*(undefined4 *)(param_1 + 0x7c));
                if ((uVar6 & 1) == 0) {
                  pcVar7 = "_writeUInt32(self,self->_centralDirectory_pos)";
                }
                else {
                  puVar1 = (undefined2 *)(*(long *)(param_2 + 0x48) + 0x14);
                  local_4c = *(undefined1 *)puVar1;
                  local_4b = *(undefined1 *)(*(long *)(param_2 + 0x48) + 0x15);
                  uVar5 = *puVar1;
                  uVar6 = FUN_0013e3d8(param_1,&local_4c,2);
                  if ((uVar6 & 1) == 0) {
                    pcVar7 = "_writeUInt16(self,endCommentLen)";
                  }
                  else {
                    uVar6 = FUN_0013e3d8(param_1,*(long *)(param_2 + 0x48) + 0x16,uVar5);
                    if ((uVar6 & 1) == 0) {
                      pcVar7 = "_write(self,srcZip->_endCentralDirectory+22,endCommentLen)";
                    }
                    else {
                      uVar6 = FUN_0013ef14(param_1);
                      if ((uVar6 & 1) == 0) {
                        pcVar7 = "_writeFlush(self)";
                      }
                      else {
                        if (*(int *)(param_1 + 0x124) < 2) {
                          uVar8 = 1;
                          goto LAB_0013f314;
                        }
                        FUN_00138018(*(undefined8 *)(param_1 + 0x128));
                        uVar8 = 1;
                        uVar6 = FUN_0013f0d4(param_1,1);
                        if ((uVar6 & 1) != 0) goto LAB_0013f314;
                        pcVar7 = "_dispose_filishedThreadWork(self,true)";
                      }
                    }
                  }
                }
              }
              goto LAB_0013f30c;
            }
          }
          pcVar7 = "_writeUInt16(self,self->_fileEntryCount)";
        }
      }
      else {
        pcVar7 = "!self->_isUpdateIsCompress";
      }
    }
    else {
      pcVar7 = "!self->_isUpdateCrc32";
    }
  }
  else {
    pcVar7 = "self->_fileEntryCount==self->_fileHeaderCount";
  }
LAB_0013f30c:
  FUN_0013fb24(&DAT_0016ba80,pcVar7,DAT_0016ba88);
  uVar8 = 0;
LAB_0013f314:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

