
/* cocos2d::ZipFile::~ZipFile() */

void __thiscall cocos2d::ZipFile::~ZipFile(ZipFile *this)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  
  plVar2 = *(long **)(this + 8);
  *(undefined ***)this = &PTR__ZipFile_01c67228;
  if (plVar2 != (long *)0x0) {
    if (*plVar2 != 0) {
      std::__ndk1::mutex::lock((mutex *)(this + 0x10));
      unzClose((void *)**(undefined8 **)(this + 8));
      std::__ndk1::mutex::unlock((mutex *)(this + 0x10));
      plVar2 = *(long **)(this + 8);
      if (plVar2 == (long *)0x0) goto LAB_00889238;
    }
    puVar1 = (void *)plVar2[3];
    while (puVar1 != (void *)0x0) {
      pvVar3 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar3;
    }
    pvVar3 = (void *)plVar2[1];
    plVar2[1] = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    operator_delete(plVar2);
  }
LAB_00889238:
  *(undefined8 *)(this + 8) = 0;
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x10));
  return;
}

