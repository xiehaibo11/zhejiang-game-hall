
/* WARNING: Removing unreachable block (ram,0x011d606c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* v8::internal::Runtime::FunctionForName(unsigned char const*, int) */

void v8::internal::Runtime::FunctionForName(uchar *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  undefined ***pppuVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  undefined **local_b0;
  code *pcStack_a8;
  long *local_90;
  uchar *local_80;
  int local_78;
  uchar **local_60;
  long local_48;
  
  local_90 = (long *)&local_b0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_b0 = &PTR_FUN_01caa5f0;
  pcStack_a8 = FUN_011d61ec;
  pppuVar3 = &local_b0;
  if (DAT_01d3fc00 != '\x02') {
    if (&stack0x00000000 == (undefined1 *)0xb0) {
      local_60 = (uchar **)0x0;
      local_90 = (long *)0x0;
    }
    else {
      local_60 = &local_80;
      std::__ndk1::__function::__func<void(*)(),std::__ndk1::allocator<void(*)()>,void()>::__clone
                ((__func<void(*)(),std::__ndk1::allocator<void(*)()>,void()> *)&local_b0,
                 (__base *)&local_80);
    }
    base::CallOnceImpl(&DAT_01d3fc00,&local_80);
    if (&local_80 == local_60) {
      pcVar9 = *(code **)(*local_60 + 0x20);
    }
    else {
      pppuVar3 = (undefined ***)local_90;
      if (local_60 == (uchar **)0x0) goto LAB_011d60dc;
      pcVar9 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar9)();
    pppuVar3 = (undefined ***)local_90;
  }
LAB_011d60dc:
  local_90 = (long *)pppuVar3;
  if (&local_b0 == (undefined ***)local_90) {
    pcVar9 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_011d6104;
    pcVar9 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar9)();
LAB_011d6104:
  plVar2 = DAT_01d3fc08;
  local_80 = param_1;
  local_78 = param_2;
  uVar4 = StringHasher::HashSequentialString<unsigned_char>(param_1,param_2,0);
  iVar8 = (int)plVar2[1];
  lVar10 = *plVar2;
  uVar11 = (ulong)(iVar8 - 1U & uVar4);
  lVar7 = *(long *)(lVar10 + uVar11 * 0x18);
  do {
    if (lVar7 == 0) {
      uVar6 = 0;
LAB_011d61c0:
      if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
      return;
    }
    if (*(uint *)(lVar10 + uVar11 * 0x18 + 0x10) == uVar4) {
      uVar5 = (*(code *)plVar2[2])(&local_80);
      if ((uVar5 & 1) != 0) {
        lVar10 = *plVar2;
        uVar6 = 0;
        if ((lVar10 != 0) && (*(long *)(lVar10 + uVar11 * 0x18) != 0)) {
          uVar6 = *(undefined8 *)(lVar10 + uVar11 * 0x18 + 8);
        }
        goto LAB_011d61c0;
      }
      iVar8 = (int)plVar2[1];
      lVar10 = *plVar2;
    }
    uVar11 = (ulong)((int)uVar11 + 1U & iVar8 - 1U);
    lVar7 = *(long *)(lVar10 + uVar11 * 0x18);
  } while( true );
}

