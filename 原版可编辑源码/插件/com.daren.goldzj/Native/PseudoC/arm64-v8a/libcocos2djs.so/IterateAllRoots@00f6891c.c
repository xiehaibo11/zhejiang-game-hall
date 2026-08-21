
/* v8::internal::EternalHandles::IterateAllRoots(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::EternalHandles::IterateAllRoots(EternalHandles *this,RootVisitor *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  int iVar5;
  long *plVar4;
  
  plVar1 = *(long **)(this + 0x10);
  if (*(long **)(this + 8) != plVar1) {
    plVar3 = *(long **)(this + 8);
    iVar5 = *(int *)this;
    do {
      plVar4 = plVar3 + 1;
      iVar2 = iVar5 + -0x100;
      if (0xff < iVar5) {
        iVar5 = 0x100;
      }
      (**(code **)(*(long *)param_1 + 0x10))(param_1,0xd,0,*plVar3,*plVar3 + (long)iVar5 * 8);
      plVar3 = plVar4;
      iVar5 = iVar2;
    } while (plVar1 != plVar4);
  }
  return;
}

