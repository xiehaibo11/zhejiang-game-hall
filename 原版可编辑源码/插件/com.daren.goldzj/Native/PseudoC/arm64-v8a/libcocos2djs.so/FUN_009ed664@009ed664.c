
void FUN_009ed664(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = operator_new(0x20);
                    /* try { // try from 009ed680 to 00aed68f has its CatchHandler @ 009ed734 */
  *puVar4 = &PTR_FUN_01c6c1c8;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
                    /* try { // try from 009ed690 to 00aed78b has its CatchHandler @ 009ed5c0 */
  lVar5 = *(long *)(param_1 + 0x18);
  puVar4[3] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

