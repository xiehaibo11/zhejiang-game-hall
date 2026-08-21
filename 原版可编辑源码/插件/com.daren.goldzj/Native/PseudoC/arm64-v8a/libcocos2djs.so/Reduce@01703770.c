
/* v8::internal::compiler::JSGenericLowering::Reduce(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSGenericLowering::Reduce(JSGenericLowering *this,Node *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  Node *pNVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Operator *pOVar8;
  Zone *pZVar9;
  
  pOVar8 = *(Operator **)param_1;
  switch(*(undefined2 *)(pOVar8 + 0x10)) {
  case 0x2b1:
    LowerJSEqual(this,param_1);
    break;
  case 0x2b2:
    LowerJSStrictEqual(this,param_1);
    break;
  case 0x2b3:
    LowerJSLessThan(this,param_1);
    break;
  case 0x2b4:
    LowerJSGreaterThan(this,param_1);
    break;
  case 0x2b5:
    LowerJSLessThanOrEqual(this,param_1);
    break;
  case 0x2b6:
    LowerJSGreaterThanOrEqual(this,param_1);
    break;
  case 0x2b7:
    LowerJSBitwiseOr(this,param_1);
    break;
  case 0x2b8:
    LowerJSBitwiseXor(this,param_1);
    break;
  case 0x2b9:
    LowerJSBitwiseAnd(this,param_1);
    break;
  case 0x2ba:
    LowerJSShiftLeft(this,param_1);
    break;
  case 699:
    LowerJSShiftRight(this,param_1);
    break;
  case 700:
    LowerJSShiftRightLogical(this,param_1);
    break;
  case 0x2bd:
    LowerJSAdd(this,param_1);
    break;
  case 0x2be:
    LowerJSSubtract(this,param_1);
    break;
  case 0x2bf:
    LowerJSMultiply(this,param_1);
    break;
  case 0x2c0:
    LowerJSDivide(this,param_1);
    break;
  case 0x2c1:
    LowerJSModulus(this,param_1);
    break;
  case 0x2c2:
    LowerJSExponentiate(this,param_1);
    break;
  case 0x2c3:
    uVar6 = 0xe4;
    goto LAB_01703bb4;
  case 0x2c4:
    LowerJSInstanceOf(this,param_1);
    break;
  case 0x2c5:
    LowerJSOrdinaryHasInstance(this,param_1);
    break;
  case 0x2c6:
    LowerJSToLength(this,param_1);
    break;
  case 0x2c7:
    LowerJSToName(this,param_1);
    break;
  case 0x2c8:
    LowerJSToNumber(this,param_1);
    break;
  case 0x2c9:
    LowerJSToNumberConvertBigInt(this,param_1);
    break;
  case 0x2ca:
    LowerJSToNumeric(this,param_1);
    break;
  case 0x2cb:
    LowerJSToObject(this,param_1);
    break;
  case 0x2cc:
    LowerJSToString(this,param_1);
    break;
  case 0x2cd:
    LowerJSParseInt(this,param_1);
    break;
  case 0x2ce:
    LowerJSBitwiseNot(this,param_1);
    break;
  case 0x2cf:
    LowerJSDecrement(this,param_1);
    break;
  case 0x2d0:
    LowerJSIncrement(this,param_1);
    break;
  case 0x2d1:
    LowerJSNegate(this,param_1);
    break;
  case 0x2d2:
    LowerJSCloneObject(this,param_1);
    break;
  case 0x2d3:
    LowerJSCreate(this,param_1);
    break;
  case 0x2d4:
    pcVar2 = (char *)CreateArgumentsTypeOf(pOVar8);
    cVar1 = *pcVar2;
    if (cVar1 == '\x02') {
      uVar6 = 0x136;
    }
    else if (cVar1 == '\x01') {
      uVar6 = 0x13a;
    }
    else {
      if (cVar1 != '\0') {
        return param_1;
      }
      uVar6 = 0x139;
    }
    goto LAB_01703bb4;
  case 0x2d5:
    LowerJSCreateArray(this,param_1);
    break;
  case 0x2d6:
    LowerJSCreateArrayFromIterable(this,param_1);
    break;
  case 0x2d7:
  case 0x2d8:
  case 0x2d9:
  case 0x2db:
  case 0x2dd:
  case 0x2df:
  case 0x2e0:
  case 0x2e5:
  case 0x2e6:
  case 0x2e8:
  case 0x2f5:
  case 0x2f6:
  case 0x2f7:
  case 0x2f9:
  case 0x2fa:
  case 0x309:
  case 0x30a:
  case 0x30b:
  case 0x30c:
  case 0x30d:
  case 0x30e:
  case 0x30f:
  case 0x310:
  case 0x311:
  case 0x312:
  case 0x313:
  case 0x314:
  case 0x31b:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x2da:
    LowerJSCreateClosure(this,param_1);
    break;
  case 0x2dc:
    LowerJSCreateEmptyLiteralArray(this,param_1);
    break;
  case 0x2de:
    LowerJSCreateGeneratorObject(this,param_1);
    break;
  case 0x2e1:
    LowerJSCreateLiteralArray(this,param_1);
    break;
  case 0x2e2:
    LowerJSCreateLiteralObject(this,param_1);
    break;
  case 0x2e3:
    LowerJSCreateLiteralRegExp(this,param_1);
    break;
  case 0x2e4:
    LowerJSCreateObject(this,param_1);
    break;
  case 0x2e7:
    LowerJSCreateTypedArray(this,param_1);
    break;
  case 0x2e9:
    LowerJSLoadProperty(this,param_1);
    break;
  case 0x2ea:
    LowerJSLoadNamed(this,param_1);
    break;
  case 0x2eb:
    LowerJSLoadGlobal(this,param_1);
    break;
  case 0x2ec:
    LowerJSStoreProperty(this,param_1);
    break;
  case 0x2ed:
    LowerJSStoreNamed(this,param_1);
    break;
  case 0x2ee:
    LowerJSStoreNamedOwn(this,param_1);
    break;
  case 0x2ef:
    LowerJSStoreGlobal(this,param_1);
    break;
  case 0x2f0:
    LowerJSStoreDataPropertyInLiteral(this,param_1);
    break;
  case 0x2f1:
    LowerJSStoreInArrayLiteral(this,param_1);
    break;
  case 0x2f2:
    LowerJSDeleteProperty(this,param_1);
    break;
  case 0x2f3:
    LowerJSHasProperty(this,param_1);
    break;
  case 0x2f4:
    LowerJSGetSuperConstructor(this,param_1);
    break;
  case 0x2f8:
    LowerJSCreateFunctionContext(this,param_1);
    break;
  case 0x2fb:
    uVar3 = ScopeInfoOf(pOVar8);
    pZVar9 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
    pNVar4 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),uVar3);
    Node::InsertInput(param_1,pZVar9,0,pNVar4);
    uVar6 = 0x13b;
LAB_01703bb4:
    uVar7 = 0xffffffff;
LAB_01703c7c:
    ReplaceWithRuntimeCall(this,param_1,uVar6,uVar7);
    break;
  case 0x2fc:
    LowerJSCall(this,param_1);
    break;
  case 0x2fd:
    LowerJSCallForwardVarargs(this,param_1);
    break;
  case 0x2fe:
    LowerJSCallWithArrayLike(this,param_1);
    break;
  case 0x2ff:
    LowerJSCallWithSpread(this,param_1);
    break;
  case 0x300:
    LowerJSConstructForwardVarargs(this,param_1);
    break;
  case 0x301:
    LowerJSConstruct(this,param_1);
    break;
  case 0x302:
    LowerJSConstructWithArrayLike(this,param_1);
    break;
  case 0x303:
    LowerJSConstructWithSpread(this,param_1);
    break;
  case 0x304:
    LowerJSAsyncFunctionEnter(this,param_1);
    break;
  case 0x305:
    LowerJSAsyncFunctionReject(this,param_1);
    break;
  case 0x306:
    LowerJSAsyncFunctionResolve(this,param_1);
    break;
  case 0x307:
    puVar5 = (undefined4 *)CallRuntimeParametersOf(pOVar8);
    uVar6 = *puVar5;
    uVar7 = puVar5[2];
    goto LAB_01703c7c;
  case 0x308:
    LowerJSForInEnumerate(this,param_1);
    break;
  case 0x315:
    LowerJSFulfillPromise(this,param_1);
    break;
  case 0x316:
    LowerJSPerformPromiseThen(this,param_1);
    break;
  case 0x317:
    LowerJSPromiseResolve(this,param_1);
    break;
  case 0x318:
    LowerJSRejectPromise(this,param_1);
    break;
  case 0x319:
    LowerJSResolvePromise(this,param_1);
    break;
  case 0x31a:
    LowerJSStackCheck(this,param_1);
    break;
  case 0x31c:
    LowerJSRegExpTest(this,param_1);
    break;
  case 0x31d:
    LowerJSDebugger(this,param_1);
    break;
  default:
    param_1 = (Node *)0x0;
  }
  return param_1;
}

