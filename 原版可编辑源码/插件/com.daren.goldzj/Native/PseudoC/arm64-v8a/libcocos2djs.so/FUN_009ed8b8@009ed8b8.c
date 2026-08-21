
void FUN_009ed8b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = operator_new(0x20);
                    /* catch() { ... } // from try @ 009ed80c with catch @ 009ed8d0 */
                    /* catch() { ... } // from try @ 009ed800 with catch @ 009ed8d4 */
                    /* catch() { ... } // from try @ 009ed82c with catch @ 009ed8d8 */
  *puVar4 = &PTR_FUN_01c6c248;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  lVar5 = *(long *)(param_1 + 0x18);
  puVar4[3] = lVar5;
  if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 009ed7e0 with catch @ 009ed8f0 */
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
                    /* catch() { ... } // from try @ 009ed824 with catch @ 009ed900
                       catch() { ... } // from try @ 009ed84c with catch @ 009ed900 */
    } while (cVar2 != '\0');
  }
  return;
}

