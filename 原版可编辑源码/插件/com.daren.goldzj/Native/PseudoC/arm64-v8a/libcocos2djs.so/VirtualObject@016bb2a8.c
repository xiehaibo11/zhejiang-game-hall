
/* v8::internal::compiler::VirtualObject::VirtualObject(v8::internal::compiler::VariableTracker*,
   unsigned int, int) */

void __thiscall
v8::internal::compiler::VirtualObject::VirtualObject
          (VirtualObject *this,VariableTracker *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  Zone *this_00;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_48 [2];
  
  uVar6 = *(undefined8 *)param_1;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  this[0x20] = (VirtualObject)0x0;
  *(uint *)(this + 0x24) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = uVar6;
  this_00 = *(Zone **)param_1;
  *(undefined8 *)(this + 0x28) = 0;
  uVar1 = param_3 + 3U;
  if (-1 < param_3) {
    uVar1 = param_3;
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(Zone **)(this + 0x40) = this_00;
  if (6 < param_3 + 3U) {
    puVar4 = *(undefined4 **)(this_00 + 0x10);
    lVar3 = (long)((ulong)uVar1 << 0x20) >> 0x22;
    uVar5 = lVar3 * 4 + 7U & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar4) < uVar5) {
      puVar4 = (undefined4 *)Zone::NewExpand(this_00,uVar5);
    }
    else {
      *(ulong *)(this_00 + 0x10) = (long)puVar4 + uVar5;
    }
    puVar2 = *(undefined4 **)(this + 0x28);
    puVar7 = *(undefined4 **)(this + 0x30);
    puVar8 = puVar4;
    while (puVar7 != puVar2) {
      puVar7 = puVar7 + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *puVar7;
    }
    *(undefined4 **)(this + 0x28) = puVar8;
    *(undefined4 **)(this + 0x30) = puVar4;
    *(undefined4 **)(this + 0x38) = puVar4 + lVar3;
    if (3 < param_3) {
      iVar9 = (int)uVar1 >> 2;
      do {
        while( true ) {
          local_48[0] = *(int *)(param_1 + 0x88);
          *(int *)(param_1 + 0x88) = local_48[0] + 1;
          if (*(int **)(this + 0x38) <= *(int **)(this + 0x30)) break;
          **(int **)(this + 0x30) = local_48[0];
          *(long *)(this + 0x30) = *(long *)(this + 0x30) + 4;
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) {
            return;
          }
        }
        std::__ndk1::
        vector<v8::internal::compiler::Variable,v8::internal::ZoneAllocator<v8::internal::compiler::Variable>>
        ::__push_back_slow_path<v8::internal::compiler::Variable>
                  ((vector<v8::internal::compiler::Variable,v8::internal::ZoneAllocator<v8::internal::compiler::Variable>>
                    *)(this + 0x28),(Variable *)local_48);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  return;
}

