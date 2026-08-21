
void FUN_00ab5a70(long param_1,char *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long local_c0;
  undefined4 local_b8;
  short local_b4;
  short local_b2;
  ushort local_b0;
  ushort local_ae;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  ushort local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined4 local_8e;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  lVar2 = lws_vfs_file_seek_end(*(undefined8 *)(param_1 + 0x30),0xffffffffffffffea);
  if (lVar2 < 0) {
    uVar3 = 1;
    if (*(long *)(lVar6 + 0x28) == local_58) {
      return;
    }
    goto LAB_00ab5d08;
  }
  iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18))
                    (*(long *)(param_1 + 0x30),&local_c0,&local_b8,0x16);
  uVar3 = 2;
  if ((iVar1 == 0) && (local_c0 == 0x16)) {
    if (((char)local_b8 != 'P') || ((local_b8._1_1_ != 'K' || (local_b8._2_1_ != '\x05')))) {
      uVar3 = 3;
      if (*(long *)(lVar6 + 0x28) == local_58) {
        return;
      }
      goto LAB_00ab5d08;
    }
    if (local_b8._3_1_ == '\x06') {
      if (((local_b4 != 0) || (local_b2 != 0)) || (uVar7 = (uint)local_ae, uVar7 != local_b0)) {
        uVar3 = 4;
        if (*(long *)(lVar6 + 0x28) == local_58) {
          return;
        }
        goto LAB_00ab5d08;
      }
      lVar2 = lws_vfs_file_seek_set(*(undefined8 *)(param_1 + 0x30),local_a8);
      if (lVar2 < 0) {
        uVar3 = 5;
        if (*(long *)(lVar6 + 0x28) == local_58) {
          return;
        }
        goto LAB_00ab5d08;
      }
      if (uVar7 == 0) {
LAB_00ab5d84:
        uVar3 = 0xe;
        if (*(long *)(lVar6 + 0x28) == local_58) {
          return;
        }
        goto LAB_00ab5d08;
      }
      lVar2 = (long)(int)param_3;
      do {
        uVar3 = lws_vfs_tell(*(undefined8 *)(param_1 + 0x30));
        *(undefined8 *)(param_1 + 0xd0) = uVar3;
        iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18))
                          (*(long *)(param_1 + 0x30),&local_c0,&local_b8,0x2e);
        uVar3 = 6;
        if ((iVar1 != 0) || (local_c0 != 0x2e)) break;
        if (local_b8 != 0x2014b50) {
          uVar3 = 7;
          if (*(long *)(lVar6 + 0x28) == local_58) {
            return;
          }
          goto LAB_00ab5d08;
        }
        *(ushort *)(param_1 + 0x54) = local_9c;
        *(undefined2 *)(param_1 + 0x56) = local_9a;
        uVar3 = lws_vfs_tell(*(undefined8 *)(param_1 + 0x30));
        *(undefined8 *)(param_1 + 0x38) = uVar3;
        *(ushort *)(param_1 + 0x58) = local_ae;
        *(undefined4 *)(param_1 + 0x40) = local_a8;
        *(undefined4 *)(param_1 + 0x44) = local_a4;
        *(undefined4 *)(param_1 + 0x48) = local_a0;
        *(undefined4 *)(param_1 + 0x4c) = local_8e;
        *(undefined4 *)(param_1 + 0x50) = local_ac;
        *(undefined2 *)(param_1 + 0x5a) = local_98;
        if (*(ushort *)(param_1 + 0x54) == param_3) {
          if (0x5e < param_3) {
            uVar3 = 8;
            if (*(long *)(lVar6 + 0x28) == local_58) {
              return;
            }
            goto LAB_00ab5d08;
          }
          iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18))
                            (*(long *)(param_1 + 0x30),&local_c0,&local_b8,lVar2);
          uVar3 = 10;
          if ((iVar1 != 0) || (local_c0 != lVar2)) break;
          *(undefined1 *)((long)&local_b8 + lVar2) = 0;
          iVar1 = strcmp((char *)&local_b8,param_2);
          if (iVar1 == 0) {
            lVar2 = lws_vfs_file_seek_set
                              (*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x4c));
            if (lVar2 < 0) {
              uVar3 = 9;
              if (*(long *)(lVar6 + 0x28) == local_58) {
                return;
              }
              goto LAB_00ab5d08;
            }
            iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18))
                              (*(long *)(param_1 + 0x30),&local_c0,&local_b8,0x1e);
            uVar3 = 10;
                    /* try { // try from 00ab5e04 to 00bb5e07 has its CatchHandler @ 00ab5e28 */
            if ((iVar1 == 0) && (local_c0 == 0x1e)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab5e04 with catch @ 00ab5e28
                        */
              uVar5 = (ulong)(*(int *)(param_1 + 0x4c) + (uint)*(ushort *)(param_1 + 0x54) +
                              (uint)local_9c + 0x1e);
              *(ulong *)(param_1 + 0xd0) = uVar5;
              if (*(ulong *)(*(long *)(param_1 + 0x30) + 0x20) < uVar5) {
                uVar3 = 0xb;
                if (*(long *)(lVar6 + 0x28) == local_58) {
                  return;
                }
              }
              else {
                lVar2 = lws_vfs_file_seek_set();
                if (lVar2 < 0) {
                  uVar3 = 0xc;
                  lVar6 = *(long *)(lVar6 + 0x28);
                }
                else {
                  uVar3 = 0;
                  *(undefined8 *)(param_1 + 0xd8) = 0;
                  lVar6 = *(long *)(lVar6 + 0x28);
                }
                if (lVar6 == local_58) {
                  return;
                }
              }
              goto LAB_00ab5d08;
            }
            break;
          }
        }
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_00ab5d84;
        lVar4 = lws_vfs_file_seek_set
                          (*(undefined8 *)(param_1 + 0x30),
                           *(long *)(param_1 + 0xd0) + (ulong)*(ushort *)(param_1 + 0x54) +
                           (ulong)*(ushort *)(param_1 + 0x56) + (ulong)*(ushort *)(param_1 + 0x5a) +
                           0x2e);
        uVar3 = 0xd;
      } while (-1 < lVar4);
    }
    else {
      uVar3 = 3;
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_00ab5d08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

