
/* v8::internal::Assembler::dcptr(v8::internal::Label*) */

void __thiscall v8::internal::Assembler::dcptr(Assembler *this,Label *param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  BlockScope aBStack_60 [8];
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  ConstantPool::BlockScope::BlockScope(aBStack_60,this,0);
  if ((*(long *)(this + 0x128) != 0) && (*(int *)(this + 0xd0) < 1)) {
    if (*(long *)(this + 0x128) * 4 + (long)(*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 8 <
        (long)*(int *)(*(long *)(this + 0x118) + 0x20)) {
      *(int *)(this + 0x130) = *(int *)(*(long *)(this + 0x118) + 0x20) + -0x800;
    }
    else {
      EmitVeneers(this,false,true,0);
    }
  }
  *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + 1;
  if (this[0xa1] == (Assembler)0x0) {
    local_58 = *(undefined8 *)(this + 0x20);
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 8;
    local_38 = 0;
    RelocInfoWriter::Write((RelocInfoWriter *)(this + 0xd8),(RelocInfo *)&local_58);
    iVar2 = *(int *)param_1;
  }
  else {
    iVar2 = *(int *)param_1;
  }
  if (iVar2 < 0) {
    lVar4 = *(long *)(this + 0xf0);
    iVar2 = *(int *)(this + 0x20);
    iVar3 = *(int *)(this + 0x10);
    uVar1 = 0;
    if (*(long *)(this + 0xf8) - lVar4 != 0) {
      uVar1 = (*(long *)(this + 0xf8) - lVar4) * 0x80 - 1;
    }
    uVar6 = *(long *)(this + 0x110) + *(long *)(this + 0x108);
    if (uVar1 == uVar6) {
      std::__ndk1::deque<int,std::__ndk1::allocator<int>>::__add_back_capacity
                ((deque<int,std::__ndk1::allocator<int>> *)(this + 0xe8));
      lVar4 = *(long *)(this + 0xf0);
      uVar6 = *(long *)(this + 0x108) + *(long *)(this + 0x110);
    }
    *(int *)(*(long *)(lVar4 + (uVar6 >> 7 & 0x1fffffffffffff8)) + (uVar6 & 0x3ff) * 4) =
         iVar2 - iVar3;
    *(long *)(this + 0x110) = *(long *)(this + 0x110) + 1;
    uVar5 = *(uint *)param_1;
    if ((int)uVar5 < 0) {
      uVar5 = ~uVar5;
    }
    else {
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar5 = uVar5 - 1;
    }
    dc64(this,*(long *)(this + 0x10) + (long)(int)uVar5);
  }
  else {
    uVar5 = 0;
    if (iVar2 != 0) {
      uVar5 = iVar2 + ~(*(int *)(this + 0x20) - *(int *)(this + 0x10)) >> 2;
    }
    *(uint *)param_1 = (*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 1;
    Emit(this,uVar5 >> 0xb & 0x1fffe0 | 0xd4200000);
    Emit(this,(uVar5 & 0xffff) << 5 | 0xd4200000);
  }
  *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + -1;
  ConstantPool::BlockScope::~BlockScope(aBStack_60);
  return;
}

