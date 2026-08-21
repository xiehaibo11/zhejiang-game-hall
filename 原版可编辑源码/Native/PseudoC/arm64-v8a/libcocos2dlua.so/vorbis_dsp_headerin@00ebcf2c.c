
void vorbis_dsp_headerin(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [48];
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    oggpack_readinit(auStack_80,*param_3);
    iVar2 = oggpack_read(auStack_80,8);
    local_50 = oggpack_read(auStack_80,8);
    local_4f = oggpack_read(auStack_80,8);
    local_4e = oggpack_read(auStack_80,8);
    local_4d = oggpack_read(auStack_80,8);
    local_4c = oggpack_read(auStack_80,8);
    local_4b = oggpack_read(auStack_80,8);
    iVar3 = memcmp(&local_50,"vorbis",6);
    if (iVar3 != 0) {
      uVar4 = 0xffffff7c;
      goto LAB_00ebd070;
    }
    if (iVar2 == 5) {
      if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_2 + 0x18) != 0)) {
        uVar4 = _vorbis_unpack_books(param_1,auStack_80);
        goto LAB_00ebd070;
      }
    }
    else if (iVar2 == 3) {
      if (*(long *)(param_1 + 8) != 0) {
        uVar4 = _vorbis_unpack_comment(param_2,auStack_80);
        goto LAB_00ebd070;
      }
    }
    else if (((iVar2 == 1) && (param_3[2] != 0)) && (*(long *)(param_1 + 8) == 0)) {
      uVar4 = _vorbis_unpack_info(param_1,auStack_80);
      goto LAB_00ebd070;
    }
  }
  uVar4 = 0xffffff7b;
LAB_00ebd070:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

