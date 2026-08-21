
/* spine::Skeleton::updateWorldTransform() */

void __thiscall spine::Skeleton::updateWorldTransform(Skeleton *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0xf8);
  if (lVar1 != 0) {
    plVar2 = *(long **)(this + 0x108);
    do {
      lVar3 = *plVar2;
      lVar1 = lVar1 + -1;
      *(undefined1 *)(lVar3 + 0x78) = 1;
      *(undefined8 *)(lVar3 + 100) = *(undefined8 *)(lVar3 + 0x48);
      *(undefined8 *)(lVar3 + 0x5c) = *(undefined8 *)(lVar3 + 0x40);
      *(undefined8 *)(lVar3 + 0x6c) = *(undefined8 *)(lVar3 + 0x50);
      *(undefined4 *)(lVar3 + 0x74) = *(undefined4 *)(lVar3 + 0x58);
      plVar2 = plVar2 + 1;
    } while (lVar1 != 0);
  }
  lVar1 = *(long *)(this + 0xd8);
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0xe8) + lVar3 * 8) + 0x18))();
      lVar3 = lVar3 + 1;
    } while (lVar1 != lVar3);
  }
  return;
}

