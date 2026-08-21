
/* cocos2d::Console::addClient() */

void __thiscall cocos2d::Console::addClient(Console *this)

{
  sockaddr *__addr;
  char *__s;
  int *piVar1;
  long lVar2;
  int __fd;
  int iVar3;
  size_t __n;
  int local_70;
  socklen_t local_6c;
  sockaddr sStack_68;
  sockaddr asStack_58 [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_6c = 0x10;
  if (this[0xd2] != (Console)0x0) {
    local_6c = 0x1c;
  }
  __addr = &sStack_68;
  if (this[0xd2] != (Console)0x0) {
    __addr = asStack_58;
  }
  iVar3 = accept(*(int *)(this + 0x24),__addr,&local_6c);
  local_70 = iVar3;
  if (iVar3 != -1) {
    __FD_SET_chk(iVar3,this + 0x50,0x80);
    piVar1 = *(int **)(this + 0x38);
    if (piVar1 == *(int **)(this + 0x40)) {
      std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                ((vector<int,std::__ndk1::allocator<int>> *)(this + 0x30),&local_70);
    }
    else {
      *piVar1 = iVar3;
      *(int **)(this + 0x38) = piVar1 + 1;
    }
    __fd = local_70;
    iVar3 = local_70;
    if (local_70 <= *(int *)(this + 0x28)) {
      iVar3 = *(int *)(this + 0x28);
    }
    *(int *)(this + 0x28) = iVar3;
    __s = DAT_0178fc08;
    if ((Utility::_prompt & 1) == 0) {
      __s = &DAT_0178fbf9;
    }
    __n = strlen(__s);
    sendto(__fd,__s,__n,0,(sockaddr *)0x0,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

