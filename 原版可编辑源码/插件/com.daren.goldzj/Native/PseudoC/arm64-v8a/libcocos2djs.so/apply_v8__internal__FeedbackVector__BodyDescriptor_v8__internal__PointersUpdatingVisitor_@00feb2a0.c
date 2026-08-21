
/* void v8::internal::CallIterateBody::apply<v8::internal::FeedbackVector::BodyDescriptor,
   v8::internal::PointersUpdatingVisitor>(v8::internal::Map, v8::internal::HeapObject, int,
   v8::internal::PointersUpdatingVisitor*) */

void v8::internal::CallIterateBody::
     apply<v8::internal::FeedbackVector::BodyDescriptor,v8::internal::PointersUpdatingVisitor>
               (undefined8 param_1,long param_2,int param_3,long *param_4)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  
  (**(code **)(*param_4 + 0x28))(param_4,param_2,param_2 + 3);
  (**(code **)(*param_4 + 0x30))(param_4,param_2,param_2 + 7);
  (**(code **)(*param_4 + 0x28))(param_4,param_2,param_2 + 0xb);
  puVar1 = (uint *)(param_2 + 0x1f);
  do {
    if ((uint *)(param_2 + param_3 + -1) <= puVar1) {
      return;
    }
    uVar3 = (ulong)*puVar1;
    if ((*puVar1 == 3) || ((uVar3 & 3) != 3)) {
      if (((uVar3 & 3) == 1) &&
         (uVar2 = *(uint *)(((ulong)puVar1 & 0xffffffff00000000 | uVar3) - 1), (uVar2 & 1) == 0)) {
        uVar2 = uVar2 + 1;
        goto LAB_00feb314;
      }
    }
    else {
      uVar2 = *(uint *)(((ulong)puVar1 & 0xffffffff00000000 | uVar3 & 0xfffffffffffffffd) - 1);
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 + 1 | 2;
LAB_00feb314:
        *puVar1 = uVar2;
      }
    }
    puVar1 = puVar1 + 1;
  } while( true );
}

