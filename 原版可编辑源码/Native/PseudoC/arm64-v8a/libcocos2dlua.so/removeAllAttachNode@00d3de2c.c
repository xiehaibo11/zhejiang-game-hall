
/* cocos2d::Sprite3D::removeAllAttachNode() */

void __thiscall cocos2d::Sprite3D::removeAllAttachNode(Sprite3D *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  for (plVar4 = *(long **)(this + 0x330); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    (**(code **)(*(long *)this + 0x280))(this,plVar4[5],1);
  }
  if (*(long *)(this + 0x338) != 0) {
    puVar1 = *(void **)(this + 0x330);
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    lVar2 = *(long *)(this + 0x328);
    *(undefined8 *)(this + 0x330) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 800) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x338) = 0;
  }
  return;
}

