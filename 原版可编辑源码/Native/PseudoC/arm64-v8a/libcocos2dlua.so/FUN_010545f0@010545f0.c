
void FUN_010545f0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  int local_24;
  
  *(undefined1 *)(param_1 + 0x2ff) = 5;
  FUN_01044614();
  iVar2 = *(int *)(*(long *)(param_1 + 0x248) + 0x18);
  if (iVar2 == 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x220) + 0xc84);
  }
  iVar1 = iVar2 + 0x10;
  local_24 = iVar1;
  lVar3 = thunk_FUN_0104b1cc(0,(long)(iVar2 + 0x14),"rx_ubuf");
  *(long *)(param_1 + 0x38) = lVar3;
  if (lVar3 != 0) {
    *(int *)(param_1 + 0x40) = iVar1;
    if (((*(byte *)(param_1 + 0x2f6) >> 4 & 1) == 0) &&
       (iVar2 = setsockopt(*(int *)(param_1 + 0x2d0),1,7,&local_24,4), iVar2 != 0)) {
      _lws_log(2,"Failed to set SNDBUF to %d",local_24);
      return;
    }
    pcVar4 = *(code **)(*(long *)(param_1 + 0x248) + 8);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(param_1,0,*(undefined8 *)(param_1 + 0x270),*(undefined8 *)(param_1 + 0x2b0),0);
    }
    return;
  }
  _lws_log(1,"Out of Mem allocating rx buffer %d\n",iVar1);
  return;
}

