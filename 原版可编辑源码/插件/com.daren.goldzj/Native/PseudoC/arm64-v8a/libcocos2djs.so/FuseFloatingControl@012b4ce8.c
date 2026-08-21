
/* v8::internal::compiler::Scheduler::FuseFloatingControl(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::Scheduler::FuseFloatingControl
          (Scheduler *this,BasicBlock *param_1,Node *param_2)

{
  long *plVar1;
  BasicBlock *pBVar2;
  long lVar3;
  Schedule *this_00;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  SpecialRPONumberer *this_01;
  long *plVar12;
  Scheduler *local_1e0;
  undefined8 uStack_1d8;
  long *local_1d0;
  undefined8 *puStack_1c8;
  undefined8 *local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long local_188;
  long *local_180;
  long *local_178;
  long *local_170;
  Zone *local_168;
  undefined **local_160;
  undefined **local_158;
  locale alStack_150 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined **local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  
  if ((FLAG_trace_turbo_scheduler != '\0') &&
     (PrintF("--- FUSE FLOATING CONTROL ----------------------------------\n"),
     FLAG_trace_turbo_scheduler != '\0')) {
    local_160 = (undefined **)0x1ca1178;
    local_100[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_100,(AndroidLogStream *)&local_158);
    local_158 = &PTR__basic_streambuf_01c671a8;
    local_70 = 0xffffffff;
    local_78 = 0;
    local_160 = &PTR__StdoutStream_01ca1128;
    local_100[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_150);
    local_158 = &PTR__AndroidLogStream_01cbc008;
    uStack_120 = 0;
    local_128 = 0;
    uStack_130 = 0;
    local_138 = 0;
    uStack_140 = 0;
    local_148 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_160,"Schedule before control flow fusion:\n",0x25);
    compiler::operator<<((basic_ostream *)&local_160,*(Schedule **)(this + 0x10));
    local_160 = &PTR__StdoutStream_01ca1128;
    local_100[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_158);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
  }
  CFGBuilder::Run(*(CFGBuilder **)(this + 0xd0),param_1,param_2);
  this_01 = *(SpecialRPONumberer **)(this + 0xd8);
  pBVar2 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),param_2);
  SpecialRPONumberer::ComputeAndInsertSpecialRPO(this_01,param_1,pBVar2);
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
    pBVar2 = (BasicBlock *)0x0;
  }
  else {
    do {
      *(undefined4 *)(lVar5 + 0xc) = 0xffffffff;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      lVar5 = *(long *)(lVar5 + 0x18);
    } while (lVar5 != 0);
    pBVar2 = *(BasicBlock **)(param_1 + 0x18);
  }
  PropagateImmediateDominators(pBVar2);
  lVar5 = *(long *)(this + 0xd0);
  local_168 = *(Zone **)(lVar5 + 0x88);
  local_180 = (long *)0x0;
  local_178 = (long *)0x0;
  local_170 = (long *)0x0;
  uVar8 = *(long *)(lVar5 + 0x78) - *(long *)(lVar5 + 0x70);
  if (uVar8 != 0) {
    if ((ulong)((long)uVar8 >> 3) >> 0x1c != 0) {
LAB_012b532c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar4 = *(long **)(local_168 + 0x10);
    if ((ulong)(*(long *)(local_168 + 0x18) - (long)plVar4) < uVar8) {
      plVar4 = (long *)Zone::NewExpand(local_168,uVar8);
    }
    else {
      *(ulong *)(local_168 + 0x10) = (long)plVar4 + uVar8;
    }
    local_170 = plVar4 + ((long)uVar8 >> 3);
    plVar1 = *(long **)(lVar5 + 0x78);
    local_178 = plVar4;
    for (plVar10 = *(long **)(lVar5 + 0x70); local_180 = plVar4, plVar10 != plVar1;
        plVar10 = plVar10 + 1) {
      *local_178 = *plVar10;
      local_178 = local_178 + 1;
    }
  }
  plVar1 = *(long **)(*(long *)(this + 0xd0) + 0x78);
  plVar10 = local_178;
  plVar6 = local_178;
  for (plVar4 = *(long **)(*(long *)(this + 0xd0) + 0x70); plVar4 != plVar1; plVar4 = plVar4 + 1) {
    for (plVar12 = *(long **)(*plVar4 + 0x18); plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      plVar11 = plVar12 + (ulong)(*(uint *)(plVar12 + 2) >> 1) * 3 + 3;
      if ((*(uint *)(plVar12 + 2) & 1) == 0) {
        plVar11 = (long *)*plVar11;
      }
      plVar7 = local_180;
      if ((*(ushort *)(*plVar11 + 0x10) - 0x23 < 2) &&
         (*(int *)(*(long *)(this + 0xb0) +
                   ((ulong)*(uint *)((long)plVar11 + 0x14) & 0xffffff) * 0x10 + 0xc) != 0)) {
        if (plVar6 == local_170) {
          lVar5 = (long)plVar10 - (long)local_180 >> 3;
          uVar8 = lVar5 + 1;
          if (uVar8 >> 0x1c != 0) goto LAB_012b532c;
          uVar9 = (long)local_170 - (long)local_180 >> 2;
          if (uVar8 <= uVar9) {
            uVar8 = uVar9;
          }
          if (0x7fffffe < (ulong)((long)local_170 - (long)local_180 >> 3)) {
            uVar8 = 0xfffffff;
          }
          if (uVar8 == 0) {
            lVar3 = 0;
          }
          else {
            uVar9 = uVar8 * 8;
            lVar3 = *(long *)(local_168 + 0x10);
            if (uVar9 < (ulong)(*(long *)(local_168 + 0x18) - lVar3) ||
                uVar9 - (*(long *)(local_168 + 0x18) - lVar3) == 0) {
              *(ulong *)(local_168 + 0x10) = lVar3 + uVar9;
            }
            else {
              lVar3 = Zone::NewExpand(local_168,uVar9);
            }
          }
          plVar7 = (long *)(lVar3 + lVar5 * 8);
          plVar10 = plVar7 + 1;
          *plVar7 = (long)plVar11;
          local_170 = (long *)(lVar3 + uVar8 * 8);
          plVar11 = local_178;
          while (plVar6 = plVar10, local_178 = plVar10, plVar11 != local_180) {
            plVar11 = plVar11 + -1;
            plVar7 = plVar7 + -1;
            *plVar7 = *plVar11;
          }
        }
        else {
          *plVar6 = (long)plVar11;
          plVar10 = local_178 + 1;
          plVar6 = plVar10;
          local_178 = plVar10;
        }
      }
      local_180 = plVar7;
    }
  }
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("propagation roots: ");
    plVar10 = local_178;
    for (plVar4 = local_180; plVar4 != plVar10; plVar4 = plVar4 + 1) {
      if (FLAG_trace_turbo_scheduler != '\0') {
        PrintF("#%d:%s ",(ulong)(*(uint *)(*plVar4 + 0x14) & 0xffffff),
               *(undefined8 *)(*(long *)*plVar4 + 8));
      }
    }
    if (FLAG_trace_turbo_scheduler != '\0') {
      PrintF("\n");
    }
  }
  local_1b0 = *(undefined8 *)this;
  uStack_1d8 = *(undefined8 *)(this + 0x10);
  puStack_1c8 = (undefined8 *)0x0;
  local_1d0 = (long *)0x0;
  local_1b8 = 0;
  local_1c0 = (undefined8 *)0x0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1a8 = 0;
  local_188 = 0;
  local_1e0 = this;
  local_190 = local_1b0;
  ScheduleEarlyNodeVisitor::Run((ScheduleEarlyNodeVisitor *)&local_1e0,(ZoneVector *)&local_180);
  lVar5 = *(long *)(this + 0x20);
  this_00 = *(Schedule **)(this + 0x10);
  uVar8 = *(long *)(this_00 + 0x10) - *(long *)(this_00 + 8) >> 3;
  uVar9 = *(long *)(this + 0x28) - lVar5 >> 3;
  if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
    if (uVar8 < uVar9) {
      *(ulong *)(this + 0x28) = lVar5 + uVar8 * 8;
    }
  }
  else {
    std::__ndk1::
    vector<v8::internal::ZoneVector<v8::internal::compiler::Node*>*,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::compiler::Node*>*>>
    ::__append((vector<v8::internal::ZoneVector<v8::internal::compiler::Node*>*,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::compiler::Node*>*>>
                *)(this + 0x20),uVar8 - uVar9);
    this_00 = *(Schedule **)(this + 0x10);
  }
  pBVar2 = (BasicBlock *)Schedule::block(this_00,param_2);
  MovePlannedNodes(this,param_1,pBVar2);
  if (FLAG_trace_turbo_scheduler != '\0') {
    local_160 = (undefined **)0x1ca1178;
    local_100[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_100,(AndroidLogStream *)&local_158);
    local_158 = &PTR__basic_streambuf_01c671a8;
    local_70 = 0xffffffff;
    local_78 = 0;
    local_160 = &PTR__StdoutStream_01ca1128;
    local_100[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_150);
    local_158 = &PTR__AndroidLogStream_01cbc008;
    uStack_120 = 0;
    local_128 = 0;
    uStack_130 = 0;
    local_138 = 0;
    uStack_140 = 0;
    local_148 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_160,"Schedule after control flow fusion:\n",0x24);
    compiler::operator<<((basic_ostream *)&local_160,*(Schedule **)(this + 0x10));
    local_160 = &PTR__StdoutStream_01ca1128;
    local_100[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_158);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)&local_1d0);
  if (puStack_1c8 == local_1c0) {
LAB_012b52b4:
    if (((local_1d0 != (long *)0x0) && (0xf < (ulong)(local_1b8 - (long)local_1d0))) &&
       ((uVar8 = local_1b8 - (long)local_1d0 >> 3, local_1a8 == 0 ||
        (*(ulong *)(local_1a8 + 8) <= uVar8)))) {
      local_1d0[1] = uVar8;
      *local_1d0 = local_1a8;
    }
    return;
  }
  plVar10 = (long *)*puStack_1c8;
  plVar4 = (long *)local_188;
  if (local_188 != 0) goto LAB_012b5284;
  do {
    plVar4 = plVar10;
    plVar4[1] = 0x200;
    *plVar4 = local_188;
    local_188 = (long)plVar4;
    do {
      puStack_1c8 = puStack_1c8 + 1;
      if (local_1c0 == puStack_1c8) goto LAB_012b52b4;
      plVar10 = (long *)*puStack_1c8;
      if (plVar4 == (long *)0x0) break;
LAB_012b5284:
    } while (0x200 < *(ulong *)((long)plVar4 + 8));
  } while( true );
}

