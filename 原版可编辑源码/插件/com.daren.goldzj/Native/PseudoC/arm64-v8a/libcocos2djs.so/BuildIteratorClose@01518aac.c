
/* v8::internal::interpreter::BytecodeGenerator::BuildIteratorClose(v8::internal::interpreter::BytecodeGenerator::IteratorRecord
   const&, v8::internal::Expression*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildIteratorClose
          (BytecodeGenerator *this,IteratorRecord *param_1,Expression *param_2)

{
  BytecodeArrayBuilder *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  BytecodeLabel *pBVar5;
  long *plVar6;
  BytecodeArrayBuilder *pBVar7;
  long ****pppplVar8;
  BytecodeLabel local_80 [8];
  undefined8 local_78;
  long ***local_70;
  long ***local_68;
  long local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_70 = (long ***)&local_70;
  uStack_58 = *(undefined8 *)(this + 0x10);
  iVar1 = *(int *)(this + 0x118);
  local_50 = 0;
  local_80[0] = (BytecodeLabel)0x0;
  local_60 = 0;
  local_78 = 0xffffffffffffffff;
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  local_68 = local_70;
  BuildCallIteratorMethod
            (this,(ulong)*(uint *)(param_1 + 4),*(undefined8 *)(*(long *)(this + 0x1d8) + 0x1a8),
             (ulong)*(uint *)(param_1 + 4) | 0x100000000,local_80,&local_70);
  BytecodeArrayBuilder::Bind(this_00,local_80);
  if (*(int *)param_1 == 1) {
    BuildAwait(this,*(int *)param_2);
  }
  pBVar5 = (BytecodeLabel *)BytecodeLabels::New((BytecodeLabels *)&local_70);
  BytecodeArrayBuilder::JumpIfJSReceiver(this_00,pBVar5);
  iVar2 = *(int *)(this + 0x118);
  iVar3 = *(int *)(this + 0x11c);
  plVar6 = *(long **)(this + 0x120);
  if (iVar3 <= iVar2 + 1) {
    iVar3 = iVar2 + 1;
  }
  *(int *)(this + 0x118) = iVar2 + 1;
  *(int *)(this + 0x11c) = iVar3;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6,iVar2);
  }
  pBVar7 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar2);
  BytecodeArrayBuilder::CallRuntime(pBVar7,0xac,iVar2);
  plVar6 = *(long **)(this + 0x120);
  iVar3 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar2;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar3 - iVar2,iVar2));
  }
  BytecodeLabels::Bind((BytecodeLabels *)&local_70,this_00);
  if (local_60 != 0) {
    (*local_68)[1] = (long *)local_70[1];
    *local_70[1] = (long *)*local_68;
    local_60 = 0;
    if ((long ****)local_68 != &local_70) {
      pppplVar8 = (long ****)local_68;
      do {
        pppplVar8 = (long ****)pppplVar8[1];
      } while (pppplVar8 != &local_70);
    }
  }
  plVar6 = *(long **)(this + 0x120);
  iVar3 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar1;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar3 - iVar1,iVar1));
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

