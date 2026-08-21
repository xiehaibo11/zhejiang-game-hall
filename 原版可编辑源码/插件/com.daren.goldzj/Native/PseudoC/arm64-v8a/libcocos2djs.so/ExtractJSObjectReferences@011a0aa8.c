
/* v8::internal::V8HeapExplorer::ExtractJSObjectReferences(v8::internal::HeapEntry*,
   v8::internal::JSObject) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractJSObjectReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long local_90;
  ulong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  ExtractPropertyReferences(this,param_3,param_1);
  ExtractElementReferences(this,param_3,param_1);
  ExtractInternalReferences(this,param_3,param_1);
  lVar6 = *(long *)(this + 8);
  uStack_80 = 0;
  local_90 = lVar6 + -0x8850;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_88 = param_3;
  PrototypeIterator::Advance((PrototypeIterator *)&local_90);
  SetPropertyReference(this,param_1,*(undefined8 *)(lVar6 + -0x7f50),local_88,0,0xffffffff);
  uVar9 = param_3 & 0xffffffff00000000;
  uVar7 = uVar9 | 7;
  if (*(short *)(uVar7 + *(uint *)(param_3 - 1)) == 0x438) {
    TagObject(this,uVar9 | *(uint *)(param_3 + 0x13),"(bound arguments)");
    SetInternalReference(this,param_1,"bindings",uVar9 | *(uint *)(param_3 + 0x13),0x14);
    SetInternalReference(this,param_1,"bound_this",uVar9 | *(uint *)(param_3 + 0xf),0x10);
    SetInternalReference(this,param_1,"bound_function",uVar9 | *(uint *)(param_3 + 0xb),0xc);
    uVar7 = uVar9 | *(uint *)(param_3 + 0x13);
    if (1 < *(int *)(uVar7 + 3)) {
      iVar10 = 0;
      uVar8 = 0;
      do {
        uVar3 = StringsStorage::GetFormatted
                          (*(char **)(this + 0x18),"bound_argument_%d",uVar8 & 0xffffffff);
        SetNativeBindReference(this,param_1,uVar3,uVar9 | *(uint *)(uVar7 + 7 + (long)iVar10));
        uVar8 = uVar8 + 1;
        iVar10 = iVar10 + 4;
      } while ((long)uVar8 < (long)(*(int *)(uVar7 + 3) >> 1));
    }
    goto LAB_011a0e1c;
  }
  if (*(short *)(uVar7 + *(uint *)(param_3 - 1)) == 0x439) {
    if (*(char *)((uVar9 | 9) + (ulong)*(uint *)(param_3 - 1)) < '\0') {
      uVar1 = *(uint *)(param_3 + 0x1b);
      uVar8 = uVar9 | uVar1;
      if ((uVar1 & 1) == 0) {
        uVar3 = *(undefined8 *)(lVar6 + -0x7f48);
LAB_011a0d3c:
        SetPropertyReference(this,param_1,uVar3,uVar8,0,0x1c);
      }
      else if (uVar1 != *(uint *)(lVar6 + -0x87a8)) {
        uVar3 = *(undefined8 *)(lVar6 + -0x7f48);
        if (*(short *)(uVar7 + *(uint *)(uVar8 - 1)) != 0xa2) goto LAB_011a0d3c;
        if ((*(byte *)((uVar9 | 9) + (ulong)*(uint *)(param_3 - 1)) & 1) == 0) {
          uVar5 = uVar8;
          if (*(short *)(uVar7 + *(uint *)(uVar8 - 1)) == 0xa2) {
            uVar5 = uVar9 | *(uint *)(uVar8 + 0xf);
          }
        }
        else {
          uVar1 = *(uint *)((uVar9 | 0x13) + (ulong)*(uint *)(param_3 - 1));
          while ((uVar5 = uVar9 | uVar1, (uVar1 & 1) != 0 &&
                 (*(short *)(uVar7 + *(uint *)(uVar5 - 1)) == 0xa2))) {
            uVar1 = *(uint *)(uVar5 + 0x13);
          }
        }
        SetPropertyReference(this,param_1,uVar3,uVar5,0,0xffffffff);
        SetInternalReference(this,param_1,"initial_map",uVar8,0x1c);
      }
    }
    uVar7 = uVar9 | *(uint *)(param_3 + 0xb);
    TagObject(this,uVar9 | *(uint *)(param_3 + 0x13),"(function feedback cell)");
    SetInternalReference(this,param_1,"feedback_cell",uVar9 | *(uint *)(param_3 + 0x13),0x14);
    TagObject(this,uVar7,"(shared function info)");
    SetInternalReference(this,param_1,"shared",uVar7,0xc);
    TagObject(this,uVar9 | *(uint *)(param_3 + 0xf),"(context)");
    SetInternalReference(this,param_1,"context",uVar9 | *(uint *)(param_3 + 0xf),0x10);
    uVar7 = (ulong)*(uint *)(param_3 + 0x17);
    pcVar4 = "code";
    uVar3 = 0x18;
  }
  else if (*(short *)(uVar7 + *(uint *)(param_3 - 1)) == 0xaa) {
    SetInternalReference(this,param_1,"native_context",uVar9 | *(uint *)(param_3 + 0xb),0xc);
    uVar7 = (ulong)*(uint *)(param_3 + 0xf);
    pcVar4 = "global_proxy";
    uVar3 = 0x10;
  }
  else {
    if ((*(ushort *)(uVar7 + *(uint *)(param_3 - 1)) & 0xfffe) != 0x41a) goto LAB_011a0e1c;
    uVar7 = (ulong)*(uint *)(param_3 + 0xb);
    pcVar4 = "buffer";
    uVar3 = 0xc;
  }
  SetInternalReference(this,param_1,pcVar4,uVar9 | uVar7,uVar3);
LAB_011a0e1c:
  TagObject(this,uVar9 | *(uint *)(param_3 + 3),"(object properties)");
  SetInternalReference(this,param_1,"properties",uVar9 | *(uint *)(param_3 + 3),4);
  TagObject(this,uVar9 | *(uint *)(param_3 + 7),"(object elements)");
  SetInternalReference(this,param_1,"elements",uVar9 | *(uint *)(param_3 + 7),8);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

