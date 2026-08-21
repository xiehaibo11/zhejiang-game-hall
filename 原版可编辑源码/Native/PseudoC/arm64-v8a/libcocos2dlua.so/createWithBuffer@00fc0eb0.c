
/* cocos2d::ZipFile::createWithBuffer(void const*, unsigned long) */

ZipFile * __thiscall cocos2d::ZipFile::createWithBuffer(ZipFile *this,void *param_1,ulong param_2)

{
  ZipFile *this_00;
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  
  this_00 = operator_new(0x10,(nothrow_t *)&std::nothrow);
  if (this_00 != (ZipFile *)0x0) {
    ppuVar3 = &PTR__ZipFile_017239f0;
    *(undefined ***)this_00 = &PTR__ZipFile_017239f0;
    puVar1 = operator_new(0x30);
    *(undefined8 **)(this_00 + 8) = puVar1;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 5) = 0x3f800000;
    *puVar1 = 0;
    if ((this != (ZipFile *)0x0) && (param_1 != (void *)0x0)) {
      lVar2 = unzOpenBuffer((cocos2d *)this,param_1,param_2);
      **(long **)(this_00 + 8) = lVar2;
      if (lVar2 != 0) {
        setFilter(this_00,(basic_string *)&DAT_01790e60);
        return this_00;
      }
      ppuVar3 = *(undefined ***)this_00;
    }
    (*(code *)ppuVar3[1])(this_00);
  }
  return (ZipFile *)0x0;
}

