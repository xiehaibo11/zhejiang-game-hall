
/* v8::internal::compiler::LiveRange::Covers(v8::internal::compiler::LifetimePosition) const */

undefined8 __thiscall v8::internal::compiler::LiveRange::Covers(LiveRange *this,int param_2)

{
  LiveRange *pLVar1;
  uint *puVar2;
  uint uVar3;
  LiveRange *pLVar4;
  
  pLVar1 = this + 0x10;
  if (((*(int **)pLVar1 != (int *)0x0) && (**(int **)pLVar1 <= param_2)) &&
     (param_2 < *(int *)(*(long *)(this + 8) + 4))) {
    this = this + 0x30;
    pLVar4 = pLVar1;
    if ((*(int **)this != (int *)0x0) && (pLVar4 = this, param_2 < **(int **)this)) {
      *(undefined8 *)this = 0;
      pLVar4 = pLVar1;
    }
    for (puVar2 = *(uint **)pLVar4; puVar2 != (uint *)0x0; puVar2 = *(uint **)(puVar2 + 2)) {
      uVar3 = *puVar2;
      if ((int)uVar3 <= param_2) {
        if (*(int **)this == (int *)0x0) {
          if (uVar3 < 0x80000000) goto LAB_016560d8;
        }
        else if (**(int **)this < (int)uVar3) {
LAB_016560d8:
          *(uint **)this = puVar2;
          uVar3 = *puVar2;
        }
      }
      if (param_2 < (int)uVar3) {
        return 0;
      }
      if (param_2 < (int)puVar2[1]) {
        return 1;
      }
    }
  }
  return 0;
}

