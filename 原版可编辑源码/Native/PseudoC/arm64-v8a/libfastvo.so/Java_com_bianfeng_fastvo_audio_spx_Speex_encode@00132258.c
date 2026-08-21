
undefined4
Java_com_bianfeng_fastvo_audio_spx_Speex_encode
          (long *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
          int param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar5 = auStack_80 + -((ulong)DAT_0014c640 * 2 + 0xf & 0x3fffffff0);
  lVar4 = (long)puVar5 - ((ulong)DAT_0014c640 + 0xf & 0x1fffffff0);
  if (DAT_0014c5d8 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = 0;
    if (DAT_0014c640 != 0) {
      iVar1 = (param_6 + -1) / (int)DAT_0014c640;
    }
    local_78 = param_5;
    local_70 = lVar3;
    speex_bits_reset(&DAT_0014c5e0);
    if (-1 < iVar1) {
      iVar6 = 0;
      do {
        (**(code **)(*param_1 + 0x650))
                  (param_1,param_3,param_4 + DAT_0014c640 * iVar6,DAT_0014c640,puVar5);
        speex_encode_int(enc_state,puVar5,&DAT_0014c5e0);
        iVar6 = iVar6 + 1;
      } while (iVar1 + 1 != iVar6);
    }
    uVar2 = speex_bits_write(&DAT_0014c5e0,lVar4,DAT_0014c640);
    (**(code **)(*param_1 + 0x680))(param_1,local_78,0,uVar2,lVar4);
    lVar3 = local_70;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

