
/* cocostudio::TransformHelp::nodeSub(cocostudio::BaseData&, cocostudio::BaseData&) */

void cocostudio::TransformHelp::nodeSub(BaseData *param_1,BaseData *param_2)

{
  undefined8 uVar1;
  
  *(ulong *)(param_1 + 0x24) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x24) - (float)*(undefined8 *)(param_2 + 0x24));
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(ulong *)(param_1 + 0x38) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x38) - (float)*(undefined8 *)(param_2 + 0x38));
  *(ulong *)(param_1 + 0x30) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) -
                (float)((ulong)uVar1 >> 0x20),(float)*(undefined8 *)(param_1 + 0x30) - (float)uVar1)
  ;
  return;
}

