
/* cocos2d::network::WebSocketFrame::init(unsigned char*, long) */

void __thiscall
cocos2d::network::WebSocketFrame::init(WebSocketFrame *this,uchar *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *__dest;
  ulong uVar3;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  void *__src;
  size_t __n;
  void *pvVar4;
  uchar local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_1 != (uchar *)0x0) || (param_2 < 1)) {
    this_00 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x18);
    __src = *(void **)this_00;
    pvVar4 = *(void **)(this + 0x20);
    if (__src == pvVar4) {
      uVar3 = param_2 + 0x10;
      __dest = __src;
      if ((ulong)(*(long *)(this + 0x28) - (long)__src) < uVar3) {
        __n = (long)pvVar4 - (long)__src;
        __dest = operator_new(uVar3);
        pvVar4 = (void *)((long)__dest + __n);
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)(this + 0x18) = __dest;
        *(void **)(this + 0x20) = pvVar4;
        *(ulong *)(this + 0x28) = (long)__dest + uVar3;
        if (__src != (void *)0x0) {
          operator_delete(__src);
          __dest = *(void **)(this + 0x18);
          pvVar4 = *(void **)(this + 0x20);
        }
      }
      uVar3 = (long)pvVar4 - (long)__dest;
      local_6c[0] = '\0';
      if (uVar3 < 0x10) {
        std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                  (this_00,0x10 - uVar3,local_6c);
      }
      else if (uVar3 != 0x10) {
        *(long *)(this + 0x20) = (long)__dest + 0x10;
      }
      if (0 < param_2) {
        std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
        insert<unsigned_char*>(this_00,*(undefined8 *)(this + 0x20),param_1,param_1 + param_2);
      }
      uVar2 = 1;
      *(long *)(this + 8) = param_2;
      *(long *)(this + 0x10) = param_2;
      *(long *)this = *(long *)(this + 0x18) + 0x10;
      goto LAB_00e9faf4;
    }
  }
  uVar2 = 0;
LAB_00e9faf4:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

