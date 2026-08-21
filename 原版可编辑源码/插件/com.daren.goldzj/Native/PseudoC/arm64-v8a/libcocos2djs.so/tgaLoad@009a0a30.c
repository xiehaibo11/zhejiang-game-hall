
/* cocos2d::tgaLoad(char const*) */

undefined8 cocos2d::tgaLoad(char *param_1)

{
  long lVar1;
  long *plVar2;
  size_t __n;
  ulong uVar3;
  uchar *puVar4;
  long lVar5;
  undefined8 uVar6;
  void *__dest;
  ulong local_70;
  size_t local_68;
  void *local_60;
  Data aDStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009a0a50 to 00aa0a67 has its CatchHandler @ 009a0d9c */
  plVar2 = (long *)FileUtils::getInstance();
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  __n = strlen(param_1);
                    /* try { // try from 009a0a70 to 00aa0a7b has its CatchHandler @ 009a0d80 */
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 009a0a7c to 00aa0a87 has its CatchHandler @ 009a0d7c */
  if (__n < 0x17) {
                    /* try { // try from 009a0a88 to 00aa0a9f has its CatchHandler @ 009a0dac */
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_009a0acc;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_70 = uVar3 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_009a0acc:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 009a0ad0 to 00aa0b1f has its CatchHandler @ 009a0d78 */
  (**(code **)(*plVar2 + 0x20))(aDStack_58,plVar2,&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  uVar3 = Data::isNull(aDStack_58);
  if ((uVar3 & 1) == 0) {
    puVar4 = (uchar *)Data::getBytes(aDStack_58);
    lVar5 = Data::getSize(aDStack_58);
                    /* try { // try from 009a0b24 to 00aa0b67 has its CatchHandler @ 009a0dac */
    uVar6 = tgaLoadBuffer(puVar4,lVar5);
  }
  else {
    uVar6 = 0;
  }
  Data::~Data(aDStack_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

