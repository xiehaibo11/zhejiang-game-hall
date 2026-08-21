
/* v8::internal::compiler::FunctionalSet<v8::internal::compiler::VirtualClosure,
   std::__ndk1::equal_to<v8::internal::compiler::VirtualClosure>
   >::Union(v8::internal::compiler::FunctionalSet<v8::internal::compiler::VirtualClosure,
   std::__ndk1::equal_to<v8::internal::compiler::VirtualClosure> >, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::
FunctionalSet<v8::internal::compiler::VirtualClosure,std::__ndk1::equal_to<v8::internal::compiler::VirtualClosure>>
::Union(FunctionalSet<v8::internal::compiler::VirtualClosure,std::__ndk1::equal_to<v8::internal::compiler::VirtualClosure>>
        *this,undefined8 *param_2,Zone *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar5 = *(undefined8 **)this;
  if (puVar5 != param_2) {
    if (puVar5 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = puVar5[4];
    }
    puVar4 = param_2;
    if ((param_2 != (undefined8 *)0x0) && (uVar1 < (ulong)param_2[4])) {
      *(undefined8 **)this = param_2;
      puVar4 = puVar5;
      puVar5 = param_2;
    }
    if (puVar4 != (undefined8 *)0x0) {
      do {
        if (puVar5 != (undefined8 *)0x0) {
          do {
            if ((puVar5[1] == puVar4[1]) &&
               (uVar1 = Hints::operator==((Hints *)(puVar5 + 2),(Hints *)(puVar4 + 2)),
               (uVar1 & 1) != 0)) {
              puVar4 = (undefined8 *)puVar4[3];
              goto joined_r0x012bfee8;
            }
            puVar5 = (undefined8 *)puVar5[3];
          } while (puVar5 != (undefined8 *)0x0);
        }
        uVar2 = puVar4[2];
        uVar7 = puVar4[1];
        uVar6 = *puVar4;
        puVar5 = *(undefined8 **)(param_3 + 0x10);
        if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar5) < 0x28) {
          puVar5 = (undefined8 *)Zone::NewExpand(param_3,0x28);
        }
        else {
          *(undefined8 **)(param_3 + 0x10) = puVar5 + 5;
        }
        lVar3 = *(long *)this;
        puVar5[1] = uVar7;
        *puVar5 = uVar6;
        puVar5[2] = uVar2;
        puVar5[3] = lVar3;
        if (lVar3 == 0) {
          lVar3 = 1;
        }
        else {
          lVar3 = *(long *)(lVar3 + 0x20) + 1;
        }
        puVar5[4] = lVar3;
        *(undefined8 **)this = puVar5;
        puVar4 = (undefined8 *)puVar4[3];
joined_r0x012bfee8:
        if (puVar4 == (undefined8 *)0x0) {
          return;
        }
        puVar5 = *(undefined8 **)this;
      } while( true );
    }
  }
  return;
}

