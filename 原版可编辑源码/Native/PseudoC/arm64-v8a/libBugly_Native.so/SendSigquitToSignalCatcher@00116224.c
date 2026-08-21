
void SendSigquitToSignalCatcher(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  char *pcVar5;
  
  if ((DAT_00140380 & 1) == 0) {
    log2Console(3,"eup","not handing sigquit, just return");
    return;
  }
  log2Console(3,"eup","Start to search signal catcher");
  puVar3 = malloc(4);
  iVar1 = getSameNameThreadIdArray("Signal Catcher",puVar3,1,0);
  if (iVar1 == 1) {
    log2Console(3,"eup","resend sigquit to signal-catcher start,tid :%d",*puVar3);
    uVar2 = getpid();
    uVar4 = syscall(0x83,(ulong)uVar2,(ulong)*puVar3,3);
    pcVar5 = strerror((int)uVar4);
    log2Console(3,"eup","resend sigquit to signal-catcher end result:%d %s",uVar4 & 0xffffffff,
                pcVar5);
  }
  DAT_00140380 = 0;
  return;
}

