
byte FUN_0013d050(long *param_1,byte param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined1 uVar12;
  int iVar13;
  ulong __n;
  ulong uVar14;
  uint uVar15;
  byte bVar16;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  *(undefined4 *)(param_1[9] + 0x10) = 0;
  lVar4 = param_1[10];
  *(byte *)((long)param_1 + 0x81) = param_2 & 1;
  uVar6 = *(ushort *)(param_1[9] + 8);
  __n = (ulong)uVar6;
  uVar5 = *(uint *)(param_1[9] + 0xc);
  memset((void *)param_1[0xd],0,__n);
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_3 = 0;
  if (uVar6 == 0) {
    bVar8 = false;
    bVar16 = 1;
  }
  else {
    uVar14 = 0;
    uVar15 = 0;
    bVar8 = true;
    bVar16 = 1;
    do {
      piVar1 = (int *)(lVar4 + (int)uVar15);
      if (*piVar1 != 0x2014b50) {
        pcVar11 = "kCENTRALHEADERMAGIC==readUInt32(headBuf)";
LAB_0013d330:
        FUN_0013fb24(&DAT_0016ba80,pcVar11,DAT_0016ba88);
        goto LAB_0013d334;
      }
      *(uint *)(param_1[0xb] + uVar14 * 4) = uVar15;
      *(int *)(param_1[0xc] + uVar14 * 4) = piVar1[5];
      iVar9 = *(int *)((long)piVar1 + 0x2a);
      piVar1[5] = 0;
      iVar13 = iVar9 + 0x1e;
      iVar10 = (uint)*(ushort *)(piVar1 + 7) + iVar13 + (uint)*(ushort *)((long)piVar1 + 0x1e);
      *(undefined4 *)((long)piVar1 + 0x2a) = 0;
      if ((param_2 & 1) == 0) {
        iVar9 = (**(code **)(*param_1 + 0x10))(*param_1,iVar9 + 0x1a,&local_78,&local_74);
        if (iVar9 == 0) {
          FUN_0013fb24(&DAT_0016ba80,"UnZipper_fileData_read(self,entryOffset+26,buf,buf+4)",
                       DAT_0016ba88);
          iVar13 = 0;
        }
        else {
          iVar13 = (local_78 & 0xffff) + iVar13 + (local_78 >> 0x10);
        }
        bVar16 = bVar16 & iVar13 == iVar10;
        *(int *)(param_1[0xf] + uVar14 * 4) = iVar13;
      }
      else {
        *(int *)(param_1[0xf] + uVar14 * 4) = iVar10;
      }
      uVar2 = *(int *)(param_1[0xc] + uVar14 * 4) + *(int *)(param_1[0xf] + uVar14 * 4);
      if (*param_3 < uVar2) {
        *param_3 = uVar2;
      }
      if ((*(byte *)(piVar1 + 2) >> 3 & 1) != 0) {
        *(byte *)(piVar1 + 2) = *(byte *)(piVar1 + 2) & 0xf7;
        lVar3 = param_1[10] + (ulong)*(uint *)(param_1[0xb] + uVar14 * 4);
        uVar2 = *(uint *)(lVar3 + 0x10);
        iVar13 = *(int *)(lVar3 + 0x18);
        iVar10 = (**(code **)(*param_1 + 0x10))
                           (*param_1,*(int *)(param_1[0xc] + uVar14 * 4) +
                                     *(int *)(param_1[0xf] + uVar14 * 4),&local_78,&local_68);
        if (iVar10 == 0) {
          pcVar11 = 
          "UnZipper_fileData_read(self,self->_fileDataOffsets[i]+self->_fileCompressedSizes[i],buf,buf+16)"
          ;
          goto LAB_0013d330;
        }
        if ((local_78 == uVar2) && (local_70 == iVar13)) {
LAB_0013d268:
          uVar12 = 1;
        }
        else {
          if ((local_74 != uVar2) || (local_6c != iVar13)) {
            puts("WARNING: zip format error, unknow data descriptor!");
            goto LAB_0013d268;
          }
          uVar12 = 2;
        }
        *(undefined1 *)(param_1[0xd] + uVar14) = uVar12;
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
      }
      uVar15 = uVar15 + *(ushort *)
                         (param_1[10] + (ulong)*(uint *)(param_1[0xb] + uVar14 * 4) + 0x1c) +
               (uint)*(ushort *)((long)piVar1 + 0x1e) + (uint)*(ushort *)(piVar1 + 8) + 0x2e;
      if (uVar5 < uVar15) {
        pcVar11 = "(size_t)curOffset <= centralDirectory_size";
        goto LAB_0013d330;
      }
      uVar14 = uVar14 + 1;
      bVar8 = uVar14 < __n;
    } while (__n != uVar14);
  }
  *(byte *)((long)param_1 + 0x81) = bVar16;
LAB_0013d334:
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8 ^ 1;
}

