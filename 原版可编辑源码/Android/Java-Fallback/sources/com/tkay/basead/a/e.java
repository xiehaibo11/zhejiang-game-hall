package com.tkay.basead.a;

public final class e {
    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(android.content.Context r2, com.tkay.core.common.f.h r3) {
            int r3 = r3.D()
            r0 = 1
            java.lang.String r1 = "string"
            if (r3 == r0) goto L13
            r0 = 4
            if (r3 == r0) goto L13
            java.lang.String r3 = "myoffer_cta_learn_more"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r1)
            return r2
        L13:
            java.lang.String r3 = "myoffer_cta_install_now"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r1)
            return r2
    }

    public static boolean a(com.tkay.core.common.f.h r1) {
            java.lang.String r0 = r1.t()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L20
            java.lang.String r0 = r1.r()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L20
            java.lang.String r1 = r1.s()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L20
            r1 = 0
            return r1
        L20:
            r1 = 1
            return r1
    }
}
