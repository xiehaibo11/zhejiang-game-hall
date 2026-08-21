
/* v8::internal::Map::LookupElementsTransitionMap(v8::internal::Isolate*,
   v8::internal::ElementsKind) */

void __thiscall v8::internal::Map::LookupElementsTransitionMap(Map *this,long param_1,byte param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long local_60;
  undefined8 uStack_58;
  long local_50;
  ulong local_48;
  int local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(*(long *)this + 10);
  lVar1 = *(long *)this;
  while (bVar2 >> 3 != param_3) {
    uStack_58 = 0;
    local_48 = (ulong)*(uint *)(lVar1 + 0x23) + param_1;
    iVar4 = 1;
    local_60 = param_1;
    local_50 = lVar1;
    if (((local_48 & 1) != 0) && ((int)local_48 != 3)) {
      uVar6 = local_48 & 3;
      iVar4 = (int)uVar6;
      if (uVar6 != 3) {
        if (uVar6 != 1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar6 = local_48 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar6 + *(uint *)(local_48 - 1)) == 0x98) {
          iVar4 = 4;
        }
        else {
          iVar4 = (uint)(*(short *)(uVar6 + *(uint *)(local_48 - 1)) != 100) << 1;
        }
      }
    }
    local_40 = iVar4;
    lVar5 = TransitionsAccessor::SearchSpecial
                      ((TransitionsAccessor *)&local_60,*(undefined8 *)(param_1 + 0xb48));
    if ((int)lVar5 == 0) break;
    lVar1 = lVar5;
    bVar2 = *(byte *)(lVar5 + 10);
  }
  if (*(byte *)(lVar1 + 10) >> 3 != param_3) {
    lVar1 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}

