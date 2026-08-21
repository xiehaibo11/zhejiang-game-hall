
/* v8::internal::CpuProfilesCollection::RemoveProfile(v8::internal::CpuProfile*) */

void __thiscall
v8::internal::CpuProfilesCollection::RemoveProfile(CpuProfilesCollection *this,CpuProfile *param_1)

{
  undefined8 *puVar1;
  CpuProfile *pCVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = *(undefined8 **)(this + 0x18);
  puVar5 = *(undefined8 **)(this + 0x20);
  if ((puVar4 != puVar5) && ((CpuProfile *)*puVar4 != param_1)) {
    puVar3 = puVar4;
    do {
      puVar4 = puVar5;
      if (puVar5 + -1 == puVar3) break;
      puVar1 = puVar3 + 1;
      puVar4 = puVar3 + 1;
      puVar3 = puVar4;
    } while ((CpuProfile *)*puVar1 != param_1);
  }
  if (puVar4 + 1 != puVar5) {
    do {
      pCVar2 = (CpuProfile *)*puVar4;
      *puVar4 = puVar4[1];
      puVar4[1] = 0;
      if (pCVar2 != (CpuProfile *)0x0) {
        CpuProfile::~CpuProfile(pCVar2);
        operator_delete(pCVar2);
      }
      puVar4 = puVar4 + 1;
    } while (puVar5 + -1 != puVar4);
    puVar5 = *(undefined8 **)(this + 0x20);
    if (puVar5 == puVar4) goto LAB_011af7a0;
  }
  do {
    puVar5 = puVar5 + -1;
    pCVar2 = (CpuProfile *)*puVar5;
    *puVar5 = 0;
    if (pCVar2 != (CpuProfile *)0x0) {
      CpuProfile::~CpuProfile(pCVar2);
      operator_delete(pCVar2);
    }
  } while (puVar4 != puVar5);
LAB_011af7a0:
  *(undefined8 **)(this + 0x20) = puVar4;
  return;
}

