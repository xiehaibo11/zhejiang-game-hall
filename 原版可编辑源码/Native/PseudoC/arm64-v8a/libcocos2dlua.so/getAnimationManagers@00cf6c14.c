
/* cocosbuilder::CCBReader::getAnimationManagers() */

void cocosbuilder::CCBReader::getAnimationManagers(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long in_x0;
  undefined8 *in_x8;
  long lVar4;
  
  *in_x8 = *(undefined8 *)(in_x0 + 0x88);
  lVar4 = *(long *)(in_x0 + 0x90);
  in_x8[1] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
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

