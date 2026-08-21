
/* v8::internal::JsonStringifier::SerializeArrayLikeSlow(v8::internal::Handle<v8::internal::JSReceiver>,
   unsigned int, unsigned int) */

undefined8 __thiscall
v8::internal::JsonStringifier::SerializeArrayLikeSlow
          (JsonStringifier *this,undefined8 param_2,uint param_3,uint param_4)

{
  IncrementalStringBuilder *this_00;
  short sVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  long lVar7;
  short *psVar8;
  Factory *this_01;
  int iVar9;
  ulong uVar10;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_bc;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  
  if (param_4 < 0x7fffff9) {
    if (param_3 < param_4) {
      this_00 = (IncrementalStringBuilder *)(this + 8);
      do {
        if (param_3 != 0) {
          iVar9 = *(int *)(this + 0x1c);
          lVar7 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar9 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar7 + iVar9 + 0xb) = 0x2c;
          }
          else {
            *(undefined2 *)(lVar7 + (long)iVar9 * 2 + 0xb) = 0x2c;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(this_00);
          }
        }
        if (*(long *)(this + 0x48) != 0) {
          iVar9 = *(int *)(this + 0x1c);
          lVar7 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar9 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar7 + iVar9 + 0xb) = 10;
          }
          else {
            *(undefined2 *)(lVar7 + (long)iVar9 * 2 + 0xb) = 10;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(this_00);
          }
          if (0 < *(int *)(this + 0x50)) {
            iVar9 = 0;
            do {
              psVar8 = *(short **)(this + 0x48);
              sVar1 = *psVar8;
              if (*(int *)(this + 0x10) == 0) {
                while (sVar1 != 0) {
                  psVar8 = psVar8 + 1;
                  iVar2 = *(int *)(this + 0x1c);
                  lVar7 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar2 + 1;
                  *(char *)(lVar7 + iVar2 + 0xb) = (char)sVar1;
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(this_00);
                  }
                  sVar1 = *psVar8;
                }
              }
              else {
                while (sVar1 != 0) {
                  psVar8 = psVar8 + 1;
                  iVar2 = *(int *)(this + 0x1c);
                  lVar7 = **(long **)(this + 0x28);
                  *(int *)(this + 0x1c) = iVar2 + 1;
                  *(short *)(lVar7 + (long)iVar2 * 2 + 0xb) = sVar1;
                  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                    IncrementalStringBuilder::Extend(this_00);
                  }
                  sVar1 = *psVar8;
                }
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(this + 0x50));
          }
        }
        local_b0 = *(long *)this;
        local_c8 = 3;
        local_bc = 0xc000000000;
        local_a8 = 0;
        uStack_a0 = 0;
        uStack_90 = 0;
        local_78 = 0xffffffffffffffff;
        local_98 = param_2;
        local_88 = param_2;
        uStack_80 = (ulong)param_3;
        LookupIterator::Start<true>((LookupIterator *)&local_c8);
        if (local_c4 == 4) {
          lVar7 = local_b0 + 0xa0;
        }
        else {
          lVar7 = Object::GetProperty((LookupIterator *)&local_c8,false);
          if (lVar7 == 0) goto LAB_0104e6a0;
        }
        pIVar5 = *(Isolate **)this;
        uVar10 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_3 << 1;
        if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)(pIVar5 + 0x95a0);
          if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(pIVar5);
          }
          *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
          *puVar6 = uVar10;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar10);
        }
        uVar4 = Serialize_<false>(this,lVar7,0,puVar6);
        if ((int)uVar4 != 1) {
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (this[0x14] != (JsonStringifier)0x0) goto LAB_0104e6a0;
          iVar9 = *(int *)(this + 0x1c);
          lVar7 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar9 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar7 + iVar9 + 0xb) = 0x6e;
            iVar9 = *(int *)(this + 0x1c);
            if (iVar9 == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(this_00);
              iVar9 = *(int *)(this + 0x1c);
            }
            lVar7 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar9 + 1;
            *(undefined1 *)(lVar7 + iVar9 + 0xb) = 0x75;
            iVar9 = *(int *)(this + 0x1c);
            if (iVar9 == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(this_00);
              iVar9 = *(int *)(this + 0x1c);
            }
            lVar7 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar9 + 1;
            *(undefined1 *)(lVar7 + iVar9 + 0xb) = 0x6c;
            iVar9 = *(int *)(this + 0x1c);
            if (iVar9 == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(this_00);
              iVar9 = *(int *)(this + 0x1c);
            }
            lVar7 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar9 + 1;
            *(undefined1 *)(lVar7 + iVar9 + 0xb) = 0x6c;
          }
          else {
            *(undefined2 *)(lVar7 + (long)iVar9 * 2 + 0xb) = 0x6e;
            iVar9 = *(int *)(this + 0x1c);
            if (iVar9 == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(this_00);
              iVar9 = *(int *)(this + 0x1c);
            }
            lVar7 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar9 + 1;
            *(undefined2 *)(lVar7 + (long)iVar9 * 2 + 0xb) = 0x75;
            iVar9 = *(int *)(this + 0x1c);
            if (iVar9 == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(this_00);
              iVar9 = *(int *)(this + 0x1c);
            }
            lVar7 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar9 + 1;
            *(undefined2 *)(lVar7 + (long)iVar9 * 2 + 0xb) = 0x6c;
            iVar9 = *(int *)(this + 0x1c);
            if (iVar9 == *(int *)(this + 0x18)) {
              IncrementalStringBuilder::Extend(this_00);
              iVar9 = *(int *)(this + 0x1c);
            }
            lVar7 = **(long **)(this + 0x28);
            *(int *)(this + 0x1c) = iVar9 + 1;
            *(undefined2 *)(lVar7 + (long)iVar9 * 2 + 0xb) = 0x6c;
          }
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(this_00);
          }
        }
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
    }
    uVar4 = 1;
  }
  else {
    this_01 = *(Factory **)this;
    puVar3 = (undefined8 *)Factory::NewInvalidStringLengthError(this_01);
    Isolate::Throw((Isolate *)this_01,*puVar3,0);
LAB_0104e6a0:
    uVar4 = 2;
  }
  return uVar4;
}

