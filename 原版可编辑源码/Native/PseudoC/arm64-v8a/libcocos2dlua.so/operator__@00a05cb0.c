
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,basic_string *param_1)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  basic_string *__src;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    local_40 = *(ulong *)(param_1 + 8);
  }
  writeStrLen(this,&local_40);
  uVar2 = local_40;
  if (local_40 != 0) {
    __src = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __src = param_1 + 1;
    }
    if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < local_40) {
      pcVar3 = (char *)Translated::getInstance();
      Translated::log(pcVar3,&LAB_012f87ac,uVar2,*(long *)(this + 8) - *(long *)(this + 0x10));
    }
    else {
      memcpy((void *)(*(long *)this + *(long *)(this + 0x10)),__src,local_40);
      *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + uVar2;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00a05d74 to 00b05dfb has its CatchHandler @ 00a05d74
                       catch() { ... } // from try @ 00a05d74 with catch @ 00a05d74
                       catch() { ... } // from try @ 00a05e68 with catch @ 00a05d74 */
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

