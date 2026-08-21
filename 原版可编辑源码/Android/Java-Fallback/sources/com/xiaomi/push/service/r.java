package com.xiaomi.push.service;

public class r implements com.xiaomi.push.hh {
    private final com.xiaomi.push.service.XMPushService a;

    public r(com.xiaomi.push.service.XMPushService r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    static com.xiaomi.push.service.XMPushService a(com.xiaomi.push.service.r r0) {
            com.xiaomi.push.service.XMPushService r0 = r0.a
            return r0
    }

    static java.lang.String a(com.xiaomi.push.service.r r0, java.lang.String r1) {
            java.lang.String r0 = r0.a(r1)
            return r0
    }

    private java.lang.String a(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "com.xiaomi.xmsf"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto Lb
            java.lang.String r4 = "1000271"
            goto L19
        Lb:
            com.xiaomi.push.service.XMPushService r0 = r3.a
            r1 = 0
            java.lang.String r2 = "pref_registered_pkg_names"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            r1 = 0
            java.lang.String r4 = r0.getString(r4, r1)
        L19:
            return r4
    }

    @Override
    public void a(java.util.List<com.xiaomi.push.hn> r9, java.lang.String r10, java.lang.String r11) {
            r8 = this;
            com.xiaomi.push.service.XMPushService r0 = r8.a
            com.xiaomi.push.service.s r7 = new com.xiaomi.push.service.s
            r3 = 4
            r1 = r7
            r2 = r8
            r4 = r10
            r5 = r9
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a(r7)
            return
    }
}
