
/* v8::CpuProfileNode::GetChild(int) const */

undefined8 __thiscall v8::CpuProfileNode::GetChild(CpuProfileNode *this,int param_1)

{
  if ((ulong)(long)param_1 < (ulong)(*(long *)(this + 0x50) - *(long *)(this + 0x48) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x48) + (long)param_1 * 8);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

