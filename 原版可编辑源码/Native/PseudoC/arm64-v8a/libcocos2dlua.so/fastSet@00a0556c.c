
/* universe::network::AUpdates::fastSet(char*, unsigned long) */

void __thiscall universe::network::AUpdates::fastSet(AUpdates *this,char *param_1,ulong param_2)

{
  *(char **)this = param_1;
  *(ulong *)(this + 8) = param_2;
                    /* catch() { ... } // from try @ 00a051d4 with catch @ 00a05570 */
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

