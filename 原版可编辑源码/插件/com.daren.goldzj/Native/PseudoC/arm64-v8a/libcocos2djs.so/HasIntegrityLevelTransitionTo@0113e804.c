
/* v8::internal::TransitionsAccessor::HasIntegrityLevelTransitionTo(v8::internal::Map,
   v8::internal::Symbol*, v8::internal::PropertyAttributes*) */

undefined8 __thiscall
v8::internal::TransitionsAccessor::HasIntegrityLevelTransitionTo
          (TransitionsAccessor *this,int param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  iVar1 = SearchSpecial(this,*(undefined8 *)(lVar3 + 0xb68));
  if (iVar1 == param_2) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 5;
    }
    if (param_3 == (undefined8 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined8 *)(lVar3 + 0xb68);
  }
  else {
    iVar1 = SearchSpecial(this,*(undefined8 *)(lVar3 + 0xbe0));
    if (iVar1 == param_2) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 4;
      }
      if (param_3 == (undefined8 *)0x0) {
        return 1;
      }
      uVar2 = *(undefined8 *)(lVar3 + 0xbe0);
    }
    else {
      iVar1 = SearchSpecial(this,*(undefined8 *)(lVar3 + 0xb98));
      if (iVar1 != param_2) {
        return 0;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
      if (param_3 == (undefined8 *)0x0) {
        return 1;
      }
      uVar2 = *(undefined8 *)(lVar3 + 0xb98);
    }
  }
  *param_3 = uVar2;
  return 1;
}

