package com.xiaomi.push;

public enum ey extends java.lang.Enum<com.xiaomi.push.ey> {
    public static final com.xiaomi.push.ey a = null;
    private static final com.xiaomi.push.ey[] a = null;
    public static final com.xiaomi.push.ey b = null;
    public static final com.xiaomi.push.ey c = null;
    public static final com.xiaomi.push.ey d = null;
    public static final com.xiaomi.push.ey e = null;
    public static final com.xiaomi.push.ey f = null;
    public static final com.xiaomi.push.ey g = null;
    public static final com.xiaomi.push.ey h = null;
    public static final com.xiaomi.push.ey i = null;
    public static final com.xiaomi.push.ey j = null;
    public final java.lang.String a;

    static {
            com.xiaomi.push.ey r0 = new com.xiaomi.push.ey
            r1 = 0
            java.lang.String r2 = "COMMAND_REGISTER"
            java.lang.String r3 = "register"
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.ey.a = r0
            com.xiaomi.push.ey r0 = new com.xiaomi.push.ey
            r2 = 1
            java.lang.String r3 = "COMMAND_UNREGISTER"
            java.lang.String r4 = "unregister"
            r0.<init>(r3, r2, r4)
            com.xiaomi.push.ey.b = r0
            com.xiaomi.push.ey r0 = new com.xiaomi.push.ey
            r3 = 2
            java.lang.String r4 = "COMMAND_SET_ALIAS"
            java.lang.String r5 = "set-alias"
            r0.<init>(r4, r3, r5)
            com.xiaomi.push.ey.c = r0
            com.xiaomi.push.ey r0 = new com.xiaomi.push.ey
            r4 = 3
            java.lang.String r5 = "COMMAND_UNSET_ALIAS"
            java.lang.String r6 = "unset-alias"
            r0.<init>(r5, r4, r6)
            com.xiaomi.push.ey.d = r0
            com.xiaomi.push.ey r0 = new com.xiaomi.push.ey
            r5 = 4
            java.lang.String r6 = "COMMAND_SET_ACCOUNT"
            java.lang.String r7 = "set-account"
            r0.<init>(r6, r5, r7)
            com.xiaomi.push.ey.e = r0
            com.xiaomi.push.ey r0 = new com.xiaomi.push.ey
            r6 = 5
            java.lang.String r7 = "COMMAND_UNSET_ACCOUNT"
            java.lang.String r8 = "unset-account"
            r0.<init>(r7, r6, r8)
            com.xiaomi.push.ey.f = r0
            com.xiaomi.push.ey r0 = new com.xiaomi.push.ey
            r7 = 6
            java.lang.String r8 = "COMMAND_SUBSCRIBE_TOPIC"
            java.lang.String r9 = "subscribe-topic"
            r0.<init>(r8, r7, r9)
            com.xiaomi.push.ey.g = r0
            com.xiaomi.push.ey r0 = new com.xiaomi.push.ey
            r8 = 7
            java.lang.String r9 = "COMMAND_UNSUBSCRIBE_TOPIC"
            java.lang.String r10 = "unsubscibe-topic"
            r0.<init>(r9, r8, r10)
            com.xiaomi.push.ey.h = r0
            com.xiaomi.push.ey r0 = new com.xiaomi.push.ey
            r9 = 8
            java.lang.String r10 = "COMMAND_SET_ACCEPT_TIME"
            java.lang.String r11 = "accept-time"
            r0.<init>(r10, r9, r11)
            com.xiaomi.push.ey.i = r0
            com.xiaomi.push.ey r0 = new com.xiaomi.push.ey
            r10 = 9
            java.lang.String r11 = "COMMAND_CHK_VDEVID"
            java.lang.String r12 = "check-vdeviceid"
            r0.<init>(r11, r10, r12)
            com.xiaomi.push.ey.j = r0
            r11 = 10
            com.xiaomi.push.ey[] r11 = new com.xiaomi.push.ey[r11]
            com.xiaomi.push.ey r12 = com.xiaomi.push.ey.a
            r11[r1] = r12
            com.xiaomi.push.ey r1 = com.xiaomi.push.ey.b
            r11[r2] = r1
            com.xiaomi.push.ey r1 = com.xiaomi.push.ey.c
            r11[r3] = r1
            com.xiaomi.push.ey r1 = com.xiaomi.push.ey.d
            r11[r4] = r1
            com.xiaomi.push.ey r1 = com.xiaomi.push.ey.e
            r11[r5] = r1
            com.xiaomi.push.ey r1 = com.xiaomi.push.ey.f
            r11[r6] = r1
            com.xiaomi.push.ey r1 = com.xiaomi.push.ey.g
            r11[r7] = r1
            com.xiaomi.push.ey r1 = com.xiaomi.push.ey.h
            r11[r8] = r1
            com.xiaomi.push.ey r1 = com.xiaomi.push.ey.i
            r11[r9] = r1
            r11[r10] = r0
            com.xiaomi.push.ey.a = r11
            return
    }

    ey(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            return
    }

    public static int a(java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = -1
            if (r0 == 0) goto L8
            return r1
        L8:
            com.xiaomi.push.ey[] r0 = values()
            int r2 = r0.length
            r3 = 0
        Le:
            if (r3 >= r2) goto L21
            r4 = r0[r3]
            java.lang.String r5 = r4.a
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L1e
            int r1 = com.xiaomi.push.en.a(r4)
        L1e:
            int r3 = r3 + 1
            goto Le
        L21:
            return r1
    }

    public static com.xiaomi.push.ey valueOf(java.lang.String r1) {
            java.lang.Class<com.xiaomi.push.ey> r0 = com.xiaomi.push.ey.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.xiaomi.push.ey r1 = (com.xiaomi.push.ey) r1
            return r1
    }

    public static com.xiaomi.push.ey[] values() {
            com.xiaomi.push.ey[] r0 = com.xiaomi.push.ey.a
            java.lang.Object r0 = r0.clone()
            com.xiaomi.push.ey[] r0 = (com.xiaomi.push.ey[]) r0
            return r0
    }
}
