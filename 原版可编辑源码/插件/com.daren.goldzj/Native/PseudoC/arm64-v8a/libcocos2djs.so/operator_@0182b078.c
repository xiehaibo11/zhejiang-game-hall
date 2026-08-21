
/* std::runtime_error::TEMPNAMEPLACEHOLDERVALUE(std::runtime_error const&) */

runtime_error * __thiscall std::runtime_error::operator=(runtime_error *this,runtime_error *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(this + 8);
  *(long *)(this + 8) = lVar5;
  piVar6 = (int *)(lVar5 + -8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = *piVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  piVar6 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  return this;
}

