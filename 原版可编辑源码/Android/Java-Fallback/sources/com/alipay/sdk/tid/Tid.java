package com.alipay.sdk.tid;

public class Tid {
    public final java.lang.String key;
    public final java.lang.String tid;
    public final long time;

    public Tid(java.lang.String r1, java.lang.String r2, long r3) {
            r0 = this;
            r0.<init>()
            r0.tid = r1
            r0.key = r2
            r0.time = r3
            return
    }

    public static boolean isEmpty(com.alipay.sdk.tid.Tid r0) {
            if (r0 == 0) goto Ld
            java.lang.String r0 = r0.tid
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    public java.lang.String getTid() {
            r1 = this;
            java.lang.String r0 = r1.tid
            return r0
    }

    public java.lang.String getTidSeed() {
            r1 = this;
            java.lang.String r0 = r1.key
            return r0
    }

    public long getTimestamp() {
            r2 = this;
            long r0 = r2.time
            return r0
    }
}
