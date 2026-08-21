
/* universe::network::AUpdates::move(universe::network::AUpdates&) */

void __thiscall universe::network::AUpdates::move(AUpdates *this,AUpdates *param_1)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 00a05240 with catch @ 00a054f4 */
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
  }
                    /* catch() { ... } // from try @ 00a0521c with catch @ 00a05514 */
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* catch() { ... } // from try @ 00a051f8 with catch @ 00a05534 */
  return;
}

