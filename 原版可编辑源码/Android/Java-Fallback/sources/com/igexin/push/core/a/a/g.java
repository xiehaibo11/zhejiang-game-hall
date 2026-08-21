package com.igexin.push.core.a.a;

public class g implements com.igexin.push.core.a.a.a {
    private static final java.lang.String a = null;

    static {
            java.lang.String r0 = com.igexin.push.config.i.a
            com.igexin.push.core.a.a.g.a = r0
            return
    }

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    private int a(com.igexin.push.core.bean.g r7, boolean r8) {
            r6 = this;
            java.lang.String r0 = "push_small"
            java.lang.String r1 = "mipmap"
            java.lang.String r2 = "drawable"
            if (r8 == 0) goto L62
            r8 = 0
            android.content.Context r3 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L26
            android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Throwable -> L26
            java.lang.String r4 = com.igexin.push.core.d.e     // Catch: java.lang.Throwable -> L26
            int r3 = r3.getIdentifier(r0, r2, r4)     // Catch: java.lang.Throwable -> L26
            if (r3 != 0) goto L47
            android.content.Context r4 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L24
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Throwable -> L24
            java.lang.String r5 = com.igexin.push.core.d.e     // Catch: java.lang.Throwable -> L24
            int r3 = r4.getIdentifier(r0, r1, r5)     // Catch: java.lang.Throwable -> L24
            goto L47
        L24:
            r0 = move-exception
            goto L28
        L26:
            r0 = move-exception
            r3 = r8
        L28:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = com.igexin.push.core.a.a.g.a
            r4.append(r5)
            java.lang.String r5 = "|"
            r4.append(r5)
            java.lang.String r0 = r0.toString()
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            java.lang.Object[] r4 = new java.lang.Object[r8]
            com.igexin.b.a.c.b.a(r0, r4)
        L47:
            if (r3 == 0) goto L4a
            return r3
        L4a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = com.igexin.push.core.a.a.g.a
            r0.append(r3)
            java.lang.String r3 = "|push_small.png is missing"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r8 = new java.lang.Object[r8]
            com.igexin.b.a.c.b.a(r0, r8)
        L62:
            android.content.Context r8 = com.igexin.push.core.d.g
            android.content.res.Resources r8 = r8.getResources()
            java.lang.String r0 = com.igexin.push.core.d.e
            java.lang.String r3 = "push"
            int r8 = r8.getIdentifier(r3, r2, r0)
            if (r8 != 0) goto L7e
            android.content.Context r8 = com.igexin.push.core.d.g
            android.content.res.Resources r8 = r8.getResources()
            java.lang.String r0 = com.igexin.push.core.d.e
            int r8 = r8.getIdentifier(r3, r1, r0)
        L7e:
            java.lang.String r0 = r7.g()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r3 = 17301651(0x1080093, float:2.4979667E-38)
            if (r0 == 0) goto L90
            if (r8 == 0) goto L8e
            goto L8f
        L8e:
            r8 = r3
        L8f:
            return r8
        L90:
            java.lang.String r0 = r7.g()
            java.lang.String r4 = "null"
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L9d
            return r3
        L9d:
            java.lang.String r0 = r7.g()
            java.lang.String r4 = "@"
            boolean r0 = r0.startsWith(r4)
            if (r0 == 0) goto Lc2
            java.lang.String r7 = r7.g()
            r8 = 1
            int r0 = r7.length()
            java.lang.String r7 = r7.substring(r8, r0)
            java.lang.String r8 = "email"
            boolean r7 = r7.endsWith(r8)
            if (r7 == 0) goto Lc1
            r3 = 17301647(0x108008f, float:2.4979656E-38)
        Lc1:
            return r3
        Lc2:
            android.content.Context r0 = com.igexin.push.core.d.g
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r4 = r7.g()
            java.lang.String r5 = com.igexin.push.core.d.e
            int r0 = r0.getIdentifier(r4, r2, r5)
            if (r0 != 0) goto Le4
            android.content.Context r0 = com.igexin.push.core.d.g
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r7 = r7.g()
            java.lang.String r2 = com.igexin.push.core.d.e
            int r0 = r0.getIdentifier(r7, r1, r2)
        Le4:
            if (r0 == 0) goto Le7
            return r0
        Le7:
            if (r8 == 0) goto Lea
            return r8
        Lea:
            return r3
    }

    private int a(java.lang.String r4) {
            r3 = this;
            r0 = 0
            r1 = r0
        L2:
            int r2 = r4.length()
            if (r0 == r2) goto L12
            int r1 = r1 * 131
            char r2 = r4.charAt(r0)
            int r1 = r1 + r2
            int r0 = r0 + 1
            goto L2
        L12:
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r1 != r4) goto L17
            r1 = 1
        L17:
            int r4 = java.lang.Math.abs(r1)
            return r4
    }

    private android.app.Notification.Builder a(com.igexin.push.core.bean.g r14) {
            r13 = this;
            java.lang.String r0 = "android.app.NotificationChannel"
            android.app.Notification$Builder r1 = new android.app.Notification$Builder
            android.content.Context r2 = com.igexin.push.core.d.g
            r1.<init>(r2)
            android.content.Context r2 = com.igexin.push.core.d.g
            java.lang.String r3 = "notification"
            java.lang.Object r2 = r2.getSystemService(r3)
            android.app.NotificationManager r2 = (android.app.NotificationManager) r2
            java.lang.Class r3 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> Lf4
            r4 = 3
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> Lf4
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Throwable -> Lf4
            java.lang.Class<java.lang.CharSequence> r6 = java.lang.CharSequence.class
            r8 = 1
            r5[r8] = r6     // Catch: java.lang.Throwable -> Lf4
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> Lf4
            r9 = 2
            r5[r9] = r6     // Catch: java.lang.Throwable -> Lf4
            java.lang.reflect.Constructor r5 = r3.getConstructor(r5)     // Catch: java.lang.Throwable -> Lf4
            if (r5 == 0) goto Lf4
            java.lang.Class r6 = r2.getClass()     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r10 = "getNotificationChannel"
            java.lang.Class[] r11 = new java.lang.Class[r8]     // Catch: java.lang.Throwable -> Lf4
            java.lang.Class<java.lang.String> r12 = java.lang.String.class
            r11[r7] = r12     // Catch: java.lang.Throwable -> Lf4
            java.lang.reflect.Method r10 = r6.getMethod(r10, r11)     // Catch: java.lang.Throwable -> Lf4
            java.lang.Object[] r11 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r12 = r14.k()     // Catch: java.lang.Throwable -> Lf4
            r11[r7] = r12     // Catch: java.lang.Throwable -> Lf4
            java.lang.Object r10 = r10.invoke(r2, r11)     // Catch: java.lang.Throwable -> Lf4
            android.os.Parcelable r10 = (android.os.Parcelable) r10     // Catch: java.lang.Throwable -> Lf4
            if (r10 != 0) goto Ld9
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r10 = r14.k()     // Catch: java.lang.Throwable -> Lf4
            r4[r7] = r10     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r10 = r14.l()     // Catch: java.lang.Throwable -> Lf4
            r4[r8] = r10     // Catch: java.lang.Throwable -> Lf4
            int r10 = r14.m()     // Catch: java.lang.Throwable -> Lf4
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> Lf4
            r4[r9] = r10     // Catch: java.lang.Throwable -> Lf4
            java.lang.Object r4 = r5.newInstance(r4)     // Catch: java.lang.Throwable -> Lf4
            android.os.Parcelable r4 = (android.os.Parcelable) r4     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r5 = "createNotificationChannel"
            java.lang.Class[] r10 = new java.lang.Class[r8]     // Catch: java.lang.Throwable -> Lf4
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> Lf4
            r10[r7] = r0     // Catch: java.lang.Throwable -> Lf4
            java.lang.reflect.Method r0 = r6.getMethod(r5, r10)     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r5 = "enableVibration"
            java.lang.Class[] r6 = new java.lang.Class[r8]     // Catch: java.lang.Throwable -> Lf4
            java.lang.Class r10 = java.lang.Boolean.TYPE     // Catch: java.lang.Throwable -> Lf4
            r6[r7] = r10     // Catch: java.lang.Throwable -> Lf4
            java.lang.reflect.Method r5 = r3.getMethod(r5, r6)     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r6 = "setSound"
            java.lang.Class[] r10 = new java.lang.Class[r9]     // Catch: java.lang.Throwable -> Lf4
            java.lang.Class<android.net.Uri> r11 = android.net.Uri.class
            r10[r7] = r11     // Catch: java.lang.Throwable -> Lf4
            java.lang.Class<android.media.AudioAttributes> r11 = android.media.AudioAttributes.class
            r10[r8] = r11     // Catch: java.lang.Throwable -> Lf4
            java.lang.reflect.Method r3 = r3.getMethod(r6, r10)     // Catch: java.lang.Throwable -> Lf4
            java.lang.Object[] r6 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> Lf4
            boolean r10 = r14.e()     // Catch: java.lang.Throwable -> Lf4
            java.lang.Boolean r10 = java.lang.Boolean.valueOf(r10)     // Catch: java.lang.Throwable -> Lf4
            r6[r7] = r10     // Catch: java.lang.Throwable -> Lf4
            r5.invoke(r4, r6)     // Catch: java.lang.Throwable -> Lf4
            boolean r5 = r14.f()     // Catch: java.lang.Throwable -> Lf4
            r6 = 0
            if (r5 == 0) goto Lc9
            java.lang.String r5 = r14.p()     // Catch: java.lang.Throwable -> Lf4
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lf4
            if (r5 != 0) goto Ld2
            java.lang.String r5 = r14.p()     // Catch: java.lang.Throwable -> Lf4
            android.net.Uri r5 = r13.b(r5)     // Catch: java.lang.Throwable -> Lf4
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> Lf4
            r9[r7] = r5     // Catch: java.lang.Throwable -> Lf4
            r9[r8] = r6     // Catch: java.lang.Throwable -> Lf4
            r3.invoke(r4, r9)     // Catch: java.lang.Throwable -> Lf4
            goto Ld2
        Lc9:
            java.lang.Object[] r5 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> Lf4
            r5[r7] = r6     // Catch: java.lang.Throwable -> Lf4
            r5[r8] = r6     // Catch: java.lang.Throwable -> Lf4
            r3.invoke(r4, r5)     // Catch: java.lang.Throwable -> Lf4
        Ld2:
            java.lang.Object[] r3 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> Lf4
            r3[r7] = r4     // Catch: java.lang.Throwable -> Lf4
            r0.invoke(r2, r3)     // Catch: java.lang.Throwable -> Lf4
        Ld9:
            java.lang.Class r0 = r1.getClass()     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r2 = "setChannelId"
            java.lang.Class[] r3 = new java.lang.Class[r8]     // Catch: java.lang.Throwable -> Lf4
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r3[r7] = r4     // Catch: java.lang.Throwable -> Lf4
            java.lang.reflect.Method r0 = r0.getMethod(r2, r3)     // Catch: java.lang.Throwable -> Lf4
            java.lang.Object[] r2 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r14 = r14.k()     // Catch: java.lang.Throwable -> Lf4
            r2[r7] = r14     // Catch: java.lang.Throwable -> Lf4
            r0.invoke(r1, r2)     // Catch: java.lang.Throwable -> Lf4
        Lf4:
            return r1
    }

    private android.app.PendingIntent a(android.content.Intent r5) {
            r4 = this;
            android.content.Context r0 = com.igexin.push.core.d.g
            int r0 = com.igexin.push.util.j.a(r0)
            r1 = 31
            if (r0 < r1) goto L13
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 30
            if (r0 < r1) goto L13
            r0 = 67108864(0x4000000, float:1.5046328E-36)
            goto L15
        L13:
            r0 = 134217728(0x8000000, float:3.85186E-34)
        L15:
            android.content.Context r1 = com.igexin.push.core.d.g
            java.util.Random r2 = new java.util.Random
            r2.<init>()
            r3 = 1000(0x3e8, float:1.401E-42)
            int r2 = r2.nextInt(r3)
            android.app.PendingIntent r5 = android.app.PendingIntent.getService(r1, r2, r5, r0)
            return r5
    }

    private android.app.PendingIntent a(java.lang.String r3, java.lang.String r4, java.lang.String r5, int r6, com.igexin.push.core.bean.g r7, boolean r8) {
            r2 = this;
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Exception -> L53
            android.content.Context r8 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L53
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()     // Catch: java.lang.Exception -> L53
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L53
            java.lang.Class r0 = r0.c(r1)     // Catch: java.lang.Exception -> L53
            r6.<init>(r8, r0)     // Catch: java.lang.Exception -> L53
            java.lang.String r8 = "taskid"
            r6.putExtra(r8, r4)     // Catch: java.lang.Exception -> L53
            java.lang.String r4 = "messageid"
            r6.putExtra(r4, r5)     // Catch: java.lang.Exception -> L53
            java.lang.String r4 = "appid"
            java.lang.String r5 = com.igexin.push.core.d.a     // Catch: java.lang.Exception -> L53
            r6.putExtra(r4, r5)     // Catch: java.lang.Exception -> L53
            java.lang.String r4 = "appkey"
            r6.putExtra(r4, r3)     // Catch: java.lang.Exception -> L53
            java.lang.String r3 = "actionid"
            java.lang.String r4 = r7.getDoActionId()     // Catch: java.lang.Exception -> L53
            r6.putExtra(r3, r4)     // Catch: java.lang.Exception -> L53
            java.lang.String r3 = "feedbackid"
            java.lang.String r4 = r7.getActionId()     // Catch: java.lang.Exception -> L53
            java.lang.String r5 = r7.getActionId()     // Catch: java.lang.Exception -> L53
            int r5 = r5.length()     // Catch: java.lang.Exception -> L53
            int r5 = r5 + (-1)
            java.lang.String r4 = r4.substring(r5)     // Catch: java.lang.Exception -> L53
            r6.putExtra(r3, r4)     // Catch: java.lang.Exception -> L53
            java.lang.String r3 = "action"
            java.lang.String r4 = "com.igexin.action.notification.delete"
            r6.putExtra(r3, r4)     // Catch: java.lang.Exception -> L53
            android.app.PendingIntent r3 = r2.a(r6)     // Catch: java.lang.Exception -> L53
            return r3
        L53:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = com.igexin.push.core.a.a.g.a
            r4.append(r5)
            java.lang.String r5 = "|getDelPendingIntent err："
            r4.append(r5)
            java.lang.String r3 = r3.toString()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r4 = 0
            java.lang.Object[] r4 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r3, r4)
            r3 = 0
            return r3
    }

    private android.app.PendingIntent a(java.lang.String r3, java.lang.String r4, java.lang.String r5, int r6, java.lang.String r7, java.lang.String r8) {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = com.igexin.push.core.CoreConsts.b
            r0.<init>(r1)
            java.lang.String r1 = "taskid"
            r0.putExtra(r1, r3)
            java.lang.String r3 = "messageid"
            r0.putExtra(r3, r4)
            java.lang.String r3 = ""
            if (r7 != 0) goto L16
            r7 = r3
        L16:
            java.lang.String r4 = "title"
            r0.putExtra(r4, r7)
            if (r8 != 0) goto L1e
            r8 = r3
        L1e:
            java.lang.String r3 = "content"
            r0.putExtra(r3, r8)
            java.lang.String r3 = com.igexin.push.core.d.a
            java.lang.String r4 = "appid"
            r0.putExtra(r4, r3)
            java.lang.String r3 = "actionid"
            r0.putExtra(r3, r5)
            java.lang.String r3 = com.igexin.push.core.d.ad
            java.lang.String r4 = "accesstoken"
            r0.putExtra(r4, r3)
            java.lang.String r3 = "notifID"
            r0.putExtra(r3, r6)
            android.content.Context r3 = com.igexin.push.core.d.g
            int r3 = com.igexin.push.util.j.a(r3)
            r4 = 31
            java.lang.String r5 = "broadcast_intent"
            java.lang.String r6 = "com.igexin.action.notification.click"
            java.lang.String r7 = "action"
            if (r3 < r4) goto L79
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 30
            if (r3 < r4) goto L79
            android.content.Intent r3 = new android.content.Intent
            android.content.Context r4 = com.igexin.push.core.d.g
            java.lang.Class<com.igexin.sdk.GetuiActivity> r8 = com.igexin.sdk.GetuiActivity.class
            r3.<init>(r4, r8)
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r3.setFlags(r4)
            r3.putExtra(r7, r6)
            r3.putExtra(r5, r0)
            android.content.Context r4 = com.igexin.push.core.d.g
            java.util.Random r5 = new java.util.Random
            r5.<init>()
            r6 = 1000(0x3e8, float:1.401E-42)
            int r5 = r5.nextInt(r6)
            r6 = 67108864(0x4000000, float:1.5046328E-36)
            android.app.PendingIntent r3 = android.app.PendingIntent.getActivity(r4, r5, r3, r6)
            return r3
        L79:
            android.content.Intent r3 = new android.content.Intent
            android.content.Context r4 = com.igexin.push.core.d.g
            com.igexin.push.core.x r8 = com.igexin.push.core.x.a()
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.Class r8 = r8.c(r1)
            r3.<init>(r4, r8)
            r3.putExtra(r7, r6)
            r3.putExtra(r5, r0)
            android.app.PendingIntent r3 = r2.a(r3)
            return r3
    }

    private android.net.Uri b(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L2e
            if (r0 != 0) goto L2e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            r0.<init>()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = "android.resource://"
            r0.append(r1)     // Catch: java.lang.Throwable -> L2e
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Throwable -> L2e
            r0.append(r1)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = "/raw/"
            r0.append(r1)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r3 = r3.toLowerCase()     // Catch: java.lang.Throwable -> L2e
            r0.append(r3)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L2e
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> L2e
            return r3
        L2e:
            r3 = 0
            return r3
    }

    @Override
    public com.igexin.push.core.a a(com.igexin.push.core.bean.PushTaskBean r1, com.igexin.push.core.bean.BaseAction r2) {
            r0 = this;
            com.igexin.push.core.a r1 = com.igexin.push.core.a.a
            return r1
    }

    @Override
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r22) {
            r21 = this;
            r0 = r22
            java.lang.String r1 = "channelLevel"
            java.lang.String r2 = "channelName"
            java.lang.String r3 = "channel"
            java.lang.String r4 = "banner_url"
            java.lang.String r5 = "logo_url"
            java.lang.String r6 = "is_chklayout"
            java.lang.String r7 = "ringName"
            java.lang.String r8 = "badgeAddNum"
            java.lang.String r9 = ".png"
            java.lang.String r10 = "is_noring"
            java.lang.String r11 = "is_novibrate"
            java.lang.String r12 = "is_noclear"
            java.lang.String r13 = "notifyid"
            java.lang.String r14 = ""
            java.lang.String r15 = "logo"
            r16 = 0
            r17 = r13
            com.igexin.push.core.bean.g r13 = new com.igexin.push.core.bean.g     // Catch: org.json.JSONException -> L1b5
            r13.<init>()     // Catch: org.json.JSONException -> L1b5
            r18 = r1
            java.lang.String r1 = "notification"
            r13.setType(r1)     // Catch: org.json.JSONException -> L1b5
            java.lang.String r1 = "actionid"
            java.lang.String r1 = r0.getString(r1)     // Catch: org.json.JSONException -> L1b5
            r13.setActionId(r1)     // Catch: org.json.JSONException -> L1b5
            java.lang.String r1 = "do"
            java.lang.String r1 = r0.getString(r1)     // Catch: org.json.JSONException -> L1b5
            r13.setDoActionId(r1)     // Catch: org.json.JSONException -> L1b5
            java.lang.String r1 = "title"
            java.lang.String r1 = r0.getString(r1)     // Catch: org.json.JSONException -> L1b5
            r19 = r2
            java.lang.String r2 = "text"
            java.lang.String r2 = r0.getString(r2)     // Catch: org.json.JSONException -> L1b5
            r13.a(r1)     // Catch: org.json.JSONException -> L1b5
            r13.b(r2)     // Catch: org.json.JSONException -> L1b5
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L1b5
            r20 = r3
            r3 = 0
            if (r1 == 0) goto L7e
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L1b5
            if (r1 == 0) goto L7e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L1b5
            r0.<init>()     // Catch: org.json.JSONException -> L1b5
            java.lang.String r1 = com.igexin.push.core.a.a.g.a     // Catch: org.json.JSONException -> L1b5
            r0.append(r1)     // Catch: org.json.JSONException -> L1b5
            java.lang.String r1 = " title & content = null"
            r0.append(r1)     // Catch: org.json.JSONException -> L1b5
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L1b5
            java.lang.Object[] r1 = new java.lang.Object[r3]     // Catch: org.json.JSONException -> L1b5
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: org.json.JSONException -> L1b5
            return r16
        L7e:
            boolean r1 = r0.has(r15)     // Catch: org.json.JSONException -> L1b5
            if (r1 == 0) goto Lc7
            java.lang.String r1 = r0.getString(r15)     // Catch: org.json.JSONException -> L1b5
            boolean r1 = r14.equals(r1)     // Catch: org.json.JSONException -> L1b5
            if (r1 != 0) goto Lc7
            java.lang.String r1 = r0.getString(r15)     // Catch: org.json.JSONException -> L1b5
            int r2 = r1.lastIndexOf(r9)     // Catch: org.json.JSONException -> L1b5
            java.lang.String r15 = ".jpeg"
            r3 = -1
            if (r2 != r3) goto La1
            int r2 = r1.lastIndexOf(r15)     // Catch: org.json.JSONException -> L1b5
            if (r2 == r3) goto Lc4
        La1:
            int r2 = r1.indexOf(r9)     // Catch: org.json.JSONException -> L1b5
            if (r2 != r3) goto Lab
            int r2 = r1.indexOf(r15)     // Catch: org.json.JSONException -> L1b5
        Lab:
            if (r2 == r3) goto Lc3
            r3 = 0
            java.lang.String r1 = r1.substring(r3, r2)     // Catch: org.json.JSONException -> L1b5
            java.lang.String r2 = "^\\d+$"
            java.util.regex.Pattern r2 = java.util.regex.Pattern.compile(r2)     // Catch: org.json.JSONException -> L1b5
            java.util.regex.Matcher r2 = r2.matcher(r1)     // Catch: org.json.JSONException -> L1b5
            boolean r2 = r2.matches()     // Catch: org.json.JSONException -> L1b5
            if (r2 == 0) goto Lc3
            goto Lc4
        Lc3:
            r14 = r1
        Lc4:
            r13.c(r14)     // Catch: org.json.JSONException -> L1b5
        Lc7:
            boolean r1 = r0.has(r12)     // Catch: org.json.JSONException -> L1b5
            r3 = 1
            if (r1 == 0) goto Lda
            boolean r1 = r0.getBoolean(r12)     // Catch: org.json.JSONException -> L1b5
            if (r1 != 0) goto Ld6
            r1 = r3
            goto Ld7
        Ld6:
            r1 = 0
        Ld7:
            r13.b(r1)     // Catch: org.json.JSONException -> L1b5
        Lda:
            boolean r1 = r0.has(r11)     // Catch: org.json.JSONException -> L1b5
            if (r1 == 0) goto Lec
            boolean r1 = r0.getBoolean(r11)     // Catch: org.json.JSONException -> L1b5
            if (r1 != 0) goto Le8
            r1 = r3
            goto Le9
        Le8:
            r1 = 0
        Le9:
            r13.c(r1)     // Catch: org.json.JSONException -> L1b5
        Lec:
            boolean r1 = r0.has(r10)     // Catch: org.json.JSONException -> L1b5
            if (r1 == 0) goto Lfe
            boolean r1 = r0.getBoolean(r10)     // Catch: org.json.JSONException -> L1b5
            if (r1 != 0) goto Lfa
            r1 = r3
            goto Lfb
        Lfa:
            r1 = 0
        Lfb:
            r13.d(r1)     // Catch: org.json.JSONException -> L1b5
        Lfe:
            boolean r1 = r0.has(r8)     // Catch: org.json.JSONException -> L1b5
            if (r1 == 0) goto L10b
            int r1 = r0.optInt(r8)     // Catch: org.json.JSONException -> L1b5
            r13.c(r1)     // Catch: org.json.JSONException -> L1b5
        L10b:
            boolean r1 = r0.has(r7)     // Catch: org.json.JSONException -> L1b5
            if (r1 == 0) goto L118
            java.lang.String r1 = r0.getString(r7)     // Catch: org.json.JSONException -> L1b5
            r13.h(r1)     // Catch: org.json.JSONException -> L1b5
        L118:
            boolean r1 = r0.has(r6)     // Catch: org.json.JSONException -> L1b5
            if (r1 == 0) goto L125
            boolean r1 = r0.getBoolean(r6)     // Catch: org.json.JSONException -> L1b5
            r13.e(r1)     // Catch: org.json.JSONException -> L1b5
        L125:
            boolean r1 = r0.has(r5)     // Catch: org.json.JSONException -> L1b5
            if (r1 == 0) goto L132
            java.lang.String r1 = r0.getString(r5)     // Catch: org.json.JSONException -> L1b5
            r13.d(r1)     // Catch: org.json.JSONException -> L1b5
        L132:
            boolean r1 = r0.has(r4)     // Catch: org.json.JSONException -> L1b5
            if (r1 == 0) goto L13f
            java.lang.String r1 = r0.getString(r4)     // Catch: org.json.JSONException -> L1b5
            r13.e(r1)     // Catch: org.json.JSONException -> L1b5
        L13f:
            r1 = r20
            boolean r2 = r0.has(r1)     // Catch: org.json.JSONException -> L1b5
            if (r2 == 0) goto L14e
            java.lang.String r1 = r0.getString(r1)     // Catch: org.json.JSONException -> L1b5
            r13.f(r1)     // Catch: org.json.JSONException -> L1b5
        L14e:
            r1 = r19
            boolean r2 = r0.has(r1)     // Catch: org.json.JSONException -> L1b5
            if (r2 == 0) goto L15d
            java.lang.String r1 = r0.getString(r1)     // Catch: org.json.JSONException -> L1b5
            r13.g(r1)     // Catch: org.json.JSONException -> L1b5
        L15d:
            r1 = r18
            boolean r2 = r0.has(r1)     // Catch: org.json.JSONException -> L1b5
            if (r2 == 0) goto L16c
            int r1 = r0.getInt(r1)     // Catch: org.json.JSONException -> L1b5
            r13.a(r1)     // Catch: org.json.JSONException -> L1b5
        L16c:
            r1 = r17
            boolean r2 = r0.has(r1)     // Catch: org.json.JSONException -> L1b5
            if (r2 == 0) goto L1b4
            java.lang.String r2 = r0.optString(r1)     // Catch: java.lang.NumberFormatException -> L183 org.json.JSONException -> L1b5
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> L183 org.json.JSONException -> L1b5
            r13.b(r2)     // Catch: java.lang.NumberFormatException -> L183 org.json.JSONException -> L1b5
            r13.a(r3)     // Catch: java.lang.NumberFormatException -> L183 org.json.JSONException -> L1b5
            goto L1b4
        L183:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L1b5
            r2.<init>()     // Catch: org.json.JSONException -> L1b5
            java.lang.String r3 = " NotificationAction.parseAction() : "
            r2.append(r3)     // Catch: org.json.JSONException -> L1b5
            java.lang.String r0 = r0.optString(r1)     // Catch: org.json.JSONException -> L1b5
            r2.append(r0)     // Catch: org.json.JSONException -> L1b5
            java.lang.String r0 = "_"
            r2.append(r0)     // Catch: org.json.JSONException -> L1b5
            java.lang.String r0 = r2.toString()     // Catch: org.json.JSONException -> L1b5
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L1b5
            r1.<init>()     // Catch: org.json.JSONException -> L1b5
            java.lang.String r2 = com.igexin.push.core.a.a.g.a     // Catch: org.json.JSONException -> L1b5
            r1.append(r2)     // Catch: org.json.JSONException -> L1b5
            r1.append(r0)     // Catch: org.json.JSONException -> L1b5
            java.lang.String r0 = r1.toString()     // Catch: org.json.JSONException -> L1b5
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: org.json.JSONException -> L1b5
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: org.json.JSONException -> L1b5
        L1b4:
            return r13
        L1b5:
            return r16
    }

    public void a(java.lang.String r17, java.lang.String r18, java.lang.String r19, com.igexin.push.core.bean.g r20) {
            r16 = this;
            r7 = r16
            r8 = r18
            r9 = r20
            boolean r0 = r20.a()
            if (r0 != 0) goto L11
            int r0 = r7.a(r8)
            goto L15
        L11:
            int r0 = r20.n()
        L15:
            r10 = r0
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.igexin.push.core.d.aa
            java.lang.Integer r1 = java.lang.Integer.valueOf(r10)
            r0.put(r8, r1)
            java.lang.String r3 = r20.getDoActionId()
            java.lang.String r5 = r20.b()
            java.lang.String r6 = r20.c()
            r0 = r16
            r1 = r18
            r2 = r19
            r4 = r10
            android.app.PendingIntent r11 = r0.a(r1, r2, r3, r4, r5, r6)
            r6 = 0
            r1 = r17
            r2 = r18
            r3 = r19
            r5 = r20
            android.app.PendingIntent r0 = r0.a(r1, r2, r3, r4, r5, r6)
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.String r2 = "notification"
            java.lang.Object r1 = r1.getSystemService(r2)
            android.app.NotificationManager r1 = (android.app.NotificationManager) r1
            r2 = 0
            int r3 = r7.a(r9, r2)
            int r4 = android.os.Build.VERSION.SDK_INT
            r5 = 11
            r6 = 2
            r12 = 4
            r13 = 1
            if (r4 >= r5) goto Lb6
            android.app.Notification r0 = new android.app.Notification
            r0.<init>()
            r0.icon = r3
            java.lang.String r3 = "android.app.Notification"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Exception -> L9d
            java.lang.String r4 = "setLatestEventInfo"
            java.lang.Class[] r5 = new java.lang.Class[r12]     // Catch: java.lang.Exception -> L9d
            java.lang.Class<android.content.Context> r14 = android.content.Context.class
            r5[r2] = r14     // Catch: java.lang.Exception -> L9d
            java.lang.Class<java.lang.CharSequence> r14 = java.lang.CharSequence.class
            r5[r13] = r14     // Catch: java.lang.Exception -> L9d
            java.lang.Class<java.lang.CharSequence> r14 = java.lang.CharSequence.class
            r5[r6] = r14     // Catch: java.lang.Exception -> L9d
            java.lang.Class<android.app.PendingIntent> r14 = android.app.PendingIntent.class
            r15 = 3
            r5[r15] = r14     // Catch: java.lang.Exception -> L9d
            java.lang.reflect.Method r3 = r3.getMethod(r4, r5)     // Catch: java.lang.Exception -> L9d
            r3.setAccessible(r13)     // Catch: java.lang.Exception -> L9d
            java.lang.Object[] r4 = new java.lang.Object[r12]     // Catch: java.lang.Exception -> L9d
            android.content.Context r5 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L9d
            r4[r2] = r5     // Catch: java.lang.Exception -> L9d
            java.lang.String r5 = r20.b()     // Catch: java.lang.Exception -> L9d
            r4[r13] = r5     // Catch: java.lang.Exception -> L9d
            java.lang.String r5 = r20.c()     // Catch: java.lang.Exception -> L9d
            r4[r6] = r5     // Catch: java.lang.Exception -> L9d
            r4[r15] = r11     // Catch: java.lang.Exception -> L9d
            r3.invoke(r0, r4)     // Catch: java.lang.Exception -> L9d
            goto L13f
        L9d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.core.a.a.g.a
            r0.append(r1)
            java.lang.String r1 = "reflect invoke setLatestEventInfo failed!"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r0, r1)
            return
        Lb6:
            int r4 = android.os.Build.VERSION.SDK_INT
            r5 = 26
            if (r4 < r5) goto Lc1
            android.app.Notification$Builder r4 = r7.a(r9)
            goto Lc8
        Lc1:
            android.app.Notification$Builder r4 = new android.app.Notification$Builder
            android.content.Context r5 = com.igexin.push.core.d.g
            r4.<init>(r5)
        Lc8:
            int r5 = r7.a(r9, r13)
            java.lang.String r14 = r20.b()
            boolean r14 = android.text.TextUtils.isEmpty(r14)
            if (r14 != 0) goto Ldd
            java.lang.String r14 = r20.b()
            r4.setContentTitle(r14)
        Ldd:
            java.lang.String r14 = r20.c()
            boolean r14 = android.text.TextUtils.isEmpty(r14)
            if (r14 != 0) goto Lee
            java.lang.String r14 = r20.c()
            r4.setContentText(r14)
        Lee:
            android.app.Notification$Builder r4 = r4.setSmallIcon(r5)
            android.content.Context r5 = com.igexin.push.core.d.g
            android.content.res.Resources r5 = r5.getResources()
            android.graphics.Bitmap r3 = android.graphics.BitmapFactory.decodeResource(r5, r3)
            android.app.Notification$Builder r3 = r4.setLargeIcon(r3)
            android.app.Notification$Builder r3 = r3.setContentIntent(r11)
            android.app.Notification$Builder r0 = r3.setDeleteIntent(r0)
            android.app.Notification r0 = r0.getNotification()
            boolean r3 = com.igexin.push.util.a.e()
            if (r3 == 0) goto L13f
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 21
            if (r3 < r4) goto L13f
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 24
            if (r3 >= r4) goto L13f
            java.lang.String r3 = "com.android.internal.R$id"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Exception -> L13f
            java.lang.String r4 = "right_icon"
            java.lang.reflect.Field r3 = r3.getField(r4)     // Catch: java.lang.Exception -> L13f
            r3.setAccessible(r13)     // Catch: java.lang.Exception -> L13f
            r4 = 0
            int r3 = r3.getInt(r4)     // Catch: java.lang.Exception -> L13f
            android.widget.RemoteViews r4 = r0.contentView     // Catch: java.lang.Exception -> L13f
            if (r4 == 0) goto L13f
            if (r3 == 0) goto L13f
            android.widget.RemoteViews r4 = r0.contentView     // Catch: java.lang.Exception -> L13f
            r5 = 8
            r4.setViewVisibility(r3, r5)     // Catch: java.lang.Exception -> L13f
        L13f:
            java.lang.String r3 = r20.c()
            r0.tickerText = r3
            r0.defaults = r12
            r3 = -16711936(0xffffffffff00ff00, float:-1.7146522E38)
            r0.ledARGB = r3
            r3 = 1000(0x3e8, float:1.401E-42)
            r0.ledOnMS = r3
            r3 = 3000(0xbb8, float:4.204E-42)
            r0.ledOffMS = r3
            r0.flags = r13
            boolean r3 = r20.d()
            if (r3 == 0) goto L161
            int r3 = r0.flags
            r3 = r3 | 16
            goto L165
        L161:
            int r3 = r0.flags
            r3 = r3 | 32
        L165:
            r0.flags = r3
            boolean r3 = r20.f()
            if (r3 == 0) goto L187
            java.lang.String r3 = r20.p()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L17d
            int r3 = r0.defaults
            r3 = r3 | r13
            r0.defaults = r3
            goto L187
        L17d:
            java.lang.String r3 = r20.p()
            android.net.Uri r3 = r7.b(r3)
            r0.sound = r3
        L187:
            boolean r3 = r20.e()
            if (r3 == 0) goto L192
            int r3 = r0.defaults
            r3 = r3 | r6
            r0.defaults = r3
        L192:
            java.lang.String r3 = r20.i()
            if (r3 != 0) goto L19e
            java.lang.String r3 = r20.h()
            if (r3 == 0) goto L1a5
        L19e:
            boolean r3 = r20.j()
            if (r3 == 0) goto L1a5
            return
        L1a5:
            int r3 = r20.o()
            if (r3 <= 0) goto L1b9
            int r3 = r20.o()
            com.igexin.push.util.b.a(r3, r2)
            int r2 = r20.o()
            com.igexin.push.util.b.a(r2, r0)
        L1b9:
            r1.notify(r10, r0)
            com.igexin.push.core.r r0 = com.igexin.push.core.r.a()
            java.lang.String r1 = r20.b()
            java.lang.String r2 = ""
            if (r1 != 0) goto L1ca
            r1 = r2
            goto L1ce
        L1ca:
            java.lang.String r1 = r20.b()
        L1ce:
            java.lang.String r3 = r20.c()
            if (r3 != 0) goto L1d5
            goto L1d9
        L1d5:
            java.lang.String r2 = r20.c()
        L1d9:
            r3 = r19
            r0.a(r8, r3, r1, r2)
            return
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r3, com.igexin.push.core.bean.BaseAction r4) {
            r2 = this;
            if (r3 == 0) goto L17
            boolean r0 = r4 instanceof com.igexin.push.core.bean.g
            if (r0 == 0) goto L17
            com.igexin.push.core.bean.g r4 = (com.igexin.push.core.bean.g) r4
            java.lang.String r0 = r3.getAppKey()     // Catch: java.lang.Throwable -> L17
            java.lang.String r1 = r3.getTaskId()     // Catch: java.lang.Throwable -> L17
            java.lang.String r3 = r3.getMessageId()     // Catch: java.lang.Throwable -> L17
            r2.a(r0, r1, r3, r4)     // Catch: java.lang.Throwable -> L17
        L17:
            r3 = 1
            return r3
    }
}
