
/* spine::Skeleton::setBonesToSetupPose() */

void __thiscall spine::Skeleton::setBonesToSetupPose(Skeleton *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(this + 0x18);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      Bone::setToSetupPose(*(Bone **)(*(long *)(this + 0x28) + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  lVar3 = *(long *)(this + 0x78);
  if (lVar3 != 0) {
    plVar1 = *(long **)(this + 0x88);
    do {
      lVar4 = *plVar1;
      lVar3 = lVar3 + -1;
      lVar2 = *(long *)(lVar4 + 8);
      *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar2 + 0x58);
      *(undefined1 *)(lVar4 + 0x34) = *(undefined1 *)(lVar2 + 0x5c);
      *(undefined1 *)(lVar4 + 0x35) = *(undefined1 *)(lVar2 + 0x5d);
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar2 + 0x60);
      plVar1 = plVar1 + 1;
    } while (lVar3 != 0);
  }
  lVar3 = *(long *)(this + 0x98);
  if (lVar3 != 0) {
    plVar1 = *(long **)(this + 0xa8);
    do {
      lVar4 = *plVar1;
      lVar3 = lVar3 + -1;
      uVar5 = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x58);
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x60);
      *(undefined8 *)(lVar4 + 0x38) = uVar5;
      plVar1 = plVar1 + 1;
    } while (lVar3 != 0);
  }
  lVar3 = *(long *)(this + 0xb8);
  if (lVar3 != 0) {
    plVar1 = *(long **)(this + 200);
    do {
      lVar4 = *plVar1;
      lVar3 = lVar3 + -1;
      uVar5 = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x68);
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x70);
      *(undefined8 *)(lVar4 + 0x38) = uVar5;
      plVar1 = plVar1 + 1;
    } while (lVar3 != 0);
  }
  return;
}

