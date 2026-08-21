
void FUN_00f96240(long param_1)

{
  void *pvVar1;
  char *__s;
  int iVar2;
  long lVar3;
  Director *this;
  size_t __n;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(param_1 + 8);
  this = (Director *)cocos2d::Director::getInstance();
  cocos2d::Director::getTextureCache(this);
  cocos2d::TextureCache::getCachedTextureInfo();
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  cocos2d::Console::Utility::mydprintf(iVar2,"%s",pvVar1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  iVar2 = *(int *)(param_1 + 8);
  __s = DAT_0178fc08;
  if ((cocos2d::Console::Utility::_prompt & 1) == 0) {
    __s = &DAT_0178fbf9;
  }
  __n = strlen(__s);
  sendto(iVar2,__s,__n,0,(sockaddr *)0x0,0);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

