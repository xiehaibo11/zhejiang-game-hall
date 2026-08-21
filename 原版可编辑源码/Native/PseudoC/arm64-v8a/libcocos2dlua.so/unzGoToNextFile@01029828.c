
/* cocos2d::unzGoToNextFile(void*) */

undefined8 cocos2d::unzGoToNextFile(void *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 0102975c with catch @ 0102982c */
  if (param_1 == (void *)0x0) {
    uVar2 = 0xffffff9a;
  }
  else {
    if (*(long *)((long)param_1 + 0x90) != 0) {
      lVar1 = *(long *)((long)param_1 + 0x80) + 1;
      if ((*(long *)((long)param_1 + 0x68) == 0xffff) || (lVar1 != *(long *)((long)param_1 + 0x68)))
      {
        *(long *)((long)param_1 + 0x80) = lVar1;
        *(long *)((long)param_1 + 0x88) =
             *(long *)((long)param_1 + 0xf0) + *(long *)((long)param_1 + 0xf8) +
             *(long *)((long)param_1 + 0x100) + *(long *)((long)param_1 + 0x88) + 0x2e;
        uVar2 = FUN_01028a58(param_1,(long)param_1 + 0xb0,(long)param_1 + 0x138,0,0,0,0,0,0);
        *(ulong *)((long)param_1 + 0x90) = (ulong)((int)uVar2 == 0);
        return uVar2;
      }
    }
    uVar2 = 0xffffff9c;
  }
  return uVar2;
}

