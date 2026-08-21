package com.alipay.sdk.m.p0;

public class d extends android.database.ContentObserver {
    public static final java.lang.String d = "VMS_IDLG_SDK_Observer";
    public java.lang.String a;
    public int b;
    public com.alipay.sdk.m.p0.c c;

    public d(com.alipay.sdk.m.p0.c r2, int r3, java.lang.String r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            r1.c = r2
            r1.b = r3
            r1.a = r4
            return
    }

    @Override
    public void onChange(boolean r3) {
            r2 = this;
            com.alipay.sdk.m.p0.c r3 = r2.c
            if (r3 == 0) goto Lc
            int r0 = r2.b
            java.lang.String r1 = r2.a
            r3.a(r0, r1)
            goto L13
        Lc:
            java.lang.String r3 = "VMS_IDLG_SDK_Observer"
            java.lang.String r0 = "mIdentifierIdClient is null"
            android.util.Log.e(r3, r0)
        L13:
            return
    }
}
