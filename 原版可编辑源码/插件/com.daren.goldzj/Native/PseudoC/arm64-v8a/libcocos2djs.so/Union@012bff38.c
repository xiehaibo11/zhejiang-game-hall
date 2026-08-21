
/* v8::internal::compiler::FunctionalSet<v8::internal::compiler::VirtualContext,
   std::__ndk1::equal_to<v8::internal::compiler::VirtualContext>
   >::Union(v8::internal::compiler::FunctionalSet<v8::internal::compiler::VirtualContext,
   std::__ndk1::equal_to<v8::internal::compiler::VirtualContext> >, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::
FunctionalSet<v8::internal::compiler::VirtualContext,std::__ndk1::equal_to<v8::internal::compiler::VirtualContext>>
::Union(FunctionalSet<v8::internal::compiler::VirtualContext,std::__ndk1::equal_to<v8::internal::compiler::VirtualContext>>
        *this,int *param_2,Zone *param_3)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  piVar1 = *(int **)this;
  if (piVar1 != param_2) {
    if (piVar1 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(ulong *)(piVar1 + 6);
    }
    piVar2 = piVar1;
    if ((param_2 != (int *)0x0) && (uVar3 < *(ulong *)(param_2 + 6))) {
      *(int **)this = param_2;
      piVar2 = param_2;
      param_2 = piVar1;
    }
    for (; param_2 != (int *)0x0; param_2 = *(int **)(param_2 + 4)) {
      if (piVar2 == (int *)0x0) {
        lVar5 = *(long *)(param_2 + 2);
      }
      else {
        lVar5 = *(long *)(param_2 + 2);
        piVar1 = piVar2;
        do {
          if ((*(long *)(piVar1 + 2) == lVar5) && (*piVar1 == *param_2)) goto LAB_012bffa4;
          piVar1 = *(int **)(piVar1 + 4);
        } while (piVar1 != (int *)0x0);
      }
      piVar2 = *(int **)(param_3 + 0x10);
      uVar6 = *(undefined8 *)param_2;
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)piVar2) < 0x20) {
        piVar2 = (int *)Zone::NewExpand(param_3,0x20);
      }
      else {
        *(int **)(param_3 + 0x10) = piVar2 + 8;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)piVar2 = uVar6;
      *(long *)(piVar2 + 2) = lVar5;
      *(long *)(piVar2 + 4) = lVar4;
      if (lVar4 == 0) {
        lVar5 = 1;
      }
      else {
        lVar5 = *(long *)(lVar4 + 0x18) + 1;
      }
      *(long *)(piVar2 + 6) = lVar5;
      *(int **)this = piVar2;
LAB_012bffa4:
    }
  }
  return;
}

