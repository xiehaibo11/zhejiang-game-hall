
void FUN_00e06d68(long param_1)

{
  AssetsManagerEx *this;
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
                    /* try { // try from 00e06d74 to 00f06df3 has its CatchHandler @ 00e06ed4 */
  this = *(AssetsManagerEx **)(param_1 + 8);
  uVar1 = cocos2d::extension::AssetsManagerEx::decompress
                    (this,(basic_string *)(*(long *)(param_1 + 0x10) + 0x18));
  lVar3 = *(long *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(lVar3 + 0x30) = 1;
  }
  plVar2 = *(long **)(this + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00e06db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x178))(plVar2,lVar3 + 0x18);
  return;
}

