
/* v8::internal::JSArray::ArrayJoinConcatToSequentialString(v8::internal::Isolate*, unsigned long,
   long, unsigned long, unsigned long) */

ulong v8::internal::JSArray::ArrayJoinConcatToSequentialString
                (Isolate *param_1,ulong param_2,long param_3,ulong param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  void *__s;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 local_80;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_78 [16];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
            (aPStack_78,param_1);
  __s = (void *)(param_5 + 0xb);
  iVar7 = (int)param_3;
  if ((*(ushort *)((param_5 & 0xffffffff00000000 | (ulong)*(uint *)(param_5 - 1)) + 7) & 0xf) == 8)
  {
    if (iVar7 < 1) {
LAB_011123b8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","length > 0");
    }
    if (*(int *)(param_2 + 3) >> 1 < iVar7) {
LAB_011123cc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","length <= fixed_array.length()");
    }
    iVar7 = *(int *)(param_4 + 7);
    if ((iVar7 == 1) &&
       ((*(ushort *)((param_4 & 0xffffffff00000000 | (ulong)*(uint *)(param_4 - 1)) + 7) & 0xf) == 8
       )) {
      if ((*(ushort *)((param_4 & 0xffffffff00000000 | (ulong)*(uint *)(param_4 - 1)) + 7) & 0xf) !=
          8) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","StringShape(separator).IsSequentialOneByte()");
      }
      local_80 = CONCAT44(1,(uint)*(byte *)(param_4 + 0xb));
    }
    else {
      local_80 = 0;
    }
    uVar8 = 0;
    uVar6 = 0;
    do {
      uVar5 = *(uint *)(param_2 + 7 + (long)((int)uVar8 << 2));
      if ((uVar5 & 1) == 0) {
        if ((int)uVar5 < 0) {
LAB_011123a4:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","element.ToUint32(&num_separators)");
        }
        uVar6 = (ulong)(uVar5 >> 1);
        if (0 < iVar7) goto LAB_011122f8;
LAB_01112344:
        if ((uVar5 & 1) == 0) goto LAB_01112348;
LAB_011122b8:
        uVar6 = param_2 & 0xffffffff00000000 | (ulong)uVar5;
        iVar2 = *(int *)(uVar6 + 7);
        String::WriteToFlat<unsigned_char>(uVar6,__s,0,iVar2);
        __s = (void *)((long)__s + (long)iVar2);
        uVar6 = 1;
      }
      else {
        if (iVar7 < 1) goto LAB_01112344;
LAB_011122f8:
        if ((int)uVar6 == 0) goto LAB_01112344;
        if ((local_80 & 0x100000000) == 0) {
          do {
            String::WriteToFlat<unsigned_char>(param_4,__s,0,iVar7);
            uVar3 = (int)uVar6 - 1;
            uVar6 = (ulong)uVar3;
            __s = (void *)((long)__s + (long)iVar7);
          } while (uVar3 != 0);
          goto LAB_01112344;
        }
        memset(__s,(int)local_80,uVar6);
        __s = (void *)((long)__s + uVar6);
        if ((uVar5 & 1) != 0) goto LAB_011122b8;
LAB_01112348:
        uVar6 = 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != (param_3 & 0xffffffffU));
  }
  else {
    if (iVar7 < 1) goto LAB_011123b8;
    if (*(int *)(param_2 + 3) >> 1 < iVar7) goto LAB_011123cc;
    iVar7 = *(int *)(param_4 + 7);
    uVar8 = 0;
    uVar5 = 0;
    do {
      uVar3 = *(uint *)(param_2 + 7 + (long)((int)uVar8 << 2));
      if ((uVar3 & 1) == 0) {
        if ((int)uVar3 < 0) goto LAB_011123a4;
        uVar5 = uVar3 >> 1;
      }
      if (0 < iVar7) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          String::WriteToFlat<unsigned_short>(param_4,__s,0,iVar7);
          __s = (void *)((long)__s + (long)iVar7 * 2);
        }
      }
      bVar1 = (uVar3 & 1) != 0;
      if (bVar1) {
        uVar6 = param_2 & 0xffffffff00000000 | (ulong)uVar3;
        iVar2 = *(int *)(uVar6 + 7);
        String::WriteToFlat<unsigned_short>(uVar6,__s,0,iVar2);
        __s = (void *)((long)__s + (long)iVar2 * 2);
      }
      uVar5 = (uint)bVar1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != (param_3 & 0xffffffffU));
  }
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
            (aPStack_78);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

