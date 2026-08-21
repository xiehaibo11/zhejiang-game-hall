
undefined8 FUN_0113e84c(long param_1)

{
  if (*(short *)(param_1 + 0x74) == 4) {
    return 1;
  }
  TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"ThunderSetupDecode",
               "Wrong bitspersample value (%d), Thunder decoder only supports 4bits per sample.");
  return 0;
}

