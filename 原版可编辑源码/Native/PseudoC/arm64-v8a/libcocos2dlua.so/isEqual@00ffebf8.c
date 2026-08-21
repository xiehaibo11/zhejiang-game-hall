
/* cocos2d::__String::isEqual(cocos2d::Ref const*) */

bool __thiscall cocos2d::__String::isEqual(__String *this,Ref *param_1)

{
  ulong uVar1;
  size_t __n;
  void *__s2;
  bool bVar2;
  uint uVar3;
  long lVar4;
  __String *__s1;
  ulong uVar5;
  
  if ((param_1 == (Ref *)0x0) ||
     (lVar4 = __dynamic_cast(param_1,&Ref::typeinfo,&typeinfo,0), lVar4 == 0)) {
    bVar2 = false;
  }
  else {
    uVar1 = (ulong)(*(byte *)(lVar4 + 0x30) >> 1);
    __s2 = (void *)(lVar4 + 0x31);
    if ((*(byte *)(lVar4 + 0x30) & 1) != 0) {
      uVar1 = *(ulong *)(lVar4 + 0x38);
      __s2 = *(void **)(lVar4 + 0x40);
    }
    if (((byte)this[0x30] & 1) == 0) {
      uVar5 = (ulong)((byte)this[0x30] >> 1);
      __s1 = this + 0x31;
    }
    else {
      uVar5 = *(ulong *)(this + 0x38);
      __s1 = *(__String **)(this + 0x40);
    }
    __n = uVar1;
    if (uVar5 <= uVar1) {
      __n = uVar5;
    }
    if (((__n == 0) || (uVar3 = memcmp(__s1,__s2,__n), uVar3 == 0)) &&
       (uVar3 = (uint)(uVar1 < uVar5), uVar5 < uVar1)) {
      uVar3 = 0xffffffff;
    }
    bVar2 = uVar3 == 0;
  }
  return bVar2;
}

