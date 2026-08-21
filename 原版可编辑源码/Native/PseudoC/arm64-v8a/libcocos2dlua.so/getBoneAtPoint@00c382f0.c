
/* cocostudio::Armature::getBoneAtPoint(float, float) const */

long * __thiscall cocostudio::Armature::getBoneAtPoint(Armature *this,float param_1,float param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  
  lVar3 = *(long *)(this + 0x180) - *(long *)(this + 0x178) >> 3;
  do {
    if (lVar3 < 1) {
      return (long *)0x0;
    }
    plVar4 = *(long **)(*(long *)(this + 0x178) + lVar3 * 8 + -8);
    plVar1 = (long *)(**(code **)(*plVar4 + 0x588))(plVar4);
    uVar2 = (**(code **)(*plVar1 + 0x48))
                      (CONCAT44(in_register_00005004,param_1),CONCAT44(in_register_00005024,param_2)
                      );
    lVar3 = lVar3 + -1;
  } while ((uVar2 & 1) == 0);
  return plVar4;
}

