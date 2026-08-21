
void FUN_00121b14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    pcVar3 = "false";
    uVar2 = 6;
  }
  else {
    pcVar3 = "true";
    uVar2 = 5;
  }
  lVar1 = __strlen_chk(pcVar3,uVar2);
  FUN_0011bcc0(param_2,pcVar3,pcVar3 + lVar1);
  return;
}

