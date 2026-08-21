package com.alipay.sdk.util;

class h extends com.alipay.android.app.IRemoteServiceCallback.Stub {
    final com.alipay.sdk.util.e a;

    h(com.alipay.sdk.util.e r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public boolean isHideLoadingScreen() throws android.os.RemoteException {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void payEnd(boolean r1, java.lang.String r2) throws android.os.RemoteException {
            r0 = this;
            return
    }

    @Override
    public void startActivity(java.lang.String r4, java.lang.String r5, int r6, android.os.Bundle r7) throws android.os.RemoteException {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.MAIN"
            r2 = 0
            r0.<init>(r1, r2)
            if (r7 != 0) goto Lf
            android.os.Bundle r7 = new android.os.Bundle
            r7.<init>()
        Lf:
            java.lang.String r1 = "CallingPid"
            r7.putInt(r1, r6)     // Catch: java.lang.Exception -> L18
            r0.putExtras(r7)     // Catch: java.lang.Exception -> L18
            goto L19
        L18:
        L19:
            r0.setClassName(r4, r5)
            com.alipay.sdk.util.e r4 = r3.a
            android.app.Activity r4 = com.alipay.sdk.util.e.b(r4)
            if (r4 == 0) goto L2d
            com.alipay.sdk.util.e r4 = r3.a
            android.app.Activity r4 = com.alipay.sdk.util.e.b(r4)
            r4.startActivity(r0)
        L2d:
            com.alipay.sdk.util.e r4 = r3.a
            com.alipay.sdk.util.e$a r4 = com.alipay.sdk.util.e.c(r4)
            r4.b()
            return
    }
}
