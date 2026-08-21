
/* v8::internal::GlobalHandles::IterateWeakRoots(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::GlobalHandles::IterateWeakRoots(GlobalHandles *this,RootVisitor *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(this + 8) + 0x10);
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      while( true ) {
        if ((*(byte *)(lVar1 + uVar2 * 0x20 + 0xb) & 7) == 2) {
          (**(code **)(*(long *)param_1 + 0x18))(param_1,0xc,0);
        }
        uVar2 = uVar2 + 1;
        if (0xff < uVar2) break;
        if (lVar1 == 0) goto LAB_00f68324;
      }
      lVar1 = *(long *)(lVar1 + 0x2018);
      uVar2 = 0;
    } while (lVar1 != 0);
  }
LAB_00f68324:
  lVar1 = *(long *)(*(long *)(this + 0x28) + 0x10);
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      if ((*(byte *)(lVar1 + uVar2 * 0x20 + 0xb) & 3) != 0) {
        (**(code **)(*(long *)param_1 + 0x18))(param_1,0xc,0);
      }
      uVar2 = uVar2 + 1;
      if (0xff < uVar2) {
        lVar1 = *(long *)(lVar1 + 0x2018);
        uVar2 = 0;
      }
    } while (lVar1 != 0);
  }
  return;
}

