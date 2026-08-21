
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessBuiltinCall(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::base::Optional<v8::internal::compiler::Hints>,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> const&, v8::internal::SpeculationMode,
   v8::internal::compiler::MissingArgumentsPolicy, v8::internal::compiler::Hints*) */

void v8::internal::compiler::SerializerForBackgroundCompilation::ProcessBuiltinCall
               (SerializerForBackgroundCompilation *param_1,long *param_2,undefined8 param_3,
               undefined8 param_4,long *param_5,int param_6,undefined4 param_7,undefined8 *param_8)

{
  int iVar1;
  uint uVar2;
  char *__s;
  basic_ostream *pbVar3;
  size_t sVar4;
  Zone *pZVar5;
  undefined8 uVar6;
  ObjectRef *pOVar7;
  long lVar8;
  undefined8 *puVar9;
  Hints *pHVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [8];
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  Zone *pZVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  ObjectRef aOStack_f8 [16];
  ObjectRef aOStack_e8 [16];
  ObjectRef aOStack_d8 [16];
  ObjectRef aOStack_c8 [16];
  long *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  Zone *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_70 [8];
  undefined8 *local_68;
  undefined8 *local_60;
  Zone *local_58;
  
  iVar1 = *(int *)(*param_2 + 3) >> 1;
  __s = (char *)Builtins::name(iVar1);
  if (((*(JSHeapBroker **)param_1)[0x74] != (JSHeapBroker)0x0) &&
     (FLAG_trace_heap_broker_verbose != '\0')) {
    pbVar3 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)param_1);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,"Serializing for call to builtin ",0x20);
    sVar4 = strlen(__s);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,__s,sVar4);
    local_b8 = (long *)CONCAT71(local_b8._1_7_,10);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar3,(char *)&local_b8,1);
  }
  if (iVar1 < 0x29a) {
    switch(iVar1) {
    case 0x1ac:
      if ((ulong)(param_5[1] - *param_5 >> 3) < 2) {
        lVar11 = *(long *)(param_1 + 0x20);
        lVar13 = **(long **)param_1;
        if (lVar11 == 0) {
          lVar11 = ZoneStats::NewEmptyZone
                             (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
          *(long *)(param_1 + 0x20) = lVar11;
        }
        local_b8 = (long *)0x0;
        Hints::AddConstant((Hints *)&local_b8,lVar13 + 0xa0,lVar11);
        if (local_b8 != (long *)0x0) {
          for (puVar15 = (undefined8 *)*local_b8; puVar15 != (undefined8 *)0x0;
              puVar15 = (undefined8 *)puVar15[1]) {
            ObjectRef::ObjectRef((ObjectRef *)&local_b8,*(undefined8 *)param_1,*puVar15,1);
            uVar12 = ObjectRef::IsJSObject((ObjectRef *)&local_b8);
            if ((uVar12 & 1) != 0) {
              auVar22 = ObjectRef::AsJSObject((ObjectRef *)&local_b8);
              _local_70 = auVar22;
              JSObjectRef::SerializeObjectCreateMap((JSObjectRef *)local_70);
            }
          }
        }
      }
      else {
        plVar17 = *(long **)(*param_5 + 8);
        if (plVar17 != (long *)0x0) {
          for (puVar15 = (undefined8 *)*plVar17; puVar15 != (undefined8 *)0x0;
              puVar15 = (undefined8 *)puVar15[1]) {
            ObjectRef::ObjectRef((ObjectRef *)&local_b8,*(undefined8 *)param_1,*puVar15,1);
            uVar12 = ObjectRef::IsJSObject((ObjectRef *)&local_b8);
            if ((uVar12 & 1) != 0) {
              auVar22 = ObjectRef::AsJSObject((ObjectRef *)&local_b8);
              _local_70 = auVar22;
              JSObjectRef::SerializeObjectCreateMap((JSObjectRef *)local_70);
            }
          }
        }
      }
      break;
    case 0x1ad:
    case 0x1ae:
    case 0x1af:
    case 0x1b0:
    case 0x1b1:
    case 0x1b2:
    case 0x1b3:
    case 0x1b4:
    case 0x1b5:
    case 0x1b6:
    case 0x1b7:
    case 0x1b8:
    case 0x1b9:
    case 0x1ba:
    case 0x1bb:
    case 0x1bc:
    case 0x1bd:
    case 0x1be:
    case 0x1bf:
    case 0x1c1:
    case 0x1c3:
    case 0x1c4:
    case 0x1c5:
    case 0x1c6:
    case 0x1c7:
    case 0x1c8:
    case 0x1c9:
    case 0x1ca:
    case 0x1cb:
    case 0x1cc:
    case 0x1cd:
    case 0x1ce:
    case 0x1cf:
    case 0x1d2:
    case 0x1d3:
    case 0x1d4:
    case 0x1d6:
    case 0x1d7:
    case 0x1d9:
    case 0x1da:
    case 0x1db:
    case 0x1dc:
    case 0x1dd:
    case 0x1de:
    case 0x1df:
    case 0x1e0:
    case 0x1e1:
    case 0x1e2:
    case 0x1e5:
    case 0x1e6:
    case 0x1e7:
    case 0x1e8:
    case 0x1e9:
    case 0x1ea:
    case 0x1eb:
    case 0x1ec:
    case 0x1ed:
    case 0x1ee:
    case 0x1ef:
    case 0x1f0:
    case 0x1f1:
    case 0x1f2:
    case 499:
    case 500:
    case 0x1f5:
    case 0x1f6:
    case 0x1f7:
    case 0x1f8:
    case 0x1f9:
    case 0x1fa:
    case 0x1fb:
    case 0x1fc:
    case 0x1fd:
    case 0x1fe:
    case 0x1ff:
    case 0x200:
    case 0x201:
    case 0x202:
    case 0x203:
    case 0x204:
    case 0x205:
    case 0x206:
      break;
    case 0x1c0:
      if (1 < (ulong)(param_5[1] - *param_5 >> 3)) {
        ProcessHintsForHasInPrototypeChain(param_1,(Hints *)(*param_5 + 8));
      }
      break;
    case 0x1c2:
      pHVar10 = (Hints *)*param_5;
      if ((Hints *)param_5[1] == pHVar10) {
        return;
      }
      goto LAB_012ca29c;
    case 0x1d0:
    case 0x1d1:
    case 0x1d8:
      if ((param_6 != 1) && ((Hints *)param_5[1] != (Hints *)*param_5)) {
        ProcessMapHintsForPromises(param_1,(Hints *)*param_5);
      }
      break;
    case 0x1d5:
      lVar11 = param_5[1] - *param_5;
      if (lVar11 != 0) {
        if ((ulong)(lVar11 >> 3) < 2) {
          lVar11 = *(long *)(param_1 + 0x20);
          lVar13 = **(long **)param_1;
          if (lVar11 == 0) {
            lVar11 = ZoneStats::NewEmptyZone
                               (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
            *(long *)(param_1 + 0x20) = lVar11;
          }
          local_b8 = (long *)0x0;
          Hints::AddConstant((Hints *)&local_b8,lVar13 + 0xa0,lVar11);
        }
        else {
          local_b8 = *(long **)(*param_5 + 8);
        }
        ProcessHintsForPromiseResolve(param_1,(Hints *)&local_b8);
      }
      break;
    case 0x1e3:
    case 0x1e4:
      if ((1 < (ulong)(param_5[1] - *param_5 >> 3)) &&
         (plVar17 = *(long **)(*param_5 + 8), plVar17 != (long *)0x0)) {
        for (puVar15 = (undefined8 *)*plVar17; puVar15 != (undefined8 *)0x0;
            puVar15 = (undefined8 *)puVar15[1]) {
          uVar12 = *(ulong *)*puVar15;
          if (((uVar12 & 1) != 0) &&
             (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x439)
             ) {
            ObjectRef::ObjectRef((ObjectRef *)&local_b8,*(undefined8 *)param_1,(ulong *)*puVar15,0);
            uVar12 = ObjectRef::IsJSFunction((ObjectRef *)&local_b8);
            if ((uVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","IsJSFunction()");
            }
            JSFunctionRef::Serialize((JSFunctionRef *)&local_b8);
          }
        }
      }
      break;
    case 0x207:
      plVar17 = *(long **)param_1;
      uVar6 = Builtins::builtin_handle((Builtins *)(*plVar17 + 0x9e00),0x37);
      ObjectRef::ObjectRef(aOStack_e8,plVar17,uVar6,1);
      plVar17 = *(long **)param_1;
      pOVar7 = aOStack_f8;
      lVar11 = *plVar17 + 0x3f8;
LAB_012ca2e4:
      ObjectRef::ObjectRef(pOVar7,plVar17,lVar11,1);
      break;
    default:
      switch(iVar1) {
      case 0x140:
        lVar11 = param_5[1] - *param_5;
        if (lVar11 != 0) {
          if ((ulong)(lVar11 >> 3) < 2) {
            lVar11 = *(long *)(param_1 + 0x20);
            lVar13 = **(long **)param_1;
            if (lVar11 == 0) {
              lVar11 = ZoneStats::NewEmptyZone
                                 (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
              *(long *)(param_1 + 0x20) = lVar11;
            }
            local_b8 = (long *)0x0;
            Hints::AddConstant((Hints *)&local_b8,lVar13 + 0xa0,lVar11);
            local_58 = *(Zone **)(param_1 + 0x20);
            plVar17 = local_b8;
          }
          else {
            plVar17 = *(long **)(*param_5 + 8);
            local_58 = *(Zone **)(param_1 + 0x20);
          }
          if (local_58 == (Zone *)0x0) {
            local_58 = (Zone *)ZoneStats::NewEmptyZone
                                         (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10)
                                         );
            *(Zone **)(param_1 + 0x20) = local_58;
          }
          local_70 = (undefined1  [8])0x0;
          local_68 = (undefined8 *)0x0;
          local_60 = (undefined8 *)0x0;
          puVar15 = *(undefined8 **)(local_58 + 0x10);
          if ((ulong)(*(long *)(local_58 + 0x18) - (long)puVar15) < 8) {
            puVar15 = (undefined8 *)Zone::NewExpand(local_58,8);
          }
          else {
            *(undefined8 **)(local_58 + 0x10) = puVar15 + 1;
          }
          local_60 = puVar15 + 1;
          *puVar15 = plVar17;
          local_68 = puVar15 + 1;
          puVar19 = *(undefined8 **)*param_5;
          if (puVar19 != (undefined8 *)0x0) {
            puVar9 = (undefined8 *)*puVar19;
            local_70 = (undefined1  [8])puVar15;
            if (puVar9 != (undefined8 *)0x0) {
              do {
                ProcessCalleeForCallOrConstruct(param_1,*puVar9,0,0,local_70,param_6,1,param_8);
                puVar9 = (undefined8 *)puVar9[1];
              } while (puVar9 != (undefined8 *)0x0);
              puVar19 = *(undefined8 **)*param_5;
              if (puVar19 == (undefined8 *)0x0) {
                return;
              }
            }
            for (puVar15 = (undefined8 *)puVar19[2]; puVar15 != (undefined8 *)0x0;
                puVar15 = (undefined8 *)puVar15[3]) {
              local_b8 = (long *)0x0;
              local_b0._1_7_ = (undefined7)((ulong)local_b0 >> 8);
              local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,1);
              local_98 = (Zone *)puVar15[2];
              puStack_a0 = (undefined8 *)puVar15[1];
              local_a8 = (undefined8 *)*puVar15;
              ProcessCalleeForCallOrConstruct(param_1,&local_b8,0,0,local_70,param_6,1,param_8);
            }
          }
        }
        break;
      case 0x141:
        break;
      case 0x142:
        if ((param_6 != 1) && (pHVar10 = (Hints *)*param_5, (Hints *)param_5[1] != pHVar10)) {
          ProcessHintsForFunctionBind(param_1,pHVar10);
          puVar19 = (undefined8 *)param_5[1];
          pZVar20 = *(Zone **)(param_1 + 0x20);
          puVar15 = (undefined8 *)(*param_5 + 8);
          if (pZVar20 == (Zone *)0x0) {
            pZVar20 = (Zone *)ZoneStats::NewEmptyZone
                                        (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10))
            ;
            *(Zone **)(param_1 + 0x20) = pZVar20;
          }
          uVar12 = (long)puVar19 - (long)puVar15;
          if (uVar12 == 0) {
            puVar18 = (undefined8 *)0x0;
            puVar9 = (undefined8 *)0x0;
          }
          else {
            if ((ulong)((long)uVar12 >> 3) >> 0x1c != 0) goto LAB_012cadc0;
            puVar9 = *(undefined8 **)(pZVar20 + 0x10);
            if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)puVar9) < uVar12) {
              puVar9 = (undefined8 *)Zone::NewExpand(pZVar20,uVar12);
              puVar18 = puVar9;
            }
            else {
              *(ulong *)(pZVar20 + 0x10) = (long)puVar9 + uVar12;
              puVar18 = puVar9;
            }
            for (; puVar15 != puVar19; puVar15 = puVar15 + 1) {
              *puVar9 = *puVar15;
              puVar9 = puVar9 + 1;
            }
          }
          local_b8 = *(long **)pHVar10;
          uVar12 = (long)puVar9 - (long)puVar18;
          local_b0 = (undefined8 *)0x0;
          local_a8 = (undefined8 *)0x0;
          puStack_a0 = (undefined8 *)0x0;
          local_98 = pZVar20;
          if (uVar12 != 0) {
            if ((ulong)((long)uVar12 >> 3) >> 0x1c != 0) goto LAB_012cadc0;
            puVar15 = *(undefined8 **)(pZVar20 + 0x10);
            if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)puVar15) < uVar12) {
              puVar15 = (undefined8 *)Zone::NewExpand(pZVar20,uVar12);
            }
            else {
              *(ulong *)(pZVar20 + 0x10) = (long)puVar15 + uVar12;
            }
            puStack_a0 = puVar15 + ((long)uVar12 >> 3);
            local_a8 = puVar15;
            for (; local_b0 = puVar15, puVar18 != puVar9; puVar18 = puVar18 + 1) {
              *local_a8 = *puVar18;
              local_a8 = local_a8 + 1;
            }
          }
          pZVar20 = *(Zone **)(param_1 + 0x20);
          if (pZVar20 == (Zone *)0x0) {
            pZVar20 = (Zone *)ZoneStats::NewEmptyZone
                                        (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10))
            ;
            *(Zone **)(param_1 + 0x20) = pZVar20;
          }
          puVar15 = (undefined8 *)*param_8;
          if (puVar15 == (undefined8 *)0x0) {
            puVar15 = *(undefined8 **)(pZVar20 + 0x10);
            if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)puVar15) < 0x30) {
              puVar15 = (undefined8 *)Zone::NewExpand(pZVar20,0x30);
            }
            else {
              *(undefined8 **)(pZVar20 + 0x10) = puVar15 + 6;
            }
            puVar15[4] = 0;
            puVar15[5] = pZVar20;
            puVar15[1] = 0;
            *puVar15 = 0;
            puVar15[3] = 0;
            puVar15[2] = 0;
            *param_8 = puVar15;
            pZVar20 = (Zone *)puVar15[5];
          }
          else if ((Zone *)puVar15[5] != pZVar20) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","zone == impl_->zone_");
          }
          FunctionalSet<v8::internal::compiler::VirtualBoundFunction,std::__ndk1::equal_to<v8::internal::compiler::VirtualBoundFunction>>
          ::Add((FunctionalSet<v8::internal::compiler::VirtualBoundFunction,std::__ndk1::equal_to<v8::internal::compiler::VirtualBoundFunction>>
                 *)(puVar15 + 4),(VirtualBoundFunction *)&local_b8,pZVar20);
        }
        break;
      case 0x143:
        puVar15 = (undefined8 *)param_5[1];
        if (puVar15 != (undefined8 *)*param_5) {
          local_58 = *(Zone **)(param_1 + 0x20);
          puVar19 = (undefined8 *)*param_5 + 1;
          if (local_58 == (Zone *)0x0) {
            local_58 = (Zone *)ZoneStats::NewEmptyZone
                                         (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10)
                                         );
            *(Zone **)(param_1 + 0x20) = local_58;
          }
          uVar12 = (long)puVar15 - (long)puVar19;
          local_70 = (undefined1  [8])0x0;
          local_68 = (undefined8 *)0x0;
          local_60 = (undefined8 *)0x0;
          if (uVar12 != 0) {
            if ((ulong)((long)uVar12 >> 3) >> 0x1c != 0) goto LAB_012cadc0;
            puVar9 = *(undefined8 **)(local_58 + 0x10);
            if ((ulong)(*(long *)(local_58 + 0x18) - (long)puVar9) < uVar12) {
              puVar9 = (undefined8 *)Zone::NewExpand(local_58,uVar12);
            }
            else {
              *(ulong *)(local_58 + 0x10) = (long)puVar9 + uVar12;
            }
            local_60 = puVar9 + ((long)uVar12 >> 3);
            local_68 = puVar9;
            for (; local_70 = (undefined1  [8])puVar9, puVar19 != puVar15; puVar19 = puVar19 + 1) {
              *local_68 = *puVar19;
              local_68 = local_68 + 1;
            }
          }
          puVar15 = *(undefined8 **)*param_5;
          if (puVar15 != (undefined8 *)0x0) {
            puVar19 = (undefined8 *)*puVar15;
            if (puVar19 != (undefined8 *)0x0) {
              do {
                ProcessCalleeForCallOrConstruct
                          (param_1,*puVar19,0,0,local_70,param_6,param_7,param_8);
                puVar19 = (undefined8 *)puVar19[1];
              } while (puVar19 != (undefined8 *)0x0);
              puVar15 = *(undefined8 **)*param_5;
              if (puVar15 == (undefined8 *)0x0) {
                return;
              }
            }
            for (puVar15 = (undefined8 *)puVar15[2]; puVar15 != (undefined8 *)0x0;
                puVar15 = (undefined8 *)puVar15[3]) {
              local_b8 = (long *)0x0;
              local_b0._1_7_ = (undefined7)((ulong)local_b0 >> 8);
              local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,1);
              local_98 = (Zone *)puVar15[2];
              puStack_a0 = (undefined8 *)puVar15[1];
              local_a8 = (undefined8 *)*puVar15;
              ProcessCalleeForCallOrConstruct
                        (param_1,&local_b8,0,0,local_70,param_6,param_7,param_8);
            }
          }
        }
        break;
      case 0x144:
        pHVar10 = (Hints *)*param_5;
        if (1 < (ulong)(param_5[1] - (long)pHVar10 >> 3)) {
          ProcessHintsForOrdinaryHasInstance(param_1,pHVar10,pHVar10 + 8);
        }
        break;
      default:
        if (iVar1 != 0x182) {
          return;
        }
        plVar17 = *(long **)param_1;
        uVar6 = Builtins::builtin_handle((Builtins *)(*plVar17 + 0x9e00),0x37);
        ObjectRef::ObjectRef(aOStack_c8,plVar17,uVar6,1);
        plVar17 = *(long **)param_1;
        pOVar7 = aOStack_d8;
        lVar11 = *plVar17 + 0x3f0;
        goto LAB_012ca2e4;
      }
    }
  }
  else {
    uVar2 = iVar1 - 0x29a;
    if (uVar2 < 0x36) {
      if ((1L << ((ulong)uVar2 & 0x3f) & 0x20000800044211U) != 0) {
        if (param_6 == 1) {
          return;
        }
        lVar11 = *param_5;
        uVar12 = param_5[1] - lVar11 >> 3;
        if (uVar12 < 2) {
          return;
        }
        pZVar20 = *(Zone **)(param_1 + 0x20);
        lVar13 = lVar11;
        if (pZVar20 == (Zone *)0x0) {
          pZVar20 = (Zone *)ZoneStats::NewEmptyZone
                                      (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
          *(Zone **)(param_1 + 0x20) = pZVar20;
          uVar12 = param_5[1] - *param_5 >> 3;
          lVar13 = *param_5;
        }
        local_70 = (undefined1  [8])0x0;
        local_68 = (undefined8 *)0x0;
        local_60 = (undefined8 *)0x0;
        local_58 = pZVar20;
        if (uVar12 < 3) {
          lVar13 = **(long **)param_1;
          pZVar5 = pZVar20;
          if (pZVar20 == (Zone *)0x0) {
            pZVar5 = (Zone *)ZoneStats::NewEmptyZone
                                       (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
            *(Zone **)(param_1 + 0x20) = pZVar5;
          }
          local_b8 = (long *)0x0;
          Hints::AddConstant((Hints *)&local_b8,lVar13 + 0xa0,pZVar5);
          plVar17 = local_b8;
        }
        else {
          plVar17 = *(long **)(lVar13 + 0x10);
        }
        puVar15 = *(undefined8 **)(pZVar20 + 0x10);
        if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)puVar15) < 8) {
          puVar15 = (undefined8 *)Zone::NewExpand(pZVar20,8);
        }
        else {
          *(undefined8 **)(pZVar20 + 0x10) = puVar15 + 1;
        }
        local_60 = puVar15 + 1;
        *puVar15 = plVar17;
        while ((undefined1  [8])local_68 != local_70) {
          local_68 = local_68 + -1;
          puVar15 = puVar15 + -1;
          *puVar15 = *local_68;
        }
        uVar21 = (long)local_60 - (long)puVar15 >> 3;
        uVar12 = uVar21 + 1;
        local_70 = (undefined1  [8])puVar15;
        local_68 = local_60;
        if (uVar12 >> 0x1c == 0) {
          uVar14 = (long)local_60 - (long)puVar15 >> 2;
          if (uVar12 <= uVar14) {
            uVar12 = uVar14;
          }
          if (0x7fffffe < uVar21) {
            uVar12 = 0xfffffff;
          }
          if (uVar12 == 0) {
            lVar13 = 0;
          }
          else {
            uVar14 = uVar12 * 8;
            lVar13 = *(long *)(local_58 + 0x10);
            if (uVar14 < (ulong)(*(long *)(local_58 + 0x18) - lVar13) ||
                uVar14 - (*(long *)(local_58 + 0x18) - lVar13) == 0) {
              *(ulong *)(local_58 + 0x10) = lVar13 + uVar14;
            }
            else {
              lVar13 = Zone::NewExpand(local_58,uVar14);
            }
          }
          auVar16 = (undefined1  [8])(lVar13 + uVar21 * 8);
          puVar15 = (undefined8 *)((long)auVar16 + 8);
          *(undefined8 *)auVar16 = 0;
          local_60 = (undefined8 *)(lVar13 + uVar12 * 8);
          while ((undefined1  [8])local_68 != local_70) {
            local_68 = local_68 + -1;
            auVar16 = (undefined1  [8])((long)auVar16 + -8);
            *(undefined8 *)auVar16 = *local_68;
          }
          if (puVar15 < local_60) {
            *puVar15 = 0;
          }
          else {
            lVar13 = (long)puVar15 - (long)auVar16 >> 3;
            uVar12 = lVar13 + 1;
            local_70 = auVar16;
            local_68 = puVar15;
            if (uVar12 >> 0x1c != 0) goto LAB_012cadc0;
            uVar21 = (long)local_60 - (long)auVar16 >> 2;
            if (uVar12 <= uVar21) {
              uVar12 = uVar21;
            }
            if (0x7fffffe < (ulong)((long)local_60 - (long)auVar16 >> 3)) {
              uVar12 = 0xfffffff;
            }
            if (uVar12 == 0) {
              lVar8 = 0;
            }
            else {
              uVar21 = uVar12 * 8;
              lVar8 = *(long *)(local_58 + 0x10);
              if (uVar21 < (ulong)(*(long *)(local_58 + 0x18) - lVar8) ||
                  uVar21 - (*(long *)(local_58 + 0x18) - lVar8) == 0) {
                *(ulong *)(local_58 + 0x10) = lVar8 + uVar21;
              }
              else {
                lVar8 = Zone::NewExpand(local_58,uVar21);
              }
            }
            puVar15 = (undefined8 *)(lVar8 + lVar13 * 8);
            *puVar15 = 0;
            local_60 = (undefined8 *)(lVar8 + uVar12 * 8);
            auVar16 = (undefined1  [8])puVar15;
            while ((undefined1  [8])local_68 != local_70) {
              local_68 = local_68 + -1;
              auVar16 = (undefined1  [8])((long)auVar16 + -8);
              *(undefined8 *)auVar16 = *local_68;
            }
          }
          local_70 = auVar16;
          puVar15 = puVar15 + 1;
          puVar19 = (undefined8 *)*param_5;
          if (puVar15 == local_60) {
            lVar13 = (long)puVar15 - (long)local_70 >> 3;
            uVar12 = lVar13 + 1;
            local_68 = puVar15;
            if (uVar12 >> 0x1c != 0) goto LAB_012cadc0;
            uVar21 = (long)local_60 - (long)local_70 >> 2;
            if (uVar12 <= uVar21) {
              uVar12 = uVar21;
            }
            if (0x7fffffe < (ulong)((long)local_60 - (long)local_70 >> 3)) {
              uVar12 = 0xfffffff;
            }
            if (uVar12 == 0) {
              lVar8 = 0;
            }
            else {
              uVar21 = uVar12 * 8;
              lVar8 = *(long *)(local_58 + 0x10);
              if (uVar21 < (ulong)(*(long *)(local_58 + 0x18) - lVar8) ||
                  uVar21 - (*(long *)(local_58 + 0x18) - lVar8) == 0) {
                *(ulong *)(local_58 + 0x10) = lVar8 + uVar21;
              }
              else {
                lVar8 = Zone::NewExpand(local_58,uVar21);
              }
            }
            puVar15 = (undefined8 *)(lVar8 + lVar13 * 8);
            *puVar15 = *puVar19;
            local_60 = (undefined8 *)(lVar8 + uVar12 * 8);
            auVar16 = (undefined1  [8])puVar15;
            while ((undefined1  [8])local_68 != local_70) {
              local_68 = local_68 + -1;
              auVar16 = (undefined1  [8])((long)auVar16 + -8);
              *(undefined8 *)auVar16 = *local_68;
            }
          }
          else {
            *puVar15 = *puVar19;
            auVar16 = local_70;
          }
          local_70 = auVar16;
          local_68 = puVar15 + 1;
          puVar15 = *(undefined8 **)(lVar11 + 8);
          if (puVar15 == (undefined8 *)0x0) {
            return;
          }
          puVar19 = (undefined8 *)*puVar15;
          if (puVar19 != (undefined8 *)0x0) {
            do {
              ProcessCalleeForCallOrConstruct(param_1,*puVar19,0,0,local_70,param_6,0,param_8);
              puVar19 = (undefined8 *)puVar19[1];
            } while (puVar19 != (undefined8 *)0x0);
            puVar15 = *(undefined8 **)(lVar11 + 8);
            if (puVar15 == (undefined8 *)0x0) {
              return;
            }
          }
          for (puVar15 = (undefined8 *)puVar15[2]; puVar15 != (undefined8 *)0x0;
              puVar15 = (undefined8 *)puVar15[3]) {
            local_98 = (Zone *)puVar15[2];
            puStack_a0 = (undefined8 *)puVar15[1];
            local_a8 = (undefined8 *)*puVar15;
            local_b8 = (long *)0x0;
            local_b0._1_7_ = (undefined7)((ulong)local_b0 >> 8);
            local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,1);
            local_90 = local_a8;
            uStack_88 = puStack_a0;
            local_80 = local_98;
            ProcessCalleeForCallOrConstruct(param_1,&local_b8,0,0,local_70,param_6,0,param_8);
          }
          return;
        }
LAB_012cadc0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((1L << ((ulong)uVar2 & 0x3f) & 0x420000000000U) != 0) {
        if (param_6 == 1) {
          return;
        }
        lVar11 = *param_5;
        if ((ulong)(param_5[1] - lVar11 >> 3) < 2) {
          return;
        }
        pZVar20 = *(Zone **)(param_1 + 0x20);
        if (pZVar20 == (Zone *)0x0) {
          pZVar20 = (Zone *)ZoneStats::NewEmptyZone
                                      (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
          *(Zone **)(param_1 + 0x20) = pZVar20;
        }
        local_70 = (undefined1  [8])0x0;
        local_68 = (undefined8 *)0x0;
        local_60 = (undefined8 *)0x0;
        lVar13 = **(long **)param_1;
        local_58 = pZVar20;
        if (pZVar20 == (Zone *)0x0) {
          pZVar20 = (Zone *)ZoneStats::NewEmptyZone
                                      (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
          *(Zone **)(param_1 + 0x20) = pZVar20;
        }
        local_b8 = (long *)0x0;
        Hints::AddConstant((Hints *)&local_b8,lVar13 + 0xa0,pZVar20);
        plVar17 = local_b8;
        if (local_68 < local_60) {
          *local_68 = local_b8;
          puVar15 = local_68;
          auVar16 = local_70;
        }
        else {
          lVar13 = (long)local_68 - (long)local_70 >> 3;
          uVar12 = lVar13 + 1;
          if (uVar12 >> 0x1c != 0) goto LAB_012cadc0;
          uVar21 = (long)local_60 - (long)local_70 >> 2;
          if (uVar12 <= uVar21) {
            uVar12 = uVar21;
          }
          if (0x7fffffe < (ulong)((long)local_60 - (long)local_70 >> 3)) {
            uVar12 = 0xfffffff;
          }
          if (uVar12 == 0) {
            lVar8 = 0;
          }
          else {
            uVar21 = uVar12 * 8;
            lVar8 = *(long *)(local_58 + 0x10);
            if (uVar21 < (ulong)(*(long *)(local_58 + 0x18) - lVar8) ||
                uVar21 - (*(long *)(local_58 + 0x18) - lVar8) == 0) {
              *(ulong *)(local_58 + 0x10) = lVar8 + uVar21;
            }
            else {
              lVar8 = Zone::NewExpand(local_58,uVar21);
            }
          }
          puVar15 = (undefined8 *)(lVar8 + lVar13 * 8);
          *puVar15 = plVar17;
          local_60 = (undefined8 *)(lVar8 + uVar12 * 8);
          auVar16 = (undefined1  [8])puVar15;
          while ((undefined1  [8])local_68 != local_70) {
            local_68 = local_68 + -1;
            auVar16 = (undefined1  [8])((long)auVar16 + -8);
            *(undefined8 *)auVar16 = *local_68;
          }
        }
        local_70 = auVar16;
        puVar15 = puVar15 + 1;
        if (puVar15 < local_60) {
          *puVar15 = 0;
          auVar16 = local_70;
        }
        else {
          lVar13 = (long)puVar15 - (long)local_70 >> 3;
          uVar12 = lVar13 + 1;
          local_68 = puVar15;
          if (uVar12 >> 0x1c != 0) goto LAB_012cadc0;
          uVar21 = (long)local_60 - (long)local_70 >> 2;
          if (uVar12 <= uVar21) {
            uVar12 = uVar21;
          }
          if (0x7fffffe < (ulong)((long)local_60 - (long)local_70 >> 3)) {
            uVar12 = 0xfffffff;
          }
          if (uVar12 == 0) {
            lVar8 = 0;
          }
          else {
            uVar21 = uVar12 * 8;
            lVar8 = *(long *)(local_58 + 0x10);
            if (uVar21 < (ulong)(*(long *)(local_58 + 0x18) - lVar8) ||
                uVar21 - (*(long *)(local_58 + 0x18) - lVar8) == 0) {
              *(ulong *)(local_58 + 0x10) = lVar8 + uVar21;
            }
            else {
              lVar8 = Zone::NewExpand(local_58,uVar21);
            }
          }
          puVar15 = (undefined8 *)(lVar8 + lVar13 * 8);
          *puVar15 = 0;
          local_60 = (undefined8 *)(lVar8 + uVar12 * 8);
          auVar16 = (undefined1  [8])puVar15;
          while ((undefined1  [8])local_68 != local_70) {
            local_68 = local_68 + -1;
            auVar16 = (undefined1  [8])((long)auVar16 + -8);
            *(undefined8 *)auVar16 = *local_68;
          }
        }
        local_70 = auVar16;
        puVar15 = puVar15 + 1;
        if (puVar15 < local_60) {
          *puVar15 = 0;
          auVar16 = local_70;
        }
        else {
          lVar13 = (long)puVar15 - (long)local_70 >> 3;
          uVar12 = lVar13 + 1;
          local_68 = puVar15;
          if (uVar12 >> 0x1c != 0) goto LAB_012cadc0;
          uVar21 = (long)local_60 - (long)local_70 >> 2;
          if (uVar12 <= uVar21) {
            uVar12 = uVar21;
          }
          if (0x7fffffe < (ulong)((long)local_60 - (long)local_70 >> 3)) {
            uVar12 = 0xfffffff;
          }
          if (uVar12 == 0) {
            lVar8 = 0;
          }
          else {
            uVar21 = uVar12 * 8;
            lVar8 = *(long *)(local_58 + 0x10);
            if (uVar21 < (ulong)(*(long *)(local_58 + 0x18) - lVar8) ||
                uVar21 - (*(long *)(local_58 + 0x18) - lVar8) == 0) {
              *(ulong *)(local_58 + 0x10) = lVar8 + uVar21;
            }
            else {
              lVar8 = Zone::NewExpand(local_58,uVar21);
            }
          }
          puVar15 = (undefined8 *)(lVar8 + lVar13 * 8);
          *puVar15 = 0;
          local_60 = (undefined8 *)(lVar8 + uVar12 * 8);
          auVar16 = (undefined1  [8])puVar15;
          while ((undefined1  [8])local_68 != local_70) {
            local_68 = local_68 + -1;
            auVar16 = (undefined1  [8])((long)auVar16 + -8);
            *(undefined8 *)auVar16 = *local_68;
          }
        }
        local_70 = auVar16;
        puVar15 = puVar15 + 1;
        if (puVar15 < local_60) {
          *puVar15 = 0;
          auVar16 = local_70;
        }
        else {
          lVar13 = (long)puVar15 - (long)local_70 >> 3;
          uVar12 = lVar13 + 1;
          local_68 = puVar15;
          if (uVar12 >> 0x1c != 0) goto LAB_012cadc0;
          uVar21 = (long)local_60 - (long)local_70 >> 2;
          if (uVar12 <= uVar21) {
            uVar12 = uVar21;
          }
          if (0x7fffffe < (ulong)((long)local_60 - (long)local_70 >> 3)) {
            uVar12 = 0xfffffff;
          }
          if (uVar12 == 0) {
            lVar8 = 0;
          }
          else {
            uVar21 = uVar12 * 8;
            lVar8 = *(long *)(local_58 + 0x10);
            if (uVar21 < (ulong)(*(long *)(local_58 + 0x18) - lVar8) ||
                uVar21 - (*(long *)(local_58 + 0x18) - lVar8) == 0) {
              *(ulong *)(local_58 + 0x10) = lVar8 + uVar21;
            }
            else {
              lVar8 = Zone::NewExpand(local_58,uVar21);
            }
          }
          puVar15 = (undefined8 *)(lVar8 + lVar13 * 8);
          *puVar15 = 0;
          local_60 = (undefined8 *)(lVar8 + uVar12 * 8);
          auVar16 = (undefined1  [8])puVar15;
          while ((undefined1  [8])local_68 != local_70) {
            local_68 = local_68 + -1;
            auVar16 = (undefined1  [8])((long)auVar16 + -8);
            *(undefined8 *)auVar16 = *local_68;
          }
        }
        local_70 = auVar16;
        puVar15 = puVar15 + 1;
        puVar19 = (undefined8 *)*param_5;
        if (puVar15 == local_60) {
          lVar13 = (long)puVar15 - (long)local_70 >> 3;
          uVar12 = lVar13 + 1;
          local_68 = puVar15;
          if (uVar12 >> 0x1c != 0) goto LAB_012cadc0;
          uVar21 = (long)local_60 - (long)local_70 >> 2;
          if (uVar12 <= uVar21) {
            uVar12 = uVar21;
          }
          if (0x7fffffe < (ulong)((long)local_60 - (long)local_70 >> 3)) {
            uVar12 = 0xfffffff;
          }
          if (uVar12 == 0) {
            lVar8 = 0;
          }
          else {
            uVar21 = uVar12 * 8;
            lVar8 = *(long *)(local_58 + 0x10);
            if (uVar21 < (ulong)(*(long *)(local_58 + 0x18) - lVar8) ||
                uVar21 - (*(long *)(local_58 + 0x18) - lVar8) == 0) {
              *(ulong *)(local_58 + 0x10) = lVar8 + uVar21;
            }
            else {
              lVar8 = Zone::NewExpand(local_58,uVar21);
            }
          }
          puVar15 = (undefined8 *)(lVar8 + lVar13 * 8);
          *puVar15 = *puVar19;
          local_60 = (undefined8 *)(lVar8 + uVar12 * 8);
          auVar16 = (undefined1  [8])puVar15;
          while ((undefined1  [8])local_68 != local_70) {
            local_68 = local_68 + -1;
            auVar16 = (undefined1  [8])((long)auVar16 + -8);
            *(undefined8 *)auVar16 = *local_68;
          }
        }
        else {
          *puVar15 = *puVar19;
          auVar16 = local_70;
        }
        local_70 = auVar16;
        local_68 = puVar15 + 1;
        puVar15 = *(undefined8 **)(lVar11 + 8);
        if (puVar15 == (undefined8 *)0x0) {
          return;
        }
        puVar19 = (undefined8 *)*puVar15;
        if (puVar19 != (undefined8 *)0x0) {
          do {
            ProcessCalleeForCallOrConstruct(param_1,*puVar19,0,0,local_70,param_6,0,param_8);
            puVar19 = (undefined8 *)puVar19[1];
          } while (puVar19 != (undefined8 *)0x0);
          puVar15 = *(undefined8 **)(lVar11 + 8);
          if (puVar15 == (undefined8 *)0x0) {
            return;
          }
        }
        for (puVar15 = (undefined8 *)puVar15[2]; puVar15 != (undefined8 *)0x0;
            puVar15 = (undefined8 *)puVar15[3]) {
          local_98 = (Zone *)puVar15[2];
          puStack_a0 = (undefined8 *)puVar15[1];
          local_a8 = (undefined8 *)*puVar15;
          local_b8 = (long *)0x0;
          local_b0._1_7_ = (undefined7)((ulong)local_b0 >> 8);
          local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,1);
          local_90 = local_a8;
          uStack_88 = puStack_a0;
          local_80 = local_98;
          ProcessCalleeForCallOrConstruct(param_1,&local_b8,0,0,local_70,param_6,0,param_8);
        }
        return;
      }
    }
    switch(iVar1) {
    case 0x32b:
    case 0x341:
      if ((ulong)(param_5[1] - *param_5 >> 3) < 2) {
        lVar11 = *(long *)(param_1 + 0x20);
        lVar13 = **(long **)param_1;
        if (lVar11 == 0) {
          lVar11 = ZoneStats::NewEmptyZone
                             (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
          *(long *)(param_1 + 0x20) = lVar11;
        }
        local_b8 = (long *)0x0;
        Hints::AddConstant((Hints *)&local_b8,lVar13 + 0xa0,lVar11);
        pHVar10 = (Hints *)&local_b8;
      }
      else {
        pHVar10 = (Hints *)(*param_5 + 8);
      }
      break;
    default:
      return;
    case 0x333:
      if (param_5[1] == *param_5) {
        return;
      }
      lVar11 = *(long *)(param_1 + 0x20);
      lVar13 = **(long **)param_1;
      if (lVar11 == 0) {
        lVar11 = ZoneStats::NewEmptyZone(*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10))
        ;
        *(long *)(param_1 + 0x20) = lVar11;
      }
      local_b8 = (long *)0x0;
      Hints::AddConstant((Hints *)&local_b8,lVar13 + 0xa0,lVar11);
      plVar17 = local_b8;
      local_58 = *(Zone **)(param_1 + 0x20);
      if (local_58 == (Zone *)0x0) {
        local_58 = (Zone *)ZoneStats::NewEmptyZone
                                     (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
        *(Zone **)(param_1 + 0x20) = local_58;
      }
      local_70 = (undefined1  [8])0x0;
      local_68 = (undefined8 *)0x0;
      local_60 = (undefined8 *)0x0;
      puVar15 = *(undefined8 **)(local_58 + 0x10);
      if ((ulong)(*(long *)(local_58 + 0x18) - (long)puVar15) < 8) {
        puVar15 = (undefined8 *)Zone::NewExpand(local_58,8);
      }
      else {
        *(undefined8 **)(local_58 + 0x10) = puVar15 + 1;
      }
      local_60 = puVar15 + 1;
      *puVar15 = plVar17;
      local_68 = puVar15 + 1;
      puVar19 = *(undefined8 **)*param_5;
      if (puVar19 == (undefined8 *)0x0) {
        return;
      }
      puVar9 = (undefined8 *)*puVar19;
      local_70 = (undefined1  [8])puVar15;
      if (puVar9 != (undefined8 *)0x0) {
        do {
          ProcessCalleeForCallOrConstruct(param_1,*puVar9,0,0,local_70,1,1,param_8);
          puVar9 = (undefined8 *)puVar9[1];
        } while (puVar9 != (undefined8 *)0x0);
        puVar19 = *(undefined8 **)*param_5;
        if (puVar19 == (undefined8 *)0x0) {
          return;
        }
      }
      for (puVar15 = (undefined8 *)puVar19[2]; puVar15 != (undefined8 *)0x0;
          puVar15 = (undefined8 *)puVar15[3]) {
        local_b8 = (long *)0x0;
        local_b0._1_7_ = (undefined7)((ulong)local_b0 >> 8);
        local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,1);
        local_98 = (Zone *)puVar15[2];
        puStack_a0 = (undefined8 *)puVar15[1];
        local_a8 = (undefined8 *)*puVar15;
        ProcessCalleeForCallOrConstruct(param_1,&local_b8,0,0,local_70,1,1,param_8);
      }
      return;
    case 0x353:
    case 0x354:
      if (param_6 == 1) {
        return;
      }
      if ((Hints *)param_5[1] == (Hints *)*param_5) {
        return;
      }
      ProcessHintsForRegExpTest(param_1,(Hints *)*param_5);
      return;
    }
LAB_012ca29c:
    ProcessHintsForObjectGetPrototype(param_1,pHVar10);
  }
  return;
}

