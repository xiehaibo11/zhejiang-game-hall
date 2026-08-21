
/* ClipperLib::ExcludeOp(ClipperLib::OutPt*) */

undefined4 * ClipperLib::ExcludeOp(OutPt *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 **)(*(long *)(param_1 + 0x18) + 0x20) = puVar1;
  *puVar1 = 0;
  return puVar1;
}

