
void tls1_set_cert_validity(undefined8 param_1)

{
                    /* try { // try from 00ae13c4 to 00be13cf has its CatchHandler @ 00ae15f0 */
  tls1_check_chain(param_1,0,0,0,0);
  tls1_check_chain(param_1,0,0,0,1);
  tls1_check_chain(param_1,0,0,0,2);
  tls1_check_chain(param_1,0,0,0,3);
  tls1_check_chain(param_1,0,0,0,4);
                    /* try { // try from 00ae1430 to 00be143b has its CatchHandler @ 00ae15ec */
  tls1_check_chain(param_1,0,0,0,5);
  tls1_check_chain(param_1,0,0,0,6);
  return;
}

