
/* v8::internal::SerializerDeserializer::Iterate(v8::internal::Isolate*, v8::internal::RootVisitor*)
    */

void v8::internal::SerializerDeserializer::Iterate(Isolate *param_1,RootVisitor *param_2)

{
  vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *this;
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_28;
  
  this = (vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *)
         (param_1 + 0xc660);
  lVar1 = *(long *)this;
  puVar2 = *(undefined8 **)(param_1 + 0xc668);
  lVar5 = 0;
  uVar6 = 0;
  while( true ) {
    uVar4 = (long)puVar2 - lVar1 >> 3;
    if (uVar4 <= uVar6) {
      local_28 = 0;
      if (puVar2 < *(undefined8 **)(param_1 + 0xc670)) {
        *puVar2 = 0;
        lVar3 = *(long *)(param_1 + 0xc668) + 8;
        *(long *)(param_1 + 0xc668) = lVar3;
      }
      else {
        std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>::
        __push_back_slow_path<v8::internal::Object>(this,(Object *)&local_28);
        lVar3 = *(long *)(param_1 + 0xc668);
      }
      lVar1 = *(long *)this;
      uVar4 = lVar3 - lVar1 >> 3;
    }
    if (uVar4 <= uVar6) break;
    (**(code **)(*(long *)param_2 + 0x18))(param_2,0x12,0,lVar1 + lVar5);
    lVar1 = *(long *)this;
    puVar2 = *(undefined8 **)(param_1 + 0xc668);
    if ((ulong)((long)puVar2 - lVar1 >> 3) <= uVar6) break;
    if (((*(ulong *)(lVar1 + lVar5) & 1) != 0) &&
       ((int)*(ulong *)(lVar1 + lVar5) == *(int *)(param_1 + 0xa0))) {
      return;
    }
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 8;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

