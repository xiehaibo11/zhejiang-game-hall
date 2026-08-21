package com.vivo.push.util;

public final class h implements com.vivo.push.util.BaseNotifyDataAdapter {
    private static int e;
    private static int f;
    private android.content.res.Resources a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;

    static {
            return
    }

    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    private int a(java.lang.String r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = "DefaultNotifyDataAdapter"
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            r2 = -1
            if (r1 != 0) goto L63
            boolean r1 = android.text.TextUtils.isEmpty(r8)
            if (r1 == 0) goto L10
            goto L63
        L10:
            java.lang.String r1 = "\\."
            java.lang.String[] r1 = r7.split(r1)
            if (r1 == 0) goto L1e
            int r3 = r1.length
            if (r3 <= 0) goto L1e
            r7 = 0
            r7 = r1[r7]
        L1e:
            int r7 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Exception -> L5f
        L22:
            if (r7 <= 0) goto L63
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5f
            java.lang.String r3 = "vivo_push_ard"
            r1.<init>(r3)     // Catch: java.lang.Exception -> L5f
            r1.append(r7)     // Catch: java.lang.Exception -> L5f
            r1.append(r8)     // Catch: java.lang.Exception -> L5f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L5f
            java.lang.String r3 = "get notify icon : "
            java.lang.String r4 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> L5f
            java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Exception -> L5f
            com.vivo.push.util.p.c(r0, r3)     // Catch: java.lang.Exception -> L5f
            android.content.res.Resources r3 = r6.a     // Catch: java.lang.Exception -> L5f
            java.lang.String r4 = "drawable"
            java.lang.String r5 = r6.b     // Catch: java.lang.Exception -> L5f
            int r3 = r3.getIdentifier(r1, r4, r5)     // Catch: java.lang.Exception -> L5f
            if (r3 <= 0) goto L5c
            java.lang.String r7 = "find notify icon : "
            java.lang.String r8 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> L5f
            java.lang.String r7 = r7.concat(r8)     // Catch: java.lang.Exception -> L5f
            com.vivo.push.util.p.c(r0, r7)     // Catch: java.lang.Exception -> L5f
            return r3
        L5c:
            int r7 = r7 + (-1)
            goto L22
        L5f:
            r7 = move-exception
            com.vivo.push.util.p.a(r0, r7)
        L63:
            return r2
    }

    private static boolean a(int r1) {
            r0 = -1
            if (r1 == r0) goto L7
            if (r1 == 0) goto L7
            r1 = 1
            return r1
        L7:
            r1 = 0
            return r1
    }

    private static boolean a(java.lang.String r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 26
            if (r0 >= r2) goto L8
            return r1
        L8:
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L16
            java.lang.String r3 = "DefaultNotifyDataAdapter"
            java.lang.String r0 = "systemVersion is not suit "
            com.vivo.push.util.p.d(r3, r0)
            return r1
        L16:
            r3 = 1
            return r3
    }

    @Override
    public final int getDefaultNotifyIcon() {
            r6 = this;
            int r0 = com.vivo.push.util.h.e
            boolean r0 = a(r0)
            if (r0 == 0) goto Lb
            int r0 = com.vivo.push.util.h.e
            return r0
        Lb:
            java.lang.String r0 = r6.d
            boolean r1 = a(r0)
            java.lang.String r2 = "_notifyicon"
            if (r1 != 0) goto L17
            r0 = -1
            goto L1b
        L17:
            int r0 = r6.a(r0, r2)
        L1b:
            com.vivo.push.util.h.e = r0
            boolean r0 = a(r0)
            if (r0 == 0) goto L26
            int r0 = com.vivo.push.util.h.e
            return r0
        L26:
            java.lang.String r0 = r6.c
        L28:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r3 = "drawable"
            if (r1 == 0) goto L3b
            android.content.res.Resources r0 = r6.a
            java.lang.String r1 = r6.b
            java.lang.String r2 = "vivo_push_notifyicon"
            int r0 = r0.getIdentifier(r2, r3, r1)
            return r0
        L3b:
            android.content.res.Resources r1 = r6.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "vivo_push_rom"
            r4.<init>(r5)
            r4.append(r0)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = r6.b
            int r1 = r1.getIdentifier(r4, r3, r5)
            if (r1 <= 0) goto L57
            return r1
        L57:
            r1 = 0
            int r3 = r0.length()
            int r3 = r3 + (-1)
            java.lang.String r0 = r0.substring(r1, r3)
            goto L28
    }

    @Override
    public final int getDefaultSmallIconId() {
            r6 = this;
            int r0 = com.vivo.push.util.h.f
            boolean r0 = a(r0)
            if (r0 == 0) goto Lb
            int r0 = com.vivo.push.util.h.f
            return r0
        Lb:
            java.lang.String r0 = r6.d
            boolean r1 = a(r0)
            java.lang.String r2 = "_icon"
            if (r1 != 0) goto L17
            r0 = -1
            goto L1b
        L17:
            int r0 = r6.a(r0, r2)
        L1b:
            com.vivo.push.util.h.f = r0
            boolean r0 = a(r0)
            if (r0 == 0) goto L26
            int r0 = com.vivo.push.util.h.f
            return r0
        L26:
            java.lang.String r0 = r6.c
        L28:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r3 = "drawable"
            if (r1 == 0) goto L3b
            android.content.res.Resources r0 = r6.a
            java.lang.String r1 = r6.b
            java.lang.String r2 = "vivo_push_icon"
            int r0 = r0.getIdentifier(r2, r3, r1)
            return r0
        L3b:
            android.content.res.Resources r1 = r6.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "vivo_push_rom"
            r4.<init>(r5)
            r4.append(r0)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = r6.b
            int r1 = r1.getIdentifier(r4, r3, r5)
            if (r1 <= 0) goto L57
            return r1
        L57:
            r1 = 0
            int r3 = r0.length()
            int r3 = r3 + (-1)
            java.lang.String r0 = r0.substring(r1, r3)
            goto L28
    }

    @Override
    public final int getNotifyMode(com.vivo.push.model.InsideNotificationItem r2) {
            r1 = this;
            int r2 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r2 < r0) goto L8
            r2 = 2
            return r2
        L8:
            r2 = 1
            return r2
    }

    @Override
    public final void init(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = r2.getPackageName()
            r1.b = r0
            android.content.res.Resources r2 = r2.getResources()
            r1.a = r2
            java.lang.String r2 = com.vivo.push.util.j.a()
            r1.c = r2
            java.lang.String r2 = android.os.Build.VERSION.RELEASE
            r1.d = r2
            return
    }
}
