
/* v8::internal::Scavenger::AddEphemeronHashTable(v8::internal::EphemeronHashTable) */

void __thiscall v8::internal::Scavenger::AddEphemeronHashTable(Scavenger *this,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(long *)(this + 0x40);
  puVar3 = (undefined8 *)(lVar4 + (long)*(int *)(this + 0x48) * 0x50);
  puVar5 = (undefined8 *)*puVar3;
  lVar2 = puVar5[1];
  if (lVar2 == 0x80) {
    base::Mutex::Lock((Mutex *)(lVar4 + 0x280));
    *puVar5 = *(undefined8 *)(lVar4 + 0x2a8);
    *(undefined8 **)(lVar4 + 0x2a8) = puVar5;
    base::Mutex::Unlock((Mutex *)(lVar4 + 0x280));
    puVar1 = operator_new(0x410);
    memset(puVar1 + 3,0,0x3f8);
    *puVar3 = puVar1;
    puVar1[1] = 1;
  }
  else {
    puVar1 = puVar5 + lVar2;
    puVar5[1] = lVar2 + 1;
  }
  puVar1[2] = param_2;
  return;
}

