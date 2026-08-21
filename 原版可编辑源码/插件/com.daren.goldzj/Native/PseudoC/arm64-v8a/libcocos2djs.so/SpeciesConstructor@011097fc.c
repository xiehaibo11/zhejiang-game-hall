
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::Object::SpeciesConstructor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Handle<v8::internal::JSFunction>)
    */

Factory * v8::internal::Object::SpeciesConstructor
                    (Factory *param_1,Factory *param_2,Factory *param_3)

{
  undefined8 *puVar1;
  Factory *pFVar2;
  Factory *pFVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 local_98;
  int local_94;
  undefined8 local_8c;
  Factory *local_80;
  Factory *local_78;
  undefined8 uStack_70;
  Factory *local_68;
  undefined8 uStack_60;
  Factory *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar5 = *(ulong *)(param_1 + 0x5d0);
  local_78 = param_1 + 0x5d0;
  local_98 = 3;
  if ((*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x40) &&
     (local_98 = 3, (*(byte *)(uVar5 + 7) & 1) != 0)) {
    local_98 = 0;
  }
  local_8c = 0xc000000000;
  local_80 = param_1;
  if ((*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) & 0xffe0) == 0x20
     ) {
    local_78 = (Factory *)StringTable::LookupString(param_1);
  }
  uStack_70 = 0;
  uStack_60 = 0;
  local_48 = 0xffffffffffffffff;
  uStack_50 = 0xffffffffffffffff;
  local_68 = param_2;
  local_58 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_98);
  if (local_94 == 4) {
    pFVar3 = local_80 + 0xa0;
    uVar5 = *(ulong *)pFVar3;
  }
  else {
    pFVar3 = (Factory *)GetProperty((LookupIterator *)&local_98,false);
    if (pFVar3 == (Factory *)0x0) {
      return (Factory *)0x0;
    }
    uVar5 = *(ulong *)pFVar3;
  }
  if ((uVar5 & 1) != 0) {
    if ((int)uVar5 == *(int *)(param_1 + 0xa0)) {
      return param_3;
    }
    if (0xa8 < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1))) {
      uVar5 = *(ulong *)(param_1 + 0xc48);
      pFVar2 = param_1 + 0xc48;
      local_98 = 3;
      if ((*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x40) &&
         (local_98 = 3, (*(byte *)(uVar5 + 7) & 1) != 0)) {
        local_98 = 0;
      }
      local_8c = 0xc000000000;
      local_80 = param_1;
      if ((*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) & 0xffe0) ==
          0x20) {
        pFVar2 = (Factory *)StringTable::LookupString(param_1);
      }
      uStack_70 = 0;
      uStack_60 = 0;
      local_48 = 0xffffffffffffffff;
      uStack_50 = 0xffffffffffffffff;
      local_78 = pFVar2;
      local_68 = pFVar3;
      local_58 = pFVar3;
      LookupIterator::Start<false>((LookupIterator *)&local_98);
      if (local_94 == 4) {
        pFVar3 = local_80 + 0xa0;
        uVar5 = *(ulong *)pFVar3;
      }
      else {
        pFVar3 = (Factory *)GetProperty((LookupIterator *)&local_98,false);
        if (pFVar3 == (Factory *)0x0) {
          return (Factory *)0x0;
        }
        uVar5 = *(ulong *)pFVar3;
      }
      if ((uVar5 & 1) != 0) {
        if ((int)uVar5 == *(int *)(param_1 + 0xb0)) {
          return param_3;
        }
        if ((int)uVar5 == *(int *)(param_1 + 0xa0)) {
          return param_3;
        }
        if ((*(byte *)((uVar5 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar5 - 1)) >> 6 & 1) !=
            0) {
          return pFVar3;
        }
      }
      uVar4 = 0x126;
      goto LAB_011098e4;
    }
  }
  uVar4 = 0x28;
LAB_011098e4:
  puVar1 = (undefined8 *)Factory::NewTypeError(param_1,uVar4,0,0,0);
  Isolate::Throw((Isolate *)param_1,*puVar1,0);
  return (Factory *)0x0;
}

