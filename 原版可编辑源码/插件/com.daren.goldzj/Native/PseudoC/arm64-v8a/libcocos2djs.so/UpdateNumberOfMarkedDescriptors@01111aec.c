
/* v8::internal::DescriptorArray::UpdateNumberOfMarkedDescriptors(unsigned int, short) */

uint __thiscall
v8::internal::DescriptorArray::UpdateNumberOfMarkedDescriptors
          (DescriptorArray *this,uint param_1,short param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(ushort *)(*(long *)this + 7);
  uVar7 = (uint)(uVar2 >> 2);
  if (((uVar2 ^ param_1) & 3) != 0) {
    uVar7 = 0;
  }
  if ((int)uVar7 < (int)param_2) {
    uVar6 = (ushort)param_1 & 3 | (ushort)((int)param_2 << 2);
    puVar1 = (ushort *)(*(long *)this + 7);
    do {
      uVar3 = *puVar1;
      if (uVar3 != uVar2) {
        do {
          uVar8 = (uint)uVar3;
          uVar7 = (uint)(uVar3 >> 2);
          ClearExclusiveLocal();
          if (((uVar8 ^ param_1) & 3) != 0) {
            uVar7 = 0;
          }
          if ((int)param_2 <= (int)uVar7) {
            return uVar7;
          }
          puVar1 = (ushort *)(*(long *)this + 7);
          while (uVar3 = *puVar1, uVar3 == uVar8) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              return uVar7;
            }
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  return uVar7;
}

