
/* cocos2d::__Dictionary::createWithContentsOfFileThreadSafe(char const*) */

undefined8 cocos2d::__Dictionary::createWithContentsOfFileThreadSafe(char *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  void *local_60 [2];
  void *local_50;
  long local_38;
  
                    /* catch() { ... } // from try @ 00ffc05c with catch @ 00ffc0a4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)FileUtils::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,param_1);
  (**(code **)(*plVar4 + 0xc0))(local_60,plVar4,local_78);
  uVar5 = FUN_00ffc204(local_60);
  pvVar2 = local_60[0];
  puVar3 = local_50;
  while (puVar3 != (void *)0x0) {
    pvVar6 = (void *)*puVar3;
    local_60[0] = pvVar2;
    cocos2d::Value::~Value((Value *)(puVar3 + 5));
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    pvVar2 = local_60[0];
    puVar3 = pvVar6;
  }
  local_60[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00ffc174 to 010fc177 has its CatchHandler @ 00ffc1b0 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

