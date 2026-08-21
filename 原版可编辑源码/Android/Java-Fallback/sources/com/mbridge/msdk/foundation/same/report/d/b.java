package com.mbridge.msdk.foundation.same.report.d;

public abstract class b extends com.mbridge.msdk.foundation.same.net.f<java.lang.String> {
    private static final java.lang.String TAG = null;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.report.d.b> r0 = com.mbridge.msdk.foundation.same.report.d.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.report.d.b.TAG = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a r4) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.foundation.same.report.d.b.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "errorCode = "
            r1.append(r2)
            int r2 = r4.a
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            java.lang.String r4 = com.mbridge.msdk.foundation.same.net.f.a.a(r4)
            r3.onFailed(r4)
            return
    }

    public abstract void onFailed(java.lang.String r1);

    @Override
    public void onSuccess(com.mbridge.msdk.foundation.same.net.k<java.lang.String> r1) {
            r0 = this;
            if (r1 == 0) goto L9
            T r1 = r1.a
            java.lang.String r1 = (java.lang.String) r1
            r0.onSuccess(r1)
        L9:
            return
    }

    public abstract void onSuccess(java.lang.String r1);
}
