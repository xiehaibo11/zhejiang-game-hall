
/* cocos2d::ZipFile::ZipFile() */

void __thiscall cocos2d::ZipFile::ZipFile(ZipFile *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &PTR__ZipFile_01c67228;
  puVar1 = operator_new(0x30);
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  *(undefined8 **)(this + 8) = puVar1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *puVar1 = 0;
  return;
}

