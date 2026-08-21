
/* cocostudio::TriggerMng::removeAllArmatureMovementCallBack() */

void __thiscall cocostudio::TriggerMng::removeAllArmatureMovementCallBack(TriggerMng *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(this + 0x30);
  lVar3 = plVar1[2];
  if (lVar3 == 0) {
    if (plVar1[3] != 0) {
      lVar3 = plVar1[1];
      plVar1[2] = 0;
      if (lVar3 != 0) {
        lVar2 = 0;
        do {
          *(undefined8 *)(*plVar1 + lVar2 * 8) = 0;
          lVar2 = lVar2 + 1;
        } while (lVar3 != lVar2);
      }
      plVar1[3] = 0;
    }
    return;
  }
  do {
    removeArmatureAllMovementCallBack(this,*(Armature **)(lVar3 + 0x10));
  } while( true );
}

