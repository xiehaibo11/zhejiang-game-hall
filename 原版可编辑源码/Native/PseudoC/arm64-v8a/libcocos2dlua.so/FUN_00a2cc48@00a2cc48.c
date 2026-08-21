
bool FUN_00a2cc48(long param_1,long param_2)

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
    lVar2 = FUN_00a2aef0(*(undefined8 *)(param_1 + 0x60));
    lVar3 = FUN_00a2aefc(*(undefined8 *)(param_1 + 0x60));
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
                    /* try { // try from 00a2cccc to 00b2ccff has its CatchHandler @ 00a2cdcc */
      bVar6 = (bool)(bVar6 | lVar3 < *(long *)(param_2 + 0x28));
    }
    pcVar1 = "TRUE";
    if (bVar6 == false) {
      pcVar1 = "FALSE";
    }
                    /* try { // try from 00a2cd00 to 00b2cd13 has its CatchHandler @ 00a2cd98 */
    FUN_00a38740(param_1,"Conn: %ld (%p) Receive pipe weight: (%ld/%zu), penalized: %s\n",
                 *(undefined8 *)(param_2 + 0x50),param_2,lVar4,*(long *)(param_2 + 0x28),pcVar1);
  }
  return bVar6;
}

