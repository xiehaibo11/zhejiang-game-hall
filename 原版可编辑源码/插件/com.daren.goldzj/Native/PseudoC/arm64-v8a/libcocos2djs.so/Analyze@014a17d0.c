
/* v8::internal::DeclarationScope::Analyze(v8::internal::ParseInfo*) */

undefined4 v8::internal::DeclarationScope::Analyze(ParseInfo *param_1)

{
  long *plVar1;
  RuntimeCallStats *pRVar2;
  ulong uVar3;
  undefined4 uVar4;
  DeclarationScope *this;
  Zone *this_00;
  long *plVar5;
  Zone *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  pRVar2 = *(RuntimeCallStats **)(param_1 + 0x88);
  local_40 = 0;
  uStack_58 = 0;
  local_60 = (RuntimeCallStats *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((pRVar2 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    uVar4 = 0x439;
    if (*(int *)(pRVar2 + 0x14) == 1) {
      uVar4 = 0x43a;
    }
    local_60 = pRVar2;
    RuntimeCallStats::Enter(pRVar2,(RuntimeCallTimer *)((ulong)&local_60 | 8),uVar4);
  }
  this = *(DeclarationScope **)(*(long *)(param_1 + 0xa8) + 0x28);
  if ((this[0x80] == (DeclarationScope)0x1) && (((byte)this[0x81] & 1) == 0)) {
    uStack_80 = *(undefined8 *)(param_1 + 0x70);
    this_00 = *(Zone **)param_1;
    local_78 = *(undefined8 **)(this_00 + 0x10);
    local_88 = this_00;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)local_78) < 8) {
      local_78 = (undefined8 *)Zone::NewExpand(this_00,8);
    }
    else {
      *(undefined8 **)(this_00 + 0x10) = local_78 + 1;
    }
    *local_78 = 0xaffffffff;
    local_70 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)local_70) < 8) {
      local_70 = (undefined8 *)Zone::NewExpand(this_00,8);
    }
    else {
      *(undefined8 **)(this_00 + 0x10) = local_70 + 1;
    }
    *local_70 = 0x32ffffffff;
    local_68 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)local_68) < 8) {
      local_68 = (undefined8 *)Zone::NewExpand(this_00,8);
    }
    else {
      *(undefined8 **)(this_00 + 0x10) = local_68 + 1;
    }
    *local_68 = 0x38ffffffff;
    HoistSloppyBlockFunctions(this,(AstNodeFactory *)&local_88);
  }
  *(ushort *)(this + 0x83) =
       (*(ushort *)(this + 0x83) >> 1 & 0x40 | *(ushort *)(this + 0x83) & 0xffbf) ^ 0x40;
  if (((byte)this[0x82] >> 2 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),this,*(undefined8 *)(param_1 + 0x70));
  }
  uVar3 = AllocateVariables(this,param_1);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    for (; this[0x80] != (DeclarationScope)0x4; this = *(DeclarationScope **)(this + 8)) {
    }
    if (((byte)this[0x82] >> 3 & 1) != 0) {
      plVar1 = *(long **)(this + 0x20);
      while (plVar5 = plVar1, plVar5 < *(long **)(this + 0x20) + (ulong)*(uint *)(this + 0x28) * 3)
      {
        plVar1 = plVar5 + 3;
        if (*plVar5 != 0) {
          do {
            Variable::RewriteLocationForRepl((Variable *)plVar5[1]);
            do {
              plVar5 = plVar5 + 3;
              if ((long *)(*(long *)(this + 0x20) + (ulong)*(uint *)(this + 0x28) * 0x18) <= plVar5)
              goto LAB_014a1990;
            } while (*plVar5 == 0);
          } while( true );
        }
      }
    }
LAB_014a1990:
    uVar4 = 1;
  }
  if (local_60 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return uVar4;
}

