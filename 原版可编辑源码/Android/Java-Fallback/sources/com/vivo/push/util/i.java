package com.vivo.push.util;

public final class i implements com.vivo.push.util.BaseNotifyLayoutAdapter {
    private android.content.res.Resources a;
    private java.lang.String b;

    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final int getNotificationLayout() {
            r4 = this;
            android.content.res.Resources r0 = r4.a
            java.lang.String r1 = r4.b
            java.lang.String r2 = "push_notify"
            java.lang.String r3 = "layout"
            int r0 = r0.getIdentifier(r2, r3, r1)
            return r0
    }

    @Override
    public final int getSuitIconId() {
            r4 = this;
            boolean r0 = com.vivo.push.util.j.c
            java.lang.String r1 = "id"
            if (r0 == 0) goto L11
            android.content.res.Resources r0 = r4.a
            java.lang.String r2 = r4.b
            java.lang.String r3 = "notify_icon_rom30"
        Lc:
            int r0 = r0.getIdentifier(r3, r1, r2)
            return r0
        L11:
            boolean r0 = com.vivo.push.util.j.b
            if (r0 == 0) goto L1c
            android.content.res.Resources r0 = r4.a
            java.lang.String r2 = r4.b
            java.lang.String r3 = "notify_icon_rom20"
            goto Lc
        L1c:
            android.content.res.Resources r0 = r4.a
            java.lang.String r2 = r4.b
            java.lang.String r3 = "notify_icon"
            goto Lc
    }

    @Override
    public final int getTitleColor() {
            r2 = this;
            java.lang.String r0 = "com.android.internal.R$color"
            java.lang.String r1 = "vivo_notification_title_text_color"
            java.lang.Object r0 = com.vivo.push.util.z.a(r0, r1)     // Catch: java.lang.Exception -> Lf
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Exception -> Lf
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> Lf
            goto L14
        Lf:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
        L14:
            if (r0 <= 0) goto L1d
            android.content.res.Resources r1 = r2.a
            int r0 = r1.getColor(r0)
            return r0
        L1d:
            boolean r0 = com.vivo.push.util.j.c
            r1 = -1
            if (r0 == 0) goto L23
            return r1
        L23:
            boolean r0 = com.vivo.push.util.j.b
            if (r0 == 0) goto L33
            boolean r0 = com.vivo.push.util.j.c
            if (r0 == 0) goto L32
            java.lang.String r0 = "#ff999999"
            int r0 = android.graphics.Color.parseColor(r0)
            return r0
        L32:
            return r1
        L33:
            r0 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            return r0
    }

    @Override
    public final void init(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = r2.getPackageName()
            r1.b = r0
            android.content.res.Resources r2 = r2.getResources()
            r1.a = r2
            return
    }
}
