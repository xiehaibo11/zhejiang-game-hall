
/* v8::internal::compiler::TopLevelLiveRange::GetChildCovers(v8::internal::compiler::LifetimePosition)
    */

long __thiscall
v8::internal::compiler::TopLevelLiveRange::GetChildCovers(TopLevelLiveRange *this,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  lVar1 = *(long *)(this + 0x90);
  while( true ) {
    if (lVar1 == 0) {
      *(undefined8 *)(this + 0x90) = 0;
      return 0;
    }
    if (param_2 < *(int *)(*(long *)(lVar1 + 8) + 4)) break;
    lVar1 = *(long *)(lVar1 + 0x28);
  }
  *(long *)(this + 0x90) = lVar1;
  puVar3 = (undefined8 *)(lVar1 + 0x10);
  if ((((int *)*puVar3 != (int *)0x0) && (*(int *)*puVar3 <= param_2)) &&
     (param_2 < *(int *)(*(long *)(lVar1 + 8) + 4))) {
    puVar2 = (undefined8 *)(lVar1 + 0x30);
    puVar6 = puVar3;
    if (((int *)*puVar2 != (int *)0x0) && (puVar6 = puVar2, param_2 < *(int *)*puVar2)) {
      *puVar2 = 0;
      puVar6 = puVar3;
    }
    puVar4 = (uint *)*puVar6;
    if (puVar4 != (uint *)0x0) {
      do {
        uVar5 = *puVar4;
        if ((int)uVar5 <= param_2) {
          if ((int *)*puVar2 == (int *)0x0) {
            if (uVar5 < 0x80000000) goto LAB_01656f8c;
          }
          else if (*(int *)*puVar2 < (int)uVar5) {
LAB_01656f8c:
            *puVar2 = puVar4;
            uVar5 = *puVar4;
          }
        }
        if (param_2 < (int)uVar5) {
          return 0;
        }
        if (param_2 < (int)puVar4[1]) {
          return lVar1;
        }
        puVar4 = *(uint **)(puVar4 + 2);
        if (puVar4 == (uint *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

