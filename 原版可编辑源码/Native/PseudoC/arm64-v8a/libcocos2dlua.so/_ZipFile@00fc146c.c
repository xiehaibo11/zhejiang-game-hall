
/* cocos2d::ZipFile::~ZipFile() */

void __thiscall cocos2d::ZipFile::~ZipFile(ZipFile *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 8);
  *(undefined ***)this = &PTR__ZipFile_017239f0;
  if (puVar3 != (undefined8 *)0x0) {
    if ((void *)*puVar3 != (void *)0x0) {
      unzClose((void *)*puVar3);
      puVar3 = *(undefined8 **)(this + 8);
      if (puVar3 == (undefined8 *)0x0) goto LAB_00fc14f8;
    }
    puVar1 = (void *)puVar3[3];
    while (puVar1 != (void *)0x0) {
      pvVar2 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar2;
    }
    pvVar2 = (void *)puVar3[1];
    puVar3[1] = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    operator_delete(puVar3);
  }
LAB_00fc14f8:
  *(undefined8 *)(this + 8) = 0;
  return;
}

