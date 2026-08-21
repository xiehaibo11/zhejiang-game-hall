
/* btQuantizedBvh::walkRecursiveQuantizedTreeAgainstQueryAabb(btQuantizedBvhNode const*,
   btNodeOverlapCallback*, unsigned short*, unsigned short*) const */

void __thiscall
btQuantizedBvh::walkRecursiveQuantizedTreeAgainstQueryAabb
          (btQuantizedBvh *this,btQuantizedBvhNode *param_1,btNodeOverlapCallback *param_2,
          ushort *param_3,ushort *param_4)

{
  long lVar1;
  uint uVar2;
  
  for (; (((*param_3 <= *(ushort *)(param_1 + 6) && (*(ushort *)param_1 <= *param_4)) &&
          (param_3[2] <= *(ushort *)(param_1 + 10))) &&
         (((*(ushort *)(param_1 + 4) <= param_4[2] && (param_3[1] <= *(ushort *)(param_1 + 8))) &&
          (*(ushort *)(param_1 + 2) <= param_4[1])))); param_1 = param_1 + 0x10 + lVar1 * 0x10) {
    uVar2 = *(uint *)(param_1 + 0xc);
    if (-1 < (int)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0123ab14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_2 + 0x10))(param_2,uVar2 >> 0x15,uVar2 & 0x1fffff);
      return;
    }
    walkRecursiveQuantizedTreeAgainstQueryAabb(this,param_1 + 0x10,param_2,param_3,param_4);
    lVar1 = 1;
    if (*(int *)(param_1 + 0x1c) < 0) {
      lVar1 = -(long)*(int *)(param_1 + 0x1c);
    }
  }
  return;
}

