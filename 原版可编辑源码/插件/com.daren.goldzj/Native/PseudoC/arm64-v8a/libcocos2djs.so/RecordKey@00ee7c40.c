
/* v8::internal::ConstantPool::RecordKey(v8::internal::ConstantPoolKey, int) */

undefined4 __thiscall
v8::internal::ConstantPool::RecordKey(ConstantPool *this,char *param_2,undefined4 param_3)

{
  byte bVar1;
  bool bVar2;
  ConstantPool *pCVar3;
  __tree_node_base *p_Var4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  __tree_end_node *local_48;
  
  bVar1 = param_2[0x10];
  if (bVar1 == 0) {
    if (*param_2 == '\0') {
      bVar2 = *(long *)(param_2 + 8) == 0;
    }
    else {
      bVar2 = *(int *)(param_2 + 8) == 0;
    }
    bVar2 = !bVar2;
LAB_00ee7c9c:
    if (((bVar1 & 0xfe) == 2) || (bVar2)) goto LAB_00ee7cac;
  }
  else {
    if ((char)bVar1 < '\x04') {
      bVar2 = false;
      goto LAB_00ee7c9c;
    }
LAB_00ee7cac:
    pCVar3 = (ConstantPool *)
             std::__ndk1::
             __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
             ::find<v8::internal::ConstantPoolKey>
                       ((__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                         *)(this + 0x10),param_2);
    if (this + 0x18 != pCVar3) {
      uVar8 = 1;
      goto LAB_00ee7d04;
    }
  }
  if (*param_2 == '\0') {
    pCVar3 = this + 0x30;
    lVar7 = *(long *)pCVar3;
    if (lVar7 == 0) {
      *(undefined4 *)(this + 0xc) = param_3;
    }
  }
  else {
    pCVar3 = this + 0x28;
    lVar7 = *(long *)pCVar3;
    if (lVar7 == 0) {
      *(undefined4 *)(this + 8) = param_3;
    }
  }
  uVar8 = 0;
  *(long *)pCVar3 = lVar7 + 1;
LAB_00ee7d04:
  p_Var4 = operator_new(0x40);
  uVar9 = *(undefined8 *)param_2;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(p_Var4 + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(p_Var4 + 0x20) = uVar9;
  *(undefined8 *)(p_Var4 + 0x30) = uVar6;
  *(undefined4 *)(p_Var4 + 0x38) = param_3;
  puVar5 = (undefined8 *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
           ::__find_leaf_high((__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                               *)(this + 0x10),&local_48,p_Var4 + 0x20);
  *(undefined8 *)p_Var4 = 0;
  *(undefined8 *)(p_Var4 + 8) = 0;
  *(__tree_end_node **)(p_Var4 + 0x10) = local_48;
  *puVar5 = p_Var4;
  if (**(long **)(this + 0x10) != 0) {
    *(long *)(this + 0x10) = **(long **)(this + 0x10);
    p_Var4 = (__tree_node_base *)*puVar5;
  }
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 0x18),p_Var4);
  *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
  if (0x200 < (ulong)(*(long *)(this + 0x30) + *(long *)(this + 0x28))) {
    *(int *)(this + 0x38) = (*(int *)(*(long *)this + 0x20) - *(int *)(*(long *)this + 0x10)) + 4;
  }
  return uVar8;
}

