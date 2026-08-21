
undefined8
Java_com_bianfeng_fastvo_audio_spx_Speex_open
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar1 = DAT_0014c5d8 + 1;
  bVar2 = DAT_0014c5d8 == 0;
  DAT_0014c5d8 = iVar1;
  if (bVar2) {
    speex_bits_init(&DAT_0014c5e0);
    speex_bits_init(&DAT_0014c610);
    enc_state = speex_encoder_init(speex_nb_mode);
    dec_state = speex_decoder_init(speex_nb_mode);
    local_3c = param_3;
    speex_encoder_ctl(enc_state,4,&local_3c);
    speex_encoder_ctl(enc_state,3,&DAT_0014c640);
    speex_decoder_ctl(dec_state,3,&DAT_0014c644);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

