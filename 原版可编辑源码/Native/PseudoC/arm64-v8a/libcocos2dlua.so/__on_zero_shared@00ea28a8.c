
/* std::__ndk1::__shared_ptr_pointer<cocos2d::network::DownloadTask*,
   std::__ndk1::default_delete<cocos2d::network::DownloadTask>,
   std::__ndk1::allocator<cocos2d::network::DownloadTask> >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<cocos2d::network::DownloadTask*,std::__ndk1::default_delete<cocos2d::network::DownloadTask>,std::__ndk1::allocator<cocos2d::network::DownloadTask>>
::__on_zero_shared(__shared_ptr_pointer<cocos2d::network::DownloadTask*,std::__ndk1::default_delete<cocos2d::network::DownloadTask>,std::__ndk1::allocator<cocos2d::network::DownloadTask>>
                   *this)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar3[10];
    puVar3[10] = 0;
    *puVar3 = &PTR__DownloadTask_016f4ad8;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if ((*(byte *)(puVar3 + 7) & 1) == 0) {
      bVar1 = *(byte *)(puVar3 + 4);
    }
    else {
      operator_delete((void *)puVar3[9]);
      bVar1 = *(byte *)(puVar3 + 4);
    }
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(puVar3 + 1);
    }
    else {
      operator_delete((void *)puVar3[6]);
      bVar1 = *(byte *)(puVar3 + 1);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar3[3]);
    }
    operator_delete(puVar3);
    return;
  }
  return;
}

