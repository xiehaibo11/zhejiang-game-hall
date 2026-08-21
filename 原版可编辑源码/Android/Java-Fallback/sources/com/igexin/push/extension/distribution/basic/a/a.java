package com.igexin.push.extension.distribution.basic.a;

public class a implements com.igexin.push.core.a.a.a {
    private static final java.lang.String a = null;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "EXT-"
            r0.append(r1)
            java.lang.Class<com.igexin.push.extension.distribution.basic.a.a> r1 = com.igexin.push.extension.distribution.basic.a.a.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.extension.distribution.basic.a.a.a = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private int a() {
            r2 = this;
            java.lang.String r0 = "com.android.internal.R$id"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = "icon"
            java.lang.reflect.Field r0 = r0.getField(r1)     // Catch: java.lang.Exception -> L16
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.Exception -> L16
            r1 = 0
            int r0 = r0.getInt(r1)     // Catch: java.lang.Exception -> L16
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    private int a(com.igexin.push.extension.distribution.basic.b.a r7, boolean r8) {
            r6 = this;
            java.lang.String r0 = "mipmap"
            java.lang.String r1 = "drawable"
            if (r8 == 0) goto L56
            android.content.Context r8 = com.igexin.push.core.d.g
            android.content.res.Resources r8 = r8.getResources()
            java.lang.String r2 = com.igexin.push.core.d.e
            java.lang.String r3 = "push_small"
            int r8 = r8.getIdentifier(r3, r1, r2)
            if (r8 != 0) goto L22
            android.content.Context r8 = com.igexin.push.core.d.g
            android.content.res.Resources r8 = r8.getResources()
            java.lang.String r2 = com.igexin.push.core.d.e
            int r8 = r8.getIdentifier(r3, r0, r2)
        L22:
            r2 = 0
            if (r8 == 0) goto L3e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = com.igexin.push.extension.distribution.basic.a.a.a
            r7.append(r0)
            java.lang.String r0 = "|push_small.png is set, use default push_small"
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            java.lang.Object[] r0 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r7, r0)
            return r8
        L3e:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r3 = com.igexin.push.extension.distribution.basic.a.a.a
            r8.append(r3)
            java.lang.String r3 = "|push_small.png is missing"
            r8.append(r3)
            java.lang.String r8 = r8.toString()
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r8, r2)
        L56:
            android.content.Context r8 = com.igexin.push.core.d.g
            android.content.res.Resources r8 = r8.getResources()
            java.lang.String r2 = com.igexin.push.core.d.e
            java.lang.String r3 = "push"
            int r8 = r8.getIdentifier(r3, r1, r2)
            if (r8 != 0) goto L72
            android.content.Context r8 = com.igexin.push.core.d.g
            android.content.res.Resources r8 = r8.getResources()
            java.lang.String r2 = com.igexin.push.core.d.e
            int r8 = r8.getIdentifier(r3, r0, r2)
        L72:
            java.lang.String r2 = r7.p()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            r3 = 17301651(0x1080093, float:2.4979667E-38)
            if (r2 == 0) goto L84
            if (r8 == 0) goto L82
            goto L83
        L82:
            r8 = r3
        L83:
            return r8
        L84:
            java.lang.String r2 = r7.p()
            java.lang.String r4 = "null"
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L91
            return r3
        L91:
            java.lang.String r2 = r7.p()
            java.lang.String r4 = "@"
            boolean r2 = r2.startsWith(r4)
            if (r2 == 0) goto Lb6
            java.lang.String r7 = r7.p()
            r8 = 1
            int r0 = r7.length()
            java.lang.String r7 = r7.substring(r8, r0)
            java.lang.String r8 = "email"
            boolean r7 = r7.endsWith(r8)
            if (r7 == 0) goto Lb5
            r3 = 17301647(0x108008f, float:2.4979656E-38)
        Lb5:
            return r3
        Lb6:
            android.content.Context r2 = com.igexin.push.core.d.g
            android.content.res.Resources r2 = r2.getResources()
            java.lang.String r4 = r7.p()
            java.lang.String r5 = com.igexin.push.core.d.e
            int r1 = r2.getIdentifier(r4, r1, r5)
            if (r1 != 0) goto Ld8
            android.content.Context r1 = com.igexin.push.core.d.g
            android.content.res.Resources r1 = r1.getResources()
            java.lang.String r7 = r7.p()
            java.lang.String r2 = com.igexin.push.core.d.e
            int r1 = r1.getIdentifier(r7, r0, r2)
        Ld8:
            if (r1 == 0) goto Ldb
            return r1
        Ldb:
            if (r8 == 0) goto Lde
            return r8
        Lde:
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

    private android.app.Notification.Builder a(com.igexin.push.extension.distribution.basic.b.a r15) {
            r14 = this;
            java.lang.String r0 = "android.app.NotificationChannel"
            android.app.Notification$Builder r1 = new android.app.Notification$Builder
            android.content.Context r2 = com.igexin.push.core.d.g
            r1.<init>(r2)
            android.content.Context r2 = com.igexin.push.core.d.g
            java.lang.String r3 = "notification"
            java.lang.Object r2 = r2.getSystemService(r3)
            android.app.NotificationManager r2 = (android.app.NotificationManager) r2
            java.lang.Class r3 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> Lfa
            r4 = 3
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> Lfa
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Exception -> Lfa
            java.lang.Class<java.lang.CharSequence> r6 = java.lang.CharSequence.class
            r8 = 1
            r5[r8] = r6     // Catch: java.lang.Exception -> Lfa
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> Lfa
            r9 = 2
            r5[r9] = r6     // Catch: java.lang.Exception -> Lfa
            java.lang.reflect.Constructor r5 = r3.getConstructor(r5)     // Catch: java.lang.Exception -> Lfa
            boolean r6 = r15.g()     // Catch: java.lang.Exception -> Lfa
            if (r6 == 0) goto L35
            r6 = 4
            goto L39
        L35:
            int r6 = r15.d()     // Catch: java.lang.Exception -> Lfa
        L39:
            java.lang.Class r10 = r2.getClass()     // Catch: java.lang.Exception -> Lfa
            java.lang.String r11 = "getNotificationChannel"
            java.lang.Class[] r12 = new java.lang.Class[r8]     // Catch: java.lang.Exception -> Lfa
            java.lang.Class<java.lang.String> r13 = java.lang.String.class
            r12[r7] = r13     // Catch: java.lang.Exception -> Lfa
            java.lang.reflect.Method r11 = r10.getMethod(r11, r12)     // Catch: java.lang.Exception -> Lfa
            java.lang.Object[] r12 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> Lfa
            java.lang.String r13 = r15.b()     // Catch: java.lang.Exception -> Lfa
            r12[r7] = r13     // Catch: java.lang.Exception -> Lfa
            java.lang.Object r11 = r11.invoke(r2, r12)     // Catch: java.lang.Exception -> Lfa
            android.os.Parcelable r11 = (android.os.Parcelable) r11     // Catch: java.lang.Exception -> Lfa
            if (r11 != 0) goto Ldf
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lfa
            java.lang.String r11 = r15.b()     // Catch: java.lang.Exception -> Lfa
            r4[r7] = r11     // Catch: java.lang.Exception -> Lfa
            java.lang.String r11 = r15.c()     // Catch: java.lang.Exception -> Lfa
            r4[r8] = r11     // Catch: java.lang.Exception -> Lfa
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> Lfa
            r4[r9] = r6     // Catch: java.lang.Exception -> Lfa
            java.lang.Object r4 = r5.newInstance(r4)     // Catch: java.lang.Exception -> Lfa
            android.os.Parcelable r4 = (android.os.Parcelable) r4     // Catch: java.lang.Exception -> Lfa
            java.lang.String r5 = "createNotificationChannel"
            java.lang.Class[] r6 = new java.lang.Class[r8]     // Catch: java.lang.Exception -> Lfa
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> Lfa
            r6[r7] = r0     // Catch: java.lang.Exception -> Lfa
            java.lang.reflect.Method r0 = r10.getMethod(r5, r6)     // Catch: java.lang.Exception -> Lfa
            java.lang.String r5 = "enableVibration"
            java.lang.Class[] r6 = new java.lang.Class[r8]     // Catch: java.lang.Exception -> Lfa
            java.lang.Class r10 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> Lfa
            r6[r7] = r10     // Catch: java.lang.Exception -> Lfa
            java.lang.reflect.Method r5 = r3.getMethod(r5, r6)     // Catch: java.lang.Exception -> Lfa
            java.lang.String r6 = "setSound"
            java.lang.Class[] r10 = new java.lang.Class[r9]     // Catch: java.lang.Exception -> Lfa
            java.lang.Class<android.net.Uri> r11 = android.net.Uri.class
            r10[r7] = r11     // Catch: java.lang.Exception -> Lfa
            java.lang.Class<android.media.AudioAttributes> r11 = android.media.AudioAttributes.class
            r10[r8] = r11     // Catch: java.lang.Exception -> Lfa
            java.lang.reflect.Method r3 = r3.getMethod(r6, r10)     // Catch: java.lang.Exception -> Lfa
            java.lang.Object[] r6 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> Lfa
            boolean r10 = r15.x()     // Catch: java.lang.Exception -> Lfa
            java.lang.Boolean r10 = java.lang.Boolean.valueOf(r10)     // Catch: java.lang.Exception -> Lfa
            r6[r7] = r10     // Catch: java.lang.Exception -> Lfa
            r5.invoke(r4, r6)     // Catch: java.lang.Exception -> Lfa
            boolean r5 = r15.y()     // Catch: java.lang.Exception -> Lfa
            r6 = 0
            if (r5 == 0) goto Lcf
            java.lang.String r5 = r15.z()     // Catch: java.lang.Exception -> Lfa
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> Lfa
            if (r5 != 0) goto Ld8
            java.lang.String r5 = r15.z()     // Catch: java.lang.Exception -> Lfa
            android.net.Uri r5 = r14.b(r5)     // Catch: java.lang.Exception -> Lfa
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: java.lang.Exception -> Lfa
            r9[r7] = r5     // Catch: java.lang.Exception -> Lfa
            r9[r8] = r6     // Catch: java.lang.Exception -> Lfa
            r3.invoke(r4, r9)     // Catch: java.lang.Exception -> Lfa
            goto Ld8
        Lcf:
            java.lang.Object[] r5 = new java.lang.Object[r9]     // Catch: java.lang.Exception -> Lfa
            r5[r7] = r6     // Catch: java.lang.Exception -> Lfa
            r5[r8] = r6     // Catch: java.lang.Exception -> Lfa
            r3.invoke(r4, r5)     // Catch: java.lang.Exception -> Lfa
        Ld8:
            java.lang.Object[] r3 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> Lfa
            r3[r7] = r4     // Catch: java.lang.Exception -> Lfa
            r0.invoke(r2, r3)     // Catch: java.lang.Exception -> Lfa
        Ldf:
            java.lang.Class r0 = r1.getClass()     // Catch: java.lang.Exception -> Lfa
            java.lang.String r2 = "setChannelId"
            java.lang.Class[] r3 = new java.lang.Class[r8]     // Catch: java.lang.Exception -> Lfa
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r3[r7] = r4     // Catch: java.lang.Exception -> Lfa
            java.lang.reflect.Method r0 = r0.getMethod(r2, r3)     // Catch: java.lang.Exception -> Lfa
            java.lang.Object[] r2 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> Lfa
            java.lang.String r15 = r15.b()     // Catch: java.lang.Exception -> Lfa
            r2[r7] = r15     // Catch: java.lang.Exception -> Lfa
            r0.invoke(r1, r2)     // Catch: java.lang.Exception -> Lfa
        Lfa:
            return r1
    }

    private android.app.Notification a(android.app.Notification r3, com.igexin.push.extension.distribution.basic.b.a r4) {
            r2 = this;
            r0 = 4
            r3.defaults = r0
            r0 = -16711936(0xffffffffff00ff00, float:-1.7146522E38)
            r3.ledARGB = r0
            r0 = 1000(0x3e8, float:1.401E-42)
            r3.ledOnMS = r0
            r0 = 3000(0xbb8, float:4.204E-42)
            r3.ledOffMS = r0
            r0 = 1
            r3.flags = r0
            boolean r1 = r4.y()
            if (r1 == 0) goto L33
            java.lang.String r1 = r4.z()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L29
            int r1 = r3.defaults
            r1 = r1 | r0
            r3.defaults = r1
            goto L33
        L29:
            java.lang.String r1 = r4.z()
            android.net.Uri r1 = r2.b(r1)
            r3.sound = r1
        L33:
            boolean r1 = r4.B()
            if (r1 == 0) goto L3e
            int r1 = r3.flags
            r1 = r1 | 16
            goto L42
        L3e:
            int r1 = r3.flags
            r1 = r1 | 32
        L42:
            r3.flags = r1
            boolean r1 = r4.x()
            if (r1 == 0) goto L50
            int r1 = r3.defaults
            r1 = r1 | 2
            r3.defaults = r1
        L50:
            int r4 = r2.a(r4, r0)
            r3.icon = r4
            return r3
    }

    private android.app.PendingIntent a(android.content.Intent r5) {
            r4 = this;
            android.content.Context r0 = com.igexin.push.core.d.g
            int r0 = com.igexin.push.extension.distribution.basic.g.d.a(r0)
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

    private android.app.PendingIntent a(java.lang.String r5, java.lang.String r6, int r7, com.igexin.push.extension.distribution.basic.b.a r8, boolean r9) {
            r4 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = com.igexin.push.extension.distribution.basic.c.b.a
            r0.<init>(r1)
            java.lang.String r1 = "taskid"
            r0.putExtra(r1, r5)
            java.lang.String r5 = "messageid"
            r0.putExtra(r5, r6)
            java.lang.String r5 = com.igexin.push.core.d.a
            java.lang.String r6 = "appid"
            r0.putExtra(r6, r5)
            java.lang.String r5 = r8.getDoActionId()
            java.lang.String r6 = "actionid"
            r0.putExtra(r6, r5)
            java.lang.String r5 = com.igexin.push.extension.distribution.basic.c.e.d
            java.lang.String r6 = "accesstoken"
            r0.putExtra(r6, r5)
            java.lang.String r5 = "notifID"
            r0.putExtra(r5, r7)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            int r6 = r8.u()
            r5.append(r6)
            java.lang.String r6 = ""
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r7 = "notifyStyle"
            r0.putExtra(r7, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = r8.f()
            r5.append(r7)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r7 = "id"
            r0.putExtra(r7, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            int r7 = r8.i()
            r5.append(r7)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r7 = "bigStyle"
            r0.putExtra(r7, r5)
            java.lang.String r5 = "isFloat"
            r0.putExtra(r5, r9)
            android.content.Context r5 = com.igexin.push.core.d.g
            java.lang.String r5 = r5.getPackageName()
            java.lang.String r7 = "checkpackage"
            r0.putExtra(r7, r5)
            java.lang.String r5 = r8.getActionId()
            java.lang.String r7 = r8.getActionId()
            int r7 = r7.length()
            int r7 = r7 + (-1)
            java.lang.String r5 = r5.substring(r7)
            java.lang.String r7 = "feedbackid"
            r0.putExtra(r7, r5)
            java.lang.String r5 = r8.n()
            if (r5 != 0) goto La5
            r5 = r6
        La5:
            java.lang.String r7 = "title"
            r0.putExtra(r7, r5)
            java.lang.String r5 = r8.o()
            if (r5 != 0) goto Lb1
            goto Lb2
        Lb1:
            r6 = r5
        Lb2:
            java.lang.String r5 = "content"
            r0.putExtra(r5, r6)
            java.lang.String r5 = "4.6.4.0"
            java.lang.String r6 = "2.11.0.0"
            int r5 = com.igexin.push.extension.distribution.basic.g.c.a(r5, r6)
            r6 = 134217728(0x8000000, float:3.85186E-34)
            r7 = 1000(0x3e8, float:1.401E-42)
            if (r5 >= 0) goto Ld5
            android.content.Context r5 = com.igexin.push.core.d.g
            java.util.Random r8 = new java.util.Random
            r8.<init>()
            int r7 = r8.nextInt(r7)
            android.app.PendingIntent r5 = android.app.PendingIntent.getBroadcast(r5, r7, r0, r6)
            return r5
        Ld5:
            android.content.Context r5 = com.igexin.push.core.d.g
            int r5 = com.igexin.push.extension.distribution.basic.g.d.a(r5)
            r8 = 31
            java.lang.String r9 = "broadcast_intent"
            java.lang.String r1 = "com.igexin.action.notification.click"
            java.lang.String r2 = "action"
            if (r5 < r8) goto L125
            int r5 = android.os.Build.VERSION.SDK_INT
            r8 = 30
            if (r5 < r8) goto L125
            r5 = 67108864(0x4000000, float:1.5046328E-36)
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.ClassNotFoundException -> L115
            android.content.Context r8 = com.igexin.push.core.d.g     // Catch: java.lang.ClassNotFoundException -> L115
            java.lang.String r3 = "com.igexin.sdk.GetuiActivity"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.ClassNotFoundException -> L115
            r6.<init>(r8, r3)     // Catch: java.lang.ClassNotFoundException -> L115
            r8 = 268435456(0x10000000, float:2.524355E-29)
            r6.setFlags(r8)     // Catch: java.lang.ClassNotFoundException -> L115
            r6.putExtra(r2, r1)     // Catch: java.lang.ClassNotFoundException -> L115
            r6.putExtra(r9, r0)     // Catch: java.lang.ClassNotFoundException -> L115
            android.content.Context r8 = com.igexin.push.core.d.g
            java.util.Random r9 = new java.util.Random
            r9.<init>()
            int r7 = r9.nextInt(r7)
            android.app.PendingIntent r5 = android.app.PendingIntent.getActivity(r8, r7, r6, r5)
            return r5
        L115:
            android.content.Context r6 = com.igexin.push.core.d.g
            java.util.Random r8 = new java.util.Random
            r8.<init>()
            int r7 = r8.nextInt(r7)
            android.app.PendingIntent r5 = android.app.PendingIntent.getBroadcast(r6, r7, r0, r5)
            return r5
        L125:
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Throwable -> L141
            android.content.Context r8 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L141
            android.content.Context r3 = com.igexin.push.extension.distribution.basic.c.e.a     // Catch: java.lang.Throwable -> L141
            java.lang.String r3 = com.igexin.push.extension.distribution.basic.g.e.a(r3)     // Catch: java.lang.Throwable -> L141
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L141
            r5.<init>(r8, r3)     // Catch: java.lang.Throwable -> L141
            r5.putExtra(r2, r1)     // Catch: java.lang.Throwable -> L141
            r5.putExtra(r9, r0)     // Catch: java.lang.Throwable -> L141
            android.app.PendingIntent r5 = r4.a(r5)
            return r5
        L141:
            android.content.Context r5 = com.igexin.push.core.d.g
            java.util.Random r8 = new java.util.Random
            r8.<init>()
            int r7 = r8.nextInt(r7)
            android.app.PendingIntent r5 = android.app.PendingIntent.getBroadcast(r5, r7, r0, r6)
            return r5
    }

    private android.app.PendingIntent a(java.lang.String r3, java.lang.String r4, java.lang.String r5, int r6, com.igexin.push.extension.distribution.basic.b.a r7, boolean r8) {
            r2 = this;
            java.lang.String r6 = ""
            android.content.Intent r8 = new android.content.Intent     // Catch: java.lang.Exception -> L85
            android.content.Context r0 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L85
            android.content.Context r1 = com.igexin.push.extension.distribution.basic.c.e.a     // Catch: java.lang.Exception -> L85
            java.lang.String r1 = com.igexin.push.extension.distribution.basic.g.e.a(r1)     // Catch: java.lang.Exception -> L85
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L85
            r8.<init>(r0, r1)     // Catch: java.lang.Exception -> L85
            java.lang.String r0 = "taskid"
            r8.putExtra(r0, r4)     // Catch: java.lang.Exception -> L85
            java.lang.String r4 = "messageid"
            r8.putExtra(r4, r5)     // Catch: java.lang.Exception -> L85
            java.lang.String r4 = "appid"
            java.lang.String r5 = com.igexin.push.core.d.a     // Catch: java.lang.Exception -> L85
            r8.putExtra(r4, r5)     // Catch: java.lang.Exception -> L85
            java.lang.String r4 = "appkey"
            r8.putExtra(r4, r3)     // Catch: java.lang.Exception -> L85
            java.lang.String r3 = "actionid"
            java.lang.String r4 = r7.getDoActionId()     // Catch: java.lang.Exception -> L85
            r8.putExtra(r3, r4)     // Catch: java.lang.Exception -> L85
            java.lang.String r3 = "notifyStyle"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L85
            r4.<init>()     // Catch: java.lang.Exception -> L85
            int r5 = r7.u()     // Catch: java.lang.Exception -> L85
            r4.append(r5)     // Catch: java.lang.Exception -> L85
            r4.append(r6)     // Catch: java.lang.Exception -> L85
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L85
            r8.putExtra(r3, r4)     // Catch: java.lang.Exception -> L85
            java.lang.String r3 = "id"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L85
            r4.<init>()     // Catch: java.lang.Exception -> L85
            java.lang.String r5 = r7.f()     // Catch: java.lang.Exception -> L85
            r4.append(r5)     // Catch: java.lang.Exception -> L85
            r4.append(r6)     // Catch: java.lang.Exception -> L85
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L85
            r8.putExtra(r3, r4)     // Catch: java.lang.Exception -> L85
            java.lang.String r3 = "feedbackid"
            java.lang.String r4 = r7.getActionId()     // Catch: java.lang.Exception -> L85
            java.lang.String r5 = r7.getActionId()     // Catch: java.lang.Exception -> L85
            int r5 = r5.length()     // Catch: java.lang.Exception -> L85
            int r5 = r5 + (-1)
            java.lang.String r4 = r4.substring(r5)     // Catch: java.lang.Exception -> L85
            r8.putExtra(r3, r4)     // Catch: java.lang.Exception -> L85
            java.lang.String r3 = "action"
            java.lang.String r4 = "com.igexin.action.notification.delete"
            r8.putExtra(r3, r4)     // Catch: java.lang.Exception -> L85
            android.app.PendingIntent r3 = r2.a(r8)     // Catch: java.lang.Exception -> L85
            return r3
        L85:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = com.igexin.push.extension.distribution.basic.a.a.a
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

    private void a(java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17) {
            r13 = this;
            r1 = r13
            java.lang.String r2 = "4.6.4.0"
            android.content.Context r0 = com.igexin.push.core.d.g
            if (r0 != 0) goto L8
            return
        L8:
            r3 = 0
            r4 = 1902131808(0x71603a60, float:1.1103234E30)
            r5 = 0
            android.content.Context r0 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> La7
            java.lang.Class r0 = r13.b(r0)     // Catch: java.lang.Throwable -> La7
            if (r0 == 0) goto Ldc
            java.lang.String r6 = com.igexin.push.core.d.a     // Catch: java.lang.Throwable -> La7
            if (r6 == 0) goto Ldc
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Throwable -> La7
            android.content.Context r7 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> La7
            r6.<init>(r7, r0)     // Catch: java.lang.Throwable -> La7
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> La4
            r0.<init>()     // Catch: java.lang.Throwable -> La4
            java.lang.String r3 = "action"
            r7 = 10011(0x271b, float:1.4028E-41)
            r0.putInt(r3, r7)     // Catch: java.lang.Throwable -> La4
            java.lang.String r3 = "com.igexin.sdk.message.GTNotificationMessage"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> La4
            java.lang.String r7 = "2.12.0.0"
            int r7 = com.igexin.push.extension.distribution.basic.g.c.a(r2, r7)     // Catch: java.lang.Throwable -> La4
            r8 = 1
            r9 = 2
            if (r7 != 0) goto L5c
            java.lang.Class[] r7 = new java.lang.Class[r9]     // Catch: java.lang.Throwable -> La4
            java.lang.Class<java.lang.String> r10 = java.lang.String.class
            r7[r5] = r10     // Catch: java.lang.Throwable -> La4
            java.lang.Class<java.lang.String> r10 = java.lang.String.class
            r7[r8] = r10     // Catch: java.lang.Throwable -> La4
            java.lang.reflect.Constructor r3 = r3.getConstructor(r7)     // Catch: java.lang.Throwable -> La4
            java.lang.String r7 = "notification_arrive"
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> La4
            r9[r5] = r14     // Catch: java.lang.Throwable -> La4
            r9[r8] = r15     // Catch: java.lang.Throwable -> La4
            java.lang.Object r3 = r3.newInstance(r9)     // Catch: java.lang.Throwable -> La4
            java.io.Serializable r3 = (java.io.Serializable) r3     // Catch: java.lang.Throwable -> La4
            r0.putSerializable(r7, r3)     // Catch: java.lang.Throwable -> La4
            goto L89
        L5c:
            r7 = 4
            java.lang.Class[] r10 = new java.lang.Class[r7]     // Catch: java.lang.Throwable -> La4
            java.lang.Class<java.lang.String> r11 = java.lang.String.class
            r10[r5] = r11     // Catch: java.lang.Throwable -> La4
            java.lang.Class<java.lang.String> r11 = java.lang.String.class
            r10[r8] = r11     // Catch: java.lang.Throwable -> La4
            java.lang.Class<java.lang.String> r11 = java.lang.String.class
            r10[r9] = r11     // Catch: java.lang.Throwable -> La4
            java.lang.Class<java.lang.String> r11 = java.lang.String.class
            r12 = 3
            r10[r12] = r11     // Catch: java.lang.Throwable -> La4
            java.lang.reflect.Constructor r3 = r3.getConstructor(r10)     // Catch: java.lang.Throwable -> La4
            java.lang.String r10 = "notification_arrived"
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> La4
            r7[r5] = r14     // Catch: java.lang.Throwable -> La4
            r7[r8] = r15     // Catch: java.lang.Throwable -> La4
            r7[r9] = r16     // Catch: java.lang.Throwable -> La4
            r7[r12] = r17     // Catch: java.lang.Throwable -> La4
            java.lang.Object r3 = r3.newInstance(r7)     // Catch: java.lang.Throwable -> La4
            java.io.Serializable r3 = (java.io.Serializable) r3     // Catch: java.lang.Throwable -> La4
            r0.putSerializable(r10, r3)     // Catch: java.lang.Throwable -> La4
        L89:
            r6.putExtras(r0)     // Catch: java.lang.Throwable -> La4
            android.content.Context r0 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> La4
            boolean r0 = r13.a(r0)     // Catch: java.lang.Throwable -> La4
            if (r0 == 0) goto L9e
            com.igexin.push.extension.distribution.basic.c.a r0 = com.igexin.push.extension.distribution.basic.c.a.a()     // Catch: java.lang.Throwable -> La4
            android.content.Context r3 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> La4
            r0.a(r3, r6, r4)     // Catch: java.lang.Throwable -> La4
            goto Ldc
        L9e:
            android.content.Context r0 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> La4
            r0.startService(r6)     // Catch: java.lang.Throwable -> La4
            goto Ldc
        La4:
            r0 = move-exception
            r3 = r6
            goto La8
        La7:
            r0 = move-exception
        La8:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = com.igexin.push.extension.distribution.basic.a.a.a
            r6.append(r7)
            java.lang.String r7 = "|"
            r6.append(r7)
            java.lang.String r7 = r0.toString()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.Object[] r5 = new java.lang.Object[r5]
            com.igexin.b.a.c.b.a(r6, r5)
            boolean r0 = r0 instanceof java.lang.IllegalStateException
            if (r0 == 0) goto Ldc
            java.lang.String r0 = "2.13.1.0"
            int r0 = com.igexin.push.extension.distribution.basic.g.c.a(r2, r0)
            if (r0 < 0) goto Ldc
            com.igexin.push.extension.distribution.basic.c.a r0 = com.igexin.push.extension.distribution.basic.c.a.a()
            android.content.Context r2 = com.igexin.push.core.d.g
            r0.a(r2, r3, r4)
        Ldc:
            return
    }

    private boolean a(android.content.Context r2) {
            r1 = this;
            java.lang.String r2 = "4.6.4.0"
            java.lang.String r0 = "2.13.1.0"
            int r2 = com.igexin.push.extension.distribution.basic.g.c.a(r2, r0)
            if (r2 < 0) goto L12
            boolean r2 = com.igexin.push.extension.distribution.basic.g.b.b()
            if (r2 == 0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
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

    private java.lang.Class b(android.content.Context r3) {
            r2 = this;
            com.igexin.push.extension.distribution.basic.d.a.a()     // Catch: java.lang.Throwable -> L12
            java.lang.String r3 = com.igexin.push.extension.distribution.basic.d.a.c()     // Catch: java.lang.Throwable -> L12
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L12
            if (r0 != 0) goto L33
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L12
            return r3
        L12:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.extension.distribution.basic.a.a.a
            r0.append(r1)
            java.lang.String r1 = "|"
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r3, r0)
        L33:
            r3 = 0
            return r3
    }

    private android.graphics.Bitmap c(java.lang.String r2) {
            r1 = this;
            r0 = 0
            if (r2 == 0) goto La
            android.graphics.Bitmap r2 = android.graphics.BitmapFactory.decodeFile(r2)     // Catch: java.lang.Exception -> La
            if (r2 == 0) goto La
            return r2
        La:
            return r0
    }

    @Override
    public com.igexin.push.core.a a(com.igexin.push.core.bean.PushTaskBean r11, com.igexin.push.core.bean.BaseAction r12) {
            r10 = this;
            boolean r0 = r12 instanceof com.igexin.push.extension.distribution.basic.b.a
            if (r0 == 0) goto L6e
            r0 = r12
            com.igexin.push.extension.distribution.basic.b.a r0 = (com.igexin.push.extension.distribution.basic.b.a) r0
            java.lang.String r2 = r0.q()
            java.lang.String r7 = r0.m()
            java.lang.String r8 = r11.getTaskId()
            java.lang.String r11 = r11.getMessageId()
            r1 = 1
            java.lang.String r3 = ""
            r4 = 0
            if (r7 == 0) goto L33
            com.igexin.push.extension.distribution.basic.c.c r5 = com.igexin.push.extension.distribution.basic.c.c.a()
            java.lang.String r5 = r5.a(r7)
            boolean r6 = r5.equals(r3)
            if (r6 == 0) goto L30
            r0.c(r4)
            r9 = r1
            goto L34
        L30:
            r0.e(r5)
        L33:
            r9 = r4
        L34:
            if (r2 == 0) goto L4b
            com.igexin.push.extension.distribution.basic.c.c r5 = com.igexin.push.extension.distribution.basic.c.c.a()
            java.lang.String r5 = r5.a(r2)
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L48
            r0.d(r4)
            goto L4c
        L48:
            r0.k(r5)
        L4b:
            r1 = r4
        L4c:
            if (r1 != 0) goto L54
            if (r9 == 0) goto L51
            goto L54
        L51:
            com.igexin.push.core.a r11 = com.igexin.push.core.a.a
            return r11
        L54:
            if (r1 == 0) goto L5e
            r6 = 2
            r1 = r10
            r3 = r8
            r4 = r11
            r5 = r12
            r1.a(r2, r3, r4, r5, r6)
        L5e:
            if (r9 == 0) goto L6b
            r0 = 8
            r3 = r10
            r4 = r7
            r5 = r8
            r6 = r11
            r7 = r12
            r8 = r0
            r3.a(r4, r5, r6, r7, r8)
        L6b:
            com.igexin.push.core.a r11 = com.igexin.push.core.a.b
            return r11
        L6e:
            com.igexin.push.core.a r11 = com.igexin.push.core.a.c
            return r11
    }

    @Override
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r19) {
            r18 = this;
            r0 = r19
            java.lang.String r1 = "is_noclear"
            java.lang.String r2 = ".png"
            java.lang.String r3 = "isFloat"
            java.lang.String r4 = "priority"
            java.lang.String r5 = "bigStyle"
            java.lang.String r6 = "text"
            java.lang.String r7 = "title"
            java.lang.String r8 = "id"
            java.lang.String r9 = "notifyStyle"
            java.lang.String r10 = "notifyid"
            java.lang.String r11 = "big_text"
            java.lang.String r12 = "big_image_url"
            java.lang.String r13 = "logo"
            java.lang.String r14 = "logo_url"
            com.igexin.push.extension.distribution.basic.b.a r15 = new com.igexin.push.extension.distribution.basic.b.a     // Catch: java.lang.Exception -> L2c5
            r15.<init>()     // Catch: java.lang.Exception -> L2c5
            r16 = r10
            java.lang.String r10 = "notification"
            r15.setType(r10)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r10 = "actionid"
            java.lang.String r10 = r0.getString(r10)     // Catch: java.lang.Exception -> L2c5
            r15.setActionId(r10)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r10 = "do"
            java.lang.String r10 = r0.getString(r10)     // Catch: java.lang.Exception -> L2c5
            r15.setDoActionId(r10)     // Catch: java.lang.Exception -> L2c5
            boolean r10 = r0.has(r9)     // Catch: java.lang.Exception -> L2c5
            r17 = r1
            r1 = 0
            if (r10 == 0) goto L4a
            int r9 = r0.getInt(r9)     // Catch: java.lang.Exception -> L4a
            goto L4b
        L4a:
            r9 = r1
        L4b:
            boolean r10 = r0.has(r8)     // Catch: java.lang.Exception -> L2c5
            if (r10 == 0) goto L58
            java.lang.String r8 = r0.getString(r8)     // Catch: java.lang.Exception -> L2c5
            r15.c(r8)     // Catch: java.lang.Exception -> L2c5
        L58:
            boolean r8 = r0.has(r7)     // Catch: java.lang.Exception -> L2c5
            if (r8 == 0) goto L65
            java.lang.String r7 = r0.getString(r7)     // Catch: java.lang.Exception -> L2c5
            r15.g(r7)     // Catch: java.lang.Exception -> L2c5
        L65:
            boolean r7 = r0.has(r6)     // Catch: java.lang.Exception -> L2c5
            if (r7 == 0) goto L72
            java.lang.String r6 = r0.getString(r6)     // Catch: java.lang.Exception -> L2c5
            r15.h(r6)     // Catch: java.lang.Exception -> L2c5
        L72:
            java.lang.String r6 = r15.n()     // Catch: java.lang.Exception -> L2c5
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L2c5
            r7 = 4
            if (r6 == 0) goto La3
            java.lang.String r6 = r15.o()     // Catch: java.lang.Exception -> L2c5
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L2c5
            if (r6 == 0) goto La3
            if (r9 == r7) goto La3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2c5
            r0.<init>()     // Catch: java.lang.Exception -> L2c5
            java.lang.String r2 = com.igexin.push.extension.distribution.basic.a.a.a     // Catch: java.lang.Exception -> L2c5
            r0.append(r2)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r2 = "|title and content is empty, not support"
            r0.append(r2)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2c5
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L2c5
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Exception -> L2c5
            r0 = 0
            return r0
        La3:
            if (r9 != r7) goto Lc2
            r15.f(r7)     // Catch: java.lang.Exception -> L2c5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2c5
            r0.<init>()     // Catch: java.lang.Exception -> L2c5
            java.lang.String r2 = com.igexin.push.extension.distribution.basic.a.a.a     // Catch: java.lang.Exception -> L2c5
            r0.append(r2)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r2 = "Do not support notifyStyle4"
            r0.append(r2)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2c5
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L2c5
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Exception -> L2c5
            r0 = 0
            return r0
        Lc2:
            java.lang.String r6 = com.igexin.push.extension.distribution.basic.a.a.a     // Catch: java.lang.Exception -> L2c5
            java.lang.String r8 = "parse notify style 0"
            com.igexin.b.a.c.b.a(r6, r8)     // Catch: java.lang.Exception -> L2c5
            r15.f(r1)     // Catch: java.lang.Exception -> L2c5
            boolean r6 = r0.has(r5)     // Catch: java.lang.Exception -> L2c5
            r8 = 3
            r9 = 1
            if (r6 == 0) goto Lde
            int r5 = r0.getInt(r5)     // Catch: java.lang.Exception -> Ld9
            goto Lda
        Ld9:
            r5 = r1
        Lda:
            if (r5 > r8) goto Lde
            if (r5 >= r9) goto Ldf
        Lde:
            r5 = r1
        Ldf:
            r15.c(r5)     // Catch: java.lang.Exception -> L2c5
            boolean r6 = r0.has(r14)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r10 = "http"
            if (r6 == 0) goto Lfb
            java.lang.String r6 = r0.getString(r14)     // Catch: java.lang.Exception -> L2c5
            boolean r6 = r6.startsWith(r10)     // Catch: java.lang.Exception -> L2c5
            if (r6 == 0) goto Lfb
            java.lang.String r6 = r0.getString(r14)     // Catch: java.lang.Exception -> L2c5
            r15.j(r6)     // Catch: java.lang.Exception -> L2c5
        Lfb:
            boolean r6 = r0.has(r13)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r14 = ""
            if (r6 == 0) goto L149
            java.lang.String r6 = r0.getString(r13)     // Catch: java.lang.Exception -> L2c5
            boolean r6 = r14.equals(r6)     // Catch: java.lang.Exception -> L2c5
            if (r6 != 0) goto L149
            java.lang.String r6 = r0.getString(r13)     // Catch: java.lang.Exception -> L2c5
            int r13 = r6.lastIndexOf(r2)     // Catch: java.lang.Exception -> L2c5
            r7 = -1
            if (r13 != r7) goto L123
            java.lang.String r13 = ".jpeg"
            int r13 = r6.lastIndexOf(r13)     // Catch: java.lang.Exception -> L2c5
            if (r13 == r7) goto L121
            goto L123
        L121:
            r6 = r14
            goto L146
        L123:
            int r2 = r6.indexOf(r2)     // Catch: java.lang.Exception -> L2c5
            if (r2 != r7) goto L12f
            java.lang.String r2 = ".jpeg"
            int r2 = r6.indexOf(r2)     // Catch: java.lang.Exception -> L2c5
        L12f:
            if (r2 == r7) goto L146
            java.lang.String r6 = r6.substring(r1, r2)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r2 = "^\\d+$"
            java.util.regex.Pattern r2 = java.util.regex.Pattern.compile(r2)     // Catch: java.lang.Exception -> L2c5
            java.util.regex.Matcher r2 = r2.matcher(r6)     // Catch: java.lang.Exception -> L2c5
            boolean r2 = r2.matches()     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L146
            goto L121
        L146:
            r15.i(r6)     // Catch: java.lang.Exception -> L2c5
        L149:
            boolean r2 = r0.has(r4)     // Catch: java.lang.Exception -> L160
            if (r2 == 0) goto L163
            int r2 = r0.getInt(r4)     // Catch: java.lang.Exception -> L160
            r4 = -3
            if (r2 <= r4) goto L15c
            if (r2 >= r8) goto L15c
            r15.b(r2)     // Catch: java.lang.Exception -> L160
            goto L163
        L15c:
            r15.b(r1)     // Catch: java.lang.Exception -> L160
            goto L163
        L160:
            r15.b(r1)     // Catch: java.lang.Exception -> L2c5
        L163:
            if (r5 != r9) goto L17d
            boolean r2 = r0.has(r12)     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L17d
            java.lang.String r2 = r0.getString(r12)     // Catch: java.lang.Exception -> L2c5
            boolean r2 = r2.startsWith(r10)     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L17d
            java.lang.String r2 = r0.getString(r12)     // Catch: java.lang.Exception -> L2c5
            r15.f(r2)     // Catch: java.lang.Exception -> L2c5
            goto L1b4
        L17d:
            r2 = 2
            if (r5 != r2) goto L198
            boolean r2 = r0.has(r11)     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L198
            java.lang.String r2 = r0.getString(r11)     // Catch: java.lang.Exception -> L2c5
            boolean r2 = r2.equals(r14)     // Catch: java.lang.Exception -> L2c5
            if (r2 != 0) goto L198
            java.lang.String r2 = r0.getString(r11)     // Catch: java.lang.Exception -> L2c5
            r15.d(r2)     // Catch: java.lang.Exception -> L2c5
            goto L1b4
        L198:
            if (r5 != r8) goto L1b4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2c5
            r0.<init>()     // Catch: java.lang.Exception -> L2c5
            java.lang.String r2 = com.igexin.push.extension.distribution.basic.a.a.a     // Catch: java.lang.Exception -> L2c5
            r0.append(r2)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r2 = "big style = 3 doesn't support"
            r0.append(r2)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2c5
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L2c5
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Exception -> L2c5
            r0 = 0
            return r0
        L1b4:
            boolean r2 = r0.has(r3)     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L1c7
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L2c5
            r4 = 11
            if (r2 < r4) goto L1c7
            boolean r2 = r0.getBoolean(r3)     // Catch: java.lang.Exception -> L2c5
            r15.b(r2)     // Catch: java.lang.Exception -> L2c5
        L1c7:
            r2 = r17
            boolean r3 = r0.has(r2)     // Catch: java.lang.Exception -> L2c5
            if (r3 == 0) goto L1db
            boolean r2 = r0.getBoolean(r2)     // Catch: java.lang.Exception -> L2c5
            if (r2 != 0) goto L1d7
            r2 = r9
            goto L1d8
        L1d7:
            r2 = r1
        L1d8:
            r15.g(r2)     // Catch: java.lang.Exception -> L2c5
        L1db:
            java.lang.String r2 = "is_novibrate"
            boolean r2 = r0.has(r2)     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L1f1
            java.lang.String r2 = "is_novibrate"
            boolean r2 = r0.getBoolean(r2)     // Catch: java.lang.Exception -> L2c5
            if (r2 != 0) goto L1ed
            r2 = r9
            goto L1ee
        L1ed:
            r2 = r1
        L1ee:
            r15.e(r2)     // Catch: java.lang.Exception -> L2c5
        L1f1:
            java.lang.String r2 = "is_noring"
            boolean r2 = r0.has(r2)     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L207
            java.lang.String r2 = "is_noring"
            boolean r2 = r0.getBoolean(r2)     // Catch: java.lang.Exception -> L2c5
            if (r2 != 0) goto L203
            r2 = r9
            goto L204
        L203:
            r2 = r1
        L204:
            r15.f(r2)     // Catch: java.lang.Exception -> L2c5
        L207:
            java.lang.String r2 = "color"
            boolean r2 = r0.has(r2)     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L218
            java.lang.String r2 = "color"
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Exception -> L2c5
            r15.l(r2)     // Catch: java.lang.Exception -> L2c5
        L218:
            java.lang.String r2 = "channel"
            boolean r2 = r0.has(r2)     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L229
            java.lang.String r2 = "channel"
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Exception -> L2c5
            r15.a(r2)     // Catch: java.lang.Exception -> L2c5
        L229:
            java.lang.String r2 = "channelName"
            boolean r2 = r0.has(r2)     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L23a
            java.lang.String r2 = "channelName"
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Exception -> L2c5
            r15.b(r2)     // Catch: java.lang.Exception -> L2c5
        L23a:
            java.lang.String r2 = "channelLevel"
            boolean r2 = r0.has(r2)     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L24b
            java.lang.String r2 = "channelLevel"
            int r2 = r0.getInt(r2)     // Catch: java.lang.Exception -> L2c5
            r15.a(r2)     // Catch: java.lang.Exception -> L2c5
        L24b:
            java.lang.String r2 = "badgeAddNum"
            boolean r2 = r0.has(r2)     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L25c
            java.lang.String r2 = "badgeAddNum"
            int r2 = r0.optInt(r2)     // Catch: java.lang.Exception -> L2c5
            r15.h(r2)     // Catch: java.lang.Exception -> L2c5
        L25c:
            java.lang.String r2 = "ringName"
            boolean r2 = r0.has(r2)     // Catch: java.lang.Exception -> L2c5
            if (r2 == 0) goto L26d
            java.lang.String r2 = "ringName"
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Exception -> L2c5
            r15.m(r2)     // Catch: java.lang.Exception -> L2c5
        L26d:
            int r2 = r15.d()     // Catch: java.lang.Exception -> L2c5
            r3 = 4
            if (r2 > r3) goto L27a
            int r2 = r15.d()     // Catch: java.lang.Exception -> L2c5
            if (r2 >= 0) goto L27d
        L27a:
            r15.a(r8)     // Catch: java.lang.Exception -> L2c5
        L27d:
            r2 = r16
            boolean r3 = r0.has(r2)     // Catch: java.lang.Exception -> L2c5
            if (r3 == 0) goto L2c4
            java.lang.String r3 = r0.optString(r2)     // Catch: java.lang.NumberFormatException -> L294 java.lang.Exception -> L2c5
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.NumberFormatException -> L294 java.lang.Exception -> L2c5
            r15.g(r3)     // Catch: java.lang.NumberFormatException -> L294 java.lang.Exception -> L2c5
            r15.a(r9)     // Catch: java.lang.NumberFormatException -> L294 java.lang.Exception -> L2c5
            goto L2c4
        L294:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2c5
            r3.<init>()     // Catch: java.lang.Exception -> L2c5
            java.lang.String r4 = " NotificationAction.parseAction() : "
            r3.append(r4)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r0 = r0.optString(r2)     // Catch: java.lang.Exception -> L2c5
            r3.append(r0)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r0 = "_"
            r3.append(r0)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> L2c5
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2c5
            r2.<init>()     // Catch: java.lang.Exception -> L2c5
            java.lang.String r3 = com.igexin.push.extension.distribution.basic.a.a.a     // Catch: java.lang.Exception -> L2c5
            r2.append(r3)     // Catch: java.lang.Exception -> L2c5
            r2.append(r0)     // Catch: java.lang.Exception -> L2c5
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L2c5
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L2c5
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Exception -> L2c5
        L2c4:
            return r15
        L2c5:
            r0 = 0
            return r0
    }

    public void a(java.lang.String r13, java.lang.String r14, java.lang.String r15, com.igexin.push.core.bean.BaseAction r16, int r17) {
            r12 = this;
            r7 = r13
            r8 = r17
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "width="
            r0.append(r1)
            int r1 = com.igexin.push.extension.distribution.basic.c.e.c
            r0.append(r1)
            java.lang.String r1 = "&height="
            r0.append(r1)
            int r1 = com.igexin.push.extension.distribution.basic.c.e.b
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            boolean r1 = r13.contains(r0)
            if (r1 != 0) goto L57
            java.lang.String r1 = "?"
            int r2 = r13.indexOf(r1)
            if (r2 <= 0) goto L43
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r13)
            java.lang.String r2 = "&"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            goto L55
        L43:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r13)
            r2.append(r1)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
        L55:
            r9 = r0
            goto L58
        L57:
            r9 = r7
        L58:
            com.igexin.push.extension.distribution.basic.f.c r10 = new com.igexin.push.extension.distribution.basic.f.c
            com.igexin.push.extension.distribution.basic.a.b r11 = new com.igexin.push.extension.distribution.basic.a.b
            r0 = r11
            r1 = r12
            r2 = r16
            r3 = r14
            r4 = r15
            r5 = r13
            r6 = r17
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r0 = r10
            r1 = r9
            r2 = r13
            r4 = r16
            r5 = r17
            r6 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r0 = 2
            r1 = 1
            if (r8 != r0) goto L84
            r0 = r16
            com.igexin.push.extension.distribution.basic.b.a r0 = (com.igexin.push.extension.distribution.basic.b.a) r0
            int r2 = r0.t()
            int r2 = r2 + r1
            r0.e(r2)
            goto L94
        L84:
            r0 = 8
            if (r8 != r0) goto L94
            r0 = r16
            com.igexin.push.extension.distribution.basic.b.a r0 = (com.igexin.push.extension.distribution.basic.b.a) r0
            int r2 = r0.l()
            int r2 = r2 + r1
            r0.d(r2)
        L94:
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.extension.distribution.basic.f.a r2 = new com.igexin.push.extension.distribution.basic.f.a
            r2.<init>(r10)
            r3 = 0
            r0.a(r2, r3, r1)
            return
    }

    public void a(java.lang.String r18, java.lang.String r19, java.lang.String r20, com.igexin.push.extension.distribution.basic.b.a r21, int r22) {
            r17 = this;
            r7 = r17
            r8 = r19
            r9 = r21
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.igexin.push.core.d.aa
            java.lang.Integer r1 = java.lang.Integer.valueOf(r22)
            r0.put(r8, r1)
            r5 = 0
            r0 = r17
            r1 = r19
            r2 = r20
            r3 = r22
            r4 = r21
            android.app.PendingIntent r10 = r0.a(r1, r2, r3, r4, r5)
            r6 = 0
            r1 = r18
            r2 = r19
            r3 = r20
            r4 = r22
            r5 = r21
            android.app.PendingIntent r0 = r0.a(r1, r2, r3, r4, r5, r6)
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.String r2 = "notification"
            java.lang.Object r1 = r1.getSystemService(r2)
            android.app.NotificationManager r1 = (android.app.NotificationManager) r1
            java.lang.String r2 = r21.r()
            java.lang.String r3 = r21.n()
            java.lang.String r4 = r21.o()
            r5 = 1
            if (r2 == 0) goto L73
            java.lang.String r11 = ""
            boolean r11 = r11.equals(r2)
            if (r11 != 0) goto L73
            android.graphics.Bitmap r2 = r7.c(r2)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = com.igexin.push.extension.distribution.basic.a.a.a
            r11.append(r12)
            java.lang.String r12 = "|use net logo bitmap is null = "
            r11.append(r12)
            if (r2 != 0) goto L65
            r12 = r5
            goto L66
        L65:
            r12 = r6
        L66:
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            java.lang.Object[] r12 = new java.lang.Object[r6]
            com.igexin.b.a.c.b.a(r11, r12)
            goto L74
        L73:
            r2 = 0
        L74:
            if (r2 != 0) goto L84
            int r2 = r7.a(r9, r6)
            android.content.Context r11 = com.igexin.push.extension.distribution.basic.c.e.a
            android.content.res.Resources r11 = r11.getResources()
            android.graphics.Bitmap r2 = android.graphics.BitmapFactory.decodeResource(r11, r2)
        L84:
            android.app.Notification r11 = new android.app.Notification
            r11.<init>()
            int r12 = android.os.Build.VERSION.SDK_INT
            r13 = 11
            r14 = 2
            if (r12 < r13) goto L1a1
            android.app.Notification$Builder r11 = new android.app.Notification$Builder
            android.content.Context r12 = com.igexin.push.core.d.g
            r11.<init>(r12)
            int r12 = android.os.Build.VERSION.SDK_INT
            r13 = 26
            if (r12 < r13) goto La1
            android.app.Notification$Builder r11 = r7.a(r9)
        La1:
            int r5 = r7.a(r9, r5)
            if (r5 == 0) goto Ld4
            android.content.Context r12 = com.igexin.push.core.d.g
            android.content.res.Resources r12 = r12.getResources()
            android.graphics.drawable.Drawable r12 = r12.getDrawable(r5)
            if (r12 != 0) goto Ld4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.extension.distribution.basic.a.a.a
            r0.append(r1)
            java.lang.String r1 = "|showNotification smallIconId: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = " couldn't find resource"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r6]
            com.igexin.b.a.c.b.a(r0, r1)
            return
        Ld4:
            boolean r12 = android.text.TextUtils.isEmpty(r3)
            if (r12 != 0) goto Ldd
            r11.setContentTitle(r3)
        Ldd:
            boolean r12 = android.text.TextUtils.isEmpty(r4)
            if (r12 != 0) goto Le6
            r11.setContentText(r4)
        Le6:
            android.app.Notification$Builder r5 = r11.setSmallIcon(r5)
            java.lang.String r12 = r21.o()
            android.app.Notification$Builder r5 = r5.setTicker(r12)
            long r12 = java.lang.System.currentTimeMillis()
            android.app.Notification$Builder r5 = r5.setWhen(r12)
            android.app.Notification$Builder r2 = r5.setLargeIcon(r2)
            android.app.Notification$Builder r2 = r2.setContentIntent(r10)
            r2.setDeleteIntent(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 24
            if (r0 < r2) goto L120
            java.lang.String r0 = r21.v()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L120
            java.lang.String r0 = r21.v()     // Catch: java.lang.Throwable -> L120
            int r0 = android.graphics.Color.parseColor(r0)     // Catch: java.lang.Throwable -> L120
            r11.setColor(r0)     // Catch: java.lang.Throwable -> L120
        L120:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r0 < r2) goto L17c
            int r0 = r21.i()
            com.igexin.push.extension.distribution.basic.a.c r2 = com.igexin.push.extension.distribution.basic.a.c.a
            int r2 = r2.a()
            if (r0 != r2) goto L153
            java.lang.String r0 = r21.j()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L17c
            android.graphics.Bitmap r0 = r7.c(r0)
            if (r0 == 0) goto L17c
            int r2 = r21.e()
            r11.setPriority(r2)
            android.app.Notification$BigPictureStyle r2 = new android.app.Notification$BigPictureStyle
            r2.<init>()
            android.app.Notification$BigPictureStyle r0 = r2.bigPicture(r0)
            goto L179
        L153:
            int r0 = r21.i()
            com.igexin.push.extension.distribution.basic.a.c r2 = com.igexin.push.extension.distribution.basic.a.c.b
            int r2 = r2.a()
            if (r0 != r2) goto L17c
            java.lang.String r0 = r21.h()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L17c
            int r2 = r21.e()
            r11.setPriority(r2)
            android.app.Notification$BigTextStyle r2 = new android.app.Notification$BigTextStyle
            r2.<init>()
            android.app.Notification$BigTextStyle r0 = r2.bigText(r0)
        L179:
            r11.setStyle(r0)
        L17c:
            boolean r0 = r21.g()
            if (r0 == 0) goto L197
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r0 < r2) goto L197
            boolean r0 = r21.x()
            if (r0 != 0) goto L194
            boolean r0 = r21.y()
            if (r0 == 0) goto L197
        L194:
            r11.setPriority(r14)
        L197:
            android.app.Notification r11 = r11.getNotification()
            r7.a(r11, r9)
        L19e:
            r0 = r22
            goto L1e8
        L1a1:
            android.widget.RemoteViews r12 = r11.contentView     // Catch: java.lang.Exception -> L1fb
            if (r12 == 0) goto L1b2
            if (r2 == 0) goto L1b2
            int r12 = r17.a()     // Catch: java.lang.Exception -> L1fb
            if (r12 <= 0) goto L1b2
            android.widget.RemoteViews r13 = r11.contentView     // Catch: java.lang.Exception -> L1fb
            r13.setImageViewBitmap(r12, r2)     // Catch: java.lang.Exception -> L1fb
        L1b2:
            r11.deleteIntent = r0     // Catch: java.lang.Exception -> L1fb
            java.lang.String r0 = "android.app.Notification"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L1fb
            java.lang.String r2 = "setLatestEventInfo"
            r12 = 4
            java.lang.Class[] r13 = new java.lang.Class[r12]     // Catch: java.lang.Exception -> L1fb
            java.lang.Class<android.content.Context> r15 = android.content.Context.class
            r13[r6] = r15     // Catch: java.lang.Exception -> L1fb
            java.lang.Class<java.lang.CharSequence> r15 = java.lang.CharSequence.class
            r13[r5] = r15     // Catch: java.lang.Exception -> L1fb
            java.lang.Class<java.lang.CharSequence> r15 = java.lang.CharSequence.class
            r13[r14] = r15     // Catch: java.lang.Exception -> L1fb
            java.lang.Class<android.app.PendingIntent> r15 = android.app.PendingIntent.class
            r16 = 3
            r13[r16] = r15     // Catch: java.lang.Exception -> L1fb
            java.lang.reflect.Method r0 = r0.getMethod(r2, r13)     // Catch: java.lang.Exception -> L1fb
            r0.setAccessible(r5)     // Catch: java.lang.Exception -> L1fb
            java.lang.Object[] r2 = new java.lang.Object[r12]     // Catch: java.lang.Exception -> L1fb
            android.content.Context r12 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L1fb
            r2[r6] = r12     // Catch: java.lang.Exception -> L1fb
            r2[r5] = r3     // Catch: java.lang.Exception -> L1fb
            r2[r14] = r4     // Catch: java.lang.Exception -> L1fb
            r2[r16] = r10     // Catch: java.lang.Exception -> L1fb
            r0.invoke(r11, r2)     // Catch: java.lang.Exception -> L1fb
            goto L19e
        L1e8:
            com.igexin.push.extension.distribution.basic.g.f.a(r1, r0, r11, r6, r9)
            java.lang.String r0 = "4.6.4.0"
            java.lang.String r1 = "2.12.0.0"
            int r0 = com.igexin.push.extension.distribution.basic.g.c.a(r0, r1)
            if (r0 < 0) goto L1fa
            r0 = r20
            r7.a(r8, r0, r3, r4)
        L1fa:
            return
        L1fb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.extension.distribution.basic.a.a.a
            r0.append(r1)
            java.lang.String r1 = "reflect invoke setLatestEventInfo failed!"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r6]
            com.igexin.b.a.c.b.a(r0, r1)
            return
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r9, com.igexin.push.core.bean.BaseAction r10) {
            r8 = this;
            r0 = 1
            if (r9 == 0) goto L8b
            boolean r1 = r10 instanceof com.igexin.push.extension.distribution.basic.b.a
            if (r1 == 0) goto L8b
            com.igexin.push.extension.distribution.basic.b.a r10 = (com.igexin.push.extension.distribution.basic.b.a) r10
            boolean r1 = r10.a()
            if (r1 != 0) goto L18
            java.lang.String r1 = r9.getTaskId()
            int r1 = r8.a(r1)
            goto L1c
        L18:
            int r1 = r10.w()
        L1c:
            r7 = r1
            r1 = 0
            java.lang.String r2 = r10.getActionId()     // Catch: java.lang.Exception -> L35
            java.lang.String r3 = r10.getActionId()     // Catch: java.lang.Exception -> L35
            int r3 = r3.length()     // Catch: java.lang.Exception -> L35
            int r3 = r3 - r0
            java.lang.String r2 = r2.substring(r3)     // Catch: java.lang.Exception -> L35
            int r1 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L35
            int r1 = r1 + 30000
        L35:
            java.lang.String r3 = r9.getAppKey()
            java.lang.String r4 = r9.getTaskId()
            java.lang.String r5 = r9.getMessageId()
            r2 = r8
            r6 = r10
            r2.a(r3, r4, r5, r6, r7)
            if (r1 == 0) goto L75
            com.igexin.push.core.a.e r2 = com.igexin.push.core.a.e.a()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r1 = ""
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "notifyStyle:"
            r3.append(r4)
            int r4 = r10.u()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.a(r9, r1, r3)
        L75:
            java.lang.String r1 = r10.getActionId()
            int r1 = java.lang.Integer.parseInt(r1)
            r9.setPerActionid(r1)
            java.lang.String r10 = r10.getDoActionId()
            int r10 = java.lang.Integer.parseInt(r10)
            r9.setCurrentActionid(r10)
        L8b:
            return r0
    }
}
