
/* v8::internal::StringConstantBase::AllocateStringConstant(v8::internal::Isolate*) const */

void __thiscall
v8::internal::StringConstantBase::AllocateStringConstant(StringConstantBase *this,Isolate *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(this + 8) == 0) {
    iVar1 = *(int *)this;
    if (iVar1 == 2) {
      uVar3 = AllocateStringConstant(*(StringConstantBase **)(this + 0x10),param_1);
      uVar4 = AllocateStringConstant(*(StringConstantBase **)(this + 0x18),param_1);
      lVar2 = Factory::NewConsString((Factory *)param_1,uVar3,uVar4);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
    }
    else if (iVar1 == 1) {
      uVar3 = Factory::NewNumber<(v8::internal::AllocationType)0>
                        ((Factory *)param_1,*(double *)(this + 0x10));
      lVar2 = Factory::NumberToString((Factory *)param_1,uVar3,1);
    }
    else if (iVar1 == 0) {
      lVar2 = *(long *)(this + 0x10);
    }
    else {
      lVar2 = 0;
    }
    *(long *)(this + 8) = lVar2;
  }
  return;
}

