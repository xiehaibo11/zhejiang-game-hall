
void UI_destroy_method(UI_METHOD *ui_method)

{
                    /* try { // try from 00b571a8 to 00c571af has its CatchHandler @ 00b5724c */
                    /* try { // try from 00b571b0 to 00c571bb has its CatchHandler @ 00b56d60 */
  CRYPTO_free(*(void **)ui_method);
  *(undefined8 *)ui_method = 0;
                    /* try { // try from 00b571bc to 00c571c7 has its CatchHandler @ 00b57234 */
  CRYPTO_free(ui_method);
  return;
}

