package com.ymnsdk.replugin.action;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public interface ActionAttachment {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    public static class ProgressAttachment implements com.ymnsdk.replugin.action.ActionAttachment {
        android.app.ProgressDialog progressDialog;


        public ProgressAttachment() {
                r0 = this;
                r0.<init>()
                return
        }

        public static void hideVirtualKey(android.app.Activity r3) {
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                r2 = 11
                if (r0 <= r2) goto L1a
                int r0 = android.os.Build.VERSION.SDK_INT
                if (r0 >= r1) goto L1a
                android.view.Window r3 = r3.getWindow()
                android.view.View r3 = r3.getDecorView()
                r0 = 8
                r3.setSystemUiVisibility(r0)
                goto L2b
            L1a:
                int r0 = android.os.Build.VERSION.SDK_INT
                if (r0 < r1) goto L2b
                r0 = 4102(0x1006, float:5.748E-42)
                android.view.Window r3 = r3.getWindow()
                android.view.View r3 = r3.getDecorView()
                r3.setSystemUiVisibility(r0)
            L2b:
                return
        }

        protected void dismissProgressDialog() {
                r1 = this;
                android.app.ProgressDialog r0 = r1.progressDialog
                if (r0 == 0) goto L12
                boolean r0 = r0.isShowing()
                if (r0 == 0) goto L12
                android.app.ProgressDialog r0 = r1.progressDialog
                r0.dismiss()
                r0 = 0
                r1.progressDialog = r0
            L12:
                return
        }

        @Override
        public void onEnd(android.content.Context r2) {
                r1 = this;
                r1.dismissProgressDialog()
                boolean r0 = r2 instanceof android.app.Activity
                if (r0 == 0) goto Lc
                android.app.Activity r2 = (android.app.Activity) r2
                hideVirtualKey(r2)
            Lc:
                return
        }

        @Override
        public void onStart(android.content.Context r3) {
                r2 = this;
                boolean r0 = r3 instanceof android.app.Activity
                if (r0 == 0) goto L10
                r0 = r3
                android.app.Activity r0 = (android.app.Activity) r0
                com.ymnsdk.replugin.action.ActionAttachment$ProgressAttachment$1 r1 = new com.ymnsdk.replugin.action.ActionAttachment$ProgressAttachment$1
                r1.<init>(r2, r3)
                r0.runOnUiThread(r1)
                goto L13
            L10:
                r2.showProgressDialog(r3)
            L13:
                return
        }

        protected void showProgressDialog(android.content.Context r3) {
                r2 = this;
                r2.dismissProgressDialog()
                java.util.Locale r0 = java.util.Locale.getDefault()
                java.lang.String r0 = r0.toString()
                java.lang.String r0 = r0.toUpperCase()
                java.lang.String r1 = "ZH_TW"
                boolean r1 = r0.contains(r1)
                if (r1 != 0) goto L4d
                java.lang.String r1 = "ZH_HK"
                boolean r1 = r0.contains(r1)
                if (r1 == 0) goto L20
                goto L4d
            L20:
                java.lang.String r1 = "ZH"
                boolean r1 = r0.contains(r1)
                if (r1 != 0) goto L4a
                java.lang.String r1 = "zh"
                boolean r1 = r0.contains(r1)
                if (r1 == 0) goto L31
                goto L4a
            L31:
                java.lang.String r1 = "VN"
                boolean r1 = r0.contains(r1)
                if (r1 == 0) goto L3c
                java.lang.String r0 = " Đang tải ... "
                goto L4f
            L3c:
                java.lang.String r1 = "TH"
                boolean r0 = r0.contains(r1)
                if (r0 == 0) goto L47
                java.lang.String r0 = " กำลังโหลด ... "
                goto L4f
            L47:
                java.lang.String r0 = " Loading... "
                goto L4f
            L4a:
                java.lang.String r0 = " 加载中... "
                goto L4f
            L4d:
                java.lang.String r0 = " 加載中... "
            L4f:
                r1 = 0
                android.app.ProgressDialog r3 = android.app.ProgressDialog.show(r3, r1, r0)
                r2.progressDialog = r3
                return
        }
    }

    void onEnd(android.content.Context r1);

    void onStart(android.content.Context r1);
}
