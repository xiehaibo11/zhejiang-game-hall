
/* v8::internal::RegExpParser::CreateNamedCaptureAtIndex(v8::internal::ZoneVector<unsigned short>
   const*, int) */

undefined8 __thiscall
v8::internal::RegExpParser::CreateNamedCaptureAtIndex
          (RegExpParser *this,ZoneVector *param_1,int param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  __tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
  *p_Var3;
  __tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
  *p_Var4;
  int iVar5;
  __tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
  *this_00;
  long lVar6;
  Zone *this_01;
  undefined8 uVar7;
  __tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
  *p_Var8;
  __tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
  *p_Var9;
  ushort *puVar10;
  ushort *puVar11;
  RegExpCapture *local_38;
  char *local_30;
  long lStack_28;
  
  local_38 = (RegExpCapture *)GetCapture(this,param_2);
  *(ZoneVector **)(local_38 + 0x18) = param_1;
  this_00 = *(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
              **)(this + 0x20);
  if (this_00 ==
      (__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
       *)0x0) {
    this_01 = *(Zone **)(this + 8);
    this_00 = *(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
                **)(this_01 + 0x10);
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_00) < 0x20) {
      this_00 = (__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
                 *)Zone::NewExpand(this_01,0x20);
    }
    else {
      *(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
        **)(this_01 + 0x10) = this_00 + 0x20;
    }
    uVar7 = *(undefined8 *)(this + 8);
    *(undefined8 *)(this_00 + 8) = 0;
    *(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
      **)this_00 = this_00 + 8;
    *(undefined8 *)(this_00 + 0x10) = uVar7;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
      **)(this + 0x20) = this_00;
  }
  else {
    p_Var8 = this_00 + 8;
    p_Var9 = *(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
               **)p_Var8;
    if (p_Var9 != (__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
                   *)0x0) {
      puVar1 = *(ushort **)param_1;
      puVar2 = *(ushort **)(param_1 + 8);
      p_Var3 = p_Var8;
      do {
        if (puVar1 != puVar2) {
          puVar10 = (ushort *)**(undefined8 **)(*(long *)(p_Var9 + 0x20) + 0x18);
          puVar11 = puVar1;
          do {
            if ((ushort *)(*(undefined8 **)(*(long *)(p_Var9 + 0x20) + 0x18))[1] == puVar10) {
LAB_01549f6c:
              p_Var4 = *(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
                         **)(p_Var9 + 8);
              goto joined_r0x01549f74;
            }
            if (*puVar10 < *puVar11) goto LAB_01549f6c;
            if (*puVar11 < *puVar10) break;
            puVar11 = puVar11 + 1;
            puVar10 = puVar10 + 1;
          } while (puVar2 != puVar11);
        }
        p_Var4 = *(__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
                   **)p_Var9;
        p_Var3 = p_Var9;
joined_r0x01549f74:
        p_Var9 = p_Var4;
      } while (p_Var9 != (__tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
                          *)0x0);
      if (p_Var3 != p_Var8) {
        for (puVar11 = (ushort *)**(undefined8 **)(*(long *)(p_Var3 + 0x20) + 0x18);
            puVar11 != (ushort *)(*(undefined8 **)(*(long *)(p_Var3 + 0x20) + 0x18))[1];
            puVar11 = puVar11 + 1) {
          if (puVar2 == puVar1) goto LAB_0154a01c;
          if (*puVar1 < *puVar11) goto LAB_0154a01c;
          if (*puVar11 < *puVar1) break;
          puVar1 = puVar1 + 1;
        }
        iVar5 = __strlen_chk("Duplicate capture group name",0x1d);
        if (this[0x51] != (RegExpParser)0x0) {
          return 0;
        }
        lStack_28 = (long)iVar5;
        this[0x51] = (RegExpParser)0x1;
        local_30 = "Duplicate capture group name";
        lVar6 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_30,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        **(long **)(this + 0x10) = lVar6;
        *(undefined4 *)(this + 0x38) = 0x200000;
        *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0x30) + 0x24);
        return 0;
      }
    }
  }
LAB_0154a01c:
  std::__ndk1::
  __tree<v8::internal::RegExpCapture*,v8::internal::RegExpParser::RegExpCaptureNameLess,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
  ::__emplace_unique_key_args<v8::internal::RegExpCapture*,v8::internal::RegExpCapture*&>
            (this_00,&local_38,&local_38);
  return 1;
}

