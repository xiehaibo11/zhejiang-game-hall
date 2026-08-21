package com.igexin.sdk;

class a extends android.os.Handler {
    final com.igexin.sdk.GTIntentService a;

    public a(com.igexin.sdk.GTIntentService r1) {
            r0 = this;
            r0.a = r1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            return
    }

    @Override
    public void handleMessage(android.os.Message r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = r3.what
            r1 = 1
            if (r0 == r1) goto L9
            goto L18
        L9:
            java.lang.Object r0 = r3.obj
            boolean r0 = r0 instanceof android.content.Intent
            if (r0 == 0) goto L18
            com.igexin.sdk.GTIntentService r0 = r2.a
            java.lang.Object r1 = r3.obj
            android.content.Intent r1 = (android.content.Intent) r1
            r0.processOnHandleIntent(r0, r1)
        L18:
            super.handleMessage(r3)
            return
    }
}
