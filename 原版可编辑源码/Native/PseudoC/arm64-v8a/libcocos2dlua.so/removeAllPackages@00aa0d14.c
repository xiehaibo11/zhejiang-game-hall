
/* fairygui::UIPackage::removeAllPackages() */

void fairygui::UIPackage::removeAllPackages(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  puVar2 = DAT_01782970;
  for (puVar4 = _packageList; puVar4 != puVar2; puVar4 = puVar4 + 1) {
    cocos2d::Ref::release((Ref *)*puVar4);
  }
  lVar1 = DAT_01782920;
  puVar4 = DAT_01782928;
  if (DAT_01782930 != 0) {
    while (DAT_01782920 = lVar1, puVar4 != (void *)0x0) {
      pvVar5 = (void *)*puVar4;
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
        operator_delete((void *)puVar4[4]);
      }
      operator_delete(puVar4);
      lVar1 = DAT_01782920;
      puVar4 = pvVar5;
    }
    DAT_01782928 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(_packageInstById + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
    }
    DAT_01782930 = 0;
  }
  lVar1 = DAT_01782948;
  puVar4 = DAT_01782950;
  if (DAT_01782958 != 0) {
    while (DAT_01782948 = lVar1, puVar4 != (void *)0x0) {
      pvVar5 = (void *)*puVar4;
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
        operator_delete((void *)puVar4[4]);
      }
      operator_delete(puVar4);
      lVar1 = DAT_01782948;
      puVar4 = pvVar5;
    }
    DAT_01782950 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(_packageInstByName + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
    }
    DAT_01782958 = 0;
  }
  DAT_01782970 = _packageList;
  return;
}

