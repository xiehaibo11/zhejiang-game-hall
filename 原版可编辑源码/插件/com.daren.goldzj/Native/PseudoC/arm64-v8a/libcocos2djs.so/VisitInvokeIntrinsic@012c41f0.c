
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitInvokeIntrinsic(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitInvokeIntrinsic
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  void *__s;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ObjectRef *pOVar6;
  long lVar7;
  long *plVar8;
  ObjectRef aOStack_100 [16];
  ObjectRef aOStack_f0 [16];
  ObjectRef aOStack_e0 [16];
  ObjectRef aOStack_d0 [16];
  ObjectRef aOStack_c0 [16];
  ObjectRef aOStack_b0 [16];
  ObjectRef aOStack_a0 [16];
  ObjectRef aOStack_90 [16];
  ObjectRef aOStack_80 [16];
  ObjectRef aOStack_70 [16];
  long local_60 [4];
  ObjectRef aOStack_40 [16];
  
  pOVar6 = aOStack_100;
  iVar3 = interpreter::BytecodeArrayAccessor::GetIntrinsicIdOperand
                    ((BytecodeArrayAccessor *)param_1,0);
  switch(iVar3) {
  case 0x1de:
switchD_012c4244_caseD_64:
    plVar8 = *(long **)this;
    uVar5 = Builtins::builtin_handle((Builtins *)(*plVar8 + 0x9e00),0xd3);
    pOVar6 = aOStack_d0;
    break;
  case 0x1df:
switchD_012c4244_caseD_65:
    plVar8 = *(long **)this;
    uVar5 = Builtins::builtin_handle((Builtins *)(*plVar8 + 0x9e00),0xd4);
    pOVar6 = aOStack_c0;
    break;
  case 0x1e0:
  case 0x1e8:
  case 0x1e9:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ed:
    goto switchD_012c4244_caseD_66;
  case 0x1e1:
switchD_012c4244_caseD_67:
    plVar8 = *(long **)this;
    uVar5 = Builtins::builtin_handle((Builtins *)(*plVar8 + 0x9e00),0xd0);
    pOVar6 = aOStack_e0;
    break;
  case 0x1e2:
    plVar8 = *(long **)this;
    uVar5 = Builtins::builtin_handle((Builtins *)(*plVar8 + 0x9e00),0xd1);
    ObjectRef::ObjectRef(aOStack_40,plVar8,uVar5,1);
    uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                      ((BytecodeArrayAccessor *)param_1,1);
    iVar3 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand
                      ((BytecodeArrayAccessor *)param_1,2);
    if (iVar3 != 3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","reg_count == 3");
    }
    PrepareArgumentsHints(local_60,this,uVar4,3);
    ProcessHintsForPromiseResolve(this,(Hints *)(local_60[0] + 8));
    lVar7 = *(long *)(this + 0x28);
    uVar1 = *(int *)(lVar7 + 0x1c) + *(int *)(lVar7 + 0x18);
    if ((-1 < (int)uVar1) &&
       ((ulong)(*(long *)(lVar7 + 0x38) - *(long *)(lVar7 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
    }
    *(undefined8 *)(*(long *)(lVar7 + 0x30) + (long)(int)uVar1 * 8) = 0;
    return;
  case 0x1e3:
switchD_012c4244_caseD_69:
    plVar8 = *(long **)this;
    uVar5 = Builtins::builtin_handle((Builtins *)(*plVar8 + 0x9e00),0x269);
    pOVar6 = aOStack_b0;
    break;
  case 0x1e4:
switchD_012c4244_caseD_6a:
    plVar8 = *(long **)this;
    uVar5 = Builtins::builtin_handle((Builtins *)(*plVar8 + 0x9e00),0x26a);
    pOVar6 = aOStack_a0;
    break;
  case 0x1e5:
switchD_012c4244_caseD_6c:
    plVar8 = *(long **)this;
    uVar5 = Builtins::builtin_handle((Builtins *)(*plVar8 + 0x9e00),0x261);
    pOVar6 = aOStack_70;
    break;
  case 0x1e6:
switchD_012c4244_caseD_6d:
    plVar8 = *(long **)this;
    uVar5 = Builtins::builtin_handle((Builtins *)(*plVar8 + 0x9e00),0x260);
    pOVar6 = aOStack_80;
    break;
  case 0x1e7:
switchD_012c4244_caseD_6e:
    plVar8 = *(long **)this;
    uVar5 = Builtins::builtin_handle((Builtins *)(*plVar8 + 0x9e00),0x262);
    pOVar6 = aOStack_90;
    break;
  case 0x1ee:
switchD_012c4280_caseD_1ee:
    plVar8 = *(long **)this;
    uVar5 = Builtins::builtin_handle((Builtins *)(*plVar8 + 0x9e00),0x92);
    break;
  default:
    switch(iVar3) {
    case 100:
      goto switchD_012c4244_caseD_64;
    case 0x65:
      goto switchD_012c4244_caseD_65;
    case 0x66:
    case 0x6b:
      goto switchD_012c4244_caseD_66;
    case 0x67:
      goto switchD_012c4244_caseD_67;
    case 0x68:
      plVar8 = *(long **)this;
      uVar5 = Builtins::builtin_handle((Builtins *)(*plVar8 + 0x9e00),0xd1);
      pOVar6 = aOStack_f0;
      break;
    case 0x69:
      goto switchD_012c4244_caseD_69;
    case 0x6a:
      goto switchD_012c4244_caseD_6a;
    case 0x6c:
      goto switchD_012c4244_caseD_6c;
    case 0x6d:
      goto switchD_012c4244_caseD_6d;
    case 0x6e:
      goto switchD_012c4244_caseD_6e;
    default:
      if (iVar3 != 0xd4) goto switchD_012c4244_caseD_66;
      goto switchD_012c4280_caseD_1ee;
    }
  }
  ObjectRef::ObjectRef(pOVar6,plVar8,uVar5,1);
switchD_012c4244_caseD_66:
  __s = *(void **)(*(long *)(this + 0x28) + 0x30);
  pvVar2 = *(void **)(*(long *)(this + 0x28) + 0x38);
  if (__s != pvVar2) {
    memset(__s,0,(long)pvVar2 - (long)__s & 0xfffffffffffffff8);
  }
  return;
}

