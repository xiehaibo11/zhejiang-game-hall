
/* p2t::AdvancingFront::LocatePoint(p2t::Point const*) */

void __thiscall p2t::AdvancingFront::LocatePoint(AdvancingFront *this,Point *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  dVar3 = *(double *)*puVar1;
  if (*(double *)param_1 == dVar3) {
    puVar2 = puVar1;
                    /* try { // try from 010413a8 to 01141517 has its CatchHandler @ 010413a8
                       catch() { ... } // from try @ 010413a8 with catch @ 010413a8
                       catch() { ... } // from try @ 01041528 with catch @ 010413a8 */
    if (((((Point *)*puVar1 == param_1) ||
         (puVar2 = (undefined8 *)puVar1[3], (Point *)*puVar2 == param_1)) ||
        (puVar2 = (undefined8 *)puVar1[2], (Point *)*puVar2 == param_1)) &&
       (puVar1 = puVar2, puVar2 == (undefined8 *)0x0)) {
      return;
    }
  }
  else if (dVar3 <= *(double *)param_1) {
    do {
      puVar1 = (undefined8 *)puVar1[2];
      if (puVar1 == (undefined8 *)0x0) {
        return;
      }
    } while ((Point *)*puVar1 != param_1);
  }
  else {
    do {
      puVar1 = (undefined8 *)puVar1[3];
      if (puVar1 == (undefined8 *)0x0) {
        return;
      }
    } while ((Point *)*puVar1 != param_1);
  }
  *(undefined8 **)(this + 0x10) = puVar1;
  return;
}

