
int ASN1_TYPE_set_int_octetstring(ASN1_TYPE *a,long num,uchar *data,int len)

{
  long lVar1;
  int local_40 [2];
  uchar *local_38;
  undefined8 uStack_30;
  long local_28;
  undefined1 *puStack_20;
  ASN1_TYPE *local_18;
  
  puStack_20 = (undefined1 *)local_40;
  uStack_30 = 0;
  local_40[1] = 4;
  local_40[0] = len;
  local_38 = data;
  local_28 = num;
  local_18 = a;
  lVar1 = ASN1_TYPE_pack_sequence(&DAT_01c88930,&local_28,&local_18);
  return (int)(lVar1 != 0);
}

