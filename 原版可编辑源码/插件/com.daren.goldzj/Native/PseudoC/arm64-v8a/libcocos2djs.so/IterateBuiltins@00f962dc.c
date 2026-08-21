
/* v8::internal::Heap::IterateBuiltins(v8::internal::RootVisitor*) */

void __thiscall v8::internal::Heap::IterateBuiltins(Heap *this,RootVisitor *param_1)

{
  undefined8 uVar1;
  long lVar2;
  Heap *pHVar3;
  
  lVar2 = 0;
  pHVar3 = this + -0x2df8;
  do {
    uVar1 = Builtins::name((int)lVar2);
    (**(code **)(*(long *)param_1 + 0x18))(param_1,0xb,uVar1,pHVar3);
    lVar2 = lVar2 + 1;
    pHVar3 = pHVar3 + 8;
  } while (lVar2 != 0x5bc);
  return;
}

