
long ASN1_INTEGER_get(ASN1_INTEGER *a)

{
  int iVar1;
  long lVar2;
  long local_18;
  
  lVar2 = 0;
  if ((a != (ASN1_INTEGER *)0x0) &&
     (iVar1 = FUN_00b7c898(&local_18,a,2), lVar2 = local_18, iVar1 == 0)) {
    lVar2 = -1;
  }
  return lVar2;
}

