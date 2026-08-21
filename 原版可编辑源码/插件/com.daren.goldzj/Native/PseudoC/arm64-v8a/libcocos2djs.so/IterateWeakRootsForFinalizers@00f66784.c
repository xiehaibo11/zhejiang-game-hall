
/* v8::internal::GlobalHandles::IterateWeakRootsForFinalizers(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::GlobalHandles::IterateWeakRootsForFinalizers(GlobalHandles *this,RootVisitor *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(this + 8) + 0x10);
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      while( true ) {
        if ((*(byte *)(lVar1 + uVar2 * 0x20 + 0xb) & 7) == 3) {
          (**(code **)(*(long *)param_1 + 0x18))(param_1,0xc,0);
        }
        uVar2 = uVar2 + 1;
        if (0xff < uVar2) break;
        if (lVar1 == 0) {
          return;
        }
      }
      lVar1 = *(long *)(lVar1 + 0x2018);
      uVar2 = 0;
    } while (lVar1 != 0);
  }
  return;
}

