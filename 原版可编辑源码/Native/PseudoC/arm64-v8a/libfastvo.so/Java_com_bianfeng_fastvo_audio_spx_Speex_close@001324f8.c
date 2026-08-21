
void Java_com_bianfeng_fastvo_audio_spx_Speex_close(void)

{
  DAT_0014c5d8 = DAT_0014c5d8 + -1;
  if (DAT_0014c5d8 != 0) {
    return;
  }
  speex_bits_destroy(&DAT_0014c5e0);
  speex_bits_destroy(&DAT_0014c610);
  speex_decoder_destroy(dec_state);
  speex_encoder_destroy(enc_state);
  return;
}

