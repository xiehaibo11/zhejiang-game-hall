
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> >, v8::internal::CodeEntry::Hasher,
   v8::internal::CodeEntry::Equals,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> > >
   >::__emplace_unique_key_args<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> >,
   std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> >
   >(std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> > const&,
   std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> >&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
::
__emplace_unique_key_args<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>
          (__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
           *this,unique_ptr *param_1,unique_ptr *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  __hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
  *p_Var6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar2 = v8::internal::CodeEntry::GetHash(*(CodeEntry **)param_1);
  uVar9 = *(ulong *)(this + 8);
  uVar2 = uVar2 & 0xffffffff;
  if (uVar9 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x25 = (int)uVar9 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar9 <= uVar2) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar2 / uVar9;
        }
        unaff_x25 = uVar2 - uVar3 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar3 = plVar8[1];
        if (uVar3 != uVar2) {
          if (uVar7 < 2) {
            uVar3 = uVar3 & uVar9 - 1;
          }
          else if (uVar9 <= uVar3) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar3 / uVar9;
            }
            if (uVar3 - uVar1 * uVar9 == unaff_x25) goto LAB_011b4ce0;
            break;
          }
          if (uVar3 != unaff_x25) break;
        }
LAB_011b4ce0:
        uVar3 = v8::internal::CodeEntry::IsSameFunctionAs
                          ((CodeEntry *)plVar8[2],*(CodeEntry **)param_1);
        if ((uVar3 & 1) != 0) {
          return plVar8;
        }
      }
    }
  }
  plVar8 = operator_new(0x18);
  lVar4 = *(long *)param_2;
  *(undefined8 *)param_2 = 0;
  *plVar8 = 0;
  plVar8[1] = uVar2;
  plVar8[2] = lVar4;
  if ((uVar9 == 0) || (*(float *)(this + 0x20) * (float)uVar9 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar7 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    rehash(this,uVar7);
    uVar9 = *(ulong *)(this + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = (int)uVar9 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar9 <= uVar2) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar2 / uVar9;
        }
        unaff_x25 = uVar2 - uVar7 * uVar9;
      }
    }
  }
  lVar4 = *(long *)this;
  plVar5 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    p_Var6 = this + 0x10;
    *plVar8 = *(long *)p_Var6;
    *(long **)p_Var6 = plVar8;
    *(__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
      **)(lVar4 + unaff_x25 * 8) = p_Var6;
    if (*plVar8 == 0) goto LAB_011b4e3c;
    uVar2 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar2 = uVar2 & uVar9 - 1;
    }
    else if (uVar9 <= uVar2) {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar2 / uVar9;
      }
      uVar2 = uVar2 - uVar7 * uVar9;
    }
    plVar5 = (long *)(*(long *)this + uVar2 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_011b4e3c:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar8;
}

