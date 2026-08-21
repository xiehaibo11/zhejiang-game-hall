
/* v8::internal::compiler::Hints::CopyToParentZone(v8::internal::Zone*) const */

undefined8 * __thiscall v8::internal::compiler::Hints::CopyToParentZone(Hints *this,Zone *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  Hints *this_00;
  undefined8 *puVar7;
  VirtualContext *pVVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  Zone *local_70;
  undefined8 *local_68;
  
  puVar4 = *(undefined8 **)this;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    local_68 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)*puVar4;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        AddConstant((Hints *)&local_68,*puVar7,param_1);
        puVar7 = (undefined8 *)puVar7[1];
      } while (puVar7 != (undefined8 *)0x0);
      puVar4 = *(undefined8 **)this;
      if (puVar4 == (undefined8 *)0x0) {
        return local_68;
      }
    }
    puVar7 = (undefined8 *)puVar4[1];
    if (puVar7 != (undefined8 *)0x0) {
      do {
        AddMap((Hints *)&local_68,*puVar7,param_1,1);
        puVar7 = (undefined8 *)puVar7[1];
      } while (puVar7 != (undefined8 *)0x0);
      puVar4 = *(undefined8 **)this;
      if (puVar4 == (undefined8 *)0x0) {
        return local_68;
      }
    }
    pVVar8 = (VirtualContext *)puVar4[3];
    if (pVVar8 != (VirtualContext *)0x0) {
      do {
        AddVirtualContext((Hints *)&local_68,pVVar8,param_1);
        pVVar8 = *(VirtualContext **)(pVVar8 + 0x10);
      } while (pVVar8 != (VirtualContext *)0x0);
      puVar4 = *(undefined8 **)this;
      if (puVar4 == (undefined8 *)0x0) {
        return local_68;
      }
    }
    puVar7 = (undefined8 *)puVar4[2];
    if (puVar7 != (undefined8 *)0x0) {
      do {
        uVar2 = *puVar7;
        puVar4 = (undefined8 *)puVar7[1];
        local_80 = (undefined8 *)CopyToParentZone((Hints *)(puVar7 + 2),param_1);
        local_90 = uVar2;
        local_88 = puVar4;
        if ((local_80 != (undefined8 *)0x0) && (local_80[2] != 0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","context_hints_.virtual_closures().IsEmpty()");
        }
        AddVirtualClosure((Hints *)&local_68,(VirtualClosure *)&local_90,param_1);
        puVar7 = (undefined8 *)puVar7[3];
      } while (puVar7 != (undefined8 *)0x0);
      puVar4 = *(undefined8 **)this;
      if (puVar4 == (undefined8 *)0x0) {
        return local_68;
      }
    }
    this_00 = (Hints *)puVar4[4];
    puVar4 = local_68;
    for (; this_00 != (Hints *)0x0; this_00 = *(Hints **)(this_00 + 0x28)) {
      puVar4 = *(undefined8 **)(this_00 + 8);
      puVar7 = *(undefined8 **)(this_00 + 0x10);
      if (puVar4 == puVar7) {
        puVar12 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x0;
        do {
          local_90 = *puVar4;
          uVar2 = CopyToParentZone((Hints *)&local_90,param_1);
          if (puVar13 < puVar10) {
            *puVar13 = uVar2;
            puVar5 = puVar13;
            puVar12 = puVar11;
          }
          else {
            lVar9 = (long)puVar13 - (long)puVar11 >> 3;
            uVar1 = lVar9 + 1;
            if (uVar1 >> 0x1c != 0) goto LAB_012bee58;
            uVar6 = (long)puVar10 - (long)puVar11 >> 2;
            if (uVar1 <= uVar6) {
              uVar1 = uVar6;
            }
            if (0x7fffffe < (ulong)((long)puVar10 - (long)puVar11 >> 3)) {
              uVar1 = 0xfffffff;
            }
            if (uVar1 == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = *(long *)(param_1 + 0x10);
              uVar6 = uVar1 * 8;
              if (uVar6 < (ulong)(*(long *)(param_1 + 0x18) - lVar3) ||
                  uVar6 - (*(long *)(param_1 + 0x18) - lVar3) == 0) {
                *(ulong *)(param_1 + 0x10) = lVar3 + uVar6;
              }
              else {
                lVar3 = Zone::NewExpand(param_1,uVar6);
              }
            }
            puVar5 = (undefined8 *)(lVar3 + lVar9 * 8);
            puVar10 = (undefined8 *)(lVar3 + uVar1 * 8);
            *puVar5 = uVar2;
            puVar12 = puVar5;
            while (puVar13 != puVar11) {
              puVar13 = puVar13 + -1;
              puVar12 = puVar12 + -1;
              *puVar12 = *puVar13;
            }
          }
          puVar4 = puVar4 + 1;
          puVar13 = puVar5 + 1;
          puVar11 = puVar12;
        } while (puVar4 != puVar7);
      }
      local_90 = CopyToParentZone(this_00,param_1);
      uVar1 = (long)puVar13 - (long)puVar12;
      local_80 = (undefined8 *)0x0;
      puStack_78 = (undefined8 *)0x0;
      local_88 = (undefined8 *)0x0;
      local_70 = param_1;
      if (uVar1 != 0) {
        if ((ulong)((long)uVar1 >> 3) >> 0x1c != 0) {
LAB_012bee58:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar4) < uVar1) {
          puVar4 = (undefined8 *)Zone::NewExpand(param_1,uVar1);
        }
        else {
          *(ulong *)(param_1 + 0x10) = (long)puVar4 + uVar1;
        }
        puStack_78 = puVar4 + ((long)uVar1 >> 3);
        local_80 = puVar4;
        for (; local_88 = puVar4, puVar12 != puVar13; puVar12 = puVar12 + 1) {
          *local_80 = *puVar12;
          local_80 = local_80 + 1;
        }
      }
      if (local_68 == (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar4) < 0x30) {
          puVar4 = (undefined8 *)Zone::NewExpand(param_1,0x30);
        }
        else {
          *(undefined8 **)(param_1 + 0x10) = puVar4 + 6;
        }
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[4] = 0;
        puVar4[5] = param_1;
        local_68 = puVar4;
      }
      else if ((Zone *)local_68[5] != param_1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","zone == impl_->zone_");
      }
      puVar4 = local_68;
      FunctionalSet<v8::internal::compiler::VirtualBoundFunction,std::__ndk1::equal_to<v8::internal::compiler::VirtualBoundFunction>>
      ::Add((FunctionalSet<v8::internal::compiler::VirtualBoundFunction,std::__ndk1::equal_to<v8::internal::compiler::VirtualBoundFunction>>
             *)(local_68 + 4),(VirtualBoundFunction *)&local_90,param_1);
      if (local_88 != (undefined8 *)0x0) {
        local_80 = local_88;
      }
    }
  }
  return puVar4;
}

