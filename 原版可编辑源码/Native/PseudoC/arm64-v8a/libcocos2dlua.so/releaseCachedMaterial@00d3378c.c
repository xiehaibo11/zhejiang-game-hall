
/* cocos2d::Sprite3DMaterial::releaseCachedMaterial() */

void cocos2d::Sprite3DMaterial::releaseCachedMaterial(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  for (plVar4 = DAT_01787520; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if ((Ref *)plVar4[5] != (Ref *)0x0) {
      Ref::release((Ref *)plVar4[5]);
    }
  }
  lVar1 = DAT_01787518;
  puVar2 = DAT_01787520;
  if (DAT_01787528 != 0) {
    while (DAT_01787518 = lVar1, puVar2 != (void *)0x0) {
      pvVar5 = (void *)*puVar2;
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      lVar1 = DAT_01787518;
      puVar2 = pvVar5;
    }
    DAT_01787520 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(_materials + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
    }
    DAT_01787528 = 0;
  }
  return;
}

