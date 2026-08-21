
void lws_cancel_service(long param_1)

{
  ssize_t sVar1;
  ushort uVar2;
  int *piVar3;
  undefined1 local_24 [4];
  
  local_24[0] = 0;
  uVar2 = *(ushort *)(param_1 + 0xca6);
  if ((uVar2 & 0xff) != 0) {
    piVar3 = (int *)(param_1 + 0x7c4);
    do {
      uVar2 = uVar2 - 1;
      sVar1 = write(*piVar3,local_24,1);
      if (sVar1 != 1) {
        _lws_log(1,"Cannot write to dummy pipe");
      }
      piVar3 = piVar3 + 0x1be;
    } while ((uVar2 & 0xff) != 0);
  }
                    /* try { // try from 00aaf244 to 00baf247 has its CatchHandler @ 00aaf30c */
                    /* try { // try from 00aaf248 to 00baf31f has its CatchHandler @ 00aaf10c */
  return;
}

