
/* cocos2d::ZipFile::createWithBuffer(void const*, unsigned long) */

ZipFile * cocos2d::ZipFile::createWithBuffer(void *param_1,ulong param_2)

{
  ZipFile *this;
  undefined8 *puVar1;
  undefined8 uVar2;
  mutex *this_00;
  undefined **ppuVar3;
  
  this = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this != (ZipFile *)0x0) {
    ppuVar3 = &PTR__ZipFile_01c67228;
    *(undefined ***)this = &PTR__ZipFile_01c67228;
    puVar1 = operator_new(0x30);
    this_00 = (mutex *)(this + 0x10);
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)this_00 = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 5) = 0x3f800000;
    *(undefined8 **)(this + 8) = puVar1;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *puVar1 = 0;
    if ((param_1 != (void *)0x0) && (param_2 != 0)) {
      std::__ndk1::mutex::lock(this_00);
      uVar2 = unzOpenBuffer(param_1,param_2);
      **(undefined8 **)(this + 8) = uVar2;
      std::__ndk1::mutex::unlock(this_00);
      if (**(long **)(this + 8) != 0) {
        setFilter(this,(basic_string *)&DAT_01d36ce8);
        return this;
      }
      ppuVar3 = *(undefined ***)this;
    }
    (*(code *)ppuVar3[1])(this);
  }
  return (ZipFile *)0x0;
}

