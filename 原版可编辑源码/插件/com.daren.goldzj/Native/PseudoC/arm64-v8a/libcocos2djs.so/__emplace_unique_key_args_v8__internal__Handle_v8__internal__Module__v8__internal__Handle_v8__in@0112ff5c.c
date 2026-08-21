
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<v8::internal::Handle<v8::internal::Module>,
   void*>*>, bool> std::__ndk1::__hash_table<v8::internal::Handle<v8::internal::Module>,
   v8::internal::ModuleHandleHash, v8::internal::ModuleHandleEqual,
   v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Module> >
   >::__emplace_unique_key_args<v8::internal::Handle<v8::internal::Module>,
   v8::internal::Handle<v8::internal::Module> >(v8::internal::Handle<v8::internal::Module> const&,
   v8::internal::Handle<v8::internal::Module>&&) */

long * __thiscall
std::__ndk1::
__hash_table<v8::internal::Handle<v8::internal::Module>,v8::internal::ModuleHandleHash,v8::internal::ModuleHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Module>>>
::
__emplace_unique_key_args<v8::internal::Handle<v8::internal::Module>,v8::internal::Handle<v8::internal::Module>>
          (__hash_table<v8::internal::Handle<v8::internal::Module>,v8::internal::ModuleHandleHash,v8::internal::ModuleHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Module>>>
           *this,Handle *param_1,Handle *param_2)

{
  ulong uVar1;
  Zone *this_00;
  long lVar2;
  long *plVar3;
  __hash_table<v8::internal::Handle<v8::internal::Module>,v8::internal::ModuleHandleHash,v8::internal::ModuleHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Module>>>
  *p_Var4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar9 = *(ulong *)(this + 8);
  uVar5 = (long)((ulong)*(uint *)(**(long **)param_1 + 7) << 0x20) >> 0x21;
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
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = uVar9 - 1 & uVar5;
    }
    else {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar5 / uVar9;
      }
      unaff_x24 = uVar5;
      if (uVar9 <= uVar5) {
        unaff_x24 = uVar5 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 != uVar5) {
          if (uVar6 < 2) {
            uVar7 = uVar7 & uVar9 - 1;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            if (uVar7 - uVar1 * uVar9 == unaff_x24) goto LAB_0112fff0;
            break;
          }
          if (uVar7 != unaff_x24) break;
        }
LAB_0112fff0:
        if (*(int *)plVar8[2] == (int)**(long **)param_1) {
          return plVar8;
        }
      }
    }
  }
  this_00 = *(Zone **)(this + 0x20);
  plVar8 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar8) < 0x18) {
    plVar8 = (long *)v8::internal::Zone::NewExpand(this_00,0x18);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar8 + 3;
  }
  lVar2 = *(long *)param_2;
  *plVar8 = 0;
  plVar8[1] = uVar5;
  plVar8[2] = lVar2;
  if ((uVar9 == 0) || (*(float *)(this + 0x30) * (float)uVar9 < (float)(*(long *)(this + 0x28) + 1))
     ) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar6 = (ulong)((float)(*(long *)(this + 0x28) + 1) / *(float *)(this + 0x30));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    rehash(this,uVar6);
    uVar9 = *(ulong *)(this + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar5;
    }
    else {
      unaff_x24 = uVar5;
      if (uVar9 <= uVar5) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar5 / uVar9;
        }
        unaff_x24 = uVar5 - uVar6 * uVar9;
      }
    }
  }
  plVar3 = *(long **)(*(long *)this + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    p_Var4 = this + 0x18;
    *plVar8 = *(long *)p_Var4;
    *(long **)p_Var4 = plVar8;
    *(__hash_table<v8::internal::Handle<v8::internal::Module>,v8::internal::ModuleHandleHash,v8::internal::ModuleHandleEqual,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Module>>>
      **)(*(long *)this + unaff_x24 * 8) = p_Var4;
    if (*plVar8 != 0) {
      uVar5 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar5 = uVar5 & uVar9 - 1;
      }
      else if (uVar9 <= uVar5) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar5 / uVar9;
        }
        uVar5 = uVar5 - uVar6 * uVar9;
      }
      *(long **)(*(long *)this + uVar5 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar3;
    *plVar3 = (long)plVar8;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return plVar8;
}

