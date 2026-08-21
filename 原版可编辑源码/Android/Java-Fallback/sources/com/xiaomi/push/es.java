package com.xiaomi.push;

public abstract class es extends com.xiaomi.push.eq {
    private int a;
    protected android.graphics.Bitmap a;
    private android.widget.RemoteViews a;
    protected java.lang.CharSequence a;
    private java.lang.String a;
    private java.util.ArrayList<android.app.Notification.Action> a;
    protected java.util.Map<java.lang.String, java.lang.String> a;
    private boolean a;
    private int b;
    protected java.lang.CharSequence b;
    private boolean b;

    public es(android.content.Context r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.a = r1
            r1 = 0
            r0.b = r1
            r0.a = r3
            r0.a = r2
            r0.c()
            return
    }

    public es(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r3)
            return
    }

    private android.graphics.Bitmap a() {
            r2 = this;
            android.content.Context r0 = r2.a()
            java.lang.String r1 = r2.a
            android.graphics.drawable.Drawable r0 = com.xiaomi.push.h.a(r0, r1)
            android.graphics.Bitmap r0 = com.xiaomi.push.service.al.a(r0)
            return r0
    }

    private java.lang.String c() {
            r1 = this;
            boolean r0 = r1.e()
            r1.b = r0
            if (r0 == 0) goto Ld
            java.lang.String r0 = r1.b()
            goto L11
        Ld:
            java.lang.String r0 = r1.a()
        L11:
            return r0
    }

    private void c() {
            r4 = this;
            android.content.Context r0 = r4.a()
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r1 = r4.c()
            android.content.Context r2 = r4.a()
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r3 = "layout"
            int r0 = r4.a(r0, r1, r3, r2)
            if (r0 == 0) goto L32
            android.widget.RemoteViews r1 = new android.widget.RemoteViews
            android.content.Context r2 = r4.a()
            java.lang.String r2 = r2.getPackageName()
            r1.<init>(r2, r0)
            r4.a = r1
            boolean r0 = r4.a()
            r4.a = r0
            goto L37
        L32:
            java.lang.String r0 = "create RemoteViews failed, no such layout resource was found"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L37:
            return
    }

    private boolean c() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.a
            if (r0 == 0) goto L14
            java.lang.String r1 = "custom_builder_set_title"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            boolean r0 = java.lang.Boolean.parseBoolean(r0)
            if (r0 == 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    private void d() {
            r1 = this;
            java.lang.CharSequence r0 = r1.a
            super.setContentTitle(r0)
            java.lang.CharSequence r0 = r1.b
            super.setContentText(r0)
            return
    }

    private boolean d() {
            r1 = this;
            java.lang.String r0 = r1.b()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L14
            java.lang.String r0 = r1.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    private boolean e() {
            r1 = this;
            boolean r0 = r1.d()
            if (r0 == 0) goto Le
            boolean r0 = r1.f()
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    private boolean f() {
            r5 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 20
            if (r0 >= r2) goto L8
            return r1
        L8:
            android.content.Context r0 = r5.a()
            java.lang.String r2 = r5.a
            com.xiaomi.push.service.ax r0 = com.xiaomi.push.service.ax.a(r0, r2)
            java.util.List r0 = r0.b()
            if (r0 == 0) goto L49
            boolean r2 = r0.isEmpty()
            if (r2 == 0) goto L1f
            goto L49
        L1f:
            java.util.Iterator r0 = r0.iterator()
        L23:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L49
            java.lang.Object r2 = r0.next()
            android.service.notification.StatusBarNotification r2 = (android.service.notification.StatusBarNotification) r2
            int r3 = r2.getId()
            int r4 = r5.a
            if (r3 != r4) goto L23
            android.app.Notification r0 = r2.getNotification()
            if (r0 != 0) goto L3e
            return r1
        L3e:
            android.os.Bundle r0 = r0.extras
            r1 = 1
            java.lang.String r2 = "mipush.customCopyLayout"
            boolean r0 = r0.getBoolean(r2, r1)
            r0 = r0 ^ r1
            return r0
        L49:
            return r1
    }

    protected int a(float r2) {
            r1 = this;
            android.content.Context r0 = r1.a()
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r2 = r2 * r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r0
            int r2 = (int) r2
            return r2
    }

    protected android.graphics.Bitmap a(android.graphics.Bitmap r8, float r9) {
            r7 = this;
            int r0 = r8.getWidth()
            int r1 = r8.getHeight()
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r2)
            android.graphics.Canvas r1 = new android.graphics.Canvas
            r1.<init>(r0)
            android.graphics.Paint r2 = new android.graphics.Paint
            r2.<init>()
            r3 = 1
            r2.setAntiAlias(r3)
            android.graphics.Rect r3 = new android.graphics.Rect
            int r4 = r8.getWidth()
            int r5 = r8.getHeight()
            r6 = 0
            r3.<init>(r6, r6, r4, r5)
            android.graphics.RectF r4 = new android.graphics.RectF
            r4.<init>(r3)
            r1.drawRoundRect(r4, r9, r9, r2)
            android.graphics.PorterDuffXfermode r9 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r4 = android.graphics.PorterDuff.Mode.SRC_IN
            r9.<init>(r4)
            r2.setXfermode(r9)
            r1.drawBitmap(r8, r3, r3, r2)
            boolean r9 = r8.isRecycled()
            if (r9 != 0) goto L48
            r8.recycle()
        L48:
            return r0
    }

    public final android.widget.RemoteViews a() {
            r1 = this;
            android.widget.RemoteViews r0 = r1.a
            return r0
    }

    @Override
    public com.xiaomi.push.eq a(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public com.xiaomi.push.es a(int r2, java.lang.CharSequence r3, android.app.PendingIntent r4) {
            r1 = this;
            android.app.Notification$Action r0 = new android.app.Notification$Action
            r0.<init>(r2, r3, r4)
            r1.a(r0)
            return r1
    }

    public com.xiaomi.push.es a(android.app.Notification.Action r3) {
            r2 = this;
            if (r3 == 0) goto L7
            java.util.ArrayList<android.app.Notification$Action> r0 = r2.a
            r0.add(r3)
        L7:
            int r0 = r2.b
            int r1 = r0 + 1
            r2.b = r1
            r2.a(r0, r3)
            return r2
    }

    public com.xiaomi.push.es a(android.graphics.Bitmap r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public com.xiaomi.push.es a(java.lang.CharSequence r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    protected abstract java.lang.String a();

    @Override
    protected void a() {
            r4 = this;
            super.a()
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            boolean r1 = r4.d()
            r2 = 0
            java.lang.String r3 = "mipush.customCopyLayout"
            if (r1 == 0) goto L17
            boolean r1 = r4.b
            r0.putBoolean(r3, r1)
            goto L1a
        L17:
            r0.putBoolean(r3, r2)
        L1a:
            java.lang.String r1 = "miui.customHeight"
            r0.putBoolean(r1, r2)
            r1 = 1
            java.lang.String r2 = "mipush.customNotification"
            r0.putBoolean(r2, r1)
            java.lang.String r1 = "large_icon"
            int r1 = r4.a(r1)
            java.lang.String r2 = "mipush.customLargeIconId"
            r0.putInt(r2, r1)
            java.util.ArrayList<android.app.Notification$Action> r1 = r4.a
            int r1 = r1.size()
            if (r1 <= 0) goto L4a
            java.util.ArrayList<android.app.Notification$Action> r1 = r4.a
            int r1 = r1.size()
            android.app.Notification$Action[] r1 = new android.app.Notification.Action[r1]
            java.util.ArrayList<android.app.Notification$Action> r2 = r4.a
            r2.toArray(r1)
            java.lang.String r2 = "mipush.customActions"
            r0.putParcelableArray(r2, r1)
        L4a:
            boolean r1 = r4.c()
            if (r1 != 0) goto L6e
            android.content.Context r1 = r4.a()
            android.content.ContentResolver r1 = r1.getContentResolver()
            boolean r1 = com.xiaomi.push.service.ay.a(r1)
            if (r1 != 0) goto L5f
            goto L6e
        L5f:
            java.lang.CharSequence r1 = r4.a
            java.lang.String r2 = "mipush.customTitle"
            r0.putCharSequence(r2, r1)
            java.lang.CharSequence r1 = r4.b
            java.lang.String r2 = "mipush.customContent"
            r0.putCharSequence(r2, r1)
            goto L71
        L6e:
            r4.d()
        L71:
            r4.a(r0)
            return
    }

    protected void a(int r3) {
            r2 = this;
            android.graphics.Bitmap r0 = r2.a()
            if (r0 == 0) goto Le
            android.widget.RemoteViews r1 = r2.a()
            r1.setImageViewBitmap(r3, r0)
            goto L21
        Le:
            android.content.Context r0 = r2.a()
            java.lang.String r1 = r2.a
            int r0 = com.xiaomi.push.h.b(r0, r1)
            if (r0 == 0) goto L21
            android.widget.RemoteViews r1 = r2.a()
            r1.setImageViewResource(r3, r0)
        L21:
            return
    }

    protected void a(int r1, android.app.Notification.Action r2) {
            r0 = this;
            return
    }

    protected abstract boolean a();

    protected final boolean a(int r7) {
            r6 = this;
            int r0 = android.graphics.Color.red(r7)
            double r0 = (double) r0
            r2 = 4599057925072241033(0x3fd322d0e5604189, double:0.299)
            double r0 = r0 * r2
            int r2 = android.graphics.Color.green(r7)
            double r2 = (double) r2
            r4 = 4603462445507809378(0x3fe2c8b439581062, double:0.587)
            double r2 = r2 * r4
            double r0 = r0 + r2
            int r7 = android.graphics.Color.blue(r7)
            double r2 = (double) r7
            r4 = 4592878986383488713(0x3fbd2f1a9fbe76c9, double:0.114)
            double r2 = r2 * r4
            double r0 = r0 + r2
            r2 = 4640959416005296128(0x4068000000000000, double:192.0)
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 >= 0) goto L2b
            r7 = 1
            goto L2c
        L2b:
            r7 = 0
        L2c:
            return r7
    }

    @Override
    public android.app.Notification.Builder addAction(int r1, java.lang.CharSequence r2, android.app.PendingIntent r3) {
            r0 = this;
            com.xiaomi.push.es r1 = r0.a(r1, r2, r3)
            return r1
    }

    @Override
    public android.app.Notification.Builder addAction(android.app.Notification.Action r1) {
            r0 = this;
            com.xiaomi.push.es r1 = r0.a(r1)
            return r1
    }

    public com.xiaomi.push.es b(java.lang.CharSequence r1) {
            r0 = this;
            r0.b = r1
            return r0
    }

    protected abstract java.lang.String b();

    protected final void b() {
            r1 = this;
            java.lang.CharSequence r0 = r1.a
            super.setContentTitle(r0)
            java.lang.CharSequence r0 = r1.b
            super.setContentText(r0)
            android.graphics.Bitmap r0 = r1.a
            if (r0 == 0) goto L11
            super.setLargeIcon(r0)
        L11:
            return
    }

    protected final boolean b() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    @Override
    public android.app.Notification.Builder setContentText(java.lang.CharSequence r1) {
            r0 = this;
            com.xiaomi.push.es r1 = r0.b(r1)
            return r1
    }

    @Override
    public android.app.Notification.Builder setContentTitle(java.lang.CharSequence r1) {
            r0 = this;
            com.xiaomi.push.es r1 = r0.a(r1)
            return r1
    }

    @Override
    public android.app.Notification.Builder setLargeIcon(android.graphics.Bitmap r1) {
            r0 = this;
            com.xiaomi.push.es r1 = r0.a(r1)
            return r1
    }
}
