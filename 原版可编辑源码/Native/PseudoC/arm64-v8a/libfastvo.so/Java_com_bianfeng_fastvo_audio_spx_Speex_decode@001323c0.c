
void Java_com_bianfeng_fastvo_audio_spx_Speex_decode
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar4 = auStack_60 + -((ulong)DAT_0014c644 + 0xf & 0x1fffffff0);
  lVar3 = (long)puVar4 - ((ulong)DAT_0014c644 * 2 + 0xf & 0x3fffffff0);
  if (DAT_0014c5d8 == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x640))(param_1,param_3,0,param_5,puVar4);
    speex_bits_read_from(&DAT_0014c610,puVar4,param_5);
    speex_decode_int(dec_state,&DAT_0014c610,lVar3);
    (**(code **)(*param_1 + 0x690))(param_1,param_4,0,DAT_0014c644,lVar3);
    uVar2 = DAT_0014c644;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

