
/* v8::internal::Heap::LeftTrimFixedArray(v8::internal::FixedArrayBase, int) */

ulong __thiscall v8::internal::Heap::LeftTrimFixedArray(Heap *this,ulong param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_58;
  
  if (param_3 != 0) {
    if ((int)param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!object.is_null()");
    }
    uVar7 = param_2 & 0xffffffff00000000 | 7;
    uVar3 = *(undefined4 *)(param_2 - 1);
    iVar1 = *(int *)(param_2 + 3);
    iVar4 = 4;
    if (0xe < *(ushort *)(uVar7 + *(uint *)(param_2 - 1)) - 0x76) {
      iVar4 = 8;
    }
    iVar4 = iVar4 * param_3;
    puVar5 = (uint *)(param_2 - 1);
    lVar6 = (long)iVar4;
    if (1 < *(int *)(*(IncrementalMarking **)(this + 0x828) + 0x58)) {
      IncrementalMarking::NotifyLeftTrimming
                (*(IncrementalMarking **)(this + 0x828),param_2,lVar6 + param_2);
    }
    if (((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0) &&
       (*(short *)(uVar7 + *puVar5) != 0x85)) {
      bVar2 = *(short *)(uVar7 + *puVar5) == 0x87;
    }
    else {
      bVar2 = true;
    }
    CreateFillerObjectAt(this,puVar5,iVar4,bVar2,1);
    uVar7 = lVar6 + param_2;
    *(undefined4 *)(lVar6 + (long)puVar5) = uVar3;
    *(uint *)((long)puVar5 + (long)(iVar4 + 4)) = iVar1 + param_3 * -2 & 0xfffffffe;
    local_58 = uVar7;
    uVar3 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_58,
                       uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1));
    OnMoveEvent(this,uVar7,param_2,uVar3);
    param_2 = local_58;
  }
  return param_2;
}

