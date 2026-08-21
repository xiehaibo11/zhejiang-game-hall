
/* duDisplayList::draw(duDebugDraw*) */

void __thiscall duDisplayList::draw(duDisplayList *this,duDebugDraw *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((param_1 != (duDebugDraw *)0x0) && (*(int *)(this + 0x18) != 0)) {
    (**(code **)(*(long *)param_1 + 0x10))(param_1,this[0x20]);
    (**(code **)(*(long *)param_1 + 0x20))
              (*(undefined4 *)(this + 0x28),param_1,*(undefined4 *)(this + 0x24));
    if (0 < *(int *)(this + 0x18)) {
      uVar1 = 0;
      lVar2 = 0;
      do {
        (**(code **)(*(long *)param_1 + 0x28))
                  (param_1,*(long *)(this + 8) + (uVar1 & 0xffffffff) * 4,
                   *(undefined4 *)(*(long *)(this + 0x10) + lVar2 * 4));
        lVar2 = lVar2 + 1;
        uVar1 = uVar1 + 3;
      } while (lVar2 < *(int *)(this + 0x18));
    }
                    /* WARNING: Could not recover jumptable at 0x01182bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
    return;
  }
  return;
}

