package com.xiaomi.push;

public class eq extends android.app.Notification.Builder {
    private android.content.Context a;

    public eq(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r1
            return
    }

    public int a(android.content.res.Resources r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto Lb
            int r2 = r2.getIdentifier(r3, r4, r5)
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public final int a(java.lang.String r4) {
            r3 = this;
            android.content.Context r0 = r3.a()
            android.content.res.Resources r0 = r0.getResources()
            android.content.Context r1 = r3.a()
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = "id"
            int r4 = r3.a(r0, r4, r2, r1)
            return r4
    }

    protected android.content.Context a() {
            r1 = this;
            android.content.Context r0 = r1.a
            return r0
    }

    public com.xiaomi.push.eq a(android.os.Bundle r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto L9
            super.addExtras(r3)
        L9:
            return r2
    }

    public com.xiaomi.push.eq a(android.widget.RemoteViews r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto La
            super.setCustomContentView(r3)
            goto Ld
        La:
            super.setContent(r3)
        Ld:
            return r2
    }

    public com.xiaomi.push.eq a(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L2f
            int r4 = android.graphics.Color.parseColor(r4)     // Catch: java.lang.Exception -> L1a
            java.lang.String r0 = "setColor"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L1a
            r2 = 0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L1a
            r1[r2] = r4     // Catch: java.lang.Exception -> L1a
            com.xiaomi.push.bk.a(r3, r0, r1)     // Catch: java.lang.Exception -> L1a
            goto L2f
        L1a:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "fail to set color. "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r4)
        L2f:
            return r3
    }

    public com.xiaomi.push.eq a(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            return r0
    }

    protected void a() {
            r0 = this;
            return
    }

    @Override
    public android.app.Notification.Builder addExtras(android.os.Bundle r1) {
            r0 = this;
            com.xiaomi.push.eq r1 = r0.a(r1)
            return r1
    }

    @Override
    public android.app.Notification build() {
            r1 = this;
            r1.a()
            android.app.Notification r0 = super.build()
            return r0
    }

    @Override
    public android.app.Notification.Builder setCustomContentView(android.widget.RemoteViews r1) {
            r0 = this;
            com.xiaomi.push.eq r1 = r0.a(r1)
            return r1
    }
}
