package com.kwad.sdk.core.download.b;

public final class a implements com.kwad.sdk.d {
    private static java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.graphics.Bitmap>> anT;
    private static com.kwad.sdk.core.download.b.a.c anU;
    private static final android.os.Handler anV = null;

    static class a extends android.os.Handler {
        private final android.util.SparseArray<java.lang.Long> anW;

        a() {
                r1 = this;
                android.os.Looper r0 = android.os.Looper.getMainLooper()
                r1.<init>(r0)
                android.util.SparseArray r0 = new android.util.SparseArray
                r0.<init>()
                r1.anW = r0
                return
        }

        @Override
        public final void handleMessage(android.os.Message r8) {
                r7 = this;
                int r0 = r8.arg1
                r1 = 0
                r2 = 1
                if (r0 != r2) goto L8
                r0 = r2
                goto L9
            L8:
                r0 = r1
            L9:
                int r3 = r8.arg2
                if (r3 != r2) goto Lf
                r3 = r2
                goto L10
            Lf:
                r3 = r1
            L10:
                int r4 = r8.arg2
                r5 = 2
                if (r4 != r5) goto L16
                r1 = r2
            L16:
                android.util.SparseArray<java.lang.Long> r2 = r7.anW
                int r4 = r8.what
                java.lang.Object r2 = r2.get(r4)
                java.lang.Long r2 = (java.lang.Long) r2
                com.kwad.sdk.c r4 = com.kwad.sdk.c.wP()
                android.content.Context r4 = r4.getContext()
                java.lang.String r5 = "notification"
                java.lang.Object r4 = r4.getSystemService(r5)
                android.app.NotificationManager r4 = (android.app.NotificationManager) r4
                if (r4 != 0) goto L33
                return
            L33:
                com.kwad.sdk.c r5 = com.kwad.sdk.c.wP()
                int r6 = r8.what
                com.kwad.sdk.DownloadTask r5 = r5.bL(r6)
                if (r5 != 0) goto L4c
                if (r1 != 0) goto L4c
                int r0 = r8.what
                r7.removeMessages(r0)
                int r8 = r8.what
                r4.cancel(r8)
                return
            L4c:
                if (r0 != 0) goto L72
                if (r2 == 0) goto L72
                long r0 = java.lang.System.currentTimeMillis()
                long r5 = r2.longValue()
                long r0 = r0 - r5
                r5 = 110(0x6e, double:5.43E-322)
                int r0 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
                if (r0 < 0) goto L60
                goto L72
            L60:
                android.os.Message r8 = android.os.Message.obtain(r8)
                long r0 = r2.longValue()
                long r0 = r0 + r5
                long r2 = java.lang.System.currentTimeMillis()
                long r0 = r0 - r2
                r7.sendMessageDelayed(r8, r0)
                return
            L72:
                if (r3 == 0) goto L79
                int r0 = r8.what
                r4.cancel(r0)
            L79:
                int r0 = r8.what
                java.lang.Object r1 = r8.obj
                android.app.Notification r1 = (android.app.Notification) r1
                com.kwad.sdk.core.download.b.a.b(r0, r1)
                android.util.SparseArray<java.lang.Long> r0 = r7.anW
                int r8 = r8.what
                long r1 = java.lang.System.currentTimeMillis()
                java.lang.Long r1 = java.lang.Long.valueOf(r1)
                r0.put(r8, r1)
                return
        }
    }

    static class b {
        private static java.lang.String anX = "ksad_notification_default_icon";
        private java.lang.String Xj;
        private java.lang.String anY;
        private java.lang.String anZ;
        private java.io.File aoa;
        private java.lang.String aob;
        private boolean aoc;
        private java.lang.String name;
        private int progress;

        static {
                return
        }

        private b() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.aoa = r0
                r0 = 0
                r1.aoc = r0
                return
        }

        public static java.lang.String AB() {
                java.lang.String r0 = com.kwad.sdk.core.download.b.a.b.anX
                return r0
        }

        private static com.kwad.sdk.core.download.b.a.b a(com.kwad.sdk.DownloadTask r4, java.lang.String r5, java.lang.String r6) {
                com.kwad.sdk.core.download.b.a$b r0 = new com.kwad.sdk.core.download.b.a$b
                r0.<init>()
                java.lang.Object r1 = r4.getTag()
                boolean r2 = r1 instanceof com.kwad.sdk.core.download.DownloadParams
                if (r2 == 0) goto L2b
                com.kwad.sdk.core.download.DownloadParams r1 = (com.kwad.sdk.core.download.DownloadParams) r1
                java.lang.Class<com.kwad.sdk.service.a.c> r2 = com.kwad.sdk.service.a.c.class
                java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)
                com.kwad.sdk.service.a.c r2 = (com.kwad.sdk.service.a.c) r2
                java.lang.String r3 = r1.mAppIcon
                java.io.File r2 = r2.bR(r3)
                if (r2 == 0) goto L27
                boolean r3 = r2.exists()
                if (r3 == 0) goto L27
                r0.aoa = r2
            L27:
                java.lang.String r1 = r1.mAppName
                r0.name = r1
            L2b:
                boolean r1 = r4.isPaused()
                r0.aoc = r1
                r0.Xj = r5
                r0.aob = r6
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                int r6 = r4.getSmallFileSoFarBytes()
                long r1 = (long) r6
                java.lang.String r6 = com.kwad.sdk.core.download.b.a.X(r1)
                r5.append(r6)
                java.lang.String r6 = " / "
                r5.append(r6)
                int r6 = r4.getSmallFileTotalBytes()
                long r1 = (long) r6
                java.lang.String r6 = com.kwad.sdk.core.download.b.a.X(r1)
                r5.append(r6)
                java.lang.String r5 = r5.toString()
                r0.anY = r5
                int r5 = r4.getSmallFileTotalBytes()
                long r5 = (long) r5
                java.lang.String r5 = com.kwad.sdk.core.download.b.a.X(r5)
                r0.anZ = r5
                r5 = 1120403456(0x42c80000, float:100.0)
                int r6 = r4.getSmallFileSoFarBytes()
                float r6 = (float) r6
                float r6 = r6 * r5
                int r4 = r4.getSmallFileTotalBytes()
                float r4 = (float) r4
                float r6 = r6 / r4
                int r4 = (int) r6
                r0.progress = r4
                return r0
        }

        private static com.kwad.sdk.core.download.b.a.b a(com.kwad.sdk.core.download.DownloadParams r3, java.lang.String r4, java.lang.String r5) {
                com.kwad.sdk.core.download.b.a$b r0 = new com.kwad.sdk.core.download.b.a$b
                r0.<init>()
                java.lang.String r1 = r3.mAppName
                r0.name = r1
                java.lang.String r1 = r3.mAppIcon
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto L29
                java.lang.Class<com.kwad.sdk.service.a.c> r1 = com.kwad.sdk.service.a.c.class
                java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
                com.kwad.sdk.service.a.c r1 = (com.kwad.sdk.service.a.c) r1
                java.lang.String r2 = r3.mAppIcon
                java.io.File r1 = r1.bR(r2)
                if (r1 == 0) goto L29
                boolean r2 = r1.exists()
                if (r2 == 0) goto L29
                r0.aoa = r1
            L29:
                r0.Xj = r4
                long r3 = r3.mAppSize
                java.lang.String r3 = com.kwad.sdk.core.download.b.a.X(r3)
                r0.anZ = r3
                r0.aob = r5
                return r0
        }

        static com.kwad.sdk.core.download.b.a.b b(com.kwad.sdk.DownloadTask r0, java.lang.String r1, java.lang.String r2) {
                com.kwad.sdk.core.download.b.a$b r0 = a(r0, r1, r2)
                return r0
        }

        static com.kwad.sdk.core.download.b.a.b b(com.kwad.sdk.core.download.DownloadParams r0, java.lang.String r1, java.lang.String r2) {
                com.kwad.sdk.core.download.b.a$b r0 = a(r0, r1, r2)
                return r0
        }

        public final java.lang.String AC() {
                r1 = this;
                java.lang.String r0 = r1.anY
                return r0
        }

        public final java.lang.String AD() {
                r1 = this;
                java.lang.String r0 = r1.anZ
                return r0
        }

        public final java.lang.String AE() {
                r1 = this;
                java.lang.String r0 = r1.Xj
                return r0
        }

        public final java.io.File AF() {
                r1 = this;
                java.io.File r0 = r1.aoa
                return r0
        }

        public final java.lang.String AG() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "正在下载 "
                r0.<init>(r1)
                int r1 = r2.progress
                r0.append(r1)
                java.lang.String r1 = "%"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        public final java.lang.String AH() {
                r1 = this;
                java.lang.String r0 = r1.aob
                return r0
        }

        public final java.lang.String getName() {
                r1 = this;
                java.lang.String r0 = r1.name
                if (r0 != 0) goto L6
                java.lang.String r0 = ""
            L6:
                return r0
        }

        public final int getProgress() {
                r1 = this;
                int r0 = r1.progress
                return r0
        }

        public final boolean isPaused() {
                r1 = this;
                boolean r0 = r1.aoc
                return r0
        }
    }

    static class c extends android.content.BroadcastReceiver {
        public c() {
                r0 = this;
                r0.<init>()
                return
        }

        private static void e(android.content.Intent r1) {
                com.kwad.sdk.DownloadTask r1 = g(r1)
                if (r1 != 0) goto L7
                return
            L7:
                com.kwad.sdk.c r0 = com.kwad.sdk.c.wP()
                int r1 = r1.getId()
                r0.bN(r1)
                return
        }

        private static void f(android.content.Intent r1) {
                com.kwad.sdk.DownloadTask r1 = g(r1)
                if (r1 != 0) goto L7
                return
            L7:
                r0 = 1
                r1.setNotificationRemoved(r0)
                return
        }

        private static com.kwad.sdk.DownloadTask g(android.content.Intent r2) {
                android.os.Bundle r2 = r2.getExtras()
                java.lang.String r0 = "taskId"
                r1 = 0
                int r2 = r2.getInt(r0, r1)
                if (r2 != 0) goto Lf
                r2 = 0
                return r2
            Lf:
                com.kwad.sdk.c r0 = com.kwad.sdk.c.wP()
                com.kwad.sdk.DownloadTask r2 = r0.bL(r2)
                return r2
        }

        @Override
        public final void onReceive(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                if (r3 == 0) goto L24
                android.os.Bundle r2 = r3.getExtras()
                if (r2 != 0) goto L9
                goto L24
            L9:
                java.lang.String r2 = r3.getAction()
                java.lang.String r0 = "com.ksad.action.ACTION_NOTIFICATION_CLICK_CONTROL_BTN"
                boolean r0 = r0.equals(r2)
                if (r0 == 0) goto L19
                e(r3)
                return
            L19:
                java.lang.String r0 = "com.ksad.action.ACTION_NOTIFICATION_REMOVED"
                boolean r2 = r0.equals(r2)
                if (r2 == 0) goto L24
                f(r3)
            L24:
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.sdk.core.download.b.a.anT = r0
            com.kwad.sdk.core.download.b.a$a r0 = new com.kwad.sdk.core.download.b.a$a
            r0.<init>()
            com.kwad.sdk.core.download.b.a.anV = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.graphics.Bitmap A(android.content.Context r2, java.lang.String r3) {
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.graphics.Bitmap>> r0 = com.kwad.sdk.core.download.b.a.anT
            java.lang.Object r0 = r0.get(r3)
            java.lang.ref.WeakReference r0 = (java.lang.ref.WeakReference) r0
            if (r0 == 0) goto L11
            java.lang.Object r0 = r0.get()
            android.graphics.Bitmap r0 = (android.graphics.Bitmap) r0
            goto L12
        L11:
            r0 = 0
        L12:
            if (r0 == 0) goto L1a
            boolean r1 = r0.isRecycled()
            if (r1 == 0) goto L30
        L1a:
            android.content.res.Resources r0 = com.kwad.sdk.utils.ar.ct(r2)
            int r2 = com.kwad.sdk.utils.ar.ar(r2, r3)
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeResource(r0, r2)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.graphics.Bitmap>> r2 = com.kwad.sdk.core.download.b.a.anT
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r0)
            r2.put(r3, r1)
        L30:
            return r0
    }

    private static void AA() {
            com.kwad.sdk.core.download.b.a$c r0 = com.kwad.sdk.core.download.b.a.anU
            if (r0 == 0) goto L5
            return
        L5:
            com.kwad.sdk.core.download.b.a$c r0 = new com.kwad.sdk.core.download.b.a$c
            r0.<init>()
            com.kwad.sdk.core.download.b.a.anU = r0
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "com.ksad.action.ACTION_NOTIFICATION_CLICK_CONTROL_BTN"
            r0.addAction(r1)
            java.lang.String r1 = "com.ksad.action.ACTION_NOTIFICATION_REMOVED"
            r0.addAction(r1)
            android.content.Context r1 = com.kwad.sdk.service.ServiceProvider.HD()
            com.kwad.sdk.core.download.b.a$c r2 = com.kwad.sdk.core.download.b.a.anU
            r1.registerReceiver(r2, r0)
            return
    }

    private static java.lang.String W(long r1) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            float r1 = (float) r1
            r2 = 1148846080(0x447a0000, float:1000.0)
            float r1 = r1 / r2
            float r1 = r1 / r2
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "%.2fMB"
            java.lang.String r1 = java.lang.String.format(r1, r0)
            return r1
    }

    static java.lang.String X(long r0) {
            java.lang.String r0 = W(r0)
            return r0
    }

    private static void a(int r5, android.app.Notification r6) {
            AA()
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()
            java.lang.String r1 = "notification"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L34
            r2 = 26
            if (r1 < r2) goto L30
            android.app.NotificationChannel r1 = new android.app.NotificationChannel     // Catch: java.lang.Exception -> L34
            java.lang.String r2 = "download_channel"
            java.lang.String r3 = "ksad"
            r4 = 3
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Exception -> L34
            r2 = 0
            r1.enableLights(r2)     // Catch: java.lang.Exception -> L34
            r1.enableVibration(r2)     // Catch: java.lang.Exception -> L34
            r3 = 0
            r1.setSound(r3, r3)     // Catch: java.lang.Exception -> L34
            r1.setShowBadge(r2)     // Catch: java.lang.Exception -> L34
            r0.createNotificationChannel(r1)     // Catch: java.lang.Exception -> L34
        L30:
            r0.notify(r5, r6)     // Catch: java.lang.Exception -> L34
            return
        L34:
            r5 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r5)
            return
    }

    private static void a(android.content.Context r2, android.widget.RemoteViews r3, boolean r4, boolean r5, android.app.PendingIntent r6, int r7, int r8, int r9) {
            com.kwad.sdk.api.push.KsNotificationCompat$Builder r4 = new com.kwad.sdk.api.push.KsNotificationCompat$Builder
            java.lang.String r0 = "download_channel"
            r4.<init>(r2, r0)
            com.kwad.sdk.api.push.KsNotificationCompat$Builder r3 = r4.setContent(r3)
            long r0 = java.lang.System.currentTimeMillis()
            com.kwad.sdk.api.push.KsNotificationCompat$Builder r3 = r3.setWhen(r0)
            r0 = 0
            com.kwad.sdk.api.push.KsNotificationCompat$Builder r3 = r3.setOngoing(r0)
            com.kwad.sdk.api.push.KsNotificationCompat$Builder r3 = r3.setAutoCancel(r0)
            r0 = 1
            com.kwad.sdk.api.push.KsNotificationCompat$Builder r3 = r3.setOnlyAlertOnce(r0)
            r0 = -1
            com.kwad.sdk.api.push.KsNotificationCompat$Builder r3 = r3.setPriority(r0)
            com.kwad.sdk.api.push.KsNotificationCompat$Builder r3 = r3.setContentIntent(r6)
            java.lang.String r6 = "ksad_notification_small_icon"
            int r6 = com.kwad.sdk.utils.ar.ar(r2, r6)
            r3.setSmallIcon(r6)
            if (r5 == 0) goto L3e
            java.lang.String r3 = "com.ksad.action.ACTION_NOTIFICATION_REMOVED"
            android.app.PendingIntent r2 = b(r2, r3, r7)
            r4.setDeleteIntent(r2)
        L3e:
            android.os.Handler r2 = com.kwad.sdk.core.download.b.a.anV
            r2.removeMessages(r7)
            android.os.Handler r2 = com.kwad.sdk.core.download.b.a.anV
            android.app.Notification r3 = r4.build()
            android.os.Message r2 = r2.obtainMessage(r7, r8, r9, r3)
            r2.sendToTarget()
            return
    }

    private void a(android.content.Context r3, com.kwad.sdk.core.download.b.b r4, com.kwad.sdk.core.download.b.a.b r5) {
            r2 = this;
            java.lang.String r0 = r5.getName()
            r4.setName(r0)
            java.io.File r0 = r5.AF()
            if (r0 == 0) goto L18
            boolean r1 = r0.exists()
            if (r1 == 0) goto L18
            boolean r0 = r2.a(r4, r0)
            goto L19
        L18:
            r0 = 0
        L19:
            if (r0 != 0) goto L22
            java.lang.String r0 = com.kwad.sdk.core.download.b.a.b.AB()
            r2.a(r3, r4, r0)
        L22:
            java.lang.String r3 = r5.AE()
            r4.setStatus(r3)
            java.lang.String r3 = r5.AD()
            r4.setSize(r3)
            java.lang.String r3 = r5.AH()
            r4.setInstallText(r3)
            return
    }

    private void a(android.content.Context r4, com.kwad.sdk.core.download.b.c r5, com.kwad.sdk.core.download.b.a.b r6) {
            r3 = this;
            java.lang.String r0 = r6.getName()
            r5.setName(r0)
            java.io.File r0 = r6.AF()
            r1 = 0
            if (r0 == 0) goto L19
            boolean r2 = r0.exists()
            if (r2 == 0) goto L19
            boolean r0 = r3.a(r5, r0)
            goto L1a
        L19:
            r0 = r1
        L1a:
            if (r0 != 0) goto L23
            java.lang.String r0 = com.kwad.sdk.core.download.b.a.b.AB()
            r3.a(r4, r5, r0)
        L23:
            java.lang.String r4 = r6.AE()
            r5.setStatus(r4)
            java.lang.String r4 = r6.AC()
            r5.setSize(r4)
            java.lang.String r4 = r6.AG()
            r5.setPercentNum(r4)
            r4 = 100
            int r0 = r6.getProgress()
            r5.setProgress(r4, r0, r1)
            boolean r4 = r6.isPaused()
            r5.setControlBtnPaused(r4)
            return
    }

    private boolean a(android.content.Context r1, com.kwad.sdk.core.download.b.b r2, java.lang.String r3) {
            r0 = this;
            android.graphics.Bitmap r1 = A(r1, r3)     // Catch: java.lang.Exception -> L9
            r2.setIcon(r1)     // Catch: java.lang.Exception -> L9
            r1 = 1
            return r1
        L9:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            com.kwad.sdk.service.c.gatherException(r1)
            r1 = 0
            return r1
    }

    private boolean a(android.content.Context r1, com.kwad.sdk.core.download.b.c r2, java.lang.String r3) {
            r0 = this;
            android.graphics.Bitmap r1 = A(r1, r3)     // Catch: java.lang.Exception -> L9
            r2.setIcon(r1)     // Catch: java.lang.Exception -> L9
            r1 = 1
            return r1
        L9:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            com.kwad.sdk.service.c.gatherException(r1)
            r1 = 0
            return r1
    }

    private boolean a(com.kwad.sdk.core.download.b.b r1, java.io.File r2) {
            r0 = this;
            android.graphics.Bitmap r2 = q(r2)     // Catch: java.lang.Exception -> L9
            r1.setIcon(r2)     // Catch: java.lang.Exception -> L9
            r1 = 1
            return r1
        L9:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            com.kwad.sdk.service.c.gatherException(r1)
            r1 = 0
            return r1
    }

    private boolean a(com.kwad.sdk.core.download.b.c r1, java.io.File r2) {
            r0 = this;
            android.graphics.Bitmap r2 = q(r2)     // Catch: java.lang.Exception -> L9
            r1.setIcon(r2)     // Catch: java.lang.Exception -> L9
            r1 = 1
            return r1
        L9:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            com.kwad.sdk.service.c.gatherException(r1)
            r1 = 0
            return r1
    }

    private static android.app.PendingIntent b(android.content.Context r1, java.lang.String r2, int r3) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r2)
            java.lang.String r2 = "taskId"
            r0.putExtra(r2, r3)
            r2 = 0
            android.app.PendingIntent r1 = android.app.PendingIntent.getBroadcast(r1, r3, r0, r2)
            return r1
    }

    static void b(int r0, android.app.Notification r1) {
            a(r0, r1)
            return
    }

    private static com.kwad.sdk.core.download.DownloadParams n(com.kwad.sdk.DownloadTask r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.Object r0 = r3.getTag()
            boolean r1 = r0 instanceof com.kwad.sdk.core.download.DownloadParams
            if (r1 == 0) goto Lf
            com.kwad.sdk.core.download.DownloadParams r0 = (com.kwad.sdk.core.download.DownloadParams) r0
            goto L14
        Lf:
            com.kwad.sdk.core.download.DownloadParams r0 = new com.kwad.sdk.core.download.DownloadParams
            r0.<init>()
        L14:
            int r1 = r3.getSmallFileTotalBytes()
            long r1 = (long) r1
            r0.mAppSize = r1
            int r1 = r3.getId()
            r0.mTaskId = r1
            java.lang.String r3 = r3.getTargetFilePath()
            r0.filePath = r3
            return r0
    }

    private static android.graphics.Bitmap q(java.io.File r3) {
            java.lang.String r3 = r3.getAbsolutePath()
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.graphics.Bitmap>> r0 = com.kwad.sdk.core.download.b.a.anT
            java.lang.Object r0 = r0.get(r3)
            java.lang.ref.WeakReference r0 = (java.lang.ref.WeakReference) r0
            if (r0 == 0) goto L15
            java.lang.Object r0 = r0.get()
            android.graphics.Bitmap r0 = (android.graphics.Bitmap) r0
            goto L16
        L15:
            r0 = 0
        L16:
            if (r0 == 0) goto L1e
            boolean r1 = r0.isRecycled()
            if (r1 == 0) goto L2c
        L1e:
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeFile(r3)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.graphics.Bitmap>> r1 = com.kwad.sdk.core.download.b.a.anT
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r0)
            r1.put(r3, r2)
        L2c:
            return r0
    }

    @Override
    public final void a(com.kwad.sdk.DownloadTask r10, boolean r11) {
            r9 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r1 = r0.getContext()
            if (r1 != 0) goto Lf
            return
        Lf:
            boolean r0 = r10.isNotificationRemoved()
            if (r0 == 0) goto L16
            return
        L16:
            int r0 = r10.getId()
            boolean r2 = r10.downloadEnablePause
            com.kwad.sdk.core.download.b.c r0 = com.kwad.sdk.core.download.b.c.a(r1, r0, r2)
            if (r0 != 0) goto L23
            return
        L23:
            r2 = 0
            java.lang.String r3 = "正在下载"
            com.kwad.sdk.core.download.b.a$b r2 = com.kwad.sdk.core.download.b.a.b.b(r10, r3, r2)
            r9.a(r1, r0, r2)
            android.widget.RemoteViews r2 = r0.build()
            r3 = 0
            r4 = 1
            r5 = 0
            int r6 = r10.getId()
            boolean r8 = r10.isCompleted()
            r7 = r11
            a(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    @Override
    public final void bO(int r3) {
            r2 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto Lf
            return
        Lf:
            java.lang.String r1 = "notification"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            r0.cancel(r3)
            return
    }

    @Override
    public final void bQ(java.lang.String r10) {
            r9 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r1 = r0.getContext()
            com.kwad.sdk.core.a r0 = com.kwad.sdk.core.a.yT()
            com.kwad.sdk.core.download.DownloadParams r0 = r0.cp(r10)
            com.kwad.sdk.core.a r2 = com.kwad.sdk.core.a.yT()
            r2.cq(r10)
            if (r1 == 0) goto L50
            if (r0 != 0) goto L20
            goto L50
        L20:
            com.kwad.sdk.core.a r10 = com.kwad.sdk.core.a.yT()
            java.lang.String r2 = r0.filePath
            r10.cq(r2)
            java.lang.String r10 = "安装完成"
            java.lang.String r2 = "立刻打开"
            com.kwad.sdk.core.download.b.a$b r10 = com.kwad.sdk.core.download.b.a.b.b(r0, r10, r2)
            com.kwad.sdk.core.download.b.b r2 = com.kwad.sdk.core.download.b.b.aW(r1)
            if (r2 != 0) goto L38
            return
        L38:
            r9.a(r1, r2, r10)
            android.widget.RemoteViews r2 = r2.build()
            r3 = 0
            r4 = 0
            java.lang.String r10 = r0.mPkgname
            int r5 = r0.mTaskId
            android.app.PendingIntent r5 = com.kwad.sdk.e.m(r10, r5)
            int r6 = r0.mTaskId
            r7 = 1
            r8 = 2
            a(r1, r2, r3, r4, r5, r6, r7, r8)
        L50:
            return
    }

    @Override
    public final void g(java.io.File r10) {
            r9 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r1 = r0.getContext()
            com.kwad.sdk.core.a r0 = com.kwad.sdk.core.a.yT()
            java.lang.String r2 = r10.getAbsolutePath()
            com.kwad.sdk.core.download.DownloadParams r0 = r0.cp(r2)
            com.kwad.sdk.core.a r2 = com.kwad.sdk.core.a.yT()
            java.lang.String r3 = r10.getAbsolutePath()
            r2.cq(r3)
            if (r1 == 0) goto L66
            if (r0 != 0) goto L28
            goto L66
        L28:
            com.kwad.sdk.core.a r2 = com.kwad.sdk.core.a.yT()
            java.lang.String r3 = r0.mDownloadid
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.cr(r3)
            if (r2 == 0) goto L3f
            java.lang.String r3 = "recall"
            r2.installFrom = r3
            com.kwad.sdk.core.download.c r3 = com.kwad.sdk.core.download.c.Aw()
            r3.aq(r2)
        L3f:
            java.lang.String r2 = "下载完成"
            java.lang.String r3 = "立即安装"
            com.kwad.sdk.core.download.b.a$b r2 = com.kwad.sdk.core.download.b.a.b.b(r0, r2, r3)
            com.kwad.sdk.core.download.b.b r3 = com.kwad.sdk.core.download.b.b.aW(r1)
            if (r3 != 0) goto L4e
            return
        L4e:
            r9.a(r1, r3, r2)
            android.widget.RemoteViews r2 = r3.build()
            r3 = 0
            r4 = 0
            int r5 = r0.mTaskId
            boolean r6 = r0.requestInstallPermission
            android.app.PendingIntent r5 = com.kwad.sdk.e.a(r10, r5, r6)
            int r6 = r0.mTaskId
            r7 = 1
            r8 = 2
            a(r1, r2, r3, r4, r5, r6, r7, r8)
        L66:
            return
    }

    @Override
    public final void i(com.kwad.sdk.DownloadTask r4) {
            r3 = this;
            java.lang.Object r4 = r4.getTag()
            boolean r0 = r4 instanceof com.kwad.sdk.core.download.DownloadParams
            if (r0 == 0) goto L34
            com.kwad.sdk.core.download.DownloadParams r4 = (com.kwad.sdk.core.download.DownloadParams) r4
            java.lang.String r4 = r4.mAppIcon
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L34
            java.lang.Class<com.kwad.sdk.service.a.c> r0 = com.kwad.sdk.service.a.c.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.c r0 = (com.kwad.sdk.service.a.c) r0
            java.io.File r0 = r0.bR(r4)
            if (r0 == 0) goto L26
            boolean r0 = r0.exists()
            if (r0 != 0) goto L34
        L26:
            java.lang.Class<com.kwad.sdk.service.a.c> r0 = com.kwad.sdk.service.a.c.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.c r0 = (com.kwad.sdk.service.a.c) r0
            r1 = 1
            java.lang.String r2 = ""
            r0.a(r1, r4, r2, r2)
        L34:
            return
    }

    @Override
    public final void j(com.kwad.sdk.DownloadTask r10) {
            r9 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r1 = r0.getContext()
            if (r1 != 0) goto Lf
            return
        Lf:
            boolean r0 = r10.isNotificationRemoved()
            if (r0 == 0) goto L16
            return
        L16:
            int r0 = r10.getSmallFileSoFarBytes()
            if (r0 <= 0) goto L24
            int r0 = r10.getSmallFileTotalBytes()
            if (r0 <= 0) goto L24
            r0 = 1
            goto L25
        L24:
            r0 = 0
        L25:
            if (r0 == 0) goto L2a
            java.lang.String r0 = "正在下载"
            goto L2c
        L2a:
            java.lang.String r0 = "准备下载"
        L2c:
            r2 = 0
            com.kwad.sdk.core.download.b.a$b r0 = com.kwad.sdk.core.download.b.a.b.b(r10, r0, r2)
            int r2 = r10.getId()
            boolean r3 = r10.downloadEnablePause
            com.kwad.sdk.core.download.b.c r2 = com.kwad.sdk.core.download.b.c.a(r1, r2, r3)
            if (r2 != 0) goto L3e
            return
        L3e:
            r9.a(r1, r2, r0)
            android.widget.RemoteViews r2 = r2.build()
            r3 = 0
            r4 = 1
            r5 = 0
            int r6 = r10.getId()
            r7 = 1
            boolean r8 = r10.isCompleted()
            a(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    @Override
    public final void k(com.kwad.sdk.DownloadTask r10) {
            r9 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r1 = r0.getContext()
            if (r1 != 0) goto Lf
            return
        Lf:
            com.kwad.sdk.core.download.DownloadParams r0 = n(r10)
            com.kwad.sdk.core.download.b.b r2 = com.kwad.sdk.core.download.b.b.aW(r1)
            if (r2 != 0) goto L1a
            return
        L1a:
            java.lang.String r3 = "下载完成"
            java.lang.String r4 = "立即安装"
            com.kwad.sdk.core.download.b.a$b r3 = com.kwad.sdk.core.download.b.a.b.b(r10, r3, r4)
            r9.a(r1, r2, r3)
            com.kwad.sdk.core.a r3 = com.kwad.sdk.core.a.yT()
            java.lang.String r4 = r10.getTargetFilePath()
            r3.a(r4, r0)
            com.kwad.sdk.core.a r3 = com.kwad.sdk.core.a.yT()
            java.lang.String r4 = r0.mPkgname
            r3.a(r4, r0)
            android.widget.RemoteViews r2 = r2.build()
            r3 = 0
            r4 = 0
            android.app.PendingIntent r5 = com.kwad.sdk.e.l(r10)
            int r6 = r10.getId()
            r7 = 1
            r8 = 1
            a(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }
}
