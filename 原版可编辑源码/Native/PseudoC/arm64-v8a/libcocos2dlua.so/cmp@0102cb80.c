
/* p2t::cmp(p2t::Point const*, p2t::Point const*) */

undefined8 p2t::cmp(Point *param_1,Point *param_2)

{
  if (*(double *)(param_1 + 8) < *(double *)(param_2 + 8)) {
    return 1;
  }
  if ((*(double *)(param_1 + 8) == *(double *)(param_2 + 8)) &&
     (*(double *)param_1 < *(double *)param_2)) {
    return 1;
  }
  return 0;
}

