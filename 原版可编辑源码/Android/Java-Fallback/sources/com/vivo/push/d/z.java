package com.vivo.push.d;

public abstract class z extends com.vivo.push.l {
    protected com.vivo.push.sdk.PushMessageCallback b;

    z(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public final void a(com.vivo.push.sdk.PushMessageCallback r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final boolean a(java.security.PublicKey r7, java.lang.String r8, java.lang.String r9) {
            r6 = this;
            java.lang.String r0 = "vertify fail srcDigest is "
            com.vivo.push.e r1 = com.vivo.push.e.a()
            boolean r1 = r1.d()
            r2 = 1
            java.lang.String r3 = "OnVerifyCallBackCommand"
            if (r1 != 0) goto L15
            java.lang.String r7 = "vertify is not support , vertify is ignore"
            com.vivo.push.util.p.d(r3, r7)
            return r2
        L15:
            r1 = 0
            if (r7 != 0) goto L1e
            java.lang.String r7 = "vertify key is null"
        L1a:
            com.vivo.push.util.p.d(r3, r7)
            return r1
        L1e:
            boolean r4 = android.text.TextUtils.isEmpty(r8)
            if (r4 == 0) goto L27
            java.lang.String r7 = "contentTag is null"
            goto L1a
        L27:
            boolean r4 = android.text.TextUtils.isEmpty(r9)
            if (r4 != 0) goto L7f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L78
            r4.<init>()     // Catch: java.lang.Exception -> L78
            int r5 = r8.hashCode()     // Catch: java.lang.Exception -> L78
            r4.append(r5)     // Catch: java.lang.Exception -> L78
            java.lang.String r5 = " = "
            r4.append(r5)     // Catch: java.lang.Exception -> L78
            r4.append(r9)     // Catch: java.lang.Exception -> L78
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L78
            com.vivo.push.util.p.d(r3, r4)     // Catch: java.lang.Exception -> L78
            java.lang.String r4 = "UTF-8"
            byte[] r4 = r8.getBytes(r4)     // Catch: java.lang.Exception -> L78
            r5 = 2
            byte[] r9 = android.util.Base64.decode(r9, r5)     // Catch: java.lang.Exception -> L78
            boolean r7 = com.vivo.push.util.u.a(r4, r7, r9)     // Catch: java.lang.Exception -> L78
            if (r7 == 0) goto L5f
            java.lang.String r7 = "vertify id is success"
            com.vivo.push.util.p.d(r3, r7)     // Catch: java.lang.Exception -> L78
            return r2
        L5f:
            java.lang.String r7 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> L78
            java.lang.String r7 = r0.concat(r7)     // Catch: java.lang.Exception -> L78
            com.vivo.push.util.p.d(r3, r7)     // Catch: java.lang.Exception -> L78
            android.content.Context r7 = r6.a     // Catch: java.lang.Exception -> L78
            java.lang.String r8 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> L78
            java.lang.String r8 = r0.concat(r8)     // Catch: java.lang.Exception -> L78
            com.vivo.push.util.p.c(r7, r8)     // Catch: java.lang.Exception -> L78
            return r1
        L78:
            r7 = move-exception
            r7.printStackTrace()
            java.lang.String r7 = "vertify exception"
            goto L1a
        L7f:
            java.lang.String r7 = "vertify id is null"
            goto L1a
    }

    public final int b() {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L3b
            android.content.Context r0 = r3.a
            java.lang.String r1 = "notification"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            if (r0 == 0) goto L1b
            boolean r1 = r0.areNotificationsEnabled()
            if (r1 != 0) goto L1b
            r0 = 2104(0x838, float:2.948E-42)
            return r0
        L1b:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r1 < r2) goto L3b
            if (r0 == 0) goto L3b
            java.lang.String r1 = "vivo_push_channel"
            android.app.NotificationChannel r0 = r0.getNotificationChannel(r1)     // Catch: java.lang.Exception -> L34
            if (r0 == 0) goto L3b
            int r0 = r0.getImportance()     // Catch: java.lang.Exception -> L34
            if (r0 != 0) goto L3b
            r0 = 2121(0x849, float:2.972E-42)
            return r0
        L34:
            java.lang.String r0 = "OnVerifyCallBackCommand"
            java.lang.String r1 = "判断通知通道出现系统错误"
            com.vivo.push.util.p.b(r0, r1)
        L3b:
            r0 = 0
            return r0
    }
}
