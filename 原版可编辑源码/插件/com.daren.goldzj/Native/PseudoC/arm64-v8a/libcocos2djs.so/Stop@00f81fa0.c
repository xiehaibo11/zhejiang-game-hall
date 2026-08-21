
/* v8::internal::GCTracer::Stop(v8::internal::GarbageCollector) */

void __thiscall v8::internal::GCTracer::Stop(GCTracer *this,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  GCTracer *pGVar9;
  GCTracer *pGVar10;
  long lVar11;
  GCTracer *pGVar12;
  GCTracer *pGVar13;
  undefined8 uVar14;
  double dVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  byte local_1d8 [16];
  void *local_1c8;
  void *local_1c0;
  undefined1 local_1b4 [4];
  char *local_1b0;
  long *local_1a8;
  long *local_1a0;
  undefined **local_198;
  undefined8 local_190;
  undefined **local_188;
  undefined **local_180;
  locale alStack_178 [8];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined **local_118 [17];
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  iVar3 = *(int *)(this + 0xb18);
  *(int *)(this + 0xb18) = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    if (FLAG_trace_gc_verbose != '\0') {
      if (param_2 < 3) {
        pcVar7 = *(char **)(&DAT_01ca75b0 + (long)(int)param_2 * 8);
      }
      else {
        pcVar7 = "Unknown collector";
      }
      if (*(uint *)(this + 8) < 5) {
        pcVar8 = (&PTR_s_Scavenge_01ca75c8)[(int)*(uint *)(this + 8)];
      }
      else {
        pcVar8 = "Unknown Event Type";
      }
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)this + -0x8850),"[Finished reentrant %s during %s.]\n",pcVar7,
                 pcVar8);
    }
    goto LAB_00f827b8;
  }
  uVar14 = Heap::MonotonicallyIncreasingTimeInMs();
  *(undefined8 *)(this + 0x20) = uVar14;
  uVar14 = Heap::SizeOfObjects(*(Heap **)this);
  *(undefined8 *)(this + 0x38) = uVar14;
  local_198 = *(undefined ***)this;
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(*(long *)(*(long *)this + 0x820) + 0x50);
  local_190 = CONCAT44(local_190._4_4_,2);
  plVar4 = (long *)PagedSpaceIterator::Next((PagedSpaceIterator *)&local_198);
  if (plVar4 == (long *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    do {
      lVar5 = (**(code **)(*plVar4 + 0x90))(plVar4);
      lVar6 = (**(code **)(*plVar4 + 0x60))(plVar4);
      lVar11 = lVar5 + lVar11 + lVar6;
      plVar4 = (long *)PagedSpaceIterator::Next((PagedSpaceIterator *)&local_198);
    } while (plVar4 != (long *)0x0);
  }
  *(long *)(this + 0x58) = lVar11;
  *(long *)(this + 0x68) = *(long *)(*(long *)this + 0x7b8) + *(long *)(*(long *)this + 0x7a0);
  AddAllocation(this,*(double *)(this + 0x20));
  dVar15 = *(double *)(this + 0x20);
  dVar22 = dVar15 - *(double *)(this + 0x18);
  switch(*(undefined4 *)(this + 8)) {
  case 0:
  case 3:
    iVar3 = *(int *)(this + 0xbe4);
    if (iVar3 == 10) {
      iVar3 = *(int *)(this + 0xbe0);
      *(int *)(this + 0xbe0) = iVar3 + 1;
      *(undefined8 *)(this + (long)iVar3 * 0x10 + 0xb40) = *(undefined8 *)(this + 0x60);
      *(double *)(this + (long)iVar3 * 0x10 + 0xb48) = dVar22;
      if (*(int *)(this + 0xbe0) == 10) {
        *(undefined4 *)(this + 0xbe0) = 0;
      }
    }
    else {
      *(int *)(this + 0xbe4) = iVar3 + 1;
      *(undefined8 *)(this + (long)iVar3 * 0x10 + 0xb40) = *(undefined8 *)(this + 0x60);
      *(double *)(this + (long)iVar3 * 0x10 + 0xb48) = dVar22;
    }
    iVar3 = *(int *)(this + 0xc8c);
    if (iVar3 == 10) {
      iVar3 = *(int *)(this + 0xc88);
      *(int *)(this + 0xc88) = iVar3 + 1;
      *(undefined8 *)(this + (long)iVar3 * 0x10 + 0xbe8) = *(undefined8 *)(this + 0x68);
      *(double *)(this + (long)iVar3 * 0x10 + 0xbf0) = dVar22;
      if (*(int *)(this + 0xc88) == 10) {
        *(undefined4 *)(this + 0xc88) = 0;
      }
    }
    else {
      *(int *)(this + 0xc8c) = iVar3 + 1;
      *(undefined8 *)(this + (long)iVar3 * 0x10 + 0xbe8) = *(undefined8 *)(this + 0x68);
      *(double *)(this + (long)iVar3 * 0x10 + 0xbf0) = dVar22;
    }
    base::Mutex::Lock((Mutex *)(this + 0x1130));
    dVar17 = *(double *)(this + 0x1198);
    dVar15 = *(double *)(this + 0x1190);
    *(undefined8 *)(this + 0x1198) = 0;
    *(undefined8 *)(this + 0x1190) = 0;
    *(double *)(this + 0x3d8) = dVar17 + *(double *)(this + 0x3d8);
    *(double *)(this + 0x3d0) = dVar15 + *(double *)(this + 0x3d0);
    *(double *)(this + 1000) = *(double *)(this + 0x11a8) + *(double *)(this + 1000);
    *(double *)(this + 0x3e0) = *(double *)(this + 0x11a0) + *(double *)(this + 0x3e0);
    *(undefined8 *)(this + 0x11a8) = 0;
    *(undefined8 *)(this + 0x11a0) = 0;
    base::Mutex::Unlock((Mutex *)(this + 0x1130));
    iVar3 = (int)*(undefined8 *)(*(long *)this + 0xcd0) + 0x58;
    goto LAB_00f826e0;
  case 1:
    if (*(double *)(this + 0xb38) != 0.0) {
      dVar17 = dVar15 - *(double *)(this + 0xb38);
      dVar19 = dVar22 + *(double *)(this + 0x78);
      dVar18 = dVar17 - dVar19;
      if ((*(double *)(this + 0xb28) == 0.0) && (*(double *)(this + 0xb20) == 0.0)) {
        *(double *)(this + 0xb28) = dVar19;
        dVar21 = dVar18;
      }
      else {
        dVar21 = (dVar18 + *(double *)(this + 0xb20)) * 0.5;
        *(double *)(this + 0xb28) = (dVar19 + *(double *)(this + 0xb28)) * 0.5;
      }
      dVar18 = dVar18 / dVar17;
      if (dVar17 == 0.0) {
        dVar18 = 0.0;
      }
      *(double *)(this + 0xb20) = dVar21;
      *(double *)(this + 0xb30) = dVar18;
    }
    iVar3 = *(int *)(this + 0xe84);
    *(double *)(this + 0xb38) = dVar15;
    if (iVar3 == 10) {
      iVar3 = *(int *)(this + 0xe80);
      *(int *)(this + 0xe80) = iVar3 + 1;
      *(undefined8 *)(this + (long)iVar3 * 0x10 + 0xde0) = *(undefined8 *)(this + 0x38);
      *(double *)(this + (long)iVar3 * 0x10 + 0xde8) = dVar22;
      if (*(int *)(this + 0xe80) == 10) {
        *(undefined4 *)(this + 0xe80) = 0;
      }
    }
    else {
      *(int *)(this + 0xe84) = iVar3 + 1;
      *(undefined8 *)(this + (long)iVar3 * 0x10 + 0xde0) = *(undefined8 *)(this + 0x38);
      *(double *)(this + (long)iVar3 * 0x10 + 0xde8) = dVar22;
    }
    RecordGCSumCounters(this,dVar22);
    *(undefined4 *)(this + 0x9f0) = 0;
    *(undefined8 *)(this + 0x9e8) = 0;
    *(undefined8 *)(this + 0x9e0) = 0;
    *(undefined8 *)(this + 0xa00) = 0;
    *(undefined8 *)(this + 0x9f8) = 0;
    *(undefined4 *)(this + 0xa08) = 0;
    *(undefined8 *)(this + 0xa18) = 0;
    *(undefined8 *)(this + 0xa10) = 0;
    *(undefined4 *)(this + 0xa20) = 0;
    *(undefined8 *)(this + 0xa30) = 0;
    *(undefined8 *)(this + 0xa28) = 0;
    *(undefined4 *)(this + 0xa38) = 0;
    *(undefined8 *)(this + 0xa48) = 0;
    *(undefined8 *)(this + 0xa40) = 0;
    *(undefined4 *)(this + 0xa50) = 0;
    *(undefined8 *)(this + 0xa60) = 0;
    *(undefined8 *)(this + 0xa58) = 0;
    *(undefined4 *)(this + 0xa68) = 0;
    *(undefined4 *)(this + 0xa80) = 0;
    *(undefined8 *)(this + 0xa78) = 0;
    *(undefined8 *)(this + 0xa70) = 0;
    *(undefined8 *)(this + 0xa90) = 0;
    *(undefined8 *)(this + 0xa88) = 0;
    *(undefined4 *)(this + 0xa98) = 0;
    *(undefined8 *)(this + 0xaa8) = 0;
    *(undefined8 *)(this + 0xaa0) = 0;
    *(undefined4 *)(this + 0xab0) = 0;
    *(undefined8 *)(this + 0xac0) = 0;
    *(undefined8 *)(this + 0xab8) = 0;
    *(undefined4 *)(this + 0xac8) = 0;
    *(undefined8 *)(this + 0x9c0) = 0;
    *(undefined8 *)(this + 0x9b8) = 0;
    *(undefined8 *)(this + 0xb10) = 0;
    base::Mutex::Lock((Mutex *)(this + 0x1130));
    dVar15 = *(double *)(this + 0x1180) + *(double *)(this + 0x3c0);
    dVar17 = *(double *)(this + 0x1188) + *(double *)(this + 0x3c8);
    *(double *)(this + 0x3b0) = *(double *)(this + 0x1170) + *(double *)(this + 0x3b0);
    *(double *)(this + 0x3b8) = *(double *)(this + 0x1178) + *(double *)(this + 0x3b8);
    break;
  case 2:
    uVar16 = *(ulong *)(this + 0x9b8);
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x9c0);
    *(ulong *)(this + 0x70) = uVar16;
    *(undefined8 *)(this + 0x3f8) = *(undefined8 *)(this + 0x9e8);
    *(undefined8 *)(this + 0x3f0) = *(undefined8 *)(this + 0x9e0);
    *(undefined4 *)(this + 0x400) = *(undefined4 *)(this + 0x9f0);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x9e0);
    pGVar9 = this + 0x9f8;
    *(undefined4 *)(this + 0x418) = *(undefined4 *)(this + 0xa08);
    *(undefined8 *)(this + 0x410) = *(undefined8 *)(this + 0xa00);
    *(undefined8 *)(this + 0x408) = *(undefined8 *)pGVar9;
    *(undefined4 *)(this + 0x430) = *(undefined4 *)(this + 0xa20);
    *(undefined8 *)(this + 0x428) = *(undefined8 *)(this + 0xa18);
    *(undefined8 *)(this + 0x420) = *(undefined8 *)(this + 0xa10);
    *(undefined8 *)(this + 0x88) = *(undefined8 *)pGVar9;
    *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0xa10);
    pGVar10 = this + 0xa28;
    *(undefined4 *)(this + 0x448) = *(undefined4 *)(this + 0xa38);
    *(undefined8 *)(this + 0x440) = *(undefined8 *)(this + 0xa30);
    *(undefined8 *)(this + 0x438) = *(undefined8 *)pGVar10;
    *(undefined4 *)(this + 0x460) = *(undefined4 *)(this + 0xa50);
    *(undefined8 *)(this + 0x458) = *(undefined8 *)(this + 0xa48);
    *(undefined8 *)(this + 0x450) = *(undefined8 *)(this + 0xa40);
    *(undefined8 *)(this + 0x98) = *(undefined8 *)pGVar10;
    *(undefined8 *)(this + 0xa0) = *(undefined8 *)(this + 0xa40);
    *(undefined8 *)(this + 0x470) = *(undefined8 *)(this + 0xa60);
    *(undefined8 *)(this + 0x468) = *(undefined8 *)(this + 0xa58);
    *(undefined4 *)(this + 0x478) = *(undefined4 *)(this + 0xa68);
    *(undefined4 *)(this + 0x490) = *(undefined4 *)(this + 0xa80);
    *(undefined8 *)(this + 0x488) = *(undefined8 *)(this + 0xa78);
    *(undefined8 *)(this + 0x480) = *(undefined8 *)(this + 0xa70);
    *(undefined8 *)(this + 0xa8) = *(undefined8 *)(this + 0xa58);
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(this + 0xa70);
    pGVar12 = this + 0xa88;
    *(undefined4 *)(this + 0x4a8) = *(undefined4 *)(this + 0xa98);
    *(undefined8 *)(this + 0x4a0) = *(undefined8 *)(this + 0xa90);
    *(undefined8 *)(this + 0x498) = *(undefined8 *)pGVar12;
    *(undefined4 *)(this + 0x4c0) = *(undefined4 *)(this + 0xab0);
    *(undefined8 *)(this + 0x4b8) = *(undefined8 *)(this + 0xaa8);
    *(undefined8 *)(this + 0x4b0) = *(undefined8 *)(this + 0xaa0);
    *(undefined8 *)(this + 0xb8) = *(undefined8 *)pGVar12;
    *(undefined8 *)(this + 0xc0) = *(undefined8 *)(this + 0xaa0);
    pGVar13 = this + 0xab8;
    *(undefined4 *)(this + 0x4d8) = *(undefined4 *)(this + 0xac8);
    *(undefined8 *)(this + 0x4d0) = *(undefined8 *)(this + 0xac0);
    *(undefined8 *)(this + 0x4c8) = *(undefined8 *)pGVar13;
    dVar17 = *(double *)(this + 0x78);
    *(undefined8 *)(this + 200) = *(undefined8 *)pGVar13;
    if (*(double *)(this + 0xb38) != 0.0) {
      dVar21 = dVar22 + dVar17;
      dVar18 = dVar15 - *(double *)(this + 0xb38);
      dVar19 = dVar18 - dVar21;
      if ((*(double *)(this + 0xb28) == 0.0) && (*(double *)(this + 0xb20) == 0.0)) {
        *(double *)(this + 0xb28) = dVar21;
        dVar20 = dVar19;
      }
      else {
        dVar20 = (dVar19 + *(double *)(this + 0xb20)) * 0.5;
        *(double *)(this + 0xb28) = (dVar21 + *(double *)(this + 0xb28)) * 0.5;
      }
      dVar19 = dVar19 / dVar18;
      if (dVar18 == 0.0) {
        dVar19 = 0.0;
      }
      *(double *)(this + 0xb20) = dVar20;
      *(double *)(this + 0xb30) = dVar19;
    }
    *(double *)(this + 0xb38) = dVar15;
    if ((uVar16 != 0) && (dVar17 != 0.0)) {
      dVar15 = (double)uVar16 / dVar17;
      if (*(double *)(this + 0x9d0) != 0.0) {
        dVar15 = ((double)uVar16 / dVar17 + *(double *)(this + 0x9d0)) * 0.5;
      }
      *(double *)(this + 0x9d0) = dVar15;
    }
    iVar3 = *(int *)(this + 0xddc);
    if (iVar3 == 10) {
      iVar3 = *(int *)(this + 0xdd8);
      *(int *)(this + 0xdd8) = iVar3 + 1;
      *(undefined8 *)(this + (long)iVar3 * 0x10 + 0xd38) = *(undefined8 *)(this + 0x38);
      *(double *)(this + (long)iVar3 * 0x10 + 0xd40) = dVar22;
      if (*(int *)(this + 0xdd8) == 10) {
        *(undefined4 *)(this + 0xdd8) = 0;
      }
    }
    else {
      *(int *)(this + 0xddc) = iVar3 + 1;
      *(undefined8 *)(this + (long)iVar3 * 0x10 + 0xd38) = *(undefined8 *)(this + 0x38);
      *(double *)(this + (long)iVar3 * 0x10 + 0xd40) = dVar22;
    }
    RecordGCSumCounters(this,dVar22);
    *(undefined8 *)(this + 0x9e0) = 0;
    *(undefined8 *)(this + 0x9e8) = 0;
    *(undefined4 *)(this + 0x9f0) = 0;
    *(undefined8 *)pGVar9 = 0;
    *(undefined8 *)(this + 0xa00) = 0;
    *(undefined4 *)(this + 0xa08) = 0;
    *(undefined8 *)(this + 0xa10) = 0;
    *(undefined8 *)(this + 0xa18) = 0;
    *(undefined4 *)(this + 0xa20) = 0;
    *(undefined8 *)pGVar10 = 0;
    *(undefined8 *)(this + 0xa30) = 0;
    *(undefined4 *)(this + 0xa38) = 0;
    *(undefined8 *)(this + 0xa40) = 0;
    *(undefined8 *)(this + 0xa48) = 0;
    *(undefined4 *)(this + 0xa50) = 0;
    *(undefined8 *)(this + 0xa58) = 0;
    *(undefined8 *)(this + 0xa60) = 0;
    *(undefined4 *)(this + 0xa68) = 0;
    *(undefined8 *)(this + 0xa70) = 0;
    *(undefined8 *)(this + 0xa78) = 0;
    *(undefined4 *)(this + 0xa80) = 0;
    *(undefined8 *)pGVar12 = 0;
    *(undefined8 *)(this + 0xa90) = 0;
    *(undefined4 *)(this + 0xa98) = 0;
    *(undefined8 *)(this + 0xaa0) = 0;
    *(undefined8 *)(this + 0xaa8) = 0;
    *(undefined4 *)(this + 0xab0) = 0;
    *(undefined8 *)pGVar13 = 0;
    *(undefined8 *)(this + 0xac0) = 0;
    *(undefined4 *)(this + 0xac8) = 0;
    *(undefined8 *)(this + 0x9b8) = 0;
    *(undefined8 *)(this + 0x9c0) = 0;
    *(undefined8 *)(this + 0xb10) = 0;
    base::Mutex::Lock((Mutex *)(this + 0x1130));
    *(double *)(this + 0x3b0) = *(double *)(this + 0x1170) + *(double *)(this + 0x3b0);
    dVar15 = *(double *)(this + 0x1180) + *(double *)(this + 0x3c0);
    dVar17 = *(double *)(this + 0x1188) + *(double *)(this + 0x3c8);
    *(double *)(this + 0x3b8) = *(double *)(this + 0x1178) + *(double *)(this + 0x3b8);
    break;
  case 4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  default:
    goto switchD_00f82138_default;
  }
  *(undefined8 *)(this + 0x1178) = 0;
  *(undefined8 *)(this + 0x1170) = 0;
  *(double *)(this + 0x3c0) = dVar15;
  *(double *)(this + 0x3c8) = dVar17;
  *(undefined8 *)(this + 0x1188) = 0;
  *(undefined8 *)(this + 0x1180) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x1130));
  Histogram::AddSample((int)*(undefined8 *)(*(long *)this + 0xcd0) + 0x30);
  iVar3 = (int)*(undefined8 *)(*(long *)this + 0xcd0) + 0x80;
LAB_00f826e0:
  Histogram::AddSample(iVar3);
switchD_00f82138_default:
  base::Mutex::Lock((Mutex *)(this + 0x1130));
  *(double *)(this + 0x398) = *(double *)(this + 0x1158) + *(double *)(this + 0x398);
  *(double *)(this + 0x3a0) = *(double *)(this + 0x1160) + *(double *)(this + 0x3a0);
  *(undefined8 *)(this + 0x1160) = 0;
  *(undefined8 *)(this + 0x1158) = 0;
  dVar15 = *(double *)(this + 0x1168);
  *(undefined8 *)(this + 0x1168) = 0;
  *(double *)(this + 0x3a8) = dVar15 + *(double *)(this + 0x3a8);
  base::Mutex::Unlock((Mutex *)(this + 0x1130));
  Heap::UpdateTotalGCTime(*(Heap **)this,dVar22);
  if (((*(int *)(this + 8) != 3) && (*(int *)(this + 8) != 0)) ||
     (FLAG_trace_gc_ignore_scavenger == '\0')) {
    if (FLAG_trace_gc_nvp == '\0') {
      Print(this);
    }
    else {
      PrintNVP(this);
    }
    if (FLAG_trace_gc != '\0') {
      Heap::PrintShortHeapStatistics(*(Heap **)this);
    }
    if ((TracingFlags::gc >> 1 & 1) != 0) {
      local_198 = (undefined **)0x1c670a0;
      local_118[0] = (undefined **)0x1c670c8;
      local_190 = 0;
      local_188 = &PTR__basic_stringstream_01c66fb0;
      std::__ndk1::ios_base::init((ios_base *)local_118,&local_180);
      local_198 = &PTR__basic_stringstream_01c66f88;
      local_118[0] = &PTR__basic_stringstream_01c66fd8;
      local_88 = 0xffffffff;
      local_180 = &PTR__basic_streambuf_01c671a8;
      local_90 = 0;
      local_188 = &PTR__basic_stringstream_01c66fb0;
      std::__ndk1::locale::locale(alStack_178);
      uStack_148 = 0;
      local_150 = 0;
      local_180 = &PTR__basic_stringbuf_01c67100;
      uStack_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      local_130 = (void *)0x0;
      local_120 = 0x18;
      Heap::DumpJSONHeapStatistics(*(Heap **)this,(basic_stringstream *)&local_198);
      if (DAT_01d3f030 == (byte *)0x0) {
        plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
        DAT_01d3f030 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
      }
      pbVar2 = DAT_01d3f030;
      if ((*DAT_01d3f030 & 5) != 0) {
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        local_1c0 = (void *)((ulong)local_1d8 | 1);
        if ((local_1d8[0] & 1) != 0) {
          local_1c0 = local_1c8;
        }
        local_1b0 = "stats";
        local_1a8 = (long *)0x0;
        local_1b4[0] = 7;
        local_1a0 = (long *)0x0;
        plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar4 + 0x18))
                  (plVar4,0x49,pbVar2,"V8.GC_Heap_Stats",0,0,0,1,&local_1b0,local_1b4,&local_1c0,
                   &local_1a8,0x10);
        plVar4 = local_1a0;
        local_1a0 = (long *)0x0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        plVar4 = local_1a8;
        local_1a8 = (long *)0x0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        if ((local_1d8[0] & 1) != 0) {
          operator_delete(local_1c8);
        }
      }
      local_198 = &PTR__basic_stringstream_01c66f88;
      local_188 = &PTR__basic_stringstream_01c66fb0;
      local_118[0] = &PTR__basic_stringstream_01c66fd8;
      local_180 = &PTR__basic_stringbuf_01c67100;
      if ((local_140 & 1) != 0) {
        operator_delete(local_130);
      }
      local_180 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_178);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
    }
  }
LAB_00f827b8:
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

