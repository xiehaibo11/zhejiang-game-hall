package com.mbridge.msdk.mbdownload;

public class c {
    public static final java.lang.String a = null;
    public static boolean b;
    protected static java.util.Map<com.mbridge.msdk.mbdownload.b.a, android.os.Messenger> c;
    protected static android.util.SparseArray<com.mbridge.msdk.mbdownload.e.b> d;
    final android.os.Messenger e;
    android.util.SparseArray<java.lang.Long> f;
    private android.support.v4.app.NotificationManagerCompat g;
    private com.mbridge.msdk.mbdownload.e h;
    private com.mbridge.msdk.mbdownload.i i;
    private android.os.Handler j;
    private boolean k;
    private android.app.Service l;

    class a extends android.os.Handler {
        final com.mbridge.msdk.mbdownload.c a;

        a(com.mbridge.msdk.mbdownload.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void handleMessage(android.os.Message r19) {
                r18 = this;
                r1 = r18
                r0 = r19
                java.lang.String r2 = "application/vnd.android.package-archive"
                int r3 = r0.what
                r4 = 5
                r5 = 134217728(0x8000000, float:3.85186E-34)
                java.lang.String r6 = "filename"
                r7 = 3
                r8 = 2
                r9 = 0
                r10 = 1
                if (r3 == r4) goto L9f
                r2 = 6
                if (r3 == r2) goto L18
                goto L246
            L18:
                java.lang.Object r2 = r0.obj
                r15 = r2
                com.mbridge.msdk.mbdownload.b$a r15 = (com.mbridge.msdk.mbdownload.b.a) r15
                int r14 = r0.arg2
                android.os.Bundle r0 = r19.getData()
                java.lang.String r2 = r0.getString(r6)
                com.mbridge.msdk.mbdownload.c r0 = r1.a
                android.support.v4.app.NotificationManagerCompat r0 = com.mbridge.msdk.mbdownload.c.c(r0)
                r0.cancel(r14)
                com.mbridge.msdk.mbdownload.c r0 = r1.a
                android.app.Service r0 = com.mbridge.msdk.mbdownload.c.b(r0)
                android.content.Intent r3 = new android.content.Intent
                r3.<init>()
                android.app.PendingIntent r0 = android.app.PendingIntent.getActivity(r0, r9, r3, r5)
                com.mbridge.msdk.mbdownload.c r3 = r1.a
                android.app.Service r3 = com.mbridge.msdk.mbdownload.c.b(r3)
                com.mbridge.msdk.mbdownload.c r4 = r1.a
                android.app.Service r4 = com.mbridge.msdk.mbdownload.c.b(r4)
                android.content.Context r4 = r4.getBaseContext()
                java.lang.String r4 = com.mbridge.msdk.mbdownload.g.k(r4)
                android.app.Notification r0 = com.mbridge.msdk.mbdownload.e.a(r3, r4, r0)
                if (r0 == 0) goto L69
                com.mbridge.msdk.mbdownload.c r3 = r1.a     // Catch: java.lang.Exception -> L65
                android.support.v4.app.NotificationManagerCompat r3 = com.mbridge.msdk.mbdownload.c.c(r3)     // Catch: java.lang.Exception -> L65
                int r4 = r14 + 1
                r3.notify(r4, r0)     // Catch: java.lang.Exception -> L65
                goto L69
            L65:
                r0 = move-exception
                r0.printStackTrace()
            L69:
                java.lang.String r0 = ".patch"
                java.lang.String r3 = ".apk"
                java.lang.String r0 = r2.replace(r0, r3)
                com.mbridge.msdk.mbdownload.c r3 = r1.a
                android.app.Service r3 = com.mbridge.msdk.mbdownload.c.b(r3)
                java.lang.String r3 = com.mbridge.msdk.mbdownload.a.a(r3)
                com.mbridge.msdk.mbdownload.e$c r4 = new com.mbridge.msdk.mbdownload.e$c
                com.mbridge.msdk.mbdownload.c r5 = r1.a
                com.mbridge.msdk.mbdownload.e r12 = com.mbridge.msdk.mbdownload.c.a(r5)
                r12.getClass()
                com.mbridge.msdk.mbdownload.c r5 = r1.a
                android.app.Service r13 = com.mbridge.msdk.mbdownload.c.b(r5)
                r11 = r4
                r16 = r0
                r11.<init>(r12, r13, r14, r15, r16)
                java.lang.String[] r5 = new java.lang.String[r7]
                r5[r9] = r3
                r5[r10] = r0
                r5[r8] = r2
                r4.execute(r5)
                goto L246
            L9f:
                java.lang.Object r3 = r0.obj
                com.mbridge.msdk.mbdownload.b$a r3 = (com.mbridge.msdk.mbdownload.b.a) r3
                int r4 = r0.arg2
                android.os.Bundle r0 = r19.getData()     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r6 = r0.getString(r6)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r0 = com.mbridge.msdk.mbdownload.c.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r11 = "Cancel old notification...."
                com.mbridge.msdk.foundation.tools.z.a(r0, r11)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.content.Intent r11 = new android.content.Intent     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r0 = "android.intent.action.VIEW"
                r11.<init>(r0)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                r0 = 268435456(0x10000000, float:2.524355E-29)
                r11.addFlags(r0)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                com.mbridge.msdk.mbdownload.c r0 = r1.a     // Catch: java.lang.Exception -> L164 java.lang.Throwable -> L246
                android.app.Service r0 = com.mbridge.msdk.mbdownload.c.b(r0)     // Catch: java.lang.Exception -> L164 java.lang.Throwable -> L246
                android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Exception -> L164 java.lang.Throwable -> L246
                int r12 = com.mbridge.msdk.foundation.tools.v.w(r0)     // Catch: java.lang.Exception -> L164 java.lang.Throwable -> L246
                r13 = 24
                if (r12 < r13) goto L157
                int r12 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L164 java.lang.Throwable -> L246
                if (r12 < r13) goto L157
                r12 = 0
                java.lang.String r13 = com.mbridge.msdk.MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.String r14 = ".mbFileProvider"
                if (r13 != 0) goto L128
                java.lang.String r13 = com.mbridge.msdk.MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.Class r13 = java.lang.Class.forName(r13)     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.String r15 = "getUriForFile"
                java.lang.Class[] r5 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.Class<android.content.Context> r17 = android.content.Context.class
                r5[r9] = r17     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.Class<java.lang.String> r17 = java.lang.String.class
                r5[r10] = r17     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.Class<java.io.File> r17 = java.io.File.class
                r5[r8] = r17     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.reflect.Method r5 = r13.getMethod(r15, r5)     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                r7[r9] = r0     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                r13.<init>()     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                r13.append(r0)     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                r13.append(r14)     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.String r0 = r13.toString()     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                r7[r10] = r0     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                r0.<init>(r6)     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                r7[r8] = r0     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.Object r0 = r5.invoke(r12, r7)     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                android.net.Uri r0 = (android.net.Uri) r0     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                android.net.Uri r0 = (android.net.Uri) r0     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                goto L148
            L128:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                r5.<init>()     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                android.content.Context r7 = r0.getApplicationContext()     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.String r7 = r7.getPackageName()     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                r5.append(r7)     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                r5.append(r14)     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                java.io.File r7 = new java.io.File     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                r7.<init>(r6)     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
                android.net.Uri r0 = com.mbridge.msdk.foundation.tools.MBFileProvider.getUriForFile(r0, r5, r7)     // Catch: java.lang.Exception -> L14a java.lang.Throwable -> L246
            L148:
                r12 = r0
                goto L14e
            L14a:
                r0 = move-exception
                r0.printStackTrace()     // Catch: java.lang.Exception -> L164 java.lang.Throwable -> L246
            L14e:
                if (r12 == 0) goto L170
                r11.setDataAndType(r12, r2)     // Catch: java.lang.Exception -> L164 java.lang.Throwable -> L246
                r11.addFlags(r10)     // Catch: java.lang.Exception -> L164 java.lang.Throwable -> L246
                goto L170
            L157:
                java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L164 java.lang.Throwable -> L246
                r0.<init>(r6)     // Catch: java.lang.Exception -> L164 java.lang.Throwable -> L246
                android.net.Uri r0 = android.net.Uri.fromFile(r0)     // Catch: java.lang.Exception -> L164 java.lang.Throwable -> L246
                r11.setDataAndType(r0, r2)     // Catch: java.lang.Exception -> L164 java.lang.Throwable -> L246
                goto L170
            L164:
                java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                r0.<init>(r6)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.net.Uri r0 = android.net.Uri.fromFile(r0)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                r11.setDataAndType(r0, r2)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
            L170:
                com.mbridge.msdk.mbdownload.c r0 = r1.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.app.Service r0 = com.mbridge.msdk.mbdownload.c.b(r0)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                r2 = 134217728(0x8000000, float:3.85186E-34)
                android.app.PendingIntent r0 = android.app.PendingIntent.getActivity(r0, r9, r11, r2)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                boolean r2 = r3.r     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                if (r2 == 0) goto L199
                com.mbridge.msdk.mbdownload.c r2 = r1.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.app.Service r2 = com.mbridge.msdk.mbdownload.c.b(r2)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                com.mbridge.msdk.mbdownload.c r5 = r1.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.app.Service r5 = com.mbridge.msdk.mbdownload.c.b(r5)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.content.Context r5 = r5.getBaseContext()     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r5 = com.mbridge.msdk.mbdownload.g.j(r5)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.app.Notification r0 = com.mbridge.msdk.mbdownload.e.a(r2, r5, r0)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                goto L1b1
            L199:
                com.mbridge.msdk.mbdownload.c r2 = r1.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.app.Service r2 = com.mbridge.msdk.mbdownload.c.b(r2)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                com.mbridge.msdk.mbdownload.c r5 = r1.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.app.Service r5 = com.mbridge.msdk.mbdownload.c.b(r5)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.content.Context r5 = r5.getBaseContext()     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r5 = com.mbridge.msdk.mbdownload.g.i(r5)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.app.Notification r0 = com.mbridge.msdk.mbdownload.e.a(r2, r5, r0)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
            L1b1:
                if (r0 == 0) goto L1ce
                r2 = 16
                r0.flags = r2     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                com.mbridge.msdk.mbdownload.c r2 = r1.a     // Catch: java.lang.Exception -> L1c3 java.lang.Throwable -> L246
                android.support.v4.app.NotificationManagerCompat r2 = com.mbridge.msdk.mbdownload.c.c(r2)     // Catch: java.lang.Exception -> L1c3 java.lang.Throwable -> L246
                int r5 = r4 + 1
                r2.notify(r5, r0)     // Catch: java.lang.Exception -> L1c3 java.lang.Throwable -> L246
                goto L1c7
            L1c3:
                r0 = move-exception
                r0.printStackTrace()     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
            L1c7:
                java.lang.String r0 = com.mbridge.msdk.mbdownload.c.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r2 = "Show new  notification...."
                com.mbridge.msdk.foundation.tools.z.a(r0, r2)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
            L1ce:
                com.mbridge.msdk.mbdownload.c r0 = r1.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                com.mbridge.msdk.mbdownload.e r0 = com.mbridge.msdk.mbdownload.c.a(r0)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                com.mbridge.msdk.mbdownload.c r2 = r1.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.app.Service r2 = com.mbridge.msdk.mbdownload.c.b(r2)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                boolean r0 = r0.a(r2)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r2 = com.mbridge.msdk.mbdownload.c.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r5 = "isAppOnForeground = %1$B"
                java.lang.Object[] r7 = new java.lang.Object[r10]     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.Boolean r11 = java.lang.Boolean.valueOf(r0)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                r7[r9] = r11     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r5 = java.lang.String.format(r5, r7)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                com.mbridge.msdk.foundation.tools.z.a(r2, r5)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                if (r0 == 0) goto L20d
                boolean r0 = r3.r     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                if (r0 != 0) goto L20d
                com.mbridge.msdk.mbdownload.c r0 = r1.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.support.v4.app.NotificationManagerCompat r0 = com.mbridge.msdk.mbdownload.c.c(r0)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                int r2 = r4 + 1
                r0.cancel(r2)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                com.mbridge.msdk.mbdownload.c r0 = r1.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                android.app.Service r0 = com.mbridge.msdk.mbdownload.c.b(r0)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r2 = r3.g     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                com.mbridge.msdk.click.c.c(r0, r2)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
            L20d:
                java.lang.String r0 = com.mbridge.msdk.mbdownload.c.a     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r2 = "%1$10s downloaded. Saved to: %2$s"
                java.lang.Object[] r5 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r3 = r3.c     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                r5[r9] = r3     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                r5[r10] = r6     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                java.lang.String r2 = java.lang.String.format(r2, r5)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Exception -> L221 java.lang.Throwable -> L246
                goto L246
            L221:
                r0 = move-exception
                java.lang.String r2 = com.mbridge.msdk.mbdownload.c.a
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r5 = "can not install. "
                r3.append(r5)
                java.lang.String r0 = r0.getMessage()
                r3.append(r0)
                java.lang.String r0 = r3.toString()
                com.mbridge.msdk.foundation.tools.z.d(r2, r0)
                com.mbridge.msdk.mbdownload.c r0 = r1.a
                android.support.v4.app.NotificationManagerCompat r0 = com.mbridge.msdk.mbdownload.c.c(r0)
                int r4 = r4 + r10
                r0.cancel(r4)
            L246:
                return
        }
    }

    class b extends android.os.Handler {
        final com.mbridge.msdk.mbdownload.c a;

        b(com.mbridge.msdk.mbdownload.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void handleMessage(android.os.Message r10) {
                r9 = this;
                java.lang.String r0 = com.mbridge.msdk.mbdownload.c.a     // Catch: java.lang.Exception -> L1f7
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1f7
                r1.<init>()     // Catch: java.lang.Exception -> L1f7
                java.lang.String r2 = "IncomingHandler(msg.what:"
                r1.append(r2)     // Catch: java.lang.Exception -> L1f7
                int r2 = r10.what     // Catch: java.lang.Exception -> L1f7
                r1.append(r2)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r2 = " msg.arg1:"
                r1.append(r2)     // Catch: java.lang.Exception -> L1f7
                int r2 = r10.arg1     // Catch: java.lang.Exception -> L1f7
                r1.append(r2)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r2 = " msg.arg2:"
                r1.append(r2)     // Catch: java.lang.Exception -> L1f7
                int r2 = r10.arg2     // Catch: java.lang.Exception -> L1f7
                r1.append(r2)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r2 = " msg.replyTo:"
                r1.append(r2)     // Catch: java.lang.Exception -> L1f7
                android.os.Messenger r2 = r10.replyTo     // Catch: java.lang.Exception -> L1f7
                r1.append(r2)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> L1f7
                int r0 = r10.what     // Catch: java.lang.Exception -> L1f7
                r1 = 4
                if (r0 == r1) goto L40
                super.handleMessage(r10)     // Catch: java.lang.Exception -> L1f7
                goto L1fb
            L40:
                android.os.Bundle r0 = r10.getData()     // Catch: java.lang.Exception -> L1f7
                java.lang.String r2 = com.mbridge.msdk.mbdownload.c.a     // Catch: java.lang.Exception -> L1f7
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1f7
                r3.<init>()     // Catch: java.lang.Exception -> L1f7
                java.lang.String r4 = "IncomingHandler(msg.getData():"
                r3.append(r4)     // Catch: java.lang.Exception -> L1f7
                r3.append(r0)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.foundation.tools.z.a(r2, r3)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r2 = "mComponentName"
                java.lang.String r4 = r0.getString(r2)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r2 = "mTitle"
                java.lang.String r5 = r0.getString(r2)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r2 = "mUrl"
                java.lang.String r6 = r0.getString(r2)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r2 = "uniqueKey"
                java.lang.String r7 = r0.getString(r2)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r2 = "mOnGoingStatus"
                boolean r8 = r0.getBoolean(r2)     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.b$a r2 = new com.mbridge.msdk.mbdownload.b$a     // Catch: java.lang.Exception -> L1f7
                r3 = r2
                r3.<init>(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "mMd5"
                java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L1f7
                r2.e = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "mTargetMd5"
                java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L1f7
                r2.f = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "mReqClz"
                java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L1f7
                r2.a = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "succUrls"
                java.lang.String[] r3 = r0.getStringArray(r3)     // Catch: java.lang.Exception -> L1f7
                r2.k = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "faiUrls"
                java.lang.String[] r3 = r0.getStringArray(r3)     // Catch: java.lang.Exception -> L1f7
                r2.m = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "startUrls"
                java.lang.String[] r3 = r0.getStringArray(r3)     // Catch: java.lang.Exception -> L1f7
                r2.n = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "pauseUrls"
                java.lang.String[] r3 = r0.getStringArray(r3)     // Catch: java.lang.Exception -> L1f7
                r2.o = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "cancelUrls"
                java.lang.String[] r3 = r0.getStringArray(r3)     // Catch: java.lang.Exception -> L1f7
                r2.p = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "carryonUrls"
                java.lang.String[] r3 = r0.getStringArray(r3)     // Catch: java.lang.Exception -> L1f7
                r2.l = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "rich_notification"
                boolean r3 = r0.getBoolean(r3)     // Catch: java.lang.Exception -> L1f7
                r2.q = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "mSilent"
                boolean r3 = r0.getBoolean(r3)     // Catch: java.lang.Exception -> L1f7
                r2.r = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "mWifiOnly"
                boolean r3 = r0.getBoolean(r3)     // Catch: java.lang.Exception -> L1f7
                r2.s = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "mCanPause"
                boolean r3 = r0.getBoolean(r3)     // Catch: java.lang.Exception -> L1f7
                r2.i = r3     // Catch: java.lang.Exception -> L1f7
                java.lang.String r3 = "mTargetAppIconUrl"
                java.lang.String r0 = r0.getString(r3)     // Catch: java.lang.Exception -> L1f7
                r2.j = r0     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.c r0 = r9.a     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.e r0 = com.mbridge.msdk.mbdownload.c.a(r0)     // Catch: java.lang.Exception -> L1f7
                boolean r3 = com.mbridge.msdk.mbdownload.c.b     // Catch: java.lang.Exception -> L1f7
                android.os.Messenger r4 = r10.replyTo     // Catch: java.lang.Exception -> L1f7
                boolean r0 = r0.a(r2, r3, r4)     // Catch: java.lang.Exception -> L1f7
                r3 = 2
                r4 = 0
                if (r0 == 0) goto L199
                java.lang.String r0 = com.mbridge.msdk.mbdownload.c.a     // Catch: java.lang.Exception -> L1f7
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1f7
                r1.<init>()     // Catch: java.lang.Exception -> L1f7
                java.lang.String r5 = r2.c     // Catch: java.lang.Exception -> L1f7
                r1.append(r5)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r5 = " is already in downloading list. "
                r1.append(r5)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.c r0 = r9.a     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.e r0 = com.mbridge.msdk.mbdownload.c.a(r0)     // Catch: java.lang.Exception -> L1f7
                int r0 = r0.a(r2)     // Catch: java.lang.Exception -> L1f7
                r1 = -1
                if (r0 == r1) goto L155
                android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r1 = com.mbridge.msdk.mbdownload.c.d     // Catch: java.lang.Exception -> L1f7
                java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.e$b r1 = (com.mbridge.msdk.mbdownload.e.b) r1     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.k r1 = r1.a     // Catch: java.lang.Exception -> L1f7
                if (r1 != 0) goto L155
                java.lang.String r10 = "continue"
                java.lang.String r10 = com.mbridge.msdk.mbdownload.j.a(r0, r10)     // Catch: java.lang.Exception -> L1f7
                android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.c r1 = r9.a     // Catch: java.lang.Exception -> L1f7
                android.app.Service r1 = com.mbridge.msdk.mbdownload.c.b(r1)     // Catch: java.lang.Exception -> L1f7
                java.lang.Class<com.mbridge.msdk.mbdownload.c> r2 = com.mbridge.msdk.mbdownload.c.class
                r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L1f7
                java.lang.String r1 = "com.mbridge.msdk.broadcast.download.msg"
                r0.putExtra(r1, r10)     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.c r10 = r9.a     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.e r10 = com.mbridge.msdk.mbdownload.c.a(r10)     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.c r1 = r9.a     // Catch: java.lang.Exception -> L1f7
                r10.a(r1, r0)     // Catch: java.lang.Exception -> L1f7
                goto L198
            L155:
                com.mbridge.msdk.mbdownload.c r0 = r9.a     // Catch: java.lang.Exception -> L1f7
                android.app.Service r0 = com.mbridge.msdk.mbdownload.c.b(r0)     // Catch: java.lang.Exception -> L1f7
                if (r0 == 0) goto L184
                com.mbridge.msdk.mbdownload.c r0 = r9.a     // Catch: java.lang.Exception -> L1f7
                android.app.Service r0 = com.mbridge.msdk.mbdownload.c.b(r0)     // Catch: java.lang.Exception -> L1f7
                android.content.Context r0 = r0.getBaseContext()     // Catch: java.lang.Exception -> L1f7
                if (r0 == 0) goto L184
                com.mbridge.msdk.mbdownload.c r0 = r9.a     // Catch: java.lang.Exception -> L1f7
                android.app.Service r0 = com.mbridge.msdk.mbdownload.c.b(r0)     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.c r1 = r9.a     // Catch: java.lang.Exception -> L1f7
                android.app.Service r1 = com.mbridge.msdk.mbdownload.c.b(r1)     // Catch: java.lang.Exception -> L1f7
                android.content.Context r1 = r1.getBaseContext()     // Catch: java.lang.Exception -> L1f7
                java.lang.String r1 = com.mbridge.msdk.mbdownload.g.h(r1)     // Catch: java.lang.Exception -> L1f7
                android.widget.Toast r0 = android.widget.Toast.makeText(r0, r1, r4)     // Catch: java.lang.Exception -> L1f7
                r0.show()     // Catch: java.lang.Exception -> L1f7
            L184:
                android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L1f7
                r0.what = r3     // Catch: java.lang.Exception -> L1f7
                r0.arg1 = r3     // Catch: java.lang.Exception -> L1f7
                r0.arg2 = r4     // Catch: java.lang.Exception -> L1f7
                android.os.Messenger r10 = r10.replyTo     // Catch: android.os.RemoteException -> L194 java.lang.Exception -> L1f7
                r10.send(r0)     // Catch: android.os.RemoteException -> L194 java.lang.Exception -> L1f7
                goto L198
            L194:
                r10 = move-exception
                r10.printStackTrace()     // Catch: java.lang.Exception -> L1f7
            L198:
                return
            L199:
                com.mbridge.msdk.mbdownload.c r0 = r9.a     // Catch: java.lang.Exception -> L1f7
                android.app.Service r0 = com.mbridge.msdk.mbdownload.c.b(r0)     // Catch: java.lang.Exception -> L1f7
                boolean r0 = com.mbridge.msdk.mbdownload.e.b(r0)     // Catch: java.lang.Exception -> L1f7
                if (r0 == 0) goto L1c7
                java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r0 = com.mbridge.msdk.mbdownload.c.c     // Catch: java.lang.Exception -> L1f7
                android.os.Messenger r1 = r10.replyTo     // Catch: java.lang.Exception -> L1f7
                r0.put(r2, r1)     // Catch: java.lang.Exception -> L1f7
                android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L1f7
                r1 = 1
                r0.what = r1     // Catch: java.lang.Exception -> L1f7
                r0.arg1 = r1     // Catch: java.lang.Exception -> L1f7
                r0.arg2 = r4     // Catch: java.lang.Exception -> L1f7
                android.os.Messenger r10 = r10.replyTo     // Catch: android.os.RemoteException -> L1bd java.lang.Exception -> L1f7
                r10.send(r0)     // Catch: android.os.RemoteException -> L1bd java.lang.Exception -> L1f7
                goto L1c1
            L1bd:
                r10 = move-exception
                r10.printStackTrace()     // Catch: java.lang.Exception -> L1f7
            L1c1:
                com.mbridge.msdk.mbdownload.c r10 = r9.a     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.c.a(r10, r2)     // Catch: java.lang.Exception -> L1f7
                goto L1fb
            L1c7:
                com.mbridge.msdk.mbdownload.c r0 = r9.a     // Catch: java.lang.Exception -> L1f7
                android.app.Service r0 = com.mbridge.msdk.mbdownload.c.b(r0)     // Catch: java.lang.Exception -> L1f7
                com.mbridge.msdk.mbdownload.c r2 = r9.a     // Catch: java.lang.Exception -> L1f7
                android.app.Service r2 = com.mbridge.msdk.mbdownload.c.b(r2)     // Catch: java.lang.Exception -> L1f7
                android.content.Context r2 = r2.getBaseContext()     // Catch: java.lang.Exception -> L1f7
                java.lang.String r2 = com.mbridge.msdk.mbdownload.g.e(r2)     // Catch: java.lang.Exception -> L1f7
                android.widget.Toast r0 = android.widget.Toast.makeText(r0, r2, r4)     // Catch: java.lang.Exception -> L1f7
                r0.show()     // Catch: java.lang.Exception -> L1f7
                android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L1f7
                r0.what = r3     // Catch: java.lang.Exception -> L1f7
                r0.arg1 = r1     // Catch: java.lang.Exception -> L1f7
                r0.arg2 = r4     // Catch: java.lang.Exception -> L1f7
                android.os.Messenger r10 = r10.replyTo     // Catch: android.os.RemoteException -> L1f2 java.lang.Exception -> L1f7
                r10.send(r0)     // Catch: android.os.RemoteException -> L1f2 java.lang.Exception -> L1f7
                goto L1fb
            L1f2:
                r10 = move-exception
                r10.printStackTrace()     // Catch: java.lang.Exception -> L1f7
                goto L1fb
            L1f7:
                r10 = move-exception
                r10.printStackTrace()
            L1fb:
                return
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.mbdownload.c> r0 = com.mbridge.msdk.mbdownload.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbdownload.c.a = r0
            r0 = 0
            com.mbridge.msdk.mbdownload.c.b = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.mbdownload.c.c = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            com.mbridge.msdk.mbdownload.c.d = r0
            return
    }

    public c() {
            r2 = this;
            r2.<init>()
            android.os.Messenger r0 = new android.os.Messenger
            com.mbridge.msdk.mbdownload.c$b r1 = new com.mbridge.msdk.mbdownload.c$b
            r1.<init>(r2)
            r0.<init>(r1)
            r2.e = r0
            r0 = 1
            r2.k = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.f = r0
            return
    }

    static com.mbridge.msdk.mbdownload.e a(com.mbridge.msdk.mbdownload.c r0) {
            com.mbridge.msdk.mbdownload.e r0 = r0.h
            return r0
    }

    static void a(com.mbridge.msdk.mbdownload.c r5, com.mbridge.msdk.mbdownload.b.a r6) {
            java.lang.String r0 = com.mbridge.msdk.mbdownload.c.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "startDownload([mComponentName:"
            r1.append(r2)
            java.lang.String r2 = r6.b
            r1.append(r2)
            java.lang.String r2 = " mTitle:"
            r1.append(r2)
            java.lang.String r2 = r6.c
            r1.append(r2)
            java.lang.String r2 = " mUrl:"
            r1.append(r2)
            java.lang.String r2 = r6.d
            r1.append(r2)
            java.lang.String r2 = "])"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.mbdownload.e r0 = r5.h
            java.lang.String r0 = r6.c
            int r0 = r0.hashCode()
            int r0 = r0 >> 2
            java.lang.String r1 = r6.d
            int r1 = r1.hashCode()
            int r1 = r1 >> 3
            int r0 = r0 + r1
            long r0 = (long) r0
            long r2 = java.lang.System.currentTimeMillis()
            long r0 = r0 + r2
            int r0 = (int) r0
            int r0 = java.lang.Math.abs(r0)
            com.mbridge.msdk.mbdownload.k r1 = new com.mbridge.msdk.mbdownload.k
            r2 = 0
            r1.<init>(r5, r6, r0, r2)
            com.mbridge.msdk.mbdownload.e$b r3 = new com.mbridge.msdk.mbdownload.e$b
            r3.<init>(r6, r0)
            com.mbridge.msdk.mbdownload.i r5 = r5.i
            r5.a(r0)
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r5 = com.mbridge.msdk.mbdownload.c.d
            int r6 = r3.c
            r5.put(r6, r3)
            r3.a = r1
            r1.start()
            boolean r5 = com.mbridge.msdk.mbdownload.c.b
            if (r5 == 0) goto Lb7
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r5 = com.mbridge.msdk.mbdownload.c.c
            int r5 = r5.size()
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r6 = com.mbridge.msdk.mbdownload.c.d
            int r6 = r6.size()
            java.lang.String r0 = com.mbridge.msdk.mbdownload.c.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "Client size ="
            r1.append(r3)
            r1.append(r5)
            java.lang.String r4 = "   cacheSize = "
            r1.append(r4)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            if (r5 != r6) goto L9c
            goto Lb7
        L9c:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r5)
            r1.append(r4)
            r1.append(r6)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        Lb7:
            boolean r5 = com.mbridge.msdk.mbdownload.c.b
            if (r5 == 0) goto Le8
        Lbb:
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r5 = com.mbridge.msdk.mbdownload.c.d
            int r5 = r5.size()
            if (r2 >= r5) goto Le8
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r5 = com.mbridge.msdk.mbdownload.c.d
            java.lang.Object r5 = r5.valueAt(r2)
            com.mbridge.msdk.mbdownload.e$b r5 = (com.mbridge.msdk.mbdownload.e.b) r5
            java.lang.String r6 = com.mbridge.msdk.mbdownload.c.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Running task "
            r0.append(r1)
            com.mbridge.msdk.mbdownload.b$a r5 = r5.e
            java.lang.String r5 = r5.c
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.a(r6, r5)
            int r2 = r2 + 1
            goto Lbb
        Le8:
            return
    }

    private void a(com.mbridge.msdk.mbdownload.e.b r5, int r6) {
            r4 = this;
            com.mbridge.msdk.mbdownload.e r0 = r4.h
            android.app.Service r1 = r4.l
            com.mbridge.msdk.mbdownload.b$a r2 = r5.e
            r3 = 0
            com.mbridge.msdk.mbdownload.e$a r6 = r0.a(r1, r2, r6, r3)
            r5.b = r6
            return
    }

    static android.app.Service b(com.mbridge.msdk.mbdownload.c r0) {
            android.app.Service r0 = r0.l
            return r0
    }

    static android.support.v4.app.NotificationManagerCompat c(com.mbridge.msdk.mbdownload.c r0) {
            android.support.v4.app.NotificationManagerCompat r0 = r0.g
            return r0
    }

    private void d() {
            r3 = this;
            com.mbridge.msdk.mbdownload.i r0 = r3.i
            java.util.List r0 = r0.a()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            java.lang.Integer r1 = (java.lang.Integer) r1
            android.support.v4.app.NotificationManagerCompat r2 = r3.g
            int r1 = r1.intValue()
            r2.cancel(r1)
            goto La
        L20:
            return
    }

    public final int a(android.content.Intent r6, int r7, int r8) {
            r5 = this;
            if (r6 == 0) goto Ld
            android.os.Bundle r7 = r6.getExtras()
            if (r7 == 0) goto Ld
            com.mbridge.msdk.mbdownload.e r7 = r5.h
            r7.a(r5, r6)
        Ld:
            int r6 = android.os.Build.VERSION.SDK_INT
            r7 = 19
            r8 = 1
            if (r6 < r7) goto L5d
            com.mbridge.msdk.mbdownload.i r6 = r5.i
            boolean r6 = r6.b()
            if (r6 != 0) goto L20
            boolean r6 = r5.k
            if (r6 == 0) goto L5d
        L20:
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Exception -> L5d
            android.app.Service r7 = r5.l     // Catch: java.lang.Exception -> L5d
            android.content.Context r7 = r7.getApplicationContext()     // Catch: java.lang.Exception -> L5d
            java.lang.Class r0 = r5.getClass()     // Catch: java.lang.Exception -> L5d
            r6.<init>(r7, r0)     // Catch: java.lang.Exception -> L5d
            android.app.Service r7 = r5.l     // Catch: java.lang.Exception -> L5d
            java.lang.String r7 = r7.getPackageName()     // Catch: java.lang.Exception -> L5d
            r6.setPackage(r7)     // Catch: java.lang.Exception -> L5d
            android.app.Service r7 = r5.l     // Catch: java.lang.Exception -> L5d
            android.content.Context r7 = r7.getApplicationContext()     // Catch: java.lang.Exception -> L5d
            r0 = 1073741824(0x40000000, float:2.0)
            android.app.PendingIntent r6 = android.app.PendingIntent.getService(r7, r8, r6, r0)     // Catch: java.lang.Exception -> L5d
            android.app.Service r7 = r5.l     // Catch: java.lang.Exception -> L5d
            android.content.Context r7 = r7.getApplicationContext()     // Catch: java.lang.Exception -> L5d
            java.lang.String r0 = "alarm"
            java.lang.Object r7 = r7.getSystemService(r0)     // Catch: java.lang.Exception -> L5d
            android.app.AlarmManager r7 = (android.app.AlarmManager) r7     // Catch: java.lang.Exception -> L5d
            r0 = 3
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Exception -> L5d
            r3 = 5000(0x1388, double:2.4703E-320)
            long r1 = r1 + r3
            r7.set(r0, r1, r6)     // Catch: java.lang.Exception -> L5d
        L5d:
            boolean r6 = r5.k
            if (r6 == 0) goto L67
            r5.d()
            r6 = 0
            r5.k = r6
        L67:
            return r8
    }

    public final android.os.IBinder a(android.content.Intent r2) {
            r1 = this;
            java.lang.String r2 = com.mbridge.msdk.mbdownload.c.a
            java.lang.String r0 = "onBind "
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
            android.os.Messenger r2 = r1.e
            android.os.IBinder r2 = r2.getBinder()
            return r2
    }

    public final void a() {
            r4 = this;
            boolean r0 = com.mbridge.msdk.mbdownload.c.b
            if (r0 == 0) goto L7
            android.os.Debug.waitForDebugger()
        L7:
            android.app.Service r0 = r4.l
            android.content.Context r0 = r0.getApplicationContext()
            android.support.v4.app.NotificationManagerCompat r0 = android.support.v4.app.NotificationManagerCompat.from(r0)
            r4.g = r0
            com.mbridge.msdk.mbdownload.j.a()
            com.mbridge.msdk.mbdownload.i r0 = new com.mbridge.msdk.mbdownload.i
            android.app.Service r1 = r4.l
            r0.<init>(r1)
            r4.i = r0
            com.mbridge.msdk.mbdownload.e r0 = new com.mbridge.msdk.mbdownload.e
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r1 = com.mbridge.msdk.mbdownload.c.d
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = com.mbridge.msdk.mbdownload.c.c
            com.mbridge.msdk.mbdownload.i r3 = r4.i
            r0.<init>(r1, r2, r3)
            r4.h = r0
            com.mbridge.msdk.mbdownload.c$a r0 = new com.mbridge.msdk.mbdownload.c$a
            r0.<init>(r4)
            r4.j = r0
            return
    }

    public final void a(int r9) {
            r8 = this;
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r0 = com.mbridge.msdk.mbdownload.c.d
            int r0 = r0.indexOfKey(r9)
            if (r0 < 0) goto L9d
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r0 = com.mbridge.msdk.mbdownload.c.d
            java.lang.Object r0 = r0.get(r9)
            com.mbridge.msdk.mbdownload.e$b r0 = (com.mbridge.msdk.mbdownload.e.b) r0
            long[] r1 = r0.f
            r2 = 0
            if (r1 == 0) goto L2f
            r3 = 1
            r4 = r1[r3]
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L2f
            r4 = r1[r2]
            float r2 = (float) r4
            r3 = r1[r3]
            float r1 = (float) r3
            float r2 = r2 / r1
            r1 = 1120403456(0x42c80000, float:100.0)
            float r2 = r2 * r1
            int r2 = (int) r2
            r1 = 100
            if (r2 <= r1) goto L2f
            r2 = 99
        L2f:
            com.mbridge.msdk.mbdownload.b$a r1 = r0.e
            boolean r1 = r1.r
            if (r1 != 0) goto L9d
            android.util.SparseArray<java.lang.Long> r1 = r8.f
            r3 = -1
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r1.put(r9, r3)
            com.mbridge.msdk.mbdownload.e r1 = r8.h
            android.app.Service r3 = r8.l
            com.mbridge.msdk.mbdownload.b$a r4 = r0.e
            com.mbridge.msdk.mbdownload.e$a r1 = r1.a(r3, r4, r9, r2)
            r0.b = r1
            android.app.Notification r0 = r1.d()
            android.support.v4.app.NotificationManagerCompat r1 = r8.g     // Catch: java.lang.Exception -> L56
            r1.notify(r9, r0)     // Catch: java.lang.Exception -> L56
            goto L5a
        L56:
            r9 = move-exception
            r9.printStackTrace()
        L5a:
            android.support.v4.app.NotificationManagerCompat r9 = r8.g     // Catch: java.lang.Throwable -> L99
            boolean r9 = r9.areNotificationsEnabled()     // Catch: java.lang.Throwable -> L99
            if (r9 == 0) goto L65
            java.lang.String r9 = "true"
            goto L67
        L65:
            java.lang.String r9 = "false"
        L67:
            java.lang.String r0 = ""
            android.app.Service r1 = r8.l     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = "notification"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Throwable -> L99
            android.app.NotificationManager r1 = (android.app.NotificationManager) r1     // Catch: java.lang.Throwable -> L99
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L99
            r3 = 26
            if (r2 < r3) goto L89
            java.lang.String r2 = "download"
            android.app.NotificationChannel r1 = r1.getNotificationChannel(r2)     // Catch: java.lang.Throwable -> L99
            if (r1 == 0) goto L89
            int r0 = r1.getImportance()     // Catch: java.lang.Throwable -> L99
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L99
        L89:
            android.support.v4.app.NotificationManagerCompat r1 = r8.g     // Catch: java.lang.Throwable -> L99
            int r1 = r1.getImportance()     // Catch: java.lang.Throwable -> L99
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L99
            android.app.Service r2 = r8.l     // Catch: java.lang.Throwable -> L99
            com.mbridge.msdk.foundation.same.report.e.a(r2, r9, r1, r0)     // Catch: java.lang.Throwable -> L99
            goto L9d
        L99:
            r9 = move-exception
            r9.printStackTrace()
        L9d:
            return
    }

    public final void a(int r9, int r10) {
            r8 = this;
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r0 = com.mbridge.msdk.mbdownload.c.d
            int r0 = r0.indexOfKey(r9)
            if (r0 < 0) goto La1
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r0 = com.mbridge.msdk.mbdownload.c.d
            java.lang.Object r0 = r0.get(r9)
            com.mbridge.msdk.mbdownload.e$b r0 = (com.mbridge.msdk.mbdownload.e.b) r0
            com.mbridge.msdk.mbdownload.b$a r1 = r0.e
            long r2 = java.lang.System.currentTimeMillis()
            boolean r1 = r1.r
            if (r1 != 0) goto La1
            android.util.SparseArray<java.lang.Long> r1 = r8.f
            java.lang.Object r1 = r1.get(r9)
            java.lang.Long r1 = (java.lang.Long) r1
            long r4 = r1.longValue()
            long r4 = r2 - r4
            r6 = 500(0x1f4, double:2.47E-321)
            int r1 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r1 <= 0) goto La1
            android.util.SparseArray<java.lang.Long> r1 = r8.f
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r1.put(r9, r2)
            com.mbridge.msdk.mbdownload.e$a r1 = r0.b
            r2 = 0
            r3 = 100
            com.mbridge.msdk.mbdownload.e$a r4 = r1.a(r3, r10, r2)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = java.lang.String.valueOf(r10)
            r5.append(r6)
            java.lang.String r6 = "%"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.a(r5)
            com.mbridge.msdk.mbdownload.b$a r4 = r0.e
            boolean r4 = r4.i
            if (r4 == 0) goto L61
            r1.a()
        L61:
            android.app.Notification r1 = r1.d()
            android.support.v4.app.NotificationManagerCompat r4 = r8.g     // Catch: java.lang.Exception -> L6b
            r4.notify(r9, r1)     // Catch: java.lang.Exception -> L6b
            goto La1
        L6b:
            r8.a(r0, r9)
            com.mbridge.msdk.mbdownload.e$a r1 = r0.b
            com.mbridge.msdk.mbdownload.e$a r2 = r1.a(r3, r10, r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r10 = java.lang.String.valueOf(r10)
            r3.append(r10)
            r3.append(r6)
            java.lang.String r10 = r3.toString()
            r2.a(r10)
            com.mbridge.msdk.mbdownload.b$a r10 = r0.e
            boolean r10 = r10.i
            if (r10 == 0) goto L93
            r1.a()
        L93:
            android.app.Notification r10 = r1.d()
            android.support.v4.app.NotificationManagerCompat r0 = r8.g     // Catch: java.lang.Exception -> L9d
            r0.notify(r9, r10)     // Catch: java.lang.Exception -> L9d
            goto La1
        L9d:
            r9 = move-exception
            r9.printStackTrace()
        La1:
            return
    }

    public final void a(int r2, java.lang.Exception r3) {
            r1 = this;
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r3 = com.mbridge.msdk.mbdownload.c.d
            int r3 = r3.indexOfKey(r2)
            if (r3 < 0) goto Lf
            com.mbridge.msdk.mbdownload.e r3 = r1.h
            android.app.Service r0 = r1.l
            r3.a(r0, r2)
        Lf:
            return
    }

    public final void a(int r6, java.lang.String r7) {
            r5 = this;
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r0 = com.mbridge.msdk.mbdownload.c.d
            int r0 = r0.indexOfKey(r6)
            if (r0 < 0) goto Ld2
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r0 = com.mbridge.msdk.mbdownload.c.d
            java.lang.Object r0 = r0.get(r6)
            com.mbridge.msdk.mbdownload.e$b r0 = (com.mbridge.msdk.mbdownload.e.b) r0
            if (r0 == 0) goto Ld2
            com.mbridge.msdk.mbdownload.b$a r1 = r0.e
            com.mbridge.msdk.mbdownload.e$a r0 = r0.b
            r2 = 0
            r3 = 100
            com.mbridge.msdk.mbdownload.e$a r2 = r0.a(r3, r3, r2)
            java.lang.String r4 = r1.j
            com.mbridge.msdk.mbdownload.e$a r2 = r2.a(r4)
            android.app.Service r4 = r5.l
            android.content.Context r4 = r4.getBaseContext()
            java.lang.String r4 = com.mbridge.msdk.mbdownload.g.a(r4)
            com.mbridge.msdk.mbdownload.e$a r2 = r2.b(r4)
            android.app.Service r4 = r5.l
            android.content.Context r4 = r4.getBaseContext()
            java.lang.String r4 = com.mbridge.msdk.mbdownload.g.c(r4)
            com.mbridge.msdk.mbdownload.e$a r2 = r2.a(r4)
            com.mbridge.msdk.mbdownload.e$a r2 = r2.b()
            boolean r4 = r1.h
            com.mbridge.msdk.mbdownload.h r2 = r2.a(r4)
            r4 = 17301634(0x1080082, float:2.497962E-38)
            r2.a(r4)
            android.app.Notification r0 = r0.d()
            android.support.v4.app.NotificationManagerCompat r2 = r5.g     // Catch: java.lang.Exception -> L59
            r2.notify(r6, r0)     // Catch: java.lang.Exception -> L59
            goto L5d
        L59:
            r0 = move-exception
            r0.printStackTrace()
        L5d:
            android.app.Service r0 = r5.l
            com.mbridge.msdk.mbdownload.d r0 = com.mbridge.msdk.mbdownload.d.a(r0)
            java.lang.String r2 = r1.b
            java.lang.String r4 = r1.d
            r0.a(r2, r4, r3)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r2 = "filename"
            r0.putString(r2, r7)
            java.lang.String r7 = r1.b
            java.lang.String r2 = "delta_update"
            boolean r7 = r7.equalsIgnoreCase(r2)
            r2 = 1
            if (r7 == 0) goto L95
            android.os.Message r7 = android.os.Message.obtain()
            r3 = 6
            r7.what = r3
            r7.arg1 = r2
            r7.obj = r1
            r7.arg2 = r6
            r7.setData(r0)
            android.os.Handler r6 = r5.j
            r6.sendMessage(r7)
            return
        L95:
            android.os.Message r7 = android.os.Message.obtain()
            r3 = 5
            r7.what = r3
            r7.arg1 = r2
            r7.obj = r1
            r7.arg2 = r6
            r7.setData(r0)
            android.os.Handler r4 = r5.j
            r4.sendMessage(r7)
            android.os.Message r7 = android.os.Message.obtain()
            r7.what = r3
            r7.arg1 = r2
            r7.arg2 = r6
            r7.setData(r0)
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r0 = com.mbridge.msdk.mbdownload.c.c     // Catch: android.os.RemoteException -> Lcb
            java.lang.Object r0 = r0.get(r1)     // Catch: android.os.RemoteException -> Lcb
            if (r0 == 0) goto Ld2
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r0 = com.mbridge.msdk.mbdownload.c.c     // Catch: android.os.RemoteException -> Lcb
            java.lang.Object r0 = r0.get(r1)     // Catch: android.os.RemoteException -> Lcb
            android.os.Messenger r0 = (android.os.Messenger) r0     // Catch: android.os.RemoteException -> Lcb
            r0.send(r7)     // Catch: android.os.RemoteException -> Lcb
            goto Ld2
        Lcb:
            com.mbridge.msdk.mbdownload.e r7 = r5.h
            android.app.Service r0 = r5.l
            r7.a(r0, r6)
        Ld2:
            return
    }

    public final void a(android.app.Service r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public final void b() {
            r2 = this;
            r0 = 259200(0x3f480, float:3.63217E-40)
            android.app.Service r1 = r2.l     // Catch: java.lang.Exception -> L1e
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Exception -> L1e
            com.mbridge.msdk.mbdownload.d r1 = com.mbridge.msdk.mbdownload.d.a(r1)     // Catch: java.lang.Exception -> L1e
            r1.a(r0)     // Catch: java.lang.Exception -> L1e
            android.app.Service r0 = r2.l     // Catch: java.lang.Exception -> L1e
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Exception -> L1e
            com.mbridge.msdk.mbdownload.d r0 = com.mbridge.msdk.mbdownload.d.a(r0)     // Catch: java.lang.Exception -> L1e
            r0.finalize()     // Catch: java.lang.Exception -> L1e
            goto L28
        L1e:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.mbdownload.c.a
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L28:
            return
    }

    public final void b(int r6, int r7) {
            r5 = this;
            r0 = 0
            r1 = 100
            r2 = 1
            if (r7 != r2) goto L97
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r7 = com.mbridge.msdk.mbdownload.c.d
            java.lang.Object r7 = r7.get(r6)
            com.mbridge.msdk.mbdownload.e$b r7 = (com.mbridge.msdk.mbdownload.e.b) r7
            com.mbridge.msdk.mbdownload.e$a r2 = r7.b
            com.mbridge.msdk.mbdownload.e$a r3 = r2.a(r1, r1, r0)
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e
            java.lang.String r4 = r4.j
            com.mbridge.msdk.mbdownload.e$a r3 = r3.a(r4)
            android.app.Service r4 = r5.l
            android.content.Context r4 = r4.getBaseContext()
            java.lang.String r4 = com.mbridge.msdk.mbdownload.g.a(r4)
            com.mbridge.msdk.mbdownload.e$a r3 = r3.b(r4)
            android.app.Service r4 = r5.l
            android.content.Context r4 = r4.getBaseContext()
            java.lang.String r4 = com.mbridge.msdk.mbdownload.g.c(r4)
            com.mbridge.msdk.mbdownload.e$a r3 = r3.a(r4)
            com.mbridge.msdk.mbdownload.e$a r3 = r3.b()
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e
            boolean r4 = r4.h
            r3.a(r4)
            android.app.Notification r2 = r2.d()
            android.support.v4.app.NotificationManagerCompat r3 = r5.g     // Catch: java.lang.Exception -> L4e
            r3.notify(r6, r2)     // Catch: java.lang.Exception -> L4e
            goto L120
        L4e:
            r5.a(r7, r6)
            com.mbridge.msdk.mbdownload.e$a r2 = r7.b
            com.mbridge.msdk.mbdownload.e$a r0 = r2.a(r1, r1, r0)
            com.mbridge.msdk.mbdownload.b$a r1 = r7.e
            java.lang.String r1 = r1.j
            com.mbridge.msdk.mbdownload.e$a r0 = r0.a(r1)
            android.app.Service r1 = r5.l
            android.content.Context r1 = r1.getBaseContext()
            java.lang.String r1 = com.mbridge.msdk.mbdownload.g.a(r1)
            com.mbridge.msdk.mbdownload.e$a r0 = r0.b(r1)
            android.app.Service r1 = r5.l
            android.content.Context r1 = r1.getBaseContext()
            java.lang.String r1 = com.mbridge.msdk.mbdownload.g.c(r1)
            com.mbridge.msdk.mbdownload.e$a r0 = r0.a(r1)
            com.mbridge.msdk.mbdownload.e$a r0 = r0.b()
            com.mbridge.msdk.mbdownload.b$a r7 = r7.e
            boolean r7 = r7.h
            r0.a(r7)
            android.app.Notification r7 = r2.d()
            android.support.v4.app.NotificationManagerCompat r0 = r5.g     // Catch: java.lang.Exception -> L91
            r0.notify(r6, r7)     // Catch: java.lang.Exception -> L91
            goto L120
        L91:
            r6 = move-exception
            r6.printStackTrace()
            goto L120
        L97:
            r2 = 9
            if (r7 != r2) goto L120
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r7 = com.mbridge.msdk.mbdownload.c.d
            java.lang.Object r7 = r7.get(r6)
            com.mbridge.msdk.mbdownload.e$b r7 = (com.mbridge.msdk.mbdownload.e.b) r7
            com.mbridge.msdk.mbdownload.e$a r2 = r7.b
            com.mbridge.msdk.mbdownload.e$a r3 = r2.a(r1, r1, r0)
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e
            java.lang.String r4 = r4.j
            com.mbridge.msdk.mbdownload.e$a r3 = r3.a(r4)
            android.app.Service r4 = r5.l
            android.content.Context r4 = r4.getBaseContext()
            java.lang.String r4 = com.mbridge.msdk.mbdownload.g.b(r4)
            com.mbridge.msdk.mbdownload.e$a r3 = r3.b(r4)
            android.app.Service r4 = r5.l
            android.content.Context r4 = r4.getBaseContext()
            java.lang.String r4 = com.mbridge.msdk.mbdownload.g.d(r4)
            com.mbridge.msdk.mbdownload.e$a r3 = r3.a(r4)
            com.mbridge.msdk.mbdownload.e$a r3 = r3.b()
            r3.a(r0)
            android.app.Notification r2 = r2.d()
            android.support.v4.app.NotificationManagerCompat r3 = r5.g     // Catch: java.lang.Exception -> Lde
            r3.notify(r6, r2)     // Catch: java.lang.Exception -> Lde
            goto L120
        Lde:
            r5.a(r7, r6)
            com.mbridge.msdk.mbdownload.e$a r2 = r7.b
            com.mbridge.msdk.mbdownload.e$a r1 = r2.a(r1, r1, r0)
            com.mbridge.msdk.mbdownload.b$a r7 = r7.e
            java.lang.String r7 = r7.j
            com.mbridge.msdk.mbdownload.e$a r7 = r1.a(r7)
            android.app.Service r1 = r5.l
            android.content.Context r1 = r1.getBaseContext()
            java.lang.String r1 = com.mbridge.msdk.mbdownload.g.b(r1)
            com.mbridge.msdk.mbdownload.e$a r7 = r7.b(r1)
            android.app.Service r1 = r5.l
            android.content.Context r1 = r1.getBaseContext()
            java.lang.String r1 = com.mbridge.msdk.mbdownload.g.d(r1)
            com.mbridge.msdk.mbdownload.e$a r7 = r7.a(r1)
            com.mbridge.msdk.mbdownload.e$a r7 = r7.b()
            r7.a(r0)
            android.app.Notification r7 = r2.d()
            android.support.v4.app.NotificationManagerCompat r0 = r5.g     // Catch: java.lang.Exception -> L11c
            r0.notify(r6, r7)     // Catch: java.lang.Exception -> L11c
            goto L120
        L11c:
            r6 = move-exception
            r6.printStackTrace()
        L120:
            return
    }

    public final android.app.Service c() {
            r1 = this;
            android.app.Service r0 = r1.l
            return r0
    }
}
