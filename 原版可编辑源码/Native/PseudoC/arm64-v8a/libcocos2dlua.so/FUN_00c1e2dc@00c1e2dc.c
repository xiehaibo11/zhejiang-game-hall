
void FUN_00c1e2dc(long param_1,long param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  char *__s;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(lVar4 + 0xc1);
  uVar2 = *(undefined1 *)(lVar4 + 0xc3);
  *(undefined1 *)(lVar4 + 0xc3) = 0;
  *(byte *)(lVar4 + 0xc1) = bVar1 | 0x30;
  iVar3 = FUN_00c175a0(param_1,param_2 + *(long *)(param_1 + 0x38),1,0);
  if (iVar3 != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
    fwrite("VM handler failed: ",1,0x13,(FILE *)pthread_rwlock_tryrdlock);
    if ((int)((long)**(ulong **)(param_1 + 0x28) >> 0x2f) == -5) {
      __s = (char *)((**(ulong **)(param_1 + 0x28) & 0x7fffffffffff) + 0x18);
    }
    else {
      __s = "?";
    }
    fputs(__s,(FILE *)pthread_rwlock_tryrdlock);
    fputc(10,(FILE *)pthread_rwlock_tryrdlock);
  }
  *(byte *)(lVar4 + 0xc1) = bVar1 & 0xf0 | *(byte *)(lVar4 + 0xc1) & 0xf;
  if (*(char *)(lVar4 + 0xc3) != -1) {
    *(undefined1 *)(lVar4 + 0xc3) = uVar2;
  }
  return;
}

