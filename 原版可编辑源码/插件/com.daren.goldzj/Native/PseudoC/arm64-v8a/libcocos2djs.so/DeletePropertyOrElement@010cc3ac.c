
/* v8::internal::JSReceiver::DeletePropertyOrElement(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::LanguageMode) */

undefined2
v8::internal::JSReceiver::DeletePropertyOrElement(long param_1,undefined8 param_2,uint param_3)

{
  undefined2 uVar1;
  LookupIterator aLStack_78 [88];
  
  LookupIterator::PropertyOrElement
            (aLStack_78,(ulong)*(uint *)(param_1 + 4) << 0x20,param_1,param_2,param_1,1);
  uVar1 = DeleteProperty(aLStack_78,param_3 & 1);
  return uVar1;
}

