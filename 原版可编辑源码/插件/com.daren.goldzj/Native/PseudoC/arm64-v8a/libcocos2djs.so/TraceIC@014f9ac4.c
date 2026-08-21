
/* v8::internal::IC::TraceIC(char const*, v8::internal::Handle<v8::internal::Object>,
   v8::internal::InlineCacheState, v8::internal::InlineCacheState) */

void __thiscall
v8::internal::IC::TraceIC(IC *this,char *param_1,undefined8 *param_3,uint param_4,uint param_5)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int extraout_w1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  code *pcVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 uVar16;
  long *plVar17;
  char *pcVar18;
  ulong uVar19;
  Logger *this_00;
  long lVar20;
  ulong local_648;
  StackFrameIterator aSStack_640 [1416];
  long *local_b8;
  undefined **local_a0;
  code *pcStack_98;
  undefined *local_90;
  undefined ***local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (TracingFlags::ic_stats == 0) goto LAB_014f9b00;
  if (*(long **)(this + 0x20) == (long *)0x0) {
    lVar14 = 0;
  }
  else {
    lVar14 = **(long **)(this + 0x20);
  }
  if (*(int *)(this + 0x18) == 0) {
    pcVar18 = "";
  }
  else {
    iVar6 = *(int *)(this + 0x1c);
    if ((iVar6 - 0xdU < 2) || (iVar6 == 3)) {
      uVar7 = FeedbackNexus::GetKeyedAccessStoreMode((FeedbackNexus *)(this + 0x50));
      if (3 < uVar7) goto LAB_014fa1a4;
      pcVar18 = (&PTR_DAT_01cc6fc8)[(int)uVar7];
    }
    else {
      pcVar18 = "";
      if (iVar6 == 8) {
        iVar6 = FeedbackNexus::GetKeyedAccessLoadMode((FeedbackNexus *)(this + 0x50));
        pcVar18 = ".IGNORE_OOB";
        if (iVar6 != 1) {
          pcVar18 = "";
        }
      }
    }
  }
  uVar7 = 0x461U >> (ulong)(*(int *)(this + 0x1c) - 3U & 0x1f) &
          (uint)(*(int *)(this + 0x1c) - 3U < 0xc);
  if ((TracingFlags::ic_stats >> 1 & 1) == 0) {
    this_00 = *(Logger **)(*(long *)(this + 8) + 0x9558);
    uVar8 = Logger::is_logging(this_00);
    if ((uVar8 & 1) != 0) {
      if ((param_4 < 7) && (param_5 < 7)) {
        Logger::ICEvent(this_00,param_1,uVar7,lVar14,*param_3,
                        0x474e505e313058 >> (((ulong)param_4 & 7) << 3),
                        0x474e505e313058 >> (((ulong)param_5 & 7) << 3),pcVar18,
                        *(undefined8 *)(this + 0x48));
        goto LAB_014f9b00;
      }
      goto LAB_014fa1a4;
    }
    goto LAB_014f9b00;
  }
  StackFrameIterator::StackFrameIterator(aSStack_640,*(Isolate **)(this + 8));
  plVar17 = local_b8;
  if (local_b8 != (long *)0x0) {
    JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_640);
    plVar17 = local_b8;
  }
  local_648 = (**(code **)(*plVar17 + 0x98))(plVar17);
  if (ICStats::instance_ != '\x02') {
    local_90 = &DAT_01d3f538;
    local_a0 = &PTR_FUN_01c984d0;
    pcStack_98 = base::
                 LazyInstanceImpl<v8::internal::ICStats,v8::base::StaticallyAllocatedInstanceTrait<v8::internal::ICStats>,v8::base::DefaultConstructTrait<v8::internal::ICStats>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::ICStats>>
                 ::InitInstance;
    local_80 = &local_a0;
    base::CallOnceImpl(&ICStats::instance_,&local_a0);
    if (&local_a0 == local_80) {
      (*(code *)(*local_80)[4])();
    }
    else if (local_80 != (undefined ***)0x0) {
      (*(code *)(*local_80)[5])();
    }
  }
  ICStats::Begin((ICStats *)&DAT_01d3f538);
  if (ICStats::instance_ != '\x02') {
    local_a0 = &PTR_FUN_01c984d0;
    pcStack_98 = base::
                 LazyInstanceImpl<v8::internal::ICStats,v8::base::StaticallyAllocatedInstanceTrait<v8::internal::ICStats>,v8::base::DefaultConstructTrait<v8::internal::ICStats>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::ICStats>>
                 ::InitInstance;
    local_90 = &DAT_01d3f538;
    local_80 = &local_a0;
    base::CallOnceImpl(&ICStats::instance_,&local_a0);
    if (&local_a0 == local_80) {
      (*(code *)(*local_80)[4])();
    }
    else if (local_80 != (undefined ***)0x0) {
      (*(code *)(*local_80)[5])();
    }
  }
  lVar3 = DAT_01d3f540;
  lVar20 = (long)DAT_01d3f5a8;
  pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (DAT_01d3f540 + lVar20 * 0x80);
  pcVar4 = "Keyed";
  if (uVar7 == 0) {
    pcVar4 = "";
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(pbVar1,pcVar4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(pbVar1,param_1);
  uVar8 = local_648 & 0xffffffff00000000;
  if (*(int *)((uVar8 | *(uint *)(local_648 + 0x17)) + 0x27) == 0x42) {
LAB_014f9e1c:
    uVar16 = *(undefined8 *)plVar17[5];
    local_a0 = (undefined **)(local_648 & 0xffffffff00000000 | (ulong)*(uint *)(local_648 + 0x17));
    if (*(int *)((long)local_a0 + 0x17) < 0) {
      iVar6 = Code::OffHeapInstructionStart((Code *)&local_a0);
    }
    else {
      iVar6 = *(uint *)(local_648 + 0x17) + 0x3f;
    }
    iVar6 = (int)uVar16 - iVar6;
  }
  else {
    uVar7 = *(uint *)((uVar8 | *(uint *)(local_648 + 0xb)) + 3);
    if ((uVar7 == 0x84) ||
       (((uVar7 & 1) != 0 &&
        (*(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar7) - 1)) - 0x95 < 2))))
    goto LAB_014f9e1c;
    uVar8 = local_648 & 0xffffffff00000000;
    uVar7 = *(int *)((uVar8 | *(uint *)(local_648 + 0x17)) + 0x27) - 0x38;
    if (((8 < uVar7) || ((1 << (ulong)(uVar7 & 0x1f) & 0x181U) == 0)) &&
       (((*(byte *)((uVar8 | *(uint *)(local_648 + 0x17)) + 0x17) & 0x3e) != 0 ||
        ((*(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(local_648 + 0x17)) + 0xf)) + 7) & 1) == 0)
        ))) goto LAB_014f9e1c;
    iVar6 = InterpretedFrame::GetBytecodeOffset(plVar17[4]);
  }
  uVar8 = local_648;
  uVar16 = JSFunction::abstract_code((JSFunction *)&local_648);
  JavaScriptFrame::CollectFunctionAndOffsetForICStats(uVar8,uVar16,iVar6);
  lVar11 = lVar3 + lVar20 * 0x80;
  pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar11 + 0x40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve(pbVar1,0x11);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(pbVar1,"(");
  if (6 < param_4) goto LAB_014fa1a4;
  bVar9 = *pbVar1;
  if (((byte)bVar9 & 1) == 0) {
    uVar19 = (ulong)((byte)bVar9 >> 1);
    uVar8 = 0x16;
    if (uVar19 == 0x16) goto LAB_014f9ef0;
  }
  else {
    uVar19 = *(ulong *)(lVar3 + lVar20 * 0x80 + 0x48);
    uVar8 = (*(ulong *)pbVar1 & 0xfffffffffffffffe) - 1;
    if (uVar19 == uVar8) {
LAB_014f9ef0:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by(pbVar1,uVar8,1,uVar8,uVar8,0,0);
      bVar9 = *pbVar1;
    }
  }
  if (((byte)bVar9 & 1) == 0) {
    lVar10 = lVar11 + 0x41;
    *pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
              ((char)uVar19 * '\x02' + '\x02');
  }
  else {
    lVar2 = lVar3 + lVar20 * 0x80;
    lVar10 = *(long *)(lVar2 + 0x50);
    *(ulong *)(lVar2 + 0x48) = uVar19 + 1;
  }
  *(undefined1 *)(lVar10 + uVar19) = (char)(0x474e505e313058 >> (((ulong)param_4 & 7) << 3));
  ((undefined1 *)(lVar10 + uVar19))[1] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(pbVar1,"->");
  if (6 < param_5) {
LAB_014fa1a4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  bVar9 = *pbVar1;
  if (((byte)bVar9 & 1) == 0) {
    uVar19 = (ulong)((byte)bVar9 >> 1);
    uVar8 = 0x16;
    if (uVar19 == 0x16) goto LAB_014f9fa4;
  }
  else {
    uVar19 = *(ulong *)(lVar3 + lVar20 * 0x80 + 0x48);
    uVar8 = (*(ulong *)pbVar1 & 0xfffffffffffffffe) - 1;
    if (uVar19 == uVar8) {
LAB_014f9fa4:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by(pbVar1,uVar8,1,uVar8,uVar8,0,0);
      bVar9 = *pbVar1;
    }
  }
  if (((byte)bVar9 & 1) == 0) {
    lVar11 = lVar11 + 0x41;
    *pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
              ((char)uVar19 * '\x02' + '\x02');
  }
  else {
    lVar10 = lVar3 + lVar20 * 0x80;
    lVar11 = *(long *)(lVar10 + 0x50);
    *(ulong *)(lVar10 + 0x48) = uVar19 + 1;
  }
  *(undefined1 *)(lVar11 + uVar19) = (char)(0x474e505e313058 >> (((ulong)param_5 & 7) << 3));
  ((undefined1 *)(lVar11 + uVar19))[1] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(pbVar1,pcVar18);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(pbVar1,")");
  lVar11 = lVar3 + lVar20 * 0x80;
  *(long *)(lVar11 + 0x58) = lVar14;
  if ((int)lVar14 != 0) {
    *(byte *)(lVar11 + 0x60) = (byte)(*(uint *)(lVar14 + 0xb) >> 0x15) & 1;
    *(uint *)(lVar11 + 100) = *(uint *)(lVar14 + 0xb) >> 10 & 0x3ff;
    std::__ndk1::to_string((__ndk1 *)(ulong)*(ushort *)(lVar14 + 7),extraout_w1);
    pbVar15 = (byte *)(lVar11 + 0x68);
    if ((*pbVar15 & 1) == 0) {
      pbVar15[0] = 0;
      pbVar15[1] = 0;
    }
    else {
      lVar3 = lVar3 + lVar20 * 0x80;
      puVar12 = (undefined8 *)(lVar3 + 0x78);
      *(undefined1 *)*puVar12 = 0;
      *(undefined8 *)(lVar3 + 0x70) = 0;
      if ((*pbVar15 & 1) != 0) {
        operator_delete((void *)*puVar12);
        pbVar15[0] = 0;
        pbVar15[1] = 0;
        pbVar15[2] = 0;
        pbVar15[3] = 0;
        pbVar15[4] = 0;
        pbVar15[5] = 0;
        pbVar15[6] = 0;
        pbVar15[7] = 0;
      }
    }
    *(undefined **)(lVar11 + 0x78) = local_90;
    *(code **)(lVar11 + 0x70) = pcStack_98;
    *(undefined ***)pbVar15 = local_a0;
  }
  if (ICStats::instance_ != '\x02') {
    local_90 = &DAT_01d3f538;
    local_a0 = &PTR_FUN_01c984d0;
    pcStack_98 = base::
                 LazyInstanceImpl<v8::internal::ICStats,v8::base::StaticallyAllocatedInstanceTrait<v8::internal::ICStats>,v8::base::DefaultConstructTrait<v8::internal::ICStats>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::ICStats>>
                 ::InitInstance;
    local_80 = &local_a0;
    base::CallOnceImpl(&ICStats::instance_,&local_a0);
    if (&local_a0 == local_80) {
      pcVar13 = (code *)(*local_80)[4];
    }
    else {
      if (local_80 == (undefined ***)0x0) goto LAB_014fa160;
      pcVar13 = (code *)(*local_80)[5];
    }
    (*pcVar13)();
  }
LAB_014fa160:
  ICStats::End((ICStats *)&DAT_01d3f538);
LAB_014f9b00:
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

