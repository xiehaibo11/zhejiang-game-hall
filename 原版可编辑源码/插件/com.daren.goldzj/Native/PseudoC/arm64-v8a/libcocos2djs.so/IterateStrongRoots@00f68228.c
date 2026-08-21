
/* v8::internal::GlobalHandles::IterateStrongRoots(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::GlobalHandles::IterateStrongRoots(GlobalHandles *this,RootVisitor *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(*(long *)(this + 8) + 0x10);
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      while( true ) {
        lVar1 = lVar2 + uVar3 * 0x20;
        if ((*(byte *)(lVar1 + 0xb) & 7) == 1) {
          (**(code **)(*(long *)param_1 + 0x18))(param_1,0xc,*(undefined8 *)(lVar1 + 0x10));
        }
        uVar3 = uVar3 + 1;
        if (0xff < uVar3) break;
        if (lVar2 == 0) {
          return;
        }
      }
      lVar2 = *(long *)(lVar2 + 0x2018);
      uVar3 = 0;
    } while (lVar2 != 0);
  }
  return;
}

