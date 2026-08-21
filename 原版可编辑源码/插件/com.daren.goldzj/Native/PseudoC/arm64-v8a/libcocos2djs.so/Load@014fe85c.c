
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::KeyedLoadIC::Load(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

long __thiscall v8::internal::KeyedLoadIC::Load(KeyedLoadIC *this,ulong *param_2,ulong *param_3)

{
  KeyedLoadIC *pKVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  Isolate *pIVar13;
  ulong uVar14;
  double dVar15;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar10 = *param_2;
  if ((((uVar10 & 1) == 0) ||
      (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xaa)) ||
     ((*(uint *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 0xb) >> 0x18 & 1) ==
      0)) {
    local_90 = 0;
    iVar5 = FUN_014fed10(param_3,*(undefined8 *)(this + 8),&local_88,&local_90);
    if (iVar5 == 0) {
      lVar12 = 0;
      if ((*(int *)(this + 0x18) != 0) && (FLAG_use_ic != '\0')) {
        uVar10 = *param_2;
        if ((uVar10 & 1) != 0) {
          uVar14 = uVar10 & 0xffffffff00000000;
          uVar11 = uVar14 | 7;
          if ((0xa8 < *(ushort *)(uVar11 + *(uint *)(uVar10 - 1))) ||
             (*(ushort *)(uVar11 + *(uint *)(uVar10 - 1)) < 0x40)) {
            if (*(short *)(uVar11 + *(uint *)(uVar10 - 1)) == 0xab) {
              local_80 = *(undefined8 *)(uVar14 + 0x2bc8);
              iVar5 = Context::global_object((Context *)&local_80);
              local_70 = 0;
              local_68 = 0;
              local_64 = 0;
              local_60 = 0;
              local_80 = uVar14;
              local_78 = uVar10;
              PrototypeIterator::Advance((PrototypeIterator *)&local_80);
              lVar12 = 0;
              if ((int)local_78 != iVar5) goto LAB_014fe930;
              uVar10 = *param_2;
              if ((uVar10 & 1) != 0) {
                uVar11 = uVar10 & 0xffffffff00000000 | 7;
                goto LAB_014feaf8;
              }
LAB_014feb08:
              if ((long)local_88 < 0) {
                if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) ==
                    0x41b) {
                  local_88 = 0xffffffffffffffff;
                  goto LAB_014feb54;
                }
              }
              else if (((long)local_88 < 0xffffffff) ||
                      (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1))
                       == 0x41b)) {
LAB_014feb54:
                if ((uVar10 & 1) == 0) {
LAB_014feb58:
                  uVar8 = 0;
                }
                else {
                  pIVar13 = *(Isolate **)(this + 8);
                  uVar11 = uVar10 & 0xffffffff00000000;
                  uVar14 = uVar11 | 7;
                  if (*(short *)(uVar14 + *(uint *)(uVar10 - 1)) == 0x423) {
                    uVar2 = *(uint *)(uVar10 + 0xb);
                    if ((uVar2 & 1) == 0) {
                      dVar15 = (double)((int)uVar2 >> 1);
                    }
                    else {
                      dVar15 = *(double *)((uVar11 | uVar2) + 3);
                    }
                    uVar14 = (ulong)dVar15;
                  }
                  else if (*(short *)(uVar14 + *(uint *)(uVar10 - 1)) == 0x41b) {
                    uVar14 = *(ulong *)(uVar10 + 0x1f);
                  }
                  else if (*(ushort *)(uVar14 + *(uint *)(uVar10 - 1)) < 0xaa) {
                    if (0x3f < *(ushort *)(uVar14 + *(uint *)(uVar10 - 1))) goto LAB_014feb58;
                    uVar14 = (ulong)*(int *)(uVar10 + 7);
                  }
                  else {
                    uVar14 = (long)((ulong)*(uint *)((uVar11 | *(uint *)(uVar10 + 7)) + 3) << 0x20)
                             >> 0x21;
                  }
                  if (local_88 < uVar14) goto LAB_014feb58;
                  uVar11 = uVar11 | *(uint *)(uVar10 - 1);
                  if (*(CanonicalHandleScope **)(pIVar13 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                    puVar7 = *(ulong **)(pIVar13 + 0x95a0);
                    if (puVar7 == *(ulong **)(pIVar13 + 0x95a8)) {
                      puVar7 = (ulong *)HandleScope::Extend(pIVar13);
                    }
                    *(ulong **)(pIVar13 + 0x95a0) = puVar7 + 1;
                    *puVar7 = uVar11;
                  }
                  else {
                    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                                (*(CanonicalHandleScope **)(pIVar13 + 0x95b8),uVar11
                                                );
                  }
                  uVar10 = FUN_014fe744(pIVar13,puVar7);
                  if ((uVar10 & 1) == 0) goto LAB_014feb58;
                  uVar8 = 1;
                }
                UpdateLoadElement(this,param_2,uVar8);
                if ((this[0x10] != (KeyedLoadIC)0x0) && (TracingFlags::ic_stats != 0)) {
                  if (*(int *)(this + 0x18) == 0) {
                    uVar9 = 0;
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = FeedbackNexus::ic_state((FeedbackNexus *)(this + 0x50));
                    uVar9 = *(undefined4 *)(this + 0x18);
                  }
                  IC::TraceIC((IC *)this,"LoadIC",param_3,uVar9,uVar6);
                }
              }
            }
            else if ((*(byte *)((uVar14 | 9) + (ulong)*(uint *)(uVar10 - 1)) >> 5 & 1) == 0) {
LAB_014feaf8:
              if (*(short *)(uVar11 + *(uint *)(uVar10 - 1)) != 0x411) goto LAB_014feb08;
            }
          }
        }
        lVar12 = 0;
      }
    }
    else {
      lVar12 = 0;
      if ((iVar5 == 1) && (lVar12 = LoadIC::Load((LoadIC *)this,param_2,local_90,1), lVar12 == 0))
      goto LAB_014feab4;
    }
LAB_014fe930:
    if ((*(int *)(this + 0x18) != 0) && (this[0x10] == (KeyedLoadIC)0x0)) {
      if (*(int *)(this + 0x18) == 5) {
        pKVar1 = this + 0x58;
        if (*(KeyedLoadIC **)(this + 0x50) != (KeyedLoadIC *)0x0) {
          pKVar1 = *(KeyedLoadIC **)(this + 0x50);
        }
        if (*(uint *)(*(long *)pKVar1 + (long)(*(int *)(this + 0x60) * 4 + 4) + 0x1f) < 2)
        goto joined_r0x014fece4;
      }
      uVar10 = *param_3;
      if ((uVar10 & 1) == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0x41
        ;
      }
      FeedbackNexus::ConfigureMegamorphic((FeedbackNexus *)(this + 0x50),bVar4);
      this[0x10] = (KeyedLoadIC)0x1;
      pKVar1 = this + 0x58;
      if (*(KeyedLoadIC **)(this + 0x50) != (KeyedLoadIC *)0x0) {
        pKVar1 = *(KeyedLoadIC **)(this + 0x50);
      }
      IC::OnFeedbackChanged(*(undefined8 *)(this + 8),*(undefined8 *)pKVar1);
      if (TracingFlags::ic_stats != 0) {
        if (*(int *)(this + 0x18) == 0) {
          uVar9 = 0;
          uVar6 = 0;
        }
        else {
          uVar6 = FeedbackNexus::ic_state((FeedbackNexus *)(this + 0x50));
          uVar9 = *(undefined4 *)(this + 0x18);
        }
        IC::TraceIC((IC *)this,"LoadIC",param_3,uVar9,uVar6);
      }
    }
joined_r0x014fece4:
    if (lVar12 != 0) goto LAB_014feab4;
  }
  else {
    JSObject::MigrateInstance(*(undefined8 *)(this + 8),param_2);
  }
  if (*(int *)(this + 0x1c) == 8) {
    lVar12 = Runtime::GetObjectProperty();
  }
  else {
    lVar12 = Runtime::HasProperty(*(undefined8 *)(this + 8),param_2,param_3);
  }
LAB_014feab4:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar12;
}

