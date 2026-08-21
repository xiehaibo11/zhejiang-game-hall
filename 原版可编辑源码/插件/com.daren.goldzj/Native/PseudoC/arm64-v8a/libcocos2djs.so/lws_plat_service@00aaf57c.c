
void lws_plat_service(undefined8 param_1,undefined8 param_2)

{
                    /* try { // try from 00aaf580 to 00baf5e3 has its CatchHandler @ 00aaf580
                       catch() { ... } // from try @ 00aaf580 with catch @ 00aaf580
                       catch() { ... } // from try @ 00aaf7ec with catch @ 00aaf580 */
  _lws_plat_service_tsi(param_1,param_2,0);
  return;
}

