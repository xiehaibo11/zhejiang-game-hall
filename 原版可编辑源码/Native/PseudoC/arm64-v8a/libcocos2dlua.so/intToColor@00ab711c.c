
/* fairygui::ToolSet::intToColor(unsigned int) */

ulong fairygui::ToolSet::intToColor(uint param_1)

{
  long lVar1;
  uint3 local_30 [2];
  long local_28;
  
                    /* try { // try from 00ab7124 to 00bb7147 has its CatchHandler @ 00ab7210 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ab7148 to 00bb7173 has its CatchHandler @ 00ab6e40 */
  cocos2d::Color3B::Color3B
            ((Color3B *)local_30,(uchar)(param_1 >> 0x10),(uchar)(param_1 >> 8),(uchar)param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00ab7174 to 00bb7187 has its CatchHandler @ 00ab7218 */
    return (ulong)local_30[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

