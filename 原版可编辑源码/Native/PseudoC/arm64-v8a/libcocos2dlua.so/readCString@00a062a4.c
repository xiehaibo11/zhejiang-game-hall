
/* universe::network::OStream::readCString(char*, unsigned long) */

undefined8 __thiscall
universe::network::OStream::readCString(OStream *this,char *param_1,ulong param_2)

{
  ulong __n;
  char *pcVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
LAB_00a06318:
    uVar2 = 0;
  }
  else {
    memset(param_1,0,param_2);
    __n = readStrLen(this);
    if (__n != 0) {
      if (param_2 <= __n) goto LAB_00a06318;
      if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < __n) {
        pcVar1 = (char *)Translated::getInstance();
        Translated::log(pcVar1,&DAT_012f87ed,__n,*(long *)(this + 8) - *(long *)(this + 0x10));
      }
      else {
        memcpy(param_1,(void *)(*(long *)this + *(long *)(this + 0x10)),__n);
        *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + __n;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

