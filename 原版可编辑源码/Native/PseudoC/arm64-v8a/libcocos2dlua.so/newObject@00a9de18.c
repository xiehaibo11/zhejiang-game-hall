
/* fairygui::UIObjectFactory::newObject(fairygui::PackageItem*) */

void fairygui::UIObjectFactory::newObject(PackageItem *param_1)

{
  long lVar1;
  
  if (*(long **)(param_1 + 0x100) == (long *)0x0) {
    lVar1 = newObject(*(undefined4 *)(param_1 + 0x34));
  }
  else {
    lVar1 = (**(code **)(**(long **)(param_1 + 0x100) + 0x30))();
  }
  if (lVar1 != 0) {
    *(PackageItem **)(lVar1 + 0xb0) = param_1;
  }
  return;
}

