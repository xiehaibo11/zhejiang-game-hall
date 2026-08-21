
/* v8::Object::New(v8::Isolate*, v8::Local<v8::Value>, v8::Local<v8::Name>*, v8::Local<v8::Value>*,
   unsigned long) */

undefined8 v8::Object::New(Factory *param_1,ulong *param_2,long param_3,long param_4,ulong param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  Logger *this;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  Factory *local_a8;
  uint local_94;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (((int)uVar8 != *(int *)((uVar8 & 0xffffffff00000000) + 0xb0) &&
      (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xa9)))) {
    lVar5 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar5 != 0) {
      if (*(code **)(lVar5 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar5 + 0xb738))("v8::Object::New","prototype must be null or object");
        *(undefined1 *)(lVar5 + 0xb6b9) = 1;
        return 0;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Object::New",
               "prototype must be null or object");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x3a5);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar8 = internal::Logger::is_logging(this);
  if ((uVar8 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::Object::New");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  puVar6 = (ulong *)internal::
                    BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                    ::New(param_1,param_5 & 0xffffffff,0,0);
  local_a8 = param_1 + 0x168;
  if (param_5 != 0) {
    uVar8 = 0;
    do {
      puVar13 = *(ulong **)(param_4 + uVar8 * 8);
      puVar14 = *(ulong **)(param_3 + uVar8 * 8);
      uVar9 = *puVar14;
      if (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0x40) {
        uVar4 = *(uint *)(uVar9 + 3);
        local_68 = uVar9;
        if ((uVar4 & 0xc0000003) == 0) {
          local_94 = uVar4 >> 3 & 0xffffff;
        }
        else if (((uVar4 & 3) == 2) ||
                (uVar9 = internal::String::SlowAsArrayIndex((String *)&local_68,&local_94),
                (uVar9 & 1) == 0)) goto LAB_00ec3218;
        if (*(short *)((*(ulong *)local_a8 & 0xffffffff00000000 | 7) +
                      (ulong)*(uint *)(*(ulong *)local_a8 - 1)) != 0x7b) {
          local_a8 = (Factory *)
                     internal::
                     HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
                     New(param_1,param_5 & 0xffffffff,0,0);
        }
        local_a8 = (Factory *)
                   internal::NumberDictionary::Set(param_1,local_a8,local_94,puVar13,0,0xc0);
      }
      else {
LAB_00ec3218:
        uVar9 = *puVar14;
        if ((*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) & 0xffe0)
            == 0x20) {
          puVar14 = (ulong *)internal::StringTable::LookupString(param_1,puVar14);
          uVar9 = *puVar14;
        }
        uVar15 = *puVar6;
        if ((*(uint *)(uVar9 + 3) & 1) == 0) {
          uVar4 = *(uint *)(uVar9 + 3) >> 3;
        }
        else {
          local_68 = uVar9;
          uVar4 = internal::String::ComputeAndSetHash((String *)&local_68);
        }
        uVar3 = (*(int *)(uVar15 + 0xf) >> 1) - 1;
        uVar9 = (ulong)(uVar3 & uVar4);
        lVar11 = uVar9 * 0xc00000000;
        lVar5 = uVar15 + 7;
        iVar12 = *(int *)((lVar11 + 0x1400000000 >> 0x20) + lVar5);
        if (iVar12 == *(int *)(param_1 + 0xa0)) {
LAB_00ec3194:
          puVar6 = (ulong *)internal::
                            BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                            ::Add(param_1,puVar6,puVar14,puVar13,0xc0,0);
        }
        else {
          if (iVar12 != (int)*puVar14) {
            iVar12 = 1;
            do {
              uVar9 = (ulong)((int)uVar9 + iVar12 & uVar3);
              lVar11 = uVar9 * 0xc00000000;
              iVar2 = *(int *)((lVar11 + 0x1400000000 >> 0x20) + lVar5);
              if (iVar2 == *(int *)(param_1 + 0xa0)) goto LAB_00ec3194;
              iVar12 = iVar12 + 1;
            } while (iVar2 != (int)*puVar14);
          }
          uVar15 = *puVar6;
          uVar9 = *puVar13;
          lVar5 = uVar15 + (lVar11 + 0x1800000000 >> 0x20);
          *(int *)(lVar5 + 7) = (int)uVar9;
          if ((uVar9 & 1) != 0) {
            uVar10 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
            lVar5 = lVar5 + 7;
            if (((uint)uVar10 >> 0x12 & 1) != 0) {
              internal::Heap_MarkingBarrierSlow(uVar15,lVar5,uVar9);
              uVar10 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar10 & 0x18) != 0) &&
               ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              internal::Heap_GenerationalBarrierSlow(uVar15,lVar5,uVar9);
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_5);
  }
  uVar7 = internal::Factory::NewSlowJSObjectWithPropertiesAndElements
                    (param_1,param_2,puVar6,local_a8);
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  if (local_90 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar7;
}

