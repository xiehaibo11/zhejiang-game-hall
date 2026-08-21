
/* v8::internal::GlobalHandles::IterateAllRootsWithClassIds(v8::PersistentHandleVisitor*) */

void __thiscall
v8::internal::GlobalHandles::IterateAllRootsWithClassIds
          (GlobalHandles *this,PersistentHandleVisitor *param_1)

{
  byte bVar1;
  short *psVar2;
  long lVar3;
  ulong uVar4;
  long local_18;
  
  lVar3 = *(long *)(*(long *)(this + 8) + 0x10);
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      while( true ) {
        local_18 = lVar3 + uVar4 * 0x20;
        bVar1 = *(byte *)(local_18 + 0xb);
        if (((bVar1 & 7) != 0) &&
           ((((bVar1 & 7) != 4 || ((bVar1 & 0x30) == 0)) &&
            (psVar2 = (short *)(lVar3 + uVar4 * 0x20 + 8), *psVar2 != 0)))) {
          (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_18,*psVar2);
        }
        uVar4 = uVar4 + 1;
        if (0xff < uVar4) break;
        if (lVar3 == 0) {
          return;
        }
      }
      lVar3 = *(long *)(lVar3 + 0x2018);
      uVar4 = 0;
    } while (lVar3 != 0);
  }
  return;
}

