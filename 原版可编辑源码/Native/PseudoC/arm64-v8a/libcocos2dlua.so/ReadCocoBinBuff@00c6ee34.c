
/* cocostudio::CocoLoader::ReadCocoBinBuff(char*) */

undefined8 __thiscall cocostudio::CocoLoader::ReadCocoBinBuff(CocoLoader *this,char *param_1)

{
  char *__src;
  long lVar1;
  void *__dest;
  ulong __n;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x18) == 0) {
    __src = param_1 + 0x58;
    *(char **)this = param_1;
    *(char **)(this + 0x18) = __src;
    __n = (ulong)*(uint *)(param_1 + 0x40);
    __dest = operator_new__(__n,(nothrow_t *)&std::nothrow);
    if (*(int *)(param_1 + 0x44) == 0) {
      memcpy(__dest,__src,__n);
    }
    else {
      local_50 = __n;
      uncompress(__dest,&local_50,__src);
    }
    *(void **)(this + 0x10) = __dest;
    *(void **)(this + 0x18) = __dest;
    *(ulong *)(this + 8) = (long)__dest + (ulong)*(uint *)(*(long *)this + 0x50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

