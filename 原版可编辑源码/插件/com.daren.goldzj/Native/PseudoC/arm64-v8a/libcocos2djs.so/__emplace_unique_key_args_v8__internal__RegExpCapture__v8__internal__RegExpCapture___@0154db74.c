
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<v8::internal::RegExpCapture*,
   std::__ndk1::__tree_node<v8::internal::RegExpCapture*, void*>*, long>, bool>
   std::__ndk1::__tree<v8::internal::RegExpCapture*,
   v8::internal::RegExpParser::RegExpCaptureNameLess,
   v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>
   >::__emplace_unique_key_args<v8::internal::RegExpCapture*,
   v8::internal::RegExpCapture*&>(v8::internal::RegExpCapture* const&,
   v8::internal::RegExpCapture*&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
::__emplace_unique_key_args<v8::internal::RegExpCapture*,v8::internal::RegExpCapture*&>
          (__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
           *this,RegExpCapture **param_1,RegExpCapture **param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  Zone *this_00;
  undefined8 uVar8;
  __tree_node_base *p_Var9;
  RegExpCapture *pRVar10;
  __tree_node_base *p_Var11;
  __tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
  *p_Var12;
  __tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
  *p_Var13;
  __tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
  *p_Var14;
  undefined1 auVar15 [16];
  
  p_Var12 = this + 8;
  p_Var13 = *(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
              **)p_Var12;
  p_Var14 = p_Var12;
  if (p_Var13 ==
      (__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
       *)0x0) {
LAB_0154dc64:
    p_Var11 = *(__tree_node_base **)p_Var12;
joined_r0x0154dc7c:
    if (p_Var11 == (__tree_node_base *)0x0) {
      this_00 = *(Zone **)(this + 0x10);
      p_Var11 = *(__tree_node_base **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var11) < 0x28) {
        p_Var11 = (__tree_node_base *)v8::internal::Zone::NewExpand(this_00,0x28);
      }
      else {
        *(__tree_node_base **)(this_00 + 0x10) = p_Var11 + 0x28;
      }
      pRVar10 = *param_2;
      *(undefined8 *)p_Var11 = 0;
      *(undefined8 *)(p_Var11 + 8) = 0;
      *(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
        **)(p_Var11 + 0x10) = p_Var14;
      *(RegExpCapture **)(p_Var11 + 0x20) = pRVar10;
      *(__tree_node_base **)p_Var12 = p_Var11;
      p_Var9 = p_Var11;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        p_Var9 = *(__tree_node_base **)p_Var12;
      }
      __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),p_Var9);
      uVar8 = 1;
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
    }
    else {
      uVar8 = 0;
    }
    auVar15._8_8_ = uVar8;
    auVar15._0_8_ = p_Var11;
    return auVar15;
  }
  puVar3 = (ushort *)**(undefined8 **)(*param_1 + 0x18);
  puVar5 = (ushort *)(*(undefined8 **)(*param_1 + 0x18))[1];
  p_Var12 = this + 8;
LAB_0154dbac:
  p_Var14 = p_Var13;
  puVar6 = (ushort *)(*(undefined8 **)(*(long *)(p_Var14 + 0x20) + 0x18))[1];
  puVar4 = (ushort *)**(undefined8 **)(*(long *)(p_Var14 + 0x20) + 0x18);
  puVar2 = puVar3;
  for (puVar1 = puVar4; puVar7 = puVar3, puVar1 != puVar6; puVar1 = puVar1 + 1) {
    if (puVar5 == puVar2) {
LAB_0154dc4c:
      p_Var12 = p_Var14;
      p_Var13 = *(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
                  **)p_Var14;
      if (*(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
            **)p_Var14 !=
          (__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
           *)0x0) goto LAB_0154dbac;
      p_Var11 = *(__tree_node_base **)p_Var14;
      goto joined_r0x0154dc7c;
    }
    if (*puVar2 < *puVar1) goto LAB_0154dc4c;
    if (*puVar1 < *puVar2) break;
    puVar2 = puVar2 + 1;
  }
  do {
    if (puVar7 == puVar5) goto LAB_0154dc64;
    if (puVar6 == puVar4) break;
    if (*puVar4 < *puVar7) break;
    if (*puVar7 < *puVar4) goto LAB_0154dc64;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  } while( true );
  p_Var12 = p_Var14 + 8;
  p_Var13 = *(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
              **)p_Var12;
  if (*(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
        **)p_Var12 ==
      (__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
       *)0x0) goto LAB_0154dc64;
  goto LAB_0154dbac;
}

