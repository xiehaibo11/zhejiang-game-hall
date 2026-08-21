
/* v8::internal::Factory::NumberToString(v8::internal::Handle<v8::internal::Object>, bool) */

void __thiscall v8::internal::Factory::NumberToString(Factory *this,ulong *param_2,uint param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  internal *piVar6;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = *param_2;
  if ((uVar4 & 1) == 0) {
LAB_00f7ccd4:
    SmiToString(this,uVar4,param_3 & 1);
  }
  else {
    piVar6 = *(internal **)(uVar4 + 3);
    if ((((double)piVar6 <= 1073741823.0) && (-1073741824.0 <= (double)piVar6)) &&
       (piVar6 != (internal *)0x8000000000000000)) {
      uVar5 = (uint)(double)piVar6;
      if ((double)piVar6 == (double)(int)uVar5) {
        uVar4 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
        goto LAB_00f7ccd4;
      }
    }
    if ((param_3 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (*(int *)(*(long *)(this + 0xf38) + 3) >> 2) - 1U &
              ((uint)((ulong)piVar6 >> 0x20) ^ (uint)piVar6);
      puVar2 = (ulong *)NumberToStringCacheGet(this,uVar4,uVar5);
      if (((*puVar2 & 1) == 0) || ((int)*puVar2 != *(int *)(this + 0xa0))) goto LAB_00f7cd54;
    }
    uVar3 = DoubleToCString(piVar6,auStack_68,0x20);
    NumberToStringCacheSet(this,param_2,uVar5,uVar3,param_3 & 1);
  }
LAB_00f7cd54:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

