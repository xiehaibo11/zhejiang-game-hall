
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCreateContext(v8::internal::interpreter::BytecodeArrayIterator*,
   int) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCreateContext
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  Zone *pZVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  int local_58 [2];
  ulong *local_50;
  undefined8 local_48;
  ObjectRef aOStack_40 [16];
  
  uVar2 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)param_1,param_2,(Isolate *)**(undefined8 **)this);
  ObjectRef::ObjectRef(aOStack_40,*(undefined8 *)this,uVar2,0);
  uVar3 = ObjectRef::IsScopeInfo(aOStack_40);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsScopeInfo()");
  }
  ScopeInfoRef::SerializeScopeInfoChain((ScopeInfoRef *)aOStack_40);
  lVar7 = *(long *)(this + 0x28);
  local_48 = 0;
  puVar5 = *(undefined8 **)(lVar7 + 0x28);
  if (puVar5 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar5;
    if (puVar9 != (undefined8 *)0x0) {
      do {
        puVar6 = (ulong *)*puVar9;
        uVar3 = *puVar6;
        if (((uVar3 & 1) != 0) &&
           (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x88 < 10)
           ) {
          local_58[0] = 1;
          pZVar4 = *(Zone **)(this + 0x20);
          local_50 = puVar6;
          if (pZVar4 == (Zone *)0x0) {
            pZVar4 = (Zone *)ZoneStats::NewEmptyZone
                                       (*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
            *(Zone **)(this + 0x20) = pZVar4;
          }
          Hints::AddVirtualContext((Hints *)&local_48,(VirtualContext *)local_58,pZVar4);
        }
        puVar9 = (undefined8 *)puVar9[1];
      } while (puVar9 != (undefined8 *)0x0);
      puVar5 = *(undefined8 **)(lVar7 + 0x28);
      if (puVar5 == (undefined8 *)0x0) goto LAB_012c90bc;
    }
    for (puVar8 = (uint *)puVar5[3]; puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 4)) {
      local_50 = *(ulong **)(puVar8 + 2);
      local_58[0] = *puVar8 + 1;
      if (0xfffffffe < *puVar8) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","distance > 0");
      }
      pZVar4 = *(Zone **)(this + 0x20);
      if (pZVar4 == (Zone *)0x0) {
        pZVar4 = (Zone *)ZoneStats::NewEmptyZone
                                   (*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
        *(Zone **)(this + 0x20) = pZVar4;
      }
      Hints::AddVirtualContext((Hints *)&local_48,(VirtualContext *)local_58,pZVar4);
    }
  }
LAB_012c90bc:
  lVar7 = *(long *)(this + 0x28);
  uVar1 = *(int *)(lVar7 + 0x1c) + *(int *)(lVar7 + 0x18);
  if ((-1 < (int)uVar1) &&
     ((ulong)(*(long *)(lVar7 + 0x38) - *(long *)(lVar7 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  *(undefined8 *)(*(long *)(lVar7 + 0x30) + (long)(int)uVar1 * 8) = local_48;
  return;
}

