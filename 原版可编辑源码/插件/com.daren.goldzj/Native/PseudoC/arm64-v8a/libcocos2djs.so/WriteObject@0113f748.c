
/* v8::internal::ValueSerializer::WriteObject(v8::internal::Handle<v8::internal::Object>) */

undefined2 __thiscall
v8::internal::ValueSerializer::WriteObject(ValueSerializer *this,ulong *param_2)

{
  ValueSerializer VVar1;
  ushort uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  ulong local_38;
  
  if (this[0x29] == (ValueSerializer)0x0) {
    uVar7 = *param_2;
    if ((uVar7 & 1) == 0) {
      WriteSmi(this);
      VVar1 = this[0x29];
    }
    else {
      uVar2 = *(ushort *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 7);
      uVar10 = (uint)uVar2;
      if (uVar2 < 0x41a) {
        if (uVar10 == 0x41) {
          WriteBigInt(this);
          VVar1 = this[0x29];
        }
        else if (uVar10 == 0x42) {
          WriteHeapNumber(this);
          VVar1 = this[0x29];
        }
        else {
          if (uVar10 != 0x43) goto LAB_0113f860;
          WriteOddball(this);
          VVar1 = this[0x29];
        }
      }
      else {
        if (uVar10 - 0x41a < 2) {
          lVar4 = IdentityMapBase::FindEntry((IdentityMapBase *)(this + 0x70),uVar7);
          if ((lVar4 == 0) && (this[0x28] == (ValueSerializer)0x0)) {
            uVar7 = *param_2;
            if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x41b)
            {
              local_38 = uVar7;
              puVar5 = (ulong *)JSTypedArray::GetBuffer((JSTypedArray *)&local_38);
            }
            else {
              pIVar6 = *(Isolate **)this;
              uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb);
              if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar5 = *(ulong **)(pIVar6 + 0x95a0);
                if (puVar5 == *(ulong **)(pIVar6 + 0x95a8)) {
                  puVar5 = (ulong *)HandleScope::Extend(pIVar6);
                }
                *(ulong **)(pIVar6 + 0x95a0) = puVar5 + 1;
                *puVar5 = uVar7;
              }
              else {
                puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar7);
              }
            }
            uVar2 = WriteJSReceiver(this,puVar5);
            if (uVar2 < 0x100) {
              return 0;
            }
            if ((uVar2 & 0xff) == 0) {
              return 0;
            }
          }
          goto LAB_0113f924;
        }
LAB_0113f860:
        uVar9 = uVar7 & 0xffffffff00000000 | 7;
        if (0x3f < *(ushort *)(uVar9 + *(uint *)(uVar7 - 1))) {
          if (0xa8 < *(ushort *)(uVar9 + *(uint *)(uVar7 - 1))) {
LAB_0113f924:
            uVar3 = WriteJSReceiver(this,param_2);
            return uVar3;
          }
          uVar8 = 0x168;
          goto LAB_0113f794;
        }
        WriteString(this,param_2);
        VVar1 = this[0x29];
      }
    }
    if (VVar1 == (ValueSerializer)0x0) {
      return 0x101;
    }
  }
  uVar8 = 0x169;
  param_2 = (ulong *)(*(long *)this + 200);
LAB_0113f794:
  ThrowDataCloneError(this,uVar8,param_2);
  return 0;
}

