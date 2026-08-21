
/* v8::internal::ErrorUtils::ThrowLoadFromNullOrUndefined(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::MaybeHandle<v8::internal::Object>) */

void v8::internal::ErrorUtils::ThrowLoadFromNullOrUndefined
               (Isolate *param_1,Isolate *param_2,Isolate *param_3)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  Isolate *pIVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Isolate *pIVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  Isolate *pIVar14;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  AstValueFactory *local_148;
  FunctionLiteral *local_110;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ulong *local_c0;
  ulong local_b8 [5];
  ulong *local_90;
  long local_88;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((param_3 == (Isolate *)0x0) || (uVar11 = *(ulong *)param_3, (uVar11 & 1) == 0)) {
    pIVar14 = (Isolate *)0x0;
  }
  else {
    pIVar14 = param_3;
    if (0x3f < *(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1))) {
      pIVar14 = (Isolate *)0x0;
    }
  }
  local_d8 = 0;
  local_d0 = 0xffffffffffffffff;
  local_c8 = 0xffffffff;
  local_c0 = (ulong *)0x0;
  uVar11 = FUN_00f5f0f0(param_1,&local_d8);
  if ((uVar11 & 1) == 0) {
    FUN_00f5f34c(param_1,param_2);
    bVar3 = false;
LAB_00f5efc8:
    pIVar14 = param_1 + 0xa0;
    if (param_3 != (Isolate *)0x0) {
      pIVar14 = param_3;
    }
    if (*(int *)pIVar14 != *(int *)(param_1 + 0xc18)) {
      puVar6 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,0x54,pIVar14,param_2,0);
      uVar7 = *puVar6;
      puVar6 = (undefined8 *)0x0;
      if (!bVar3) goto LAB_00f5f0b4;
      goto LAB_00f5f0a8;
    }
    local_1b8 = 0;
    local_1a0 = 0;
    local_1b0 = 0xffffffffffffffff;
    local_1a8 = 0xffffffff;
    local_b8[0] = local_b8[0] & 0xffffffff00000000;
    uVar7 = FUN_00f5eb0c(param_1,param_2,&local_1b8,local_b8);
    uVar8 = 0x5f;
    switch(local_b8[0] & 0xffffffff) {
    case 0:
      pIVar14 = param_1 + 0xc18;
      uVar8 = 0x60;
      goto LAB_00f5f098;
    case 1:
      break;
    case 2:
      uVar8 = 0x61;
      break;
    case 3:
      uVar8 = 0x5c;
      break;
    case 4:
      uVar8 = 0x5d;
      break;
    default:
      uVar8 = 0x60;
    }
    pIVar14 = (Isolate *)0x0;
LAB_00f5f098:
    puVar6 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,uVar8,uVar7,pIVar14,0);
    uVar7 = *puVar6;
    if (!bVar3) {
      puVar6 = (undefined8 *)0x0;
      goto LAB_00f5f0b4;
    }
  }
  else {
    ParseInfo::ParseInfo((ParseInfo *)&local_1b8,param_1,local_c0);
    uVar11 = parsing::ParseAny(&local_1b8,local_c0,param_1,0);
    if ((uVar11 & 1) == 0) {
      pIVar5 = (Isolate *)0x0;
      bVar3 = false;
      *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
    }
    else {
      AstValueFactory::Internalize(local_148,param_1);
      uVar13 = *local_c0 & 0xffffffff00000000;
      uVar11 = uVar13 | *(uint *)(*local_c0 + 0xf);
      if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x5b) {
        uVar11 = uVar13 | *(uint *)(uVar11 + 0xb);
      }
      if (((uVar11 & 1) == 0) || ((int)uVar11 != *(int *)((uVar11 & 0xffffffff00000000) + 0xa0))) {
        local_b8[0] = uVar11;
        bVar4 = Script::IsUserJavaScript((Script *)local_b8);
      }
      else {
        bVar4 = 0;
      }
      CallPrinter::CallPrinter((CallPrinter *)local_b8,param_1,(bool)(bVar4 & 1));
      pIVar5 = (Isolate *)CallPrinter::Print((CallPrinter *)local_b8,local_110,(int)local_d0);
      bVar3 = local_88 != 0;
      if (local_88 != 0) {
        iVar10 = -1;
        if ((pIVar14 == (Isolate *)0x0) && (local_90 != (ulong *)0x0)) {
          uVar11 = Expression::IsPropertyName((Expression *)(*local_90 & 0xfffffffffffffffc));
          if ((uVar11 & 1) != 0) {
            piVar12 = (int *)(*local_90 & 0xfffffffffffffffc);
            piVar1 = piVar12;
            if ((piVar12[1] & 0x3fU) != 0x29) {
              piVar1 = (int *)0x0;
            }
            iVar10 = *piVar12;
            pIVar14 = (Isolate *)**(undefined8 **)(piVar1 + 2);
            goto LAB_00f5ef1c;
          }
LAB_00f5ef20:
          pIVar14 = (Isolate *)0x0;
          iVar10 = **(int **)(local_88 + 0x10);
        }
        else {
LAB_00f5ef1c:
          if (pIVar14 == (Isolate *)0x0) goto LAB_00f5ef20;
        }
        if (iVar10 != -1) {
          local_d0 = CONCAT44(iVar10 + 1,iVar10);
          local_c8 = 0xffffffff;
        }
      }
      iVar10 = *(int *)(*(long *)pIVar5 + 7);
      CallPrinter::~CallPrinter((CallPrinter *)local_b8);
      if (iVar10 < 1) {
        pIVar5 = (Isolate *)0x0;
      }
    }
    ParseInfo::~ParseInfo((ParseInfo *)&local_1b8);
    if (pIVar5 == (Isolate *)0x0) {
      pIVar5 = (Isolate *)FUN_00f5f34c(param_1,param_2);
      if (!bVar3) goto LAB_00f5efc4;
      if (pIVar14 != (Isolate *)0x0) goto LAB_00f5ef74;
LAB_00f5efa4:
      pIVar14 = pIVar5;
      uVar7 = 0x50;
      pIVar9 = (Isolate *)0x0;
      pIVar5 = param_2;
    }
    else {
      if (!bVar3) {
LAB_00f5efc4:
        bVar3 = true;
        goto LAB_00f5efc8;
      }
      if (pIVar14 == (Isolate *)0x0) goto LAB_00f5efa4;
LAB_00f5ef74:
      uVar7 = 0x51;
      pIVar9 = param_2;
    }
    puVar6 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,uVar7,pIVar14,pIVar5,pIVar9);
    uVar7 = *puVar6;
  }
LAB_00f5f0a8:
  puVar6 = &local_d8;
LAB_00f5f0b4:
  Isolate::Throw(param_1,uVar7,puVar6);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

