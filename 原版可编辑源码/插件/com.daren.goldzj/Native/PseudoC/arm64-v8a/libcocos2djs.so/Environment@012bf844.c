
/* v8::internal::compiler::SerializerForBackgroundCompilation::Environment::Environment(v8::internal::Zone*,
   v8::internal::Isolate*, v8::internal::compiler::CompilationSubject,
   v8::base::Optional<v8::internal::compiler::Hints>,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> const&,
   v8::internal::compiler::MissingArgumentsPolicy) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::Environment::Environment
          (Environment *this,undefined8 param_1,long param_2,undefined8 *param_4,char param_5,
          undefined8 param_6,long *param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int local_60 [2];
  undefined8 local_58;
  
  uStack_78 = param_4[1];
  local_80 = *param_4;
  uStack_68 = param_4[3];
  uStack_70 = param_4[2];
  Environment(this,param_1,&local_80);
  lVar4 = *param_7;
  uVar9 = (ulong)*(int *)(this + 0x18);
  uVar5 = param_7[1] - lVar4 >> 3;
  uVar6 = uVar9;
  if (uVar5 <= uVar9) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      lVar8 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      *(undefined8 *)(*(long *)(this + 0x30) + lVar8) = *(undefined8 *)(lVar4 + lVar8);
      lVar4 = *param_7;
      uVar7 = param_7[1] - lVar4 >> 3;
      uVar5 = uVar9;
      if (uVar7 <= uVar9) {
        uVar5 = uVar7;
      }
    } while (uVar6 < uVar5);
  }
  if (param_8 == 0) {
    local_58 = 0;
    Hints::AddConstant((Hints *)&local_58,param_2 + 0xa0,param_1);
    uVar6 = param_7[1] - *param_7 >> 3;
    if (uVar6 < uVar9) {
      do {
        *(undefined8 *)(*(long *)(this + 0x30) + uVar6 * 8) = local_58;
        uVar6 = uVar6 + 1;
      } while (uVar9 != uVar6);
    }
  }
  uVar5 = **(ulong **)this;
  uVar6 = uVar5 & 0xffffffff00000000;
  uVar7 = uVar6 | *(uint *)(uVar5 + 0xf);
  uVar9 = uVar6 | 7;
  if ((*(short *)(uVar9 + *(uint *)(uVar7 - 1)) == 0x5b) &&
     (*(short *)(uVar9 + *(uint *)((uVar6 | *(uint *)(uVar7 + 0x13)) - 1)) == 0x86)) {
    uVar2 = *(uint *)(uVar7 + 0xf);
  }
  else {
    uVar2 = *(uint *)(uVar5 + 3);
    if (((uVar2 & 1) == 0) || (*(short *)(uVar9 + *(uint *)((uVar6 | uVar2) - 1)) != 0x86)) {
      uVar2 = *(uint *)((uVar6 | *(uint *)(uVar5 + 3)) + 3);
    }
    else {
      uVar2 = *(uint *)(uVar5 + 3);
    }
  }
  iVar1 = *(int *)((uVar6 | uVar2) + 0x1b);
  if ((iVar1 != 0) && (iVar1 = -5 - iVar1, iVar1 != 0x7fffffff)) {
    local_60[0] = iVar1;
    uVar6 = interpreter::Register::is_function_closure((Register *)local_60);
    if ((uVar6 & 1) == 0) {
      uVar6 = interpreter::Register::is_current_context((Register *)local_60);
      if ((uVar6 & 1) == 0) {
        local_58 = CONCAT44(local_58._4_4_,local_60[0]);
        if (local_60[0] < 0) {
          uVar2 = interpreter::Register::ToParameterIndex
                            ((Register *)&local_58,*(int *)(this + 0x18));
          lVar4 = *(long *)(this + 0x30);
        }
        else {
          uVar2 = *(int *)(this + 0x18) + local_60[0];
          lVar4 = *(long *)(this + 0x30);
        }
        if ((-1 < (int)uVar2) && ((ulong)(*(long *)(this + 0x38) - lVar4 >> 3) <= (ulong)uVar2))
        goto LAB_012bfb30;
        plVar3 = *(long **)(lVar4 + (long)(int)uVar2 * 8);
      }
      else {
        plVar3 = *(long **)(this + 0x28);
      }
    }
    else {
      plVar3 = *(long **)(this + 0x20);
    }
    if ((plVar3 != (long *)0x0) &&
       ((((*plVar3 != 0 || (plVar3[1] != 0)) || (plVar3[2] != 0)) ||
        ((plVar3[3] != 0 || (plVar3[4] != 0)))))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","register_hints(new_target_reg).IsEmpty()");
    }
    if (param_5 != '\0') {
      local_60[0] = iVar1;
      uVar6 = interpreter::Register::is_function_closure((Register *)local_60);
      if ((uVar6 & 1) == 0) {
        uVar6 = interpreter::Register::is_current_context((Register *)local_60);
        if ((uVar6 & 1) == 0) {
          local_58 = CONCAT44(local_58._4_4_,local_60[0]);
          if (local_60[0] < 0) {
            uVar2 = interpreter::Register::ToParameterIndex
                              ((Register *)&local_58,*(int *)(this + 0x18));
            lVar4 = *(long *)(this + 0x30);
          }
          else {
            uVar2 = *(int *)(this + 0x18) + local_60[0];
            lVar4 = *(long *)(this + 0x30);
          }
          if ((-1 < (int)uVar2) && ((ulong)(*(long *)(this + 0x38) - lVar4 >> 3) <= (ulong)uVar2)) {
LAB_012bfb30:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
          }
          this = (Environment *)(lVar4 + (long)(int)uVar2 * 8);
        }
        else {
          this = this + 0x28;
        }
      }
      else {
        this = this + 0x20;
      }
      *(undefined8 *)this = param_6;
    }
  }
  return;
}

