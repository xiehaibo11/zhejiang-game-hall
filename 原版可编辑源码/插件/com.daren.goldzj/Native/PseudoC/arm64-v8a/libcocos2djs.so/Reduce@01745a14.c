
/* v8::internal::compiler::JSNativeContextSpecialization::Reduce(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::Reduce
          (JSNativeContextSpecialization *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  undefined1 local_70 [8];
  undefined1 local_68;
  long local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  pOVar6 = *(Operator **)param_1;
  switch(*(undefined2 *)(pOVar6 + 0x10)) {
  case 0x2bd:
    uVar2 = ReduceJSAdd(this,param_1);
    break;
  case 0x2c3:
    uVar2 = ReduceJSHasInPrototypeChain(this,param_1);
    break;
  case 0x2c4:
    uVar2 = ReduceJSInstanceOf(this,param_1);
    break;
  case 0x2c5:
    uVar2 = ReduceJSOrdinaryHasInstance(this,param_1);
    break;
  case 0x2cb:
    uVar2 = ReduceJSToObject(this,param_1);
    break;
  case 0x2cc:
    uVar2 = ReduceJSToString(this,param_1);
    break;
  case 0x2e9:
    uVar2 = ReduceJSLoadProperty(this,param_1);
    break;
  case 0x2ea:
    uVar2 = ReduceJSLoadNamed(this,param_1);
    break;
  case 0x2eb:
    uVar2 = ReduceJSLoadGlobal(this,param_1);
    break;
  case 0x2ec:
    plVar3 = (long *)PropertyAccessOf(pOVar6);
    uVar2 = NodeProperties::GetValueInput(param_1,1);
    uVar4 = NodeProperties::GetValueInput(param_1,2);
    if ((*plVar3 == 0) || ((int)plVar3[1] == -1)) {
LAB_01745c50:
      uVar2 = 0;
      break;
    }
    local_50 = (undefined4)plVar3[1];
    local_58 = *plVar3;
    uVar5 = 1;
    goto LAB_01745c3c;
  case 0x2ed:
    uVar2 = ReduceJSStoreNamed(this,param_1);
    break;
  case 0x2ee:
    uVar2 = ReduceJSStoreNamedOwn(this,param_1);
    break;
  case 0x2ef:
    uVar2 = ReduceJSStoreGlobal(this,param_1);
    break;
  case 0x2f0:
  case 0x2f1:
    plVar3 = (long *)FeedbackParameterOf(pOVar6);
    uVar2 = NodeProperties::GetValueInput(param_1,1);
    uVar4 = NodeProperties::GetValueInput(param_1,2);
    if ((*plVar3 == 0) || ((int)plVar3[1] == -1)) goto LAB_01745c50;
    local_50 = (undefined4)plVar3[1];
    local_58 = *plVar3;
    uVar5 = 2;
LAB_01745c3c:
    local_68 = 0;
    local_70[0] = 0;
    uVar2 = ReducePropertyAccess(this,param_1,uVar2,local_70,uVar4,&local_58,uVar5);
    break;
  case 0x2f3:
    uVar2 = ReduceJSHasProperty(this,param_1);
    break;
  case 0x2f4:
    uVar2 = ReduceJSGetSuperConstructor(this,param_1);
    break;
  case 0x304:
    uVar2 = ReduceJSAsyncFunctionEnter(this,param_1);
    break;
  case 0x305:
    uVar2 = ReduceJSAsyncFunctionReject(this,param_1);
    break;
  case 0x306:
    uVar2 = ReduceJSAsyncFunctionResolve(this,param_1);
    break;
  case 0x30b:
    uVar2 = ReduceJSGetIterator(this,param_1);
    break;
  case 0x317:
    uVar2 = ReduceJSPromiseResolve(this,param_1);
    break;
  case 0x319:
    uVar2 = ReduceJSResolvePromise(this,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

