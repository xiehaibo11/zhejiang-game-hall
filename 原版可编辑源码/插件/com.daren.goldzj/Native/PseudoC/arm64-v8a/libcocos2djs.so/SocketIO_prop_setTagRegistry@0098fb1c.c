
/* SocketIO_prop_setTagRegistry(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<void> const&) */

void SocketIO_prop_setTagRegistry(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  void *pvVar4;
  SIOClient *this;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  Isolate *pIVar8;
  Value *local_a0;
  Value *local_98;
  Value *local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*param_3 + 0x10);
  v8::HandleScope::HandleScope(aHStack_88,pIVar8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*param_3 + 0x30);
  se::Value::Value(aVStack_48);
  se::internal::jsToSeValue(pIVar8,param_2,aVStack_48);
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  if (local_98 < local_90) {
    se::Value::Value(local_98,aVStack_48);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0098fa98 with catch @ 0098fbc0
                        */
    local_98 = local_98 + 0x10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0098fa60 with catch @ 0098fbc8
                        */
  }
  else {
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,aVStack_48);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0098fb10 with catch @ 0098fbe0
                        */
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a0);
  this = (SIOClient *)se::State::nativeThisObject(aSStack_70);
  puVar5 = (undefined8 *)se::State::args(aSStack_70);
  pbVar6 = (byte *)se::Value::toString((Value *)*puVar5);
  pbVar7 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar7 = pbVar6 + 1;
  }
  cocos2d::network::SIOClient::setTag(this,(char *)pbVar7);
  se::State::~State(aSStack_70);
  pVVar3 = local_a0;
  pVVar2 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_98 = pVVar3;
    operator_delete(local_a0);
  }
  se::Value::~Value(aVStack_48);
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

