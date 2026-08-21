
/* v8::internal::ConstantPool::EmitEntries() */

void __thiscall v8::internal::ConstantPool::EmitEntries(ConstantPool *this)

{
  ConstantPool *pCVar1;
  ConstantPool CVar2;
  ConstantPool *pCVar3;
  bool bVar4;
  bool bVar5;
  ConstantPool *pCVar6;
  uint uVar7;
  ConstantPool *pCVar8;
  long lVar9;
  ConstantPool *pCVar10;
  undefined1 auVar11 [16];
  undefined8 local_48;
  
  pCVar6 = *(ConstantPool **)(this + 0x10);
  do {
    pCVar3 = pCVar6;
    if (this + 0x18 == pCVar3) {
      return;
    }
    pCVar1 = pCVar3 + 0x20;
    auVar11 = std::__ndk1::
              __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
              ::__equal_range_multi<v8::internal::ConstantPoolKey>
                        ((__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                          *)(this + 0x10),pCVar1);
    pCVar6 = auVar11._8_8_;
    CVar2 = pCVar3[0x30];
    pCVar10 = auVar11._0_8_;
    if (CVar2 == (ConstantPool)0x0) {
      if (*pCVar1 == (ConstantPool)0x0) {
        bVar4 = *(long *)(pCVar3 + 0x28) == 0;
      }
      else {
        bVar4 = *(int *)(pCVar3 + 0x28) == 0;
      }
      bVar4 = !bVar4;
LAB_00ee82ac:
      bVar4 = (bool)(((byte)CVar2 & 0xfe) == 2 | bVar4);
    }
    else {
      if ((char)CVar2 < '\x04') {
        bVar4 = false;
        goto LAB_00ee82ac;
      }
      bVar4 = true;
    }
    while (pCVar10 != pCVar6) {
      SetLoadOffsetToConstPoolEntry
                ((int)this,(Instruction *)(ulong)*(uint *)(pCVar10 + 0x38),
                 *(ConstantPoolKey **)(*(long *)this + 0x20));
      if (!bVar4) {
        if (pCVar10[0x20] == (ConstantPool)0x0) {
          local_48 = *(undefined8 *)(pCVar10 + 0x28);
          uVar7 = 8;
        }
        else {
          uVar7 = 4;
          local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(pCVar10 + 0x28));
        }
        Assembler::EmitData(*(Assembler **)this,&local_48,uVar7);
      }
      pCVar8 = *(ConstantPool **)(pCVar10 + 8);
      if (*(ConstantPool **)(pCVar10 + 8) == (ConstantPool *)0x0) {
        pCVar8 = pCVar10 + 0x10;
        bVar5 = *(ConstantPool **)*(ConstantPool **)pCVar8 != pCVar10;
        pCVar10 = *(ConstantPool **)pCVar8;
        if (bVar5) {
          do {
            lVar9 = *(long *)pCVar8;
            pCVar8 = (ConstantPool *)(lVar9 + 0x10);
            pCVar10 = *(ConstantPool **)pCVar8;
          } while (*(long *)pCVar10 != lVar9);
        }
      }
      else {
        do {
          pCVar10 = pCVar8;
          pCVar8 = *(ConstantPool **)pCVar10;
        } while (*(ConstantPool **)pCVar10 != (ConstantPool *)0x0);
      }
    }
    if (bVar4) {
      if (*pCVar1 == (ConstantPool)0x0) {
        local_48 = *(undefined8 *)(pCVar3 + 0x28);
        uVar7 = 8;
      }
      else {
        uVar7 = 4;
        local_48._4_4_ = (undefined4)((ulong)local_48 >> 0x20);
        local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(pCVar3 + 0x28));
      }
      Assembler::EmitData(*(Assembler **)this,&local_48,uVar7);
    }
  } while( true );
}

