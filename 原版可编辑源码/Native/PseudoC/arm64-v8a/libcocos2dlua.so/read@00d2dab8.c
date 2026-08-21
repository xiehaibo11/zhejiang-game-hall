
/* cocos2d::BundleReader::read(void*, long, long) */

long __thiscall
cocos2d::BundleReader::read(BundleReader *this,void *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  size_t __n;
  
  lVar4 = *(long *)(this + 0x38);
  if (lVar4 != 0) {
    lVar1 = *(long *)(this + 0x28);
    lVar3 = *(long *)(this + 0x30) - lVar1;
    if (lVar3 != 0 && lVar1 <= *(long *)(this + 0x30)) {
      sVar5 = param_3 * param_2;
      if (lVar3 < (long)sVar5) {
        lVar2 = 0;
        if (param_2 != 0) {
          lVar2 = lVar3 / param_2;
        }
        sVar5 = lVar2 * param_2;
        memcpy(param_1,(void *)(lVar4 + lVar1),sVar5);
        lVar4 = *(long *)(this + 0x28);
        __n = lVar3 - sVar5;
        *(size_t *)(this + 0x28) = lVar4 + sVar5;
        if ((long)__n < 1) {
          return lVar2;
        }
        memcpy((void *)((long)param_1 + sVar5),(void *)(*(long *)(this + 0x38) + lVar4 + sVar5),__n)
        ;
        param_3 = lVar2 + 1;
        lVar4 = *(long *)(this + 0x28) + __n;
      }
      else {
        memcpy(param_1,(void *)(lVar4 + lVar1),sVar5);
        lVar4 = *(long *)(this + 0x28) + sVar5;
      }
      *(long *)(this + 0x28) = lVar4;
      return param_3;
    }
  }
  return 0;
}

