package com.alipay.android.app.helper;

public class Tid extends com.alipay.sdk.tid.Tid {
    public Tid(java.lang.String r1, java.lang.String r2, long r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public static com.alipay.android.app.helper.Tid fromRealTidModel(com.alipay.sdk.tid.Tid r5) {
            if (r5 != 0) goto L4
            r5 = 0
            return r5
        L4:
            com.alipay.android.app.helper.Tid r0 = new com.alipay.android.app.helper.Tid
            java.lang.String r1 = r5.getTid()
            java.lang.String r2 = r5.getTidSeed()
            long r3 = r5.getTimestamp()
            r0.<init>(r1, r2, r3)
            return r0
    }
}
