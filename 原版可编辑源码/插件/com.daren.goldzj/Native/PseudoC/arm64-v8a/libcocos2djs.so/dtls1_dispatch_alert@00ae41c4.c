
int dtls1_dispatch_alert(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined1 local_24;
  undefined1 local_23;
  
  lVar2 = *(long *)(param_1 + 0x24);
  local_24 = *(undefined1 *)(lVar2 + 0xf8);
  *(undefined4 *)(lVar2 + 0xf4) = 0;
  local_23 = *(undefined1 *)(lVar2 + 0xf9);
  iVar1 = do_dtls1_write(param_1,0x15,&local_24,2,0);
  if (iVar1 < 1) {
    *(undefined4 *)(*(long *)(param_1 + 0x24) + 0xf4) = 1;
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x24) + 0xf8) == '\x02') {
      BIO_ctrl(*(BIO **)(param_1 + 6),0xb,0,(void *)0x0);
    }
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))
                (1,*param_1,0x15,*(long *)(param_1 + 0x24) + 0xf8,2,param_1,
                 *(undefined8 *)(param_1 + 0x2a));
    }
    pcVar3 = *(code **)(param_1 + 0x66);
    if ((pcVar3 != (code *)0x0) ||
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x6e) + 0xf8), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1,0x4008,
                CONCAT11(*(undefined1 *)(*(long *)(param_1 + 0x24) + 0xf8),
                         *(undefined1 *)(*(long *)(param_1 + 0x24) + 0xf9)));
    }
  }
  return iVar1;
}

