
/* v8::internal::compiler::NativeContextData::Serialize(v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::NativeContextData::Serialize(NativeContextData *this,JSHeapBroker *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  JSFunctionData *pJVar6;
  long lVar7;
  int iVar8;
  Zone *pZVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong local_70;
  long local_68;
  
  if (this[0x40] != (NativeContextData)0x0) {
    return;
  }
  this[0x40] = (NativeContextData)0x1;
  TraceScope::TraceScope((TraceScope *)&local_68,param_1,this,"NativeContextData::Serialize");
  puVar20 = *(ulong **)this;
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x2f);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
  *(JSFunctionData **)(this + 0x48) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01730ac8:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x48);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01730ac8;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x7b);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
  *(JSFunctionData **)(this + 0x50) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01730bec:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x50);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01730bec;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x6f);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
  *(JSFunctionData **)(this + 0x58) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01730d10:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x58);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01730d10;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x1ef);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
  *(JSFunctionData **)(this + 0x60) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01730e38:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x60);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01730e38;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 499);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
  *(JSFunctionData **)(this + 0x68) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01730f60:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x68);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01730f60;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x393);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
  *(JSFunctionData **)(this + 0x70) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01731088:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x70);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01731088;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x413);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
  *(JSFunctionData **)(this + 0x78) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_017311b0:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x78);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_017311b0;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x243);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
  *(JSFunctionData **)(this + 0x80) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_017312d8:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x80);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_017312d8;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x30b);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
  *(JSFunctionData **)(this + 0x88) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01731400:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x88);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01731400;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x313);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
  *(JSFunctionData **)(this + 0x90) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01731528:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x90);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01731528;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  local_70 = *puVar20;
  uVar19 = Context::global_object((Context *)&local_70);
  pIVar4 = *(Isolate **)param_1;
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xaa) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSGlobalObject()");
  }
  *(JSFunctionData **)(this + 0x98) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01731654:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x98);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01731654;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x13);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xab) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSGlobalProxy()");
  }
  *(JSFunctionData **)(this + 0xa0) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01731778:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0xa0);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01731778;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x23b);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(ushort *)(*(long *)(pJVar6 + 0x10) + 0x18) < 0xaa) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSObject()");
  }
  *(JSFunctionData **)(this + 0xa8) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_017318a0:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0xa8);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_017318a0;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x1bb);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0xb0) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_017319c8:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0xb0);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_017319c8;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x7f);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0xb8) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01731aec:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0xb8);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01731aec;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x83);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0xc0) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01731c10:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0xc0);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01731c10;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x1bf);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 200) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01731d38:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 200);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01731d38;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x1af);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0xd0) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01731e60:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0xd0);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01731e60;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0xbf);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0xd8) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01731f84:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0xd8);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01731f84;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x1a7);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0xe0) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_017320ac:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0xe0);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_017320ac;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0xdf);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0xe8) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_017321d0:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0xe8);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_017321d0;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x113);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0xf0) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_017322f8:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0xf0);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_017322f8;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x15b);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0xf8) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01732420:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0xf8);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01732420;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x173);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x100) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01732548:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x100);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01732548;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x16b);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x108) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01732670:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x108);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01732670;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x163);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x110) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01732798:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x110);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01732798;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x16f);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x118) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_017328c0:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x118);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_017328c0;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x167);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x120) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_017329e8:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x120);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_017329e8;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x15f);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x128) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01732b10:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x128);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01732b10;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x28f);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x130) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01732c38:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x130);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01732c38;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x29b);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x138) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01732d60:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x138);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01732d60;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x297);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x140) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01732e88:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x140);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01732e88;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x1c3);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x148) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01732fb0:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x148);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01732fb0;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x273);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x84) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsScriptContextTable()");
  }
  *(JSFunctionData **)(this + 0x150) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_017330d8:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x150);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_017330d8;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x217);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa6) goto LAB_017349dc;
  *(JSFunctionData **)(this + 0x158) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01733200:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x158);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01733200;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x223);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa6) goto LAB_017349dc;
  *(JSFunctionData **)(this + 0x160) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01733328:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x160);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01733328;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x21f);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa6) goto LAB_017349dc;
  *(JSFunctionData **)(this + 0x168) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01733450:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x168);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01733450;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x21b);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa6) {
LAB_017349dc:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
  }
  *(JSFunctionData **)(this + 0x170) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01733578:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x170);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01733578;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  if (*(int *)(*(long *)(pIVar4 + 0x9508) + 8) != 0) goto LAB_017335b4;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x47);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x178) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01733950:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x178);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01733950;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x1cf);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x180) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01733a78:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x180);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01733a78;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x1d3);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x188) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01733ba0:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x188);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01733ba0;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x1d7);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 400) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01733cc8:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 400);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01733cc8;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x23f);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
  *(JSFunctionData **)(this + 0x198) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01733df0:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x198);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01733df0;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x287);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
  *(JSFunctionData **)(this + 0x1a0) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01733f18:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) goto LAB_017349c4;
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x1a0);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01733f18;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
  pIVar4 = *(Isolate **)param_1;
  uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + 0x283);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar19;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  pJVar6 = (JSFunctionData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
  if (*(int *)(pJVar6 + 8) != 1) goto LAB_0173499c;
  if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0xa2) {
LAB_017349b0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsMap()");
  }
  *(JSFunctionData **)(this + 0x1a8) = pJVar6;
  iVar8 = *(int *)(pJVar6 + 8);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439))
      goto LAB_0173499c;
LAB_01734040:
      uVar19 = **(ulong **)pJVar6;
      if (((uVar19 & 1) != 0) &&
         (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2))
      goto LAB_0173499c;
    }
    else {
      if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0x439) {
        if (iVar8 != 1) goto LAB_0173499c;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) != 0x439) {
LAB_017349c4:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsJSFunction()");
        }
        JSFunctionData::Serialize(pJVar6,param_1);
        pJVar6 = *(JSFunctionData **)(this + 0x1a8);
        iVar8 = *(int *)(pJVar6 + 8);
      }
      if (iVar8 != 0) {
        if (iVar8 == 2) goto LAB_01734040;
        if (*(short *)(*(long *)(pJVar6 + 0x10) + 0x18) == 0xa2) {
          if (iVar8 != 1) goto LAB_0173499c;
          if (9 < *(ushort *)(pJVar6 + 0x18) - 0x88) {
            MapData::SerializeConstructor((MapData *)pJVar6,param_1);
          }
        }
      }
    }
  }
LAB_017335b4:
  MapData::SerializePrototype(*(MapData **)(this + 0xb8),param_1);
  MapData::SerializePrototype(*(MapData **)(this + 0xc0),param_1);
  lVar12 = *(long *)(this + 0x1b0);
  if ((ulong)(*(long *)(this + 0x1c0) - lVar12 >> 3) < 0x18) {
    pZVar9 = *(Zone **)(this + 0x1c8);
    lVar14 = *(long *)(this + 0x1b8);
    lVar7 = *(long *)(pZVar9 + 0x10);
    if ((ulong)(*(long *)(pZVar9 + 0x18) - lVar7) < 0xc0) {
      lVar7 = Zone::NewExpand(pZVar9,0xc0);
    }
    else {
      *(long *)(pZVar9 + 0x10) = lVar7 + 0xc0;
    }
    puVar2 = *(undefined8 **)(this + 0x1b0);
    puVar17 = *(undefined8 **)(this + 0x1b8);
    puVar1 = (undefined8 *)(lVar7 + (lVar14 - lVar12 >> 3) * 8);
    puVar15 = puVar1;
    while (puVar17 != puVar2) {
      puVar17 = puVar17 + -1;
      puVar15 = puVar15 + -1;
      *puVar15 = *puVar17;
    }
    *(undefined8 **)(this + 0x1b0) = puVar15;
    *(undefined8 **)(this + 0x1b8) = puVar1;
    *(long *)(this + 0x1c0) = lVar7 + 0xc0;
  }
  lVar12 = 0xa9;
  do {
    pIVar4 = *(Isolate **)param_1;
    uVar19 = *puVar20 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar20 + lVar12 * 4 + 7);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar19;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
    }
    lVar7 = JSHeapBroker::GetOrCreateData(param_1,puVar5);
    if (*(int *)(lVar7 + 8) != 1) goto LAB_0173499c;
    if (*(short *)(*(long *)(lVar7 + 0x10) + 0x18) != 0xa2) goto LAB_017349b0;
    plVar11 = *(long **)(this + 0x1b8);
    if (plVar11 < *(long **)(this + 0x1c0)) {
      *plVar11 = lVar7;
      *(long *)(this + 0x1b8) = *(long *)(this + 0x1b8) + 8;
    }
    else {
      lVar14 = (long)plVar11 - *(long *)(this + 0x1b0) >> 3;
      uVar19 = lVar14 + 1;
      if (uVar19 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar10 = (long)*(long **)(this + 0x1c0) - *(long *)(this + 0x1b0);
      uVar16 = lVar10 >> 2;
      if (uVar19 <= uVar16) {
        uVar19 = uVar16;
      }
      if (0x7fffffe < (ulong)(lVar10 >> 3)) {
        uVar19 = 0xfffffff;
      }
      if (uVar19 == 0) {
        lVar10 = 0;
      }
      else {
        pZVar9 = *(Zone **)(this + 0x1c8);
        uVar16 = uVar19 * 8;
        lVar10 = *(long *)(pZVar9 + 0x10);
        if (uVar16 < (ulong)(*(long *)(pZVar9 + 0x18) - lVar10) ||
            uVar16 - (*(long *)(pZVar9 + 0x18) - lVar10) == 0) {
          *(ulong *)(pZVar9 + 0x10) = lVar10 + uVar16;
        }
        else {
          lVar10 = Zone::NewExpand(pZVar9,uVar16);
        }
      }
      plVar11 = (long *)(lVar10 + lVar14 * 8);
      plVar13 = plVar11 + 1;
      *plVar11 = lVar7;
      plVar3 = *(long **)(this + 0x1b0);
      plVar18 = *(long **)(this + 0x1b8);
      while (plVar18 != plVar3) {
        plVar18 = plVar18 + -1;
        plVar11 = plVar11 + -1;
        *plVar11 = *plVar18;
      }
      *(long **)(this + 0x1b0) = plVar11;
      *(long **)(this + 0x1b8) = plVar13;
      *(ulong *)(this + 0x1c0) = lVar10 + uVar19 * 8;
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0xc1);
  local_70 = *puVar20;
  uVar19 = Context::scope_info((Context *)&local_70);
  pIVar4 = *(Isolate **)param_1;
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar20 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar20 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar20 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar20 + 1;
    *puVar20 = uVar19;
  }
  else {
    puVar20 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar19);
  }
  lVar12 = JSHeapBroker::GetOrCreateData(param_1,puVar20);
  if (*(int *)(lVar12 + 8) == 1) {
    if (*(short *)(*(long *)(lVar12 + 0x10) + 0x18) == 0x83) {
      *(long *)(this + 0x1d0) = lVar12;
      *(int *)(local_68 + 0x170) = *(int *)(local_68 + 0x170) + -1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsScopeInfo()");
  }
LAB_0173499c:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

