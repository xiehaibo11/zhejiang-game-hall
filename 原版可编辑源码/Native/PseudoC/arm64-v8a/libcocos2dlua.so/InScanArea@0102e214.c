
/* p2t::InScanArea(p2t::Point const&, p2t::Point const&, p2t::Point const&, p2t::Point const&) */

bool p2t::InScanArea(Point *param_1,Point *param_2,Point *param_3,Point *param_4)

{
  if ((*(double *)param_1 - *(double *)param_2) *
      (*(double *)(param_4 + 8) - *(double *)(param_2 + 8)) -
      (*(double *)param_4 - *(double *)param_2) *
      (*(double *)(param_1 + 8) - *(double *)(param_2 + 8)) < -1e-12) {
                    /* try { // try from 0102e264 to 0112e26f has its CatchHandler @ 0102e270 */
                    /* catch() { ... } // from try @ 0102e1b8 with catch @ 0102e270
                       catch() { ... } // from try @ 0102e264 with catch @ 0102e270
                       try { // try from 0102e270 to 0112e287 has its CatchHandler @ 0102e048 */
    return 1e-12 < (*(double *)param_1 - *(double *)param_3) *
                   (*(double *)(param_4 + 8) - *(double *)(param_3 + 8)) -
                   (*(double *)param_4 - *(double *)param_3) *
                   (*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
  }
  return false;
}

