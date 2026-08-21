
void FUN_00a69200(long param_1)

{
  AssetsManagerEx *this;
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  this = *(AssetsManagerEx **)(param_1 + 8);
  uVar1 = cocos2d::extension::AssetsManagerEx::decompress
                    (this,(basic_string *)(*(long *)(param_1 + 0x10) + 0x18));
  lVar3 = *(long *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(lVar3 + 0x30) = 1;
  }
  plVar2 = *(long **)(this + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00a69248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x138))(plVar2,lVar3 + 0x18);
  return;
}

