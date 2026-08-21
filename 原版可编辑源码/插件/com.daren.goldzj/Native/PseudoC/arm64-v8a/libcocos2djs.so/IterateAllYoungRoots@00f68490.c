
/* v8::internal::GlobalHandles::IterateAllYoungRoots(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::GlobalHandles::IterateAllYoungRoots(GlobalHandles *this,RootVisitor *param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(this + 0x18);
  for (plVar1 = *(long **)(this + 0x10); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    bVar3 = *(byte *)(*plVar1 + 0xb);
    if (((bVar3 & 7) != 0) && (((bVar3 & 7) != 4 || ((bVar3 & 0x30) == 0)))) {
      if ((bVar3 & 7) == 1) {
        uVar4 = *(undefined8 *)(*plVar1 + 0x10);
      }
      else {
        uVar4 = 0;
      }
      (**(code **)(*(long *)param_1 + 0x18))(param_1,0xc,uVar4);
    }
  }
  plVar2 = *(long **)(this + 0x38);
  for (plVar1 = *(long **)(this + 0x30); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    if ((*(byte *)(*plVar1 + 0xb) & 3) == 1) {
      (**(code **)(*(long *)param_1 + 0x18))(param_1,0xc,0);
    }
  }
  return;
}

