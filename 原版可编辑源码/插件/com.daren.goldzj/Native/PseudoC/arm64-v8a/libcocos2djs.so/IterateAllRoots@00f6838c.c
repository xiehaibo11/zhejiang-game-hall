
/* v8::internal::GlobalHandles::IterateAllRoots(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::GlobalHandles::IterateAllRoots(GlobalHandles *this,RootVisitor *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(*(long *)(this + 8) + 0x10);
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      bVar1 = *(byte *)(lVar3 + uVar4 * 0x20 + 0xb);
      if (((bVar1 & 7) != 0) && (((bVar1 & 7) != 4 || ((bVar1 & 0x30) == 0)))) {
        if ((bVar1 & 7) == 1) {
          uVar2 = *(undefined8 *)(lVar3 + uVar4 * 0x20 + 0x10);
        }
        else {
          uVar2 = 0;
        }
        (**(code **)(*(long *)param_1 + 0x18))(param_1,0xc,uVar2);
      }
      uVar4 = uVar4 + 1;
      if (0xff < uVar4) {
        lVar3 = *(long *)(lVar3 + 0x2018);
        uVar4 = 0;
      }
    } while (lVar3 != 0);
  }
  lVar3 = *(long *)(*(long *)(this + 0x28) + 0x10);
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      while( true ) {
        if ((*(byte *)(lVar3 + uVar4 * 0x20 + 0xb) & 3) == 1) {
          (**(code **)(*(long *)param_1 + 0x18))(param_1,0xc,0);
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

