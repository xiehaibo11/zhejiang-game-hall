
/* v8::internal::Assembler::~Assembler() */

void __thiscall v8::internal::Assembler::~Assembler(Assembler *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *(undefined ***)this = &PTR__Assembler_01cbcf10;
  ConstantPool::~ConstantPool((ConstantPool *)(this + 0x138));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,v8::internal::Assembler::FarBranchInfo>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Assembler::FarBranchInfo>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Assembler::FarBranchInfo>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,v8::internal::Assembler::FarBranchInfo>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Assembler::FarBranchInfo>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Assembler::FarBranchInfo>>>
             *)(this + 0x118),*(__tree_node **)(this + 0x120));
  puVar7 = *(undefined8 **)(this + 0xf0);
  puVar2 = *(undefined8 **)(this + 0xf8);
  lVar3 = (long)puVar2 - (long)puVar7;
  if (lVar3 != 0) {
    uVar1 = *(ulong *)(this + 0x108);
    plVar5 = (long *)((long)puVar7 + (uVar1 >> 7 & 0x1fffffffffffff8));
    lVar6 = *plVar5 + (uVar1 & 0x3ff) * 4;
    while (*(long *)((long)puVar7 + (*(long *)(this + 0x110) + uVar1 >> 7 & 0x1fffffffffffff8)) +
           (*(long *)(this + 0x110) + uVar1 & 0x3ff) * 4 != lVar6) {
      lVar6 = lVar6 + 4;
      if (lVar6 - *plVar5 == 0x1000) {
        plVar5 = plVar5 + 1;
        lVar6 = *plVar5;
      }
    }
  }
  *(undefined8 *)(this + 0x110) = 0;
  while (uVar1 = lVar3 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar7);
    puVar2 = *(undefined8 **)(this + 0xf8);
    puVar7 = (undefined8 *)(*(long *)(this + 0xf0) + 8);
    *(undefined8 **)(this + 0xf0) = puVar7;
    lVar3 = (long)puVar2 - (long)puVar7;
  }
  if (uVar1 == 1) {
    uVar4 = 0x200;
  }
  else {
    if (uVar1 != 2) goto LAB_0125f160;
    uVar4 = 0x400;
  }
  *(undefined8 *)(this + 0x108) = uVar4;
LAB_0125f160:
  if (puVar7 != puVar2) {
    do {
      puVar8 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar8;
    } while (puVar2 != puVar8);
    lVar3 = *(long *)(this + 0xf8) - *(long *)(this + 0xf0);
    if (lVar3 != 0) {
      *(ulong *)(this + 0xf8) = *(long *)(this + 0xf8) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0xe8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xe8));
  }
  AssemblerBase::~AssemblerBase((AssemblerBase *)this);
  return;
}

