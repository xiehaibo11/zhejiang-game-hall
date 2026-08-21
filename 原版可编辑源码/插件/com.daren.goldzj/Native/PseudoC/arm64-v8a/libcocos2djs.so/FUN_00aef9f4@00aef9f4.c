
int FUN_00aef9f4(undefined8 param_1,uchar **param_2,long param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int length;
  int constructed;
  int local_54;
  
  local_54 = (int)*(undefined8 *)(param_3 + 8);
  iVar2 = FUN_00aefb6c(param_1,0,&local_54,param_3);
  if ((local_54 + 3U < 0x15) && ((1 << (ulong)(local_54 + 3U & 0x1f) & 0x180001U) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  length = 0;
  if (iVar2 != -1) {
    constructed = length;
    length = iVar2;
    if (iVar2 == -2) {
      length = 0;
      constructed = 2;
    }
    iVar2 = local_54;
    if (param_4 != -1) {
      iVar2 = param_4;
    }
    if (param_2 != (uchar **)0x0) {
      if (bVar1) {
                    /* try { // try from 00aefaac to 00befab3 has its CatchHandler @ 00af04f8 */
                    /* try { // try from 00aefab4 to 00befb9b has its CatchHandler @ 00aeec50 */
        ASN1_put_object(param_2,constructed,length,iVar2,param_5);
      }
      FUN_00aefb6c(param_1,*param_2,&local_54,param_3);
      if (constructed == 0) {
        *param_2 = *param_2 + length;
      }
      else {
        ASN1_put_eoc(param_2);
      }
    }
    if (bVar1) {
      length = ASN1_object_size(constructed,length,iVar2);
    }
  }
  return length;
}

