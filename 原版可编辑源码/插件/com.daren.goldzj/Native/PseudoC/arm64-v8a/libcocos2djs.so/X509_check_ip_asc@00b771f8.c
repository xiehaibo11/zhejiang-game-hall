
undefined8 X509_check_ip_asc(undefined8 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  uchar auStack_30 [16];
  
  if ((param_2 == (char *)0x0) || (iVar1 = a2i_ipadd(auStack_30,param_2), iVar1 == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = FUN_00b76c60(param_1,auStack_30,(long)iVar1,param_3,7,0);
  }
  return uVar2;
}

