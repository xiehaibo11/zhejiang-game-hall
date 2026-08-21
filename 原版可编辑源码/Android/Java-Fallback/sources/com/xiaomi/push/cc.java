package com.xiaomi.push;

public class cc implements java.lang.Runnable {
    private java.lang.String a;
    private java.lang.ref.WeakReference<android.content.Context> a;

    public cc(java.lang.String r1, java.lang.ref.WeakReference<android.content.Context> r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.a = r2
            return
    }

    @Override
    public void run() {
            r5 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r5.a
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            if (r0 != 0) goto Le
            return
        Le:
            java.lang.String r1 = r5.a
            long r1 = com.xiaomi.push.cp.a(r1)
            long r3 = com.xiaomi.push.cb.a
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L3c
            java.lang.String r1 = r5.a
            com.xiaomi.push.cf r1 = com.xiaomi.push.cf.a(r1)
            java.lang.String r2 = r5.a
            com.xiaomi.push.ce r2 = com.xiaomi.push.ce.a(r2)
            r1.a(r2)
            java.lang.String r3 = r5.a
            r4 = 1000(0x3e8, float:1.401E-42)
            com.xiaomi.push.cd r3 = com.xiaomi.push.cd.a(r0, r3, r4)
            r2.a(r3)
            com.xiaomi.push.cj r0 = com.xiaomi.push.cj.a(r0)
            r0.a(r1)
            goto L41
        L3c:
            java.lang.String r0 = "=====> do not need clean db"
            com.xiaomi.channel.commonutils.logger.b.b(r0)
        L41:
            return
    }
}
