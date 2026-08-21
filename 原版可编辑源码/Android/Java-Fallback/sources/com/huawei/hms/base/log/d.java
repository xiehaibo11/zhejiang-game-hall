package com.huawei.hms.base.log;

public class d implements com.huawei.hms.base.log.b {
    public com.huawei.hms.base.log.b a;

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void a(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            com.huawei.hms.base.log.b r0 = r1.a
            if (r0 == 0) goto L7
            r0.a(r2, r3)
        L7:
            return
    }

    @Override
    public void a(java.lang.String r3, int r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "HMSSDK_"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            android.util.Log.println(r4, r0, r6)
            com.huawei.hms.base.log.b r0 = r2.a
            if (r0 == 0) goto L1b
            r0.a(r3, r4, r5, r6)
        L1b:
            return
    }
}
