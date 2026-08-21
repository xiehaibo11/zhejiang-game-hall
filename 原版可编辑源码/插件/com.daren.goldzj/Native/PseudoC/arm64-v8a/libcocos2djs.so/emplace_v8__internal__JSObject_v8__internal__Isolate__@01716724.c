
/* std::__ndk1::pair<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::internal::Handle<v8::internal::JSObject>,
   void*>*>, bool> std::__ndk1::unordered_set<v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::JSObject>::hash,
   v8::internal::Handle<v8::internal::JSObject>::equal_to,
   v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::JSObject> >
   >::emplace<v8::internal::JSObject, v8::internal::Isolate*>(v8::internal::JSObject&&,
   v8::internal::Isolate*&&) */

void __thiscall
std::__ndk1::
unordered_set<v8::internal::Handle<v8::internal::JSObject>,v8::internal::Handle<v8::internal::JSObject>::hash,v8::internal::Handle<v8::internal::JSObject>::equal_to,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::JSObject>>>
::emplace<v8::internal::JSObject,v8::internal::Isolate*>
          (unordered_set<v8::internal::Handle<v8::internal::JSObject>,v8::internal::Handle<v8::internal::JSObject>::hash,v8::internal::Handle<v8::internal::JSObject>::equal_to,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::JSObject>>>
           *this,JSObject *param_1,Isolate **param_2)

{
  Zone *this_00;
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  this_00 = *(Zone **)(this + 0x20);
  puVar3 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < 0x18) {
    puVar3 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,0x18);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar3 + 3;
  }
  pIVar4 = *param_2;
  uVar5 = *(ulong *)param_1;
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar1 = (ulong *)v8::internal::HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar5;
  }
  else {
    puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar5);
  }
  puVar3[2] = puVar1;
  uVar2 = v8::base::hash_value((ulong)puVar1);
  *puVar3 = 0;
  puVar3[1] = uVar2;
  FUN_0173bfd8(this,puVar3);
  return;
}

