
/* cocos2d::ZipUtils::isCCZFile(char const*) */

bool cocos2d::ZipUtils::isCCZFile(char *param_1)

{
  long lVar1;
  long *plVar2;
  size_t __n;
  ulong uVar3;
  char *pcVar4;
  bool bVar5;
  void *__dest;
  ulong local_70;
  size_t local_68;
  void *local_60;
  Data aDStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FileUtils::getInstance();
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_008882a0;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_70 = uVar3 | 1;
    local_68 = __n;
    local_60 = __dest;
LAB_008882a0:
    memcpy(__dest,param_1,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  (**(code **)(*plVar2 + 0x20))(aDStack_58,plVar2,&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  uVar3 = Data::isNull(aDStack_58);
  if ((uVar3 & 1) == 0) {
    pcVar4 = (char *)Data::getBytes(aDStack_58);
    uVar3 = Data::getSize(aDStack_58);
    if ((((0xf < uVar3) && (*pcVar4 == 'C')) && (pcVar4[1] == 'C')) && (pcVar4[2] == 'Z')) {
      bVar5 = pcVar4[3] == '!' || pcVar4[3] == 'p';
      goto LAB_00888348;
    }
  }
  bVar5 = false;
LAB_00888348:
  Data::~Data(aDStack_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}

