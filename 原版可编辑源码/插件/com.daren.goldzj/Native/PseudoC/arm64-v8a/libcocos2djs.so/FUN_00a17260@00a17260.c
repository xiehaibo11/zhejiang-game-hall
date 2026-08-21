
bool FUN_00a17260(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    bVar6 = false;
  }
  else {
    lVar2 = FUN_00a15508(*(undefined8 *)(param_1 + 0x60));
    lVar3 = FUN_00a15514(*(undefined8 *)(param_1 + 0x60));
    if ((*(long **)(param_2 + 0x480) == (long *)0x0) ||
       (plVar5 = (long *)**(long **)(param_2 + 0x480), plVar5 == (long *)0x0)) {
      bVar6 = false;
      lVar4 = -2;
    }
    else {
      lVar4 = *(long *)(*plVar5 + 0x78);
      bVar6 = 0 < lVar2 && lVar2 < lVar4;
    }
    if (0 < lVar3) {
      bVar6 = (bool)(bVar6 | lVar3 < *(long *)(param_2 + 0x28));
    }
    pcVar1 = "TRUE";
    if (bVar6 == false) {
      pcVar1 = "FALSE";
    }
    FUN_00a22d58(param_1,"Conn: %ld (%p) Receive pipe weight: (%ld/%zu), penalized: %s\n",
                 *(undefined8 *)(param_2 + 0x50),param_2,lVar4,*(long *)(param_2 + 0x28),pcVar1);
  }
  return bVar6;
}

