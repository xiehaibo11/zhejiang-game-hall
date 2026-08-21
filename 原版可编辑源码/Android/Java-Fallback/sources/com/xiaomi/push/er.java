package com.xiaomi.push;

public class er extends com.xiaomi.push.es {
    private int a;
    private android.app.PendingIntent a;
    private int b;
    private android.graphics.Bitmap b;
    private int c;
    private java.lang.CharSequence c;

    public er(android.content.Context r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 16777216(0x1000000, float:2.3509887E-38)
            r0.a = r1
            r0.b = r1
            r0.c = r1
            return
    }

    private android.graphics.drawable.Drawable a(int r5, int r6, int r7, float r8) {
            r4 = this;
            android.graphics.drawable.ShapeDrawable r0 = new android.graphics.drawable.ShapeDrawable
            r0.<init>()
            android.graphics.drawable.shapes.RoundRectShape r1 = new android.graphics.drawable.shapes.RoundRectShape
            r2 = 8
            float[] r2 = new float[r2]
            r3 = 0
            r2[r3] = r8
            r3 = 1
            r2[r3] = r8
            r3 = 2
            r2[r3] = r8
            r3 = 3
            r2[r3] = r8
            r3 = 4
            r2[r3] = r8
            r3 = 5
            r2[r3] = r8
            r3 = 6
            r2[r3] = r8
            r3 = 7
            r2[r3] = r8
            r8 = 0
            r1.<init>(r2, r8, r8)
            r0.setShape(r1)
            android.graphics.Paint r8 = r0.getPaint()
            r8.setColor(r5)
            android.graphics.Paint r5 = r0.getPaint()
            android.graphics.Paint$Style r8 = android.graphics.Paint.Style.FILL
            r5.setStyle(r8)
            r0.setIntrinsicWidth(r6)
            r0.setIntrinsicHeight(r7)
            return r0
    }

    private void a(android.widget.RemoteViews r8, int r9, int r10, int r11, boolean r12) {
            r7 = this;
            r0 = 1086324736(0x40c00000, float:6.0)
            int r5 = r7.a(r0)
            r4 = 0
            r6 = 0
            r1 = r8
            r2 = r9
            r3 = r5
            r1.setViewPadding(r2, r3, r4, r5, r6)
            if (r12 == 0) goto L12
            r9 = -1
            goto L14
        L12:
            r9 = -16777216(0xffffffffff000000, float:-1.7014118E38)
        L14:
            r8.setTextColor(r10, r9)
            r8.setTextColor(r11, r9)
            return
    }

    @Override
    public com.xiaomi.push.er a(android.graphics.Bitmap r3) {
            r2 = this;
            boolean r0 = r2.b()
            if (r0 == 0) goto L28
            if (r3 == 0) goto L28
            int r0 = r3.getWidth()
            r1 = 984(0x3d8, float:1.379E-42)
            if (r0 != r1) goto L23
            int r0 = r3.getHeight()
            r1 = 177(0xb1, float:2.48E-43)
            if (r0 < r1) goto L23
            int r0 = r3.getHeight()
            r1 = 207(0xcf, float:2.9E-43)
            if (r0 > r1) goto L23
            r2.b = r3
            goto L28
        L23:
            java.lang.String r3 = "colorful notification bg image resolution error, must [984*177, 984*207]"
            com.xiaomi.channel.commonutils.logger.b.a(r3)
        L28:
            return r2
    }

    public com.xiaomi.push.er a(java.lang.CharSequence r2, android.app.PendingIntent r3) {
            r1 = this;
            boolean r0 = r1.b()
            if (r0 == 0) goto Le
            r0 = 0
            super.a(r0, r2, r3)
            r1.c = r2
            r1.a = r3
        Le:
            return r1
    }

    @Override
    public com.xiaomi.push.er a(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.b()
            if (r0 == 0) goto L18
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L18
            int r2 = android.graphics.Color.parseColor(r2)     // Catch: java.lang.Exception -> L13
            r1.b = r2     // Catch: java.lang.Exception -> L13
            goto L18
        L13:
            java.lang.String r2 = "parse colorful notification button bg color error"
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L18:
            return r1
    }

    @Override
    protected java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "notification_colorful"
            return r0
    }

    @Override
    public void a() {
            r15 = this;
            boolean r0 = r15.b()
            if (r0 == 0) goto L1a8
            super.a()
            android.content.Context r0 = r15.a()
            android.content.res.Resources r0 = r0.getResources()
            android.content.Context r1 = r15.a()
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = "id"
            java.lang.String r3 = "icon"
            int r3 = r15.a(r0, r3, r2, r1)
            android.graphics.Bitmap r4 = r15.a
            if (r4 != 0) goto L29
            r15.a(r3)
            goto L32
        L29:
            android.widget.RemoteViews r4 = r15.a()
            android.graphics.Bitmap r5 = r15.a
            r4.setImageViewBitmap(r3, r5)
        L32:
            java.lang.String r4 = "title"
            int r8 = r15.a(r0, r4, r2, r1)
            java.lang.String r4 = "content"
            int r9 = r15.a(r0, r4, r2, r1)
            android.widget.RemoteViews r4 = r15.a()
            java.lang.CharSequence r5 = r15.a
            r4.setTextViewText(r8, r5)
            android.widget.RemoteViews r4 = r15.a()
            java.lang.CharSequence r5 = r15.b
            r4.setTextViewText(r9, r5)
            java.lang.CharSequence r4 = r15.c
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            r5 = 16777216(0x1000000, float:2.3509887E-38)
            r6 = 0
            if (r4 != 0) goto Lbe
            java.lang.String r4 = "buttonContainer"
            int r4 = r15.a(r0, r4, r2, r1)
            java.lang.String r7 = "button"
            int r7 = r15.a(r0, r7, r2, r1)
            java.lang.String r10 = "buttonBg"
            int r10 = r15.a(r0, r10, r2, r1)
            android.widget.RemoteViews r11 = r15.a()
            r11.setViewVisibility(r4, r6)
            android.widget.RemoteViews r11 = r15.a()
            java.lang.CharSequence r12 = r15.c
            r11.setTextViewText(r7, r12)
            android.widget.RemoteViews r11 = r15.a()
            android.app.PendingIntent r12 = r15.a
            r11.setOnClickPendingIntent(r4, r12)
            int r4 = r15.b
            if (r4 == r5) goto Lbe
            r4 = 1116471296(0x428c0000, float:70.0)
            int r4 = r15.a(r4)
            r11 = 1105723392(0x41e80000, float:29.0)
            int r11 = r15.a(r11)
            float r12 = (float) r11
            r13 = 1073741824(0x40000000, float:2.0)
            float r12 = r12 / r13
            android.widget.RemoteViews r13 = r15.a()
            int r14 = r15.b
            android.graphics.drawable.Drawable r4 = r15.a(r14, r4, r11, r12)
            android.graphics.Bitmap r4 = com.xiaomi.push.service.al.a(r4)
            r13.setImageViewBitmap(r10, r4)
            android.widget.RemoteViews r4 = r15.a()
            int r10 = r15.b
            boolean r10 = r15.a(r10)
            if (r10 == 0) goto Lb9
            r10 = -1
            goto Lbb
        Lb9:
            r10 = -16777216(0xffffffffff000000, float:-1.7014118E38)
        Lbb:
            r4.setTextColor(r7, r10)
        Lbe:
            java.lang.String r4 = "bg"
            int r4 = r15.a(r0, r4, r2, r1)
            java.lang.String r7 = "container"
            int r7 = r15.a(r0, r7, r2, r1)
            int r0 = r15.a
            r1 = 1106247680(0x41f00000, float:30.0)
            r2 = 10
            r11 = 1
            if (r0 == r5) goto L10e
            android.content.Context r0 = r15.a()
            int r0 = com.xiaomi.push.m.a(r0)
            r3 = 192(0xc0, float:2.69E-43)
            r5 = 984(0x3d8, float:1.379E-42)
            if (r0 < r2) goto Lec
            android.widget.RemoteViews r0 = r15.a()
            int r2 = r15.a
            android.graphics.drawable.Drawable r1 = r15.a(r2, r5, r3, r1)
            goto Lf7
        Lec:
            android.widget.RemoteViews r0 = r15.a()
            int r1 = r15.a
            r2 = 0
            android.graphics.drawable.Drawable r1 = r15.a(r1, r5, r3, r2)
        Lf7:
            android.graphics.Bitmap r1 = com.xiaomi.push.service.al.a(r1)
            r0.setImageViewBitmap(r4, r1)
            android.widget.RemoteViews r6 = r15.a()
            int r0 = r15.a
            boolean r10 = r15.a(r0)
        L108:
            r5 = r15
            r5.a(r6, r7, r8, r9, r10)
            goto L193
        L10e:
            android.graphics.Bitmap r0 = r15.b
            if (r0 == 0) goto L158
            android.content.Context r0 = r15.a()
            int r0 = com.xiaomi.push.m.a(r0)
            if (r0 < r2) goto L127
            android.widget.RemoteViews r0 = r15.a()
            android.graphics.Bitmap r2 = r15.b
            android.graphics.Bitmap r1 = r15.a(r2, r1)
            goto L12d
        L127:
            android.widget.RemoteViews r0 = r15.a()
            android.graphics.Bitmap r1 = r15.b
        L12d:
            r0.setImageViewBitmap(r4, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r15.a
            if (r0 == 0) goto L145
            int r0 = r15.c
            if (r0 != r5) goto L145
            java.util.Map<java.lang.String, java.lang.String> r0 = r15.a
            java.lang.String r1 = "notification_image_text_color"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            r15.c(r0)
        L145:
            int r0 = r15.c
            if (r0 == r5) goto L152
            boolean r0 = r15.a(r0)
            if (r0 != 0) goto L150
            goto L152
        L150:
            r10 = r6
            goto L153
        L152:
            r10 = r11
        L153:
            android.widget.RemoteViews r6 = r15.a()
            goto L108
        L158:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L193
            android.widget.RemoteViews r0 = r15.a()
            r1 = 8
            r0.setViewVisibility(r3, r1)
            android.widget.RemoteViews r0 = r15.a()
            r0.setViewVisibility(r4, r1)
            android.content.Context r0 = r15.a()     // Catch: java.lang.Exception -> L18e
            java.lang.String r1 = "android.app.Notification$DecoratedCustomViewStyle"
            java.lang.Class r0 = com.xiaomi.push.v.a(r0, r1)     // Catch: java.lang.Exception -> L18e
            java.lang.Class[] r1 = new java.lang.Class[r6]     // Catch: java.lang.Exception -> L18e
            java.lang.reflect.Constructor r0 = r0.getConstructor(r1)     // Catch: java.lang.Exception -> L18e
            java.lang.Object[] r1 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> L18e
            java.lang.Object r0 = r0.newInstance(r1)     // Catch: java.lang.Exception -> L18e
            java.lang.String r1 = "setStyle"
            java.lang.Object[] r2 = new java.lang.Object[r11]     // Catch: java.lang.Exception -> L18e
            r2[r6] = r0     // Catch: java.lang.Exception -> L18e
            com.xiaomi.push.bk.a(r15, r1, r2)     // Catch: java.lang.Exception -> L18e
            goto L193
        L18e:
            java.lang.String r0 = "load class DecoratedCustomViewStyle failed"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L193:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "miui.customHeight"
            r0.putBoolean(r1, r11)
            r15.a(r0)
            android.widget.RemoteViews r0 = r15.a()
            r15.a(r0)
            goto L1ab
        L1a8:
            r15.b()
        L1ab:
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
            java.lang.String r3 = "id"
            java.lang.String r4 = "icon"
            int r4 = r7.a(r0, r4, r3, r2)
            java.lang.String r5 = "title"
            int r5 = r7.a(r0, r5, r3, r2)
            java.lang.String r6 = "content"
            int r0 = r7.a(r0, r6, r3, r2)
            if (r4 == 0) goto L33
            if (r5 == 0) goto L33
            if (r0 == 0) goto L33
            r1 = 1
        L33:
            return r1
    }

    public com.xiaomi.push.er b(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.b()
            if (r0 == 0) goto L18
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L18
            int r2 = android.graphics.Color.parseColor(r2)     // Catch: java.lang.Exception -> L13
            r1.a = r2     // Catch: java.lang.Exception -> L13
            goto L18
        L13:
            java.lang.String r2 = "parse colorful notification bg color error"
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L18:
            return r1
    }

    @Override
    protected java.lang.String b() {
            r1 = this;
            java.lang.String r0 = "notification_colorful_copy"
            return r0
    }

    public com.xiaomi.push.er c(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.b()
            if (r0 == 0) goto L18
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L18
            int r2 = android.graphics.Color.parseColor(r2)     // Catch: java.lang.Exception -> L13
            r1.c = r2     // Catch: java.lang.Exception -> L13
            goto L18
        L13:
            java.lang.String r2 = "parse colorful notification image text color error"
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L18:
            return r1
    }
}
