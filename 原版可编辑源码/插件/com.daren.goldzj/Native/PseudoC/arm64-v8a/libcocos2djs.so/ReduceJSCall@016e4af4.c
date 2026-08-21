
/* v8::internal::compiler::JSCallReducer::ReduceJSCall(v8::internal::compiler::Node*,
   v8::internal::compiler::SharedFunctionInfoRef const&) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceJSCall
          (JSCallReducer *this,Node *param_1,SharedFunctionInfoRef *param_2)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  Node *pNVar4;
  ulong uVar5;
  Operator *pOVar6;
  AccessBuilder *this_00;
  uint *puVar7;
  Node *pNVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  JSGraph *this_01;
  long *plVar13;
  double dVar14;
  long lVar15;
  Graph *this_02;
  Node *local_80;
  undefined8 uStack_78;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,0);
  uVar5 = SharedFunctionInfoRef::HasBreakInfo(param_2);
  if ((uVar5 & 1) != 0) {
LAB_016e4b40:
    pNVar4 = (Node *)0x0;
    goto LAB_016e4bf8;
  }
  cVar3 = SharedFunctionInfoRef::kind(param_2);
  if ((byte)(cVar3 - 3U) < 4) {
    NodeProperties::ReplaceValueInputs(param_1,pNVar4);
    pOVar6 = (Operator *)
             JSOperatorBuilder::CallRuntime
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),0x28,1);
LAB_016e4b80:
    NodeProperties::ChangeOp(param_1,pOVar6);
    pNVar4 = param_1;
    goto LAB_016e4bf8;
  }
  uVar5 = SharedFunctionInfoRef::HasBuiltinId(param_2);
  if ((uVar5 & 1) == 0) {
switchD_016e4bc4_caseD_9c:
    SharedFunctionInfoRef::function_template_info();
    if ((char)local_80 == '\0') goto LAB_016e4b40;
    pNVar4 = (Node *)ReduceCallApiFunction(this,param_1,param_2);
    goto LAB_016e4bf8;
  }
  this_00 = (AccessBuilder *)SharedFunctionInfoRef::builtin_id(param_2);
  switch((int)this_00) {
  case 0x9a:
    pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,1);
    plVar13 = *(long **)(this + 8);
    lVar15 = *plVar13;
    pNVar8 = (Node *)0x0;
    uVar11 = 0;
    goto LAB_016e5440;
  case 0x9b:
    pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,0);
    puVar7 = (uint *)CallParametersOf(*(Operator **)param_1);
    uVar1 = *puVar7;
    NodeProperties::ReplaceValueInput(param_1,pNVar4,0);
    NodeProperties::ReplaceValueInput(param_1,pNVar4,1);
    pOVar6 = (Operator *)
             JSOperatorBuilder::CreateArray
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),
                        ((ulong)uVar1 & 0x7ffffff) - 2,0);
    goto LAB_016e4b80;
  default:
    goto switchD_016e4bc4_caseD_9c;
  case 0xb4:
    uVar11 = 0;
    goto LAB_016e55ac;
  case 0xb8:
    uVar11 = 1;
LAB_016e55ac:
    pNVar4 = (Node *)ReduceArrayIndexOfIncludes(this,uVar11,param_1);
    break;
  case 0xba:
    pNVar4 = (Node *)ReduceArrayPrototypePop(this,param_1);
    break;
  case 0xbc:
    pNVar4 = (Node *)ReduceArrayPrototypePush(this,param_1);
    break;
  case 0xc2:
  case 0x231:
    uVar11 = 2;
    goto LAB_016e4c40;
  case 0xc3:
  case 0x232:
    uVar11 = 0;
    goto LAB_016e4c40;
  case 0xc4:
  case 0x233:
    uVar11 = 1;
LAB_016e4c40:
    pNVar4 = (Node *)ReduceArrayIterator(this,param_1,uVar11);
    break;
  case 0xc5:
    pNVar4 = (Node *)ReduceArrayIteratorPrototypeNext(this,param_1);
    break;
  case 0xcd:
    pNVar4 = (Node *)ReduceArrayBufferIsView(this,param_1);
    break;
  case 0xd8:
    pNVar4 = (Node *)ReduceBigIntAsUintN(this,param_1);
    break;
  case 0x111:
    pNVar4 = (Node *)ReduceDatePrototypeGetTime(this,param_1);
    break;
  case 0x11f:
    pNVar4 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    uVar11 = NodeProperties::GetControlInput(param_1,0);
    this_02 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::DateNow
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_80 = pNVar4;
    uStack_78 = uVar11;
    pNVar8 = (Node *)Graph::NewNode(this_02,pOVar6,2,&local_80,false);
    plVar13 = *(long **)(this + 8);
    lVar15 = *plVar13;
    pNVar4 = pNVar8;
LAB_016e5440:
    (**(code **)(lVar15 + 0x20))(plVar13,param_1,pNVar4,pNVar8,uVar11);
    goto LAB_016e4bf8;
  case 0x140:
    pNVar4 = (Node *)ReduceFunctionPrototypeApply(this,param_1);
    break;
  case 0x142:
    pNVar4 = (Node *)ReduceFunctionPrototypeBind(this,param_1);
    break;
  case 0x143:
    pNVar4 = (Node *)ReduceFunctionPrototypeCall(this,param_1);
    break;
  case 0x144:
    pNVar4 = (Node *)ReduceFunctionPrototypeHasInstance(this,param_1);
    break;
  case 0x155:
    pNVar4 = (Node *)ReduceGlobalIsFinite(this,param_1);
    break;
  case 0x156:
    pNVar4 = (Node *)ReduceGlobalIsNaN(this,param_1);
    break;
  case 0x17a:
    pNVar4 = (Node *)ReduceMapPrototypeGet(this,param_1);
    break;
  case 0x17b:
    pNVar4 = (Node *)ReduceMapPrototypeHas(this,param_1);
    break;
  case 0x17d:
    uVar11 = 2;
    goto LAB_016e5318;
  case 0x17e:
    pNVar4 = (Node *)ReduceCollectionPrototypeSize(this,param_1,0);
    break;
  case 0x180:
    pNVar4 = (Node *)ReduceCollectionIteration(this,param_1,0,0);
    break;
  case 0x181:
    uVar11 = 1;
LAB_016e5318:
    pNVar4 = (Node *)ReduceCollectionIteration(this,param_1,0,uVar11);
    break;
  case 0x182:
    uVar11 = 3;
    uVar10 = 0x412;
    uVar12 = 0x414;
    lVar15 = *(long *)(*(long *)(this + 0x10) + 0x168) + 0x3f0;
    goto LAB_016e5344;
  case 0x185:
    pNVar4 = (Node *)ReduceNumberConstructor(this,param_1);
    break;
  case 0x186:
    pNVar4 = (Node *)ReduceNumberIsFinite(this,param_1);
    break;
  case 0x187:
    pNVar4 = (Node *)ReduceNumberIsInteger(this,param_1);
    break;
  case 0x188:
    pNVar4 = (Node *)ReduceNumberIsNaN(this,param_1);
    break;
  case 0x189:
    pNVar4 = (Node *)ReduceNumberIsSafeInteger(this,param_1);
    break;
  case 0x18b:
    pNVar4 = (Node *)ReduceNumberParseInt(this,param_1);
    break;
  case 0x1aa:
    pNVar4 = (Node *)ReduceObjectConstructor(this,param_1);
    break;
  case 0x1ac:
    pNVar4 = (Node *)ReduceObjectCreate(this,param_1);
    break;
  case 0x1b7:
    pNVar4 = (Node *)ReduceObjectIs(this,param_1);
    break;
  case 0x1bf:
    pNVar4 = (Node *)ReduceObjectPrototypeHasOwnProperty(this,param_1);
    break;
  case 0x1c0:
    pNVar4 = (Node *)ReduceObjectPrototypeIsPrototypeOf(this,param_1);
    break;
  case 0x1c2:
    iVar9 = 1;
LAB_016e4d04:
    pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,iVar9);
    goto LAB_016e52c4;
  case 0x1d0:
    pNVar4 = (Node *)ReducePromisePrototypeThen(this,param_1);
    break;
  case 0x1d1:
    pNVar4 = (Node *)ReducePromisePrototypeCatch(this,param_1);
    break;
  case 0x1d5:
    pNVar4 = (Node *)ReducePromiseResolveTrampoline(this,param_1);
    break;
  case 0x1d8:
    pNVar4 = (Node *)ReducePromisePrototypeFinally(this,param_1);
    break;
  case 0x1e3:
    pNVar4 = (Node *)ReduceReflectApply(this,param_1);
    break;
  case 0x1e4:
    pNVar4 = (Node *)ReduceReflectConstruct(this,param_1);
    break;
  case 0x203:
    uVar11 = 2;
    goto LAB_016e55d0;
  case 0x204:
    pNVar4 = (Node *)ReduceCollectionPrototypeSize(this,param_1,1);
    break;
  case 0x206:
    uVar11 = 1;
LAB_016e55d0:
    pNVar4 = (Node *)ReduceCollectionIteration(this,param_1,1,uVar11);
    break;
  case 0x207:
    uVar11 = 2;
    uVar10 = 0x415;
    uVar12 = 0x416;
    lVar15 = *(long *)(*(long *)(this + 0x10) + 0x168) + 0x3f8;
LAB_016e5344:
    pNVar4 = (Node *)ReduceCollectionIteratorPrototypeNext(this,param_1,uVar11,lVar15,uVar10,uVar12)
    ;
    break;
  case 0x218:
    pNVar4 = (Node *)ReduceStringFromCodePoint(this,param_1);
    break;
  case 0x219:
    pNVar4 = (Node *)ReduceStringFromCharCode(this,param_1);
    break;
  case 0x21b:
    pNVar4 = (Node *)ReduceStringPrototypeIndexOf(this,param_1);
    break;
  case 0x22e:
    AccessBuilder::ForJSArrayBufferViewByteLength(this_00);
    goto LAB_016e5060;
  case 0x22f:
    AccessBuilder::ForJSArrayBufferViewByteOffset(this_00);
    goto LAB_016e5060;
  case 0x230:
    AccessBuilder::ForJSTypedArrayLength(this_00);
LAB_016e5060:
    uVar11 = 0x41b;
LAB_016e51fc:
    pNVar4 = (Node *)ReduceArrayBufferViewAccessor(this,param_1,uVar11,&local_80);
LAB_016e4bf8:
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return pNVar4;
    }
    goto LAB_016e5560;
  case 0x23a:
    pNVar4 = (Node *)ReduceTypedArrayPrototypeToStringTag(this,param_1);
    break;
  case 0x29a:
    pNVar4 = (Node *)ReduceArrayEvery(this,param_1,param_2);
    break;
  case 0x29e:
    pNVar4 = (Node *)ReduceArrayFilter(this,param_1,param_2);
    break;
  case 0x2a3:
    uVar11 = 0;
    goto LAB_016e51c0;
  case 0x2a8:
    uVar11 = 1;
LAB_016e51c0:
    pNVar4 = (Node *)ReduceArrayFind(this,param_1,uVar11,param_2);
    break;
  case 0x2ac:
    pNVar4 = (Node *)ReduceArrayForEach(this,param_1,param_2);
    break;
  case 0x2ad:
    pNVar4 = (Node *)ReduceArrayIsArray(this,param_1);
    break;
  case 0x2bd:
    pNVar4 = (Node *)ReduceArrayMap(this,param_1,param_2);
    break;
  case 0x2c3:
    pNVar4 = (Node *)ReduceArrayReduceRight(this,param_1,param_2);
    break;
  case 0x2c8:
    pNVar4 = (Node *)ReduceArrayReduce(this,param_1,param_2);
    break;
  case 0x2ca:
    pNVar4 = (Node *)ReduceArrayPrototypeShift(this,param_1);
    break;
  case 0x2cb:
    pNVar4 = (Node *)ReduceArrayPrototypeSlice(this,param_1);
    break;
  case 0x2cf:
    pNVar4 = (Node *)ReduceArraySome(this,param_1,param_2);
    break;
  case 0x2da:
    pNVar4 = (Node *)ReduceBooleanConstructor(this,param_1);
    break;
  case 0x2e0:
    pNVar4 = (Node *)ReduceStringPrototypeCharAt(this,param_1);
    break;
  case 0x2e1:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::StringCharCodeAt
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5130;
  case 0x2e2:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::StringCodePointAt
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
LAB_016e5130:
    pNVar4 = (Node *)ReduceStringPrototypeStringAt(this,pOVar6,param_1);
    break;
  case 0x2e3:
    pNVar4 = (Node *)ReduceStringPrototypeConcat(this,param_1);
    break;
  case 0x2ea:
    AccessBuilder::ForJSArrayBufferViewByteLength(this_00);
    goto LAB_016e51f4;
  case 0x2eb:
    AccessBuilder::ForJSArrayBufferViewByteOffset(this_00);
LAB_016e51f4:
    uVar11 = 0x41a;
    goto LAB_016e51fc;
  case 0x2ec:
    uVar11 = 2;
    goto LAB_016e54cc;
  case 0x2ed:
    uVar11 = 1;
    goto LAB_016e54cc;
  case 0x2ee:
    uVar11 = 4;
    goto LAB_016e54cc;
  case 0x2ef:
    uVar11 = 3;
    goto LAB_016e54cc;
  case 0x2f0:
    uVar11 = 6;
    goto LAB_016e54cc;
  case 0x2f1:
    uVar11 = 5;
    goto LAB_016e54cc;
  case 0x2f2:
    uVar11 = 7;
    goto LAB_016e54cc;
  case 0x2f3:
    uVar11 = 8;
LAB_016e54cc:
    uVar10 = 0;
LAB_016e554c:
    pNVar4 = (Node *)ReduceDataViewAccess(this,param_1,uVar10,uVar11);
    break;
  case 0x2f6:
    uVar11 = 2;
    goto LAB_016e5544;
  case 0x2f7:
    uVar11 = 1;
    goto LAB_016e5544;
  case 0x2f8:
    uVar11 = 4;
    goto LAB_016e5544;
  case 0x2f9:
    uVar11 = 3;
    goto LAB_016e5544;
  case 0x2fa:
    uVar11 = 6;
    goto LAB_016e5544;
  case 0x2fb:
    uVar11 = 5;
    goto LAB_016e5544;
  case 0x2fc:
    uVar11 = 7;
    goto LAB_016e5544;
  case 0x2fd:
    uVar11 = 8;
LAB_016e5544:
    uVar10 = 1;
    goto LAB_016e554c;
  case 0x303:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberAbs
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x304:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberCeil
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x305:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberFloor
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x306:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberRound
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x307:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberTrunc
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x308:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberPow
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e53d0;
  case 0x309:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberMax
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    this_01 = *(JSGraph **)(this + 0x10);
    dVar14 = -INFINITY;
    goto LAB_016e4ef4;
  case 0x30a:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberMin
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    this_01 = *(JSGraph **)(this + 0x10);
    dVar14 = INFINITY;
LAB_016e4ef4:
    pNVar4 = (Node *)JSGraph::Constant(this_01,dVar14);
    pNVar4 = (Node *)ReduceMathMinMax(this,param_1,pOVar6,pNVar4);
    break;
  case 0x30b:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberAcos
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x30c:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberAcosh
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x30d:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberAsin
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x30e:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberAsinh
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x30f:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberAtan
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x310:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberAtan2
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
LAB_016e53d0:
    pNVar4 = (Node *)ReduceMathBinary(this,param_1,pOVar6);
    break;
  case 0x311:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberAtanh
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x312:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberCbrt
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x313:
    pNVar4 = (Node *)ReduceMathClz32(this,param_1);
    break;
  case 0x314:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberCos
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x315:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberCosh
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x316:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberExp
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x317:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberExpm1
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x318:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberFround
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x319:
    pNVar4 = (Node *)ReduceMathImul(this,param_1);
    break;
  case 0x31a:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberLog
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x31b:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberLog1p
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x31c:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberLog10
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x31d:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberLog2
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x31e:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberSin
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 799:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberSign
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 800:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberSinh
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x321:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberSqrt
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x322:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberTan
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_016e5464;
  case 0x323:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberTanh
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
LAB_016e5464:
    pNVar4 = (Node *)ReduceMathUnary(this,param_1,pOVar6);
    break;
  case 0x32b:
  case 0x341:
    if (2 < *(int *)(*(long *)param_1 + 0x14)) {
      iVar9 = 2;
      goto LAB_016e4d04;
    }
    pNVar4 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
LAB_016e52c4:
    pNVar4 = (Node *)ReduceObjectGetPrototype(this,param_1,pNVar4);
    break;
  case 0x343:
    pNVar4 = (Node *)ReduceReflectGet(this,param_1);
    break;
  case 0x345:
    pNVar4 = (Node *)ReduceReflectHas(this,param_1);
    break;
  case 0x353:
    pNVar4 = (Node *)ReduceRegExpPrototypeTest(this,param_1);
    break;
  case 0x36b:
    pNVar4 = (Node *)ReduceStringPrototypeIterator(this,param_1);
    break;
  case 0x36c:
    pNVar4 = (Node *)ReduceStringIteratorPrototypeNext(this,param_1);
    break;
  case 0x372:
    pNVar4 = (Node *)ReduceStringPrototypeSlice(this,param_1);
    break;
  case 0x373:
    pNVar4 = (Node *)ReduceStringPrototypeStartsWith(this,param_1);
    break;
  case 0x374:
    pNVar4 = (Node *)ReduceStringPrototypeSubstring(this,param_1);
    break;
  case 0x375:
    pNVar4 = (Node *)ReduceStringPrototypeSubstr(this,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return pNVar4;
  }
LAB_016e5560:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

