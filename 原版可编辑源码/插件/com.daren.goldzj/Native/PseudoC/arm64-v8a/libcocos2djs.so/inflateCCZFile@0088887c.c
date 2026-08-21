
/* cocos2d::ZipUtils::inflateCCZFile(char const*, unsigned char**) */

undefined4 cocos2d::ZipUtils::inflateCCZFile(char *param_1,uchar **param_2)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  size_t __n;
  ulong uVar4;
  uchar *puVar5;
  long lVar6;
  void *__dest;
  ulong local_80;
  size_t local_78;
  void *local_70;
  Data aDStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)FileUtils::getInstance();
  local_80 = 0;
  local_78 = 0;
  local_70 = (void *)0x0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00888920;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_80 = uVar4 | 1;
    local_78 = __n;
    local_70 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_00888920:
  *(undefined1 *)((long)__dest + __n) = 0;
  (**(code **)(*plVar3 + 0x20))(aDStack_68,plVar3,&local_80);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  uVar4 = Data::isNull(aDStack_68);
  if ((uVar4 & 1) == 0) {
    puVar5 = (uchar *)Data::getBytes(aDStack_68);
    lVar6 = Data::getSize(aDStack_68);
    uVar2 = inflateCCZBuffer(puVar5,lVar6,param_2);
  }
  else {
    uVar2 = 0xffffffff;
  }
  Data::~Data(aDStack_68);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

