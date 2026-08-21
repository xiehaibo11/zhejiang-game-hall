
/* ClipperLib::SlopesNearCollinear(ClipperLib::IntPoint const&, ClipperLib::IntPoint const&,
   ClipperLib::IntPoint const&, double) */

bool ClipperLib::SlopesNearCollinear
               (IntPoint *param_1,IntPoint *param_2,IntPoint *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)(*(long *)(param_1 + 8) - *(long *)(param_3 + 8));
  dVar3 = (double)(*(long *)param_3 - *(long *)param_1);
                    /* catch() { ... } // from try @ 0103ba64 with catch @ 0103bb10 */
  dVar1 = (dVar2 * (double)*(long *)param_2 + dVar3 * (double)*(long *)(param_2 + 8)) -
          (dVar2 * (double)*(long *)param_1 + (double)*(long *)(param_1 + 8) * dVar3);
                    /* try { // try from 0103bb28 to 0113bc17 has its CatchHandler @ 0103bb28
                       catch() { ... } // from try @ 0103bb28 with catch @ 0103bb28
                       catch() { ... } // from try @ 0103bc30 with catch @ 0103bb28
                       catch() { ... } // from try @ 0103bcc8 with catch @ 0103bb28 */
  return (dVar1 * dVar1) / (dVar2 * dVar2 + dVar3 * dVar3) < param_4;
}

