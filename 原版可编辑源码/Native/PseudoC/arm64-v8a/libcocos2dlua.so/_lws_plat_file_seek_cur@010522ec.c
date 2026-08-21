
__off_t _lws_plat_file_seek_cur(int *param_1,ulong param_2)

{
  __off_t _Var1;
  ulong __offset;
  long lVar2;
  
                    /* try { // try from 01052300 to 01152313 has its CatchHandler @ 0105374c */
  if ((long)param_2 < 1) {
    lVar2 = *(long *)(param_1 + 6);
    __offset = param_2;
  }
  else {
    lVar2 = *(long *)(param_1 + 6);
    __offset = *(long *)(param_1 + 8) - lVar2;
                    /* try { // try from 01052318 to 0115233b has its CatchHandler @ 010538c8 */
    if (param_2 <= (ulong)(*(long *)(param_1 + 8) - lVar2)) {
      __offset = param_2;
    }
  }
  if ((long)(lVar2 + __offset) < 0) {
    __offset = -lVar2;
  }
  _Var1 = lseek(*param_1,__offset,1);
  if (_Var1 < 0) {
                    /* try { // try from 01052350 to 01152363 has its CatchHandler @ 01053748 */
    _lws_log(1,"error seeking from cur %ld, offset %ld\n",*(__off_t *)(param_1 + 6),__offset);
  }
  else {
    *(__off_t *)(param_1 + 6) = _Var1;
  }
                    /* try { // try from 01052368 to 0115238b has its CatchHandler @ 010538c4 */
  return _Var1;
}

