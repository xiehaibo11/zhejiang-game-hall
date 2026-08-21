package com.bianfeng.paylib.action;

public interface ActionAttachment {

    public static class ProgressAttachment implements com.bianfeng.paylib.action.ActionAttachment {
        android.app.ProgressDialog progressDialog;


        public ProgressAttachment() {
                r0 = this;
                r0.<init>()
                return
        }

        protected void dismissProgressDialog() {
                r1 = this;
                android.app.ProgressDialog r0 = r1.progressDialog     // Catch: java.lang.Exception -> L14
                if (r0 == 0) goto L14
                android.app.ProgressDialog r0 = r1.progressDialog     // Catch: java.lang.Exception -> L14
                boolean r0 = r0.isShowing()     // Catch: java.lang.Exception -> L14
                if (r0 == 0) goto L14
                android.app.ProgressDialog r0 = r1.progressDialog     // Catch: java.lang.Exception -> L14
                r0.dismiss()     // Catch: java.lang.Exception -> L14
                r0 = 0
                r1.progressDialog = r0     // Catch: java.lang.Exception -> L14
            L14:
                return
        }

        @Override
        public void onEnd(android.content.Context r2) {
                r1 = this;
                r1.dismissProgressDialog()
                boolean r0 = r2 instanceof android.app.Activity
                if (r0 == 0) goto L10
                com.bianfeng.utilslib.SystemUtil r0 = com.bianfeng.utilslib.UtilsSdk.getSystemUtil()
                android.app.Activity r2 = (android.app.Activity) r2
                r0.hideVirtualKey(r2)
            L10:
                return
        }

        @Override
        public void onStart(android.content.Context r3) {
                r2 = this;
                boolean r0 = r3 instanceof android.app.Activity
                if (r0 == 0) goto L10
                r0 = r3
                android.app.Activity r0 = (android.app.Activity) r0
                com.bianfeng.paylib.action.ActionAttachment$ProgressAttachment$1 r1 = new com.bianfeng.paylib.action.ActionAttachment$ProgressAttachment$1
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
                r0 = 0
                java.lang.String r1 = "  加载中···  "
                android.app.ProgressDialog r3 = android.app.ProgressDialog.show(r3, r0, r1)
                r2.progressDialog = r3
                return
        }
    }

    void onEnd(android.content.Context r1);

    void onStart(android.content.Context r1);
}
