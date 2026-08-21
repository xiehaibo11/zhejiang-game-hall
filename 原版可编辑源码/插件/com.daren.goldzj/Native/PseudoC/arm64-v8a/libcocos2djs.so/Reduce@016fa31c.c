
/* v8::internal::compiler::JSCreateLowering::Reduce(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCreateLowering::Reduce(JSCreateLowering *this,Node *param_1)

{
  undefined8 uVar1;
  
  switch(*(undefined2 *)(*(long *)param_1 + 0x10)) {
  case 0x2d3:
    uVar1 = ReduceJSCreate((Node *)this);
    return uVar1;
  case 0x2d4:
    uVar1 = ReduceJSCreateArguments(this,param_1);
    return uVar1;
  case 0x2d5:
    uVar1 = ReduceJSCreateArray(this,param_1);
    return uVar1;
  default:
    return 0;
  case 0x2d7:
    uVar1 = ReduceJSCreateArrayIterator(this,param_1);
    return uVar1;
  case 0x2d8:
    uVar1 = ReduceJSCreateAsyncFunctionObject(this,param_1);
    return uVar1;
  case 0x2d9:
    uVar1 = ReduceJSCreateBoundFunction(this,param_1);
    return uVar1;
  case 0x2da:
    uVar1 = ReduceJSCreateClosure(this,param_1);
    return uVar1;
  case 0x2db:
    uVar1 = ReduceJSCreateCollectionIterator(this,param_1);
    return uVar1;
  case 0x2dc:
    uVar1 = ReduceJSCreateEmptyLiteralArray(this,param_1);
    return uVar1;
  case 0x2dd:
    uVar1 = ReduceJSCreateEmptyLiteralObject(this,param_1);
    return uVar1;
  case 0x2de:
    uVar1 = ReduceJSCreateGeneratorObject(this,param_1);
    return uVar1;
  case 0x2df:
    uVar1 = ReduceJSCreateIterResultObject(this,param_1);
    return uVar1;
  case 0x2e0:
    uVar1 = ReduceJSCreateKeyValueArray(this,param_1);
    return uVar1;
  case 0x2e1:
  case 0x2e2:
    uVar1 = ReduceJSCreateLiteralArrayOrObject(this,param_1);
    return uVar1;
  case 0x2e3:
    uVar1 = ReduceJSCreateLiteralRegExp(this,param_1);
    return uVar1;
  case 0x2e4:
    uVar1 = ReduceJSCreateObject(this,param_1);
    return uVar1;
  case 0x2e5:
    uVar1 = ReduceJSCreatePromise(this,param_1);
    return uVar1;
  case 0x2e6:
    uVar1 = ReduceJSCreateStringIterator(this,param_1);
    return uVar1;
  case 0x2e8:
    uVar1 = ReduceJSGetTemplateObject(this,param_1);
    return uVar1;
  case 0x2f8:
    uVar1 = ReduceJSCreateFunctionContext(this,param_1);
    return uVar1;
  case 0x2f9:
    uVar1 = ReduceJSCreateCatchContext(this,param_1);
    return uVar1;
  case 0x2fa:
    uVar1 = ReduceJSCreateWithContext(this,param_1);
    return uVar1;
  case 0x2fb:
    uVar1 = ReduceJSCreateBlockContext(this,param_1);
    return uVar1;
  }
}

