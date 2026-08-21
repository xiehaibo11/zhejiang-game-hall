
/* v8::internal::Isolate::ComputeLocationFromException(v8::internal::MessageLocation*,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::Isolate::ComputeLocationFromException
          (Isolate *this,undefined8 *param_1,ulong *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  uint local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulong uStack_90;
  Isolate *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar3 = *param_3;
  if ((uVar3 & 1) != 0) {
    uStack_90 = uVar3 & 0xffffffff00000000;
    if (0xa9 < *(ushort *)((uStack_90 | 7) + (ulong)*(uint *)(uVar3 - 1))) {
      uVar3 = *(ulong *)(this + 0xb60);
      local_88 = this + 0xb60;
      local_a8 = 2;
      if (*(short *)((uStack_90 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x40) {
        local_a8 = (*(int *)(uVar3 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      uStack_9c = 0;
      uStack_98 = 0xc0;
      if ((*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) & 0xffe0) ==
          0x20) {
        local_88 = (Isolate *)StringTable::LookupString();
      }
      uStack_80 = 0;
      uStack_70 = 0;
      local_58 = 0xffffffffffffffff;
      uStack_60 = 0xffffffffffffffff;
      local_78 = param_3;
      local_68 = param_3;
      LookupIterator::Start<false>((LookupIterator *)&local_a8);
      if (iStack_a4 == 4) {
        uVar3 = *(ulong *)(uStack_90 + 0xa0);
        iVar4 = (int)uVar3;
      }
      else {
        puVar2 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_a8);
        uVar3 = *puVar2;
        iVar4 = (int)uVar3;
      }
      if ((uVar3 & 1) == 0) {
        uVar3 = *(ulong *)(this + 0xb50);
        pIVar1 = this + 0xb50;
        uStack_90 = (ulong)*(uint *)((long)param_3 + 4) << 0x20;
        local_a8 = 2;
        if (*(short *)(((ulong)*(uint *)((long)param_3 + 4) << 0x20 | 7) +
                      (ulong)*(uint *)(uVar3 - 1)) == 0x40) {
          local_a8 = (*(int *)(uVar3 + 7) << 1 ^ 0xffffffffU) & 2;
        }
        uStack_9c = 0;
        uStack_98 = 0xc0;
        if ((*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) & 0xffe0)
            == 0x20) {
          pIVar1 = (Isolate *)StringTable::LookupString();
        }
        uStack_80 = 0;
        uStack_70 = 0;
        local_58 = 0xffffffffffffffff;
        uStack_60 = 0xffffffffffffffff;
        local_88 = pIVar1;
        local_78 = param_3;
        local_68 = param_3;
        LookupIterator::Start<false>((LookupIterator *)&local_a8);
        if (iStack_a4 == 4) {
          uVar3 = *(ulong *)(uStack_90 + 0xa0);
          iVar5 = (int)uVar3;
        }
        else {
          puVar2 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_a8);
          uVar3 = *puVar2;
          iVar5 = (int)uVar3;
        }
        if ((uVar3 & 1) == 0) {
          uVar3 = *(ulong *)(this + 0xb58);
          pIVar1 = this + 0xb58;
          uStack_90 = (ulong)*(uint *)((long)param_3 + 4) << 0x20;
          local_a8 = 2;
          if (*(short *)(((ulong)*(uint *)((long)param_3 + 4) << 0x20 | 7) +
                        (ulong)*(uint *)(uVar3 - 1)) == 0x40) {
            local_a8 = (*(int *)(uVar3 + 7) << 1 ^ 0xffffffffU) & 2;
          }
          uStack_9c = 0;
          uStack_98 = 0xc0;
          if ((*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) & 0xffe0)
              == 0x20) {
            pIVar1 = (Isolate *)StringTable::LookupString();
          }
          uStack_80 = 0;
          uStack_70 = 0;
          local_58 = 0xffffffffffffffff;
          uStack_60 = 0xffffffffffffffff;
          local_88 = pIVar1;
          local_78 = param_3;
          local_68 = param_3;
          LookupIterator::Start<false>((LookupIterator *)&local_a8);
          if (iStack_a4 == 4) {
            uVar3 = *(ulong *)(uStack_90 + 0xa0);
          }
          else {
            puVar2 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_a8);
            uVar3 = *puVar2;
          }
          if (((uVar3 & 1) != 0) &&
             (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x65)) {
            if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar2 = *(ulong **)(this + 0x95a0);
              if (puVar2 == *(ulong **)(this + 0x95a8)) {
                puVar2 = (ulong *)HandleScope::Extend(this);
              }
              *(ulong **)(this + 0x95a0) = puVar2 + 1;
              *puVar2 = uVar3;
            }
            else {
              puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
            }
            MessageLocation::MessageLocation
                      ((MessageLocation *)&local_a8,puVar2,iVar4 >> 1,iVar5 >> 1);
            param_1[1] = CONCAT44(uStack_9c,uStack_a0);
            *param_1 = CONCAT44(iStack_a4,local_a8);
            param_1[3] = uStack_90;
            param_1[2] = CONCAT44(uStack_94,uStack_98);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

