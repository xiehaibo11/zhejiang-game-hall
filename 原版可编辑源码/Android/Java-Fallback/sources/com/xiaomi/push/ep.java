package com.xiaomi.push;

public class ep extends com.xiaomi.push.es {
    private int a;
    private android.graphics.Bitmap b;
    private android.graphics.Bitmap c;

    public ep(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 16777216(0x1000000, float:2.3509887E-38)
            r0.a = r1
            return
    }

    @Override
    public com.xiaomi.push.ep a(android.graphics.Bitmap r3) {
            r2 = this;
            boolean r0 = r2.b()
            if (r0 == 0) goto L28
            if (r3 == 0) goto L28
            int r0 = r3.getWidth()
            r1 = 984(0x3d8, float:1.379E-42)
            if (r0 != r1) goto L23
            r0 = 184(0xb8, float:2.58E-43)
            int r1 = r3.getHeight()
            if (r0 > r1) goto L23
            int r0 = r3.getHeight()
            r1 = 1678(0x68e, float:2.351E-42)
            if (r0 > r1) goto L23
            r2.b = r3
            goto L28
        L23:
            java.lang.String r3 = "colorful notification banner image resolution error, must belong to [984*184, 984*1678]"
            com.xiaomi.channel.commonutils.logger.b.a(r3)
        L28:
            return r2
    }

    @Override
    public com.xiaomi.push.ep a(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.b()
            if (r0 == 0) goto L18
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L18
            int r2 = android.graphics.Color.parseColor(r2)     // Catch: java.lang.Exception -> L13
            r1.a = r2     // Catch: java.lang.Exception -> L13
            goto L18
        L13:
            java.lang.String r2 = "parse banner notification image text color error"
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L18:
            return r1
    }

    @Override
    public com.xiaomi.push.es a(android.graphics.Bitmap r1) {
            r0 = this;
            return r0
    }

    @Override
    protected java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "notification_banner"
            return r0
    }

    @Override
    public void a() {
            r7 = this;
            boolean r0 = r7.b()
            if (r0 == 0) goto Laf
            android.graphics.Bitmap r0 = r7.b
            if (r0 == 0) goto Laf
            super.a()
            android.content.Context r0 = r7.a()
            android.content.res.Resources r0 = r0.getResources()
            android.content.Context r1 = r7.a()
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = "id"
            java.lang.String r3 = "bg"
            int r3 = r7.a(r0, r3, r2, r1)
            android.content.Context r4 = r7.a()
            int r4 = com.xiaomi.push.m.a(r4)
            r5 = 10
            if (r4 < r5) goto L3e
            android.widget.RemoteViews r4 = r7.a()
            android.graphics.Bitmap r5 = r7.b
            r6 = 1106247680(0x41f00000, float:30.0)
            android.graphics.Bitmap r5 = r7.a(r5, r6)
            goto L44
        L3e:
            android.widget.RemoteViews r4 = r7.a()
            android.graphics.Bitmap r5 = r7.b
        L44:
            r4.setImageViewBitmap(r3, r5)
            java.lang.String r3 = "icon"
            int r3 = r7.a(r0, r3, r2, r1)
            android.graphics.Bitmap r4 = r7.c
            if (r4 == 0) goto L5b
            android.widget.RemoteViews r4 = r7.a()
            android.graphics.Bitmap r5 = r7.c
            r4.setImageViewBitmap(r3, r5)
            goto L5e
        L5b:
            r7.a(r3)
        L5e:
            java.lang.String r3 = "title"
            int r0 = r7.a(r0, r3, r2, r1)
            android.widget.RemoteViews r1 = r7.a()
            java.lang.CharSequence r2 = r7.a
            r1.setTextViewText(r0, r2)
            java.util.Map<java.lang.String, java.lang.String> r1 = r7.a
            r2 = 16777216(0x1000000, float:2.3509887E-38)
            if (r1 == 0) goto L84
            int r1 = r7.a
            if (r1 != r2) goto L84
            java.util.Map<java.lang.String, java.lang.String> r1 = r7.a
            java.lang.String r3 = "notification_image_text_color"
            java.lang.Object r1 = r1.get(r3)
            java.lang.String r1 = (java.lang.String) r1
            r7.a(r1)
        L84:
            android.widget.RemoteViews r1 = r7.a()
            int r3 = r7.a
            if (r3 == r2) goto L95
            boolean r2 = r7.a(r3)
            if (r2 == 0) goto L95
            r2 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            goto L96
        L95:
            r2 = -1
        L96:
            r1.setTextColor(r0, r2)
            android.widget.RemoteViews r0 = r7.a()
            r7.a(r0)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1 = 1
            java.lang.String r2 = "miui.customHeight"
            r0.putBoolean(r2, r1)
            r7.a(r0)
            goto Lb2
        Laf:
            r7.b()
        Lb2:
            return
    }

    @Override
    protected boolean a() {
            r7 = this;
            boolean r0 = com.xiaomi.push.m.a()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            android.content.Context r0 = r7.a()
            android.content.res.Resources r0 = r0.getResources()
            android.content.Context r2 = r7.a()
            java.lang.String r2 = r2.getPackageName()
            android.content.Context r3 = r7.a()
            android.content.res.Resources r3 = r3.getResources()
            android.content.Context r4 = r7.a()
            java.lang.String r4 = r4.getPackageName()
            java.lang.String r5 = "id"
            java.lang.String r6 = "bg"
            int r3 = r7.a(r3, r6, r5, r4)
            java.lang.String r4 = "icon"
            int r4 = r7.a(r0, r4, r5, r2)
            java.lang.String r6 = "title"
            int r0 = r7.a(r0, r6, r5, r2)
            if (r3 == 0) goto L4f
            if (r4 == 0) goto L4f
            if (r0 == 0) goto L4f
            android.content.Context r0 = r7.a()
            int r0 = com.xiaomi.push.m.a(r0)
            r2 = 9
            if (r0 < r2) goto L4f
            r1 = 1
        L4f:
            return r1
    }

    public com.xiaomi.push.ep b(android.graphics.Bitmap r2) {
            r1 = this;
            boolean r0 = r1.b()
            if (r0 == 0) goto La
            if (r2 == 0) goto La
            r1.c = r2
        La:
            return r1
    }

    @Override
    protected java.lang.String b() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public android.app.Notification.Builder setLargeIcon(android.graphics.Bitmap r1) {
            r0 = this;
            com.xiaomi.push.es r1 = r0.a(r1)
            return r1
    }
}
