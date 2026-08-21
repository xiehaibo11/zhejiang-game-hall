
/* universe::network::Proxy33::getHeaderSize(universe::network::ZhouLuJun*) const */

undefined4 __thiscall universe::network::Proxy33::getHeaderSize(Proxy33 *this,ZhouLuJun *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xc;
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = 0x10;
  }
  return uVar1;
}

