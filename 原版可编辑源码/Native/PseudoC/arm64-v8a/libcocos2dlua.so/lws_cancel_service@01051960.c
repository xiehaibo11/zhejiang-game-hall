
void lws_cancel_service(long param_1)

{
  ssize_t sVar1;
  ushort uVar2;
  int *piVar3;
  undefined1 local_24 [4];
  
                    /* try { // try from 0105196c to 0115198f has its CatchHandler @ 0105391c */
  local_24[0] = 0;
  uVar2 = *(ushort *)(param_1 + 0xca6);
  if ((uVar2 & 0xff) != 0) {
    piVar3 = (int *)(param_1 + 0x7c4);
    do {
      uVar2 = uVar2 - 1;
      sVar1 = write(*piVar3,local_24,1);
                    /* try { // try from 010519a4 to 011519af has its CatchHandler @ 01053918 */
      if (sVar1 != 1) {
        _lws_log(1,"Cannot write to dummy pipe");
      }
      piVar3 = piVar3 + 0x1be;
    } while ((uVar2 & 0xff) != 0);
  }
                    /* try { // try from 010519c0 to 011519c7 has its CatchHandler @ 010537f8 */
                    /* try { // try from 010519c8 to 011519db has its CatchHandler @ 010537f4 */
  return;
}

