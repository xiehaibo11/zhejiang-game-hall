
void SSL_CONF_CTX_set_ssl(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_2;
  if (param_2 == 0) {
    lVar1 = 0;
    lVar2 = 0;
    lVar3 = 0;
    lVar4 = 0;
    param_2 = 0;
  }
  else {
    lVar1 = param_2 + 0x1e4;
    lVar2 = param_2 + 0x1ec;
    lVar3 = param_2 + 0x1f0;
    lVar4 = *(long *)(param_2 + 0x148) + 0x1c;
    param_2 = param_2 + 0x188;
  }
  *(long *)(param_1 + 0x28) = lVar1;
  *(long *)(param_1 + 0x78) = lVar2;
  *(long *)(param_1 + 0x80) = lVar3;
  *(long *)(param_1 + 0x68) = lVar4;
  *(long *)(param_1 + 0x70) = param_2;
  return;
}

