
/* cocostudio::TriggerObj::detect() */

uint __thiscall cocostudio::TriggerObj::detect(TriggerObj *this)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (this[0x5c] != (TriggerObj)0x0) {
    puVar3 = *(undefined8 **)(this + 0x28);
    puVar1 = *(undefined8 **)(this + 0x30);
    if (puVar3 != puVar1) {
      do {
        uVar2 = (**(code **)(*(long *)*puVar3 + 0x18))();
        while( true ) {
          puVar3 = puVar3 + 1;
          if (puVar1 == puVar3) goto LAB_00c6d898;
          if ((uVar2 & 1) == 0) break;
          uVar2 = 1;
        }
      } while( true );
    }
  }
  uVar2 = 1;
LAB_00c6d898:
  return uVar2 & 1;
}

