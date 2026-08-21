package com.mbridge.msdk.mbdownload;

class e {
    private static final java.lang.String a = null;
    private android.util.SparseArray<com.mbridge.msdk.mbdownload.e.b> b;
    private java.util.Map<com.mbridge.msdk.mbdownload.b.a, android.os.Messenger> c;
    private com.mbridge.msdk.mbdownload.i d;

    static class a extends com.mbridge.msdk.mbdownload.h {
        java.lang.String a;
        java.lang.String b;
        java.lang.String c;
        android.content.Context d;


        public a(android.content.Context r1) {
                r0 = this;
                r0.<init>(r1)
                r0.d = r1
                return
        }

        public final com.mbridge.msdk.mbdownload.e.a a() {
                r5 = this;
                android.widget.RemoteViews r0 = r5.j
                android.content.Context r1 = r5.d
                java.lang.String r2 = "id"
                java.lang.String r3 = "mbridge_download_notify_pause"
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
                r3 = 0
                r0.setViewVisibility(r1, r3)
                android.widget.RemoteViews r0 = r5.j
                android.content.Context r1 = r5.d
                java.lang.String r3 = "mbridge_download_notify_continue"
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
                r3 = 8
                r0.setViewVisibility(r1, r3)
                android.widget.RemoteViews r0 = r5.j
                android.content.Context r1 = r5.d
                java.lang.String r4 = "mbridge_download_notify_progress_status"
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r2)
                r0.setViewVisibility(r1, r3)
                return r5
        }

        public final com.mbridge.msdk.mbdownload.e.a a(int r5, int r6, boolean r7) {
                r4 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 16
                if (r0 < r1) goto L23
                android.widget.RemoteViews r0 = r4.j     // Catch: java.lang.Exception -> L16
                android.content.Context r1 = r4.e     // Catch: java.lang.Exception -> L16
                java.lang.String r2 = "mbridge_download_notify_progress"
                java.lang.String r3 = "id"
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r2, r3)     // Catch: java.lang.Exception -> L16
                r0.setProgressBar(r1, r5, r6, r7)     // Catch: java.lang.Exception -> L16
                goto L36
            L16:
                r5 = move-exception
                java.lang.String r6 = com.mbridge.msdk.mbdownload.e.b()
                java.lang.String r5 = r5.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r6, r5)
                goto L36
            L23:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                r5.append(r6)
                java.lang.String r6 = "%"
                r5.append(r6)
                java.lang.String r5 = r5.toString()
                r4.c = r5
            L36:
                return r4
        }

        public final com.mbridge.msdk.mbdownload.e.a a(java.lang.CharSequence r7) {
                r6 = this;
                android.content.Context r0 = r6.d
                r1 = 0
                if (r0 == 0) goto La
                int r0 = com.mbridge.msdk.foundation.tools.v.w(r0)
                goto Lb
            La:
                r0 = r1
            Lb:
                boolean r2 = android.text.TextUtils.isEmpty(r7)
                java.lang.String r3 = "id"
                if (r2 != 0) goto L2e
                java.lang.String r2 = r7.toString()
                java.lang.String r4 = "%"
                boolean r2 = r2.contains(r4)
                if (r2 == 0) goto L2e
                android.widget.RemoteViews r2 = r6.j
                android.content.Context r4 = r6.d
                java.lang.String r5 = "mbridge_download_notify_progress_status"
                int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r3)
                r5 = 8
                r2.setViewVisibility(r4, r5)
            L2e:
                android.widget.RemoteViews r2 = r6.j
                android.content.Context r4 = r6.d
                java.lang.String r5 = "mbridge_download_notify_progress_progess"
                int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r5, r3)
                r2.setViewVisibility(r4, r1)
                r1 = 26
                if (r0 < r1) goto L4f
                int r0 = android.os.Build.VERSION.SDK_INT
                if (r0 < r1) goto L4f
                android.widget.RemoteViews r0 = r6.j
                android.content.Context r1 = r6.e
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r5, r3)
                r0.setTextViewText(r1, r7)
                goto L67
            L4f:
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 16
                if (r0 < r1) goto L61
                android.widget.RemoteViews r0 = r6.j
                android.content.Context r1 = r6.e
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r5, r3)
                r0.setTextViewText(r1, r7)
                goto L67
            L61:
                java.lang.String r7 = r7.toString()
                r6.b = r7
            L67:
                return r6
        }

        public final com.mbridge.msdk.mbdownload.e.a a(java.lang.String r3) {
                r2 = this;
                android.content.Context r0 = r2.d
                if (r0 == 0) goto L7
                com.mbridge.msdk.foundation.tools.v.w(r0)
            L7:
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 != 0) goto L1b
                android.content.Context r0 = r2.d
                com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
                com.mbridge.msdk.mbdownload.e$a$1 r1 = new com.mbridge.msdk.mbdownload.e$a$1
                r1.<init>(r2)
                r0.a(r3, r1)
            L1b:
                return r2
        }

        public final com.mbridge.msdk.mbdownload.e.a b() {
                r5 = this;
                android.widget.RemoteViews r0 = r5.j
                android.content.Context r1 = r5.d
                java.lang.String r2 = "id"
                java.lang.String r3 = "mbridge_download_notify_pause"
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
                r3 = 8
                r0.setViewVisibility(r1, r3)
                android.widget.RemoteViews r0 = r5.j
                android.content.Context r1 = r5.d
                java.lang.String r4 = "mbridge_download_notify_continue"
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r2)
                r0.setViewVisibility(r1, r3)
                return r5
        }

        public final com.mbridge.msdk.mbdownload.e.a b(java.lang.CharSequence r7) {
                r6 = this;
                android.content.Context r0 = r6.d
                r1 = 0
                if (r0 == 0) goto La
                int r0 = com.mbridge.msdk.foundation.tools.v.w(r0)
                goto Lb
            La:
                r0 = r1
            Lb:
                android.widget.RemoteViews r2 = r6.j
                android.content.Context r3 = r6.d
                java.lang.String r4 = "mbridge_download_notify_progress_status"
                java.lang.String r5 = "id"
                int r3 = com.mbridge.msdk.foundation.tools.s.a(r3, r4, r5)
                r2.setViewVisibility(r3, r1)
                android.widget.RemoteViews r1 = r6.j
                android.content.Context r2 = r6.d
                java.lang.String r3 = "mbridge_download_notify_progress_progess"
                int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r5)
                r3 = 8
                r1.setViewVisibility(r2, r3)
                r1 = 26
                if (r0 < r1) goto L3d
                int r0 = android.os.Build.VERSION.SDK_INT
                if (r0 < r1) goto L3d
                android.widget.RemoteViews r0 = r6.j
                android.content.Context r1 = r6.e
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r5)
                r0.setTextViewText(r1, r7)
                goto L55
            L3d:
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 16
                if (r0 < r1) goto L4f
                android.widget.RemoteViews r0 = r6.j
                android.content.Context r1 = r6.e
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r5)
                r0.setTextViewText(r1, r7)
                goto L55
            L4f:
                java.lang.String r7 = r7.toString()
                r6.b = r7
            L55:
                return r6
        }

        public final com.mbridge.msdk.mbdownload.e.a c() {
                r5 = this;
                android.widget.RemoteViews r0 = r5.j
                android.content.Context r1 = r5.d
                java.lang.String r2 = "id"
                java.lang.String r3 = "mbridge_download_notify_pause"
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
                r3 = 8
                r0.setViewVisibility(r1, r3)
                android.widget.RemoteViews r0 = r5.j
                android.content.Context r1 = r5.d
                java.lang.String r4 = "mbridge_download_notify_continue"
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r2)
                r4 = 0
                r0.setViewVisibility(r1, r4)
                android.widget.RemoteViews r0 = r5.j
                android.content.Context r1 = r5.d
                java.lang.String r4 = "mbridge_download_notify_progress_status"
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r2)
                r0.setViewVisibility(r1, r3)
                return r5
        }

        public final com.mbridge.msdk.mbdownload.e.a c(java.lang.CharSequence r5) {
                r4 = this;
                android.content.Context r0 = r4.d
                if (r0 == 0) goto L9
                int r0 = com.mbridge.msdk.foundation.tools.v.w(r0)
                goto La
            L9:
                r0 = 0
            La:
                java.lang.String r1 = "id"
                java.lang.String r2 = "mbridge_download_notify_target_name"
                r3 = 26
                if (r0 < r3) goto L22
                int r0 = android.os.Build.VERSION.SDK_INT
                if (r0 < r3) goto L22
                android.widget.RemoteViews r0 = r4.j
                android.content.Context r3 = r4.e
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r3, r2, r1)
                r0.setTextViewText(r1, r5)
                goto L3a
            L22:
                int r0 = android.os.Build.VERSION.SDK_INT
                r3 = 16
                if (r0 < r3) goto L34
                android.widget.RemoteViews r0 = r4.j
                android.content.Context r3 = r4.e
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r3, r2, r1)
                r0.setTextViewText(r1, r5)
                goto L3a
            L34:
                java.lang.String r5 = r5.toString()
                r4.a = r5
            L3a:
                return r4
        }

        public final android.app.Notification d() {
                r2 = this;
                android.content.Context r0 = r2.d
                if (r0 == 0) goto L9
                int r0 = com.mbridge.msdk.foundation.tools.v.w(r0)
                goto La
            L9:
                r0 = 0
            La:
                r1 = 26
                if (r0 < r1) goto L19
                int r0 = android.os.Build.VERSION.SDK_INT
                if (r0 < r1) goto L19
                android.support.v4.app.NotificationCompat$Builder r0 = r2.h
                android.app.Notification r0 = r0.build()
                return r0
            L19:
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 16
                if (r0 < r1) goto L26
                android.app.Notification$Builder r0 = r2.g
                android.app.Notification r0 = r0.build()
                return r0
            L26:
                int r0 = android.os.Build.VERSION.SDK_INT
                if (r0 >= r1) goto L44
                android.support.v4.app.NotificationCompat$Builder r0 = new android.support.v4.app.NotificationCompat$Builder
                android.content.Context r1 = r2.e
                r0.<init>(r1)
                java.lang.String r1 = r2.a
                android.support.v4.app.NotificationCompat$Builder r0 = r0.setTicker(r1)
                android.app.PendingIntent r1 = r2.i
                android.support.v4.app.NotificationCompat$Builder r0 = r0.setContentIntent(r1)
                android.app.Notification r0 = r0.build()
                r2.f = r0
                goto L5d
            L44:
                android.app.Notification$Builder r0 = new android.app.Notification$Builder
                android.content.Context r1 = r2.e
                r0.<init>(r1)
                java.lang.String r1 = r2.a
                android.app.Notification$Builder r0 = r0.setTicker(r1)
                android.app.PendingIntent r1 = r2.i
                android.app.Notification$Builder r0 = r0.setContentIntent(r1)
                android.app.Notification r0 = r0.build()
                r2.f = r0
            L5d:
                android.app.Notification r0 = r2.f
                return r0
        }
    }

    static class b {
        com.mbridge.msdk.mbdownload.k a;
        com.mbridge.msdk.mbdownload.e.a b;
        int c;
        int d;
        com.mbridge.msdk.mbdownload.b.a e;
        long[] f;

        public b(com.mbridge.msdk.mbdownload.b.a r2, int r3) {
                r1 = this;
                r1.<init>()
                r0 = 3
                long[] r0 = new long[r0]
                r1.f = r0
                r1.c = r3
                r1.e = r2
                return
        }
    }

    class c extends android.os.AsyncTask<java.lang.String, java.lang.Void, java.lang.Integer> {
        public int a;
        public java.lang.String b;
        final com.mbridge.msdk.mbdownload.e c;
        private com.mbridge.msdk.mbdownload.b.a d;
        private android.content.Context e;
        private android.app.NotificationManager f;

        public c(com.mbridge.msdk.mbdownload.e r1, android.content.Context r2, int r3, com.mbridge.msdk.mbdownload.b.a r4, java.lang.String r5) {
                r0 = this;
                r0.c = r1
                r0.<init>()
                android.content.Context r1 = r2.getApplicationContext()
                r0.e = r1
                java.lang.String r2 = "notification"
                java.lang.Object r1 = r1.getSystemService(r2)
                android.app.NotificationManager r1 = (android.app.NotificationManager) r1
                r0.f = r1
                com.mbridge.msdk.mbdownload.j.a()
                r0.a = r3
                r0.d = r4
                r0.b = r5
                return
        }

        @Override
        protected final java.lang.Integer doInBackground(java.lang.String[] r1) {
                r0 = this;
                java.lang.String[] r1 = (java.lang.String[]) r1
                r1 = 1
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                return r1
        }

        @Override
        protected final void onPostExecute(java.lang.Integer r14) {
                r13 = this;
                java.lang.String r0 = "application/vnd.android.package-archive"
                java.lang.Integer r14 = (java.lang.Integer) r14
                int r14 = r14.intValue()     // Catch: java.lang.Throwable -> L19b
                r1 = 5
                java.lang.String r2 = "filename"
                r3 = 3
                r4 = 1
                if (r14 != r4) goto L151
                android.content.Intent r14 = new android.content.Intent     // Catch: java.lang.Throwable -> L19b
                java.lang.String r5 = "android.intent.action.VIEW"
                r14.<init>(r5)     // Catch: java.lang.Throwable -> L19b
                r5 = 268435456(0x10000000, float:2.524355E-29)
                r14.addFlags(r5)     // Catch: java.lang.Throwable -> L19b
                r5 = 0
                android.content.Context r6 = r13.e     // Catch: java.lang.Exception -> Lc7 java.lang.Throwable -> L19b
                int r6 = com.mbridge.msdk.foundation.tools.v.w(r6)     // Catch: java.lang.Exception -> Lc7 java.lang.Throwable -> L19b
                r7 = 24
                if (r6 < r7) goto Lb8
                int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> Lc7 java.lang.Throwable -> L19b
                if (r6 < r7) goto Lb8
                r6 = 0
                java.lang.String r7 = com.mbridge.msdk.MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.String r8 = ".mbFileProvider"
                if (r7 != 0) goto L83
                java.lang.String r7 = com.mbridge.msdk.MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.Class r7 = java.lang.Class.forName(r7)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.String r9 = "getUriForFile"
                java.lang.Class[] r10 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.Class<android.content.Context> r11 = android.content.Context.class
                r10[r5] = r11     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.Class<java.lang.String> r11 = java.lang.String.class
                r10[r4] = r11     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.Class<java.io.File> r11 = java.io.File.class
                r12 = 2
                r10[r12] = r11     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.reflect.Method r7 = r7.getMethod(r9, r10)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                android.content.Context r9 = r13.e     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                r3[r5] = r9     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                r9.<init>()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                android.content.Context r10 = r13.e     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                android.content.Context r10 = r10.getApplicationContext()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.String r10 = r10.getPackageName()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                r9.append(r10)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                r9.append(r8)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.String r8 = r9.toString()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                r3[r4] = r8     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.io.File r8 = new java.io.File     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.String r9 = r13.b     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                r8.<init>(r9)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                r3[r12] = r8     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.Object r3 = r7.invoke(r6, r3)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                android.net.Uri r3 = (android.net.Uri) r3     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                android.net.Uri r3 = (android.net.Uri) r3     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                goto La9
            L83:
                android.content.Context r3 = r13.e     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                r7.<init>()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                android.content.Context r9 = r13.e     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                android.content.Context r9 = r9.getApplicationContext()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.String r9 = r9.getPackageName()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                r7.append(r9)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                r7.append(r8)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.io.File r8 = new java.io.File     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                java.lang.String r9 = r13.b     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                r8.<init>(r9)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
                android.net.Uri r3 = com.mbridge.msdk.foundation.tools.MBFileProvider.getUriForFile(r3, r7, r8)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L19b
            La9:
                r6 = r3
                goto Laf
            Lab:
                r3 = move-exception
                r3.printStackTrace()     // Catch: java.lang.Exception -> Lc7 java.lang.Throwable -> L19b
            Laf:
                if (r6 == 0) goto Ld5
                r14.setDataAndType(r6, r0)     // Catch: java.lang.Exception -> Lc7 java.lang.Throwable -> L19b
                r14.addFlags(r4)     // Catch: java.lang.Exception -> Lc7 java.lang.Throwable -> L19b
                goto Ld5
            Lb8:
                java.io.File r3 = new java.io.File     // Catch: java.lang.Exception -> Lc7 java.lang.Throwable -> L19b
                java.lang.String r6 = r13.b     // Catch: java.lang.Exception -> Lc7 java.lang.Throwable -> L19b
                r3.<init>(r6)     // Catch: java.lang.Exception -> Lc7 java.lang.Throwable -> L19b
                android.net.Uri r3 = android.net.Uri.fromFile(r3)     // Catch: java.lang.Exception -> Lc7 java.lang.Throwable -> L19b
                r14.setDataAndType(r3, r0)     // Catch: java.lang.Exception -> Lc7 java.lang.Throwable -> L19b
                goto Ld5
            Lc7:
                java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L19b
                java.lang.String r6 = r13.b     // Catch: java.lang.Throwable -> L19b
                r3.<init>(r6)     // Catch: java.lang.Throwable -> L19b
                android.net.Uri r3 = android.net.Uri.fromFile(r3)     // Catch: java.lang.Throwable -> L19b
                r14.setDataAndType(r3, r0)     // Catch: java.lang.Throwable -> L19b
            Ld5:
                android.content.Context r0 = r13.e     // Catch: java.lang.Throwable -> L19b
                r3 = 134217728(0x8000000, float:3.85186E-34)
                android.app.PendingIntent r0 = android.app.PendingIntent.getActivity(r0, r5, r14, r3)     // Catch: java.lang.Throwable -> L19b
                android.content.Context r3 = r13.e     // Catch: java.lang.Throwable -> L19b
                android.content.Context r5 = r13.e     // Catch: java.lang.Throwable -> L19b
                java.lang.String r5 = com.mbridge.msdk.mbdownload.g.g(r5)     // Catch: java.lang.Throwable -> L19b
                android.app.Notification r0 = com.mbridge.msdk.mbdownload.e.a(r3, r5, r0)     // Catch: java.lang.Throwable -> L19b
                if (r0 == 0) goto Lf7
                r3 = 16
                r0.flags = r3     // Catch: java.lang.Throwable -> L19b
                android.app.NotificationManager r3 = r13.f     // Catch: java.lang.Throwable -> L19b
                int r5 = r13.a     // Catch: java.lang.Throwable -> L19b
                int r5 = r5 + r4
                r3.notify(r5, r0)     // Catch: java.lang.Throwable -> L19b
            Lf7:
                com.mbridge.msdk.mbdownload.e r0 = r13.c     // Catch: java.lang.Throwable -> L19b
                android.content.Context r3 = r13.e     // Catch: java.lang.Throwable -> L19b
                boolean r0 = r0.a(r3)     // Catch: java.lang.Throwable -> L19b
                if (r0 == 0) goto L10e
                android.app.NotificationManager r0 = r13.f     // Catch: java.lang.Throwable -> L19b
                int r3 = r13.a     // Catch: java.lang.Throwable -> L19b
                int r3 = r3 + r4
                r0.cancel(r3)     // Catch: java.lang.Throwable -> L19b
                android.content.Context r0 = r13.e     // Catch: java.lang.Throwable -> L19b
                r0.startActivity(r14)     // Catch: java.lang.Throwable -> L19b
            L10e:
                android.os.Bundle r14 = new android.os.Bundle     // Catch: java.lang.Throwable -> L19b
                r14.<init>()     // Catch: java.lang.Throwable -> L19b
                java.lang.String r0 = r13.b     // Catch: java.lang.Throwable -> L19b
                r14.putString(r2, r0)     // Catch: java.lang.Throwable -> L19b
                android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L19b
                r0.what = r1     // Catch: java.lang.Throwable -> L19b
                r0.arg1 = r4     // Catch: java.lang.Throwable -> L19b
                int r1 = r13.a     // Catch: java.lang.Throwable -> L19b
                r0.arg2 = r1     // Catch: java.lang.Throwable -> L19b
                r0.setData(r14)     // Catch: java.lang.Throwable -> L19b
                com.mbridge.msdk.mbdownload.e r14 = r13.c     // Catch: android.os.RemoteException -> L147 java.lang.Throwable -> L19b
                java.util.Map r14 = com.mbridge.msdk.mbdownload.e.a(r14)     // Catch: android.os.RemoteException -> L147 java.lang.Throwable -> L19b
                com.mbridge.msdk.mbdownload.b$a r1 = r13.d     // Catch: android.os.RemoteException -> L147 java.lang.Throwable -> L19b
                java.lang.Object r14 = r14.get(r1)     // Catch: android.os.RemoteException -> L147 java.lang.Throwable -> L19b
                if (r14 == 0) goto L19b
                com.mbridge.msdk.mbdownload.e r14 = r13.c     // Catch: android.os.RemoteException -> L147 java.lang.Throwable -> L19b
                java.util.Map r14 = com.mbridge.msdk.mbdownload.e.a(r14)     // Catch: android.os.RemoteException -> L147 java.lang.Throwable -> L19b
                com.mbridge.msdk.mbdownload.b$a r1 = r13.d     // Catch: android.os.RemoteException -> L147 java.lang.Throwable -> L19b
                java.lang.Object r14 = r14.get(r1)     // Catch: android.os.RemoteException -> L147 java.lang.Throwable -> L19b
                android.os.Messenger r14 = (android.os.Messenger) r14     // Catch: android.os.RemoteException -> L147 java.lang.Throwable -> L19b
                r14.send(r0)     // Catch: android.os.RemoteException -> L147 java.lang.Throwable -> L19b
                goto L19b
            L147:
                com.mbridge.msdk.mbdownload.e r14 = r13.c     // Catch: java.lang.Throwable -> L19b
                android.content.Context r0 = r13.e     // Catch: java.lang.Throwable -> L19b
                int r1 = r13.a     // Catch: java.lang.Throwable -> L19b
                r14.a(r0, r1)     // Catch: java.lang.Throwable -> L19b
                goto L19b
            L151:
                android.app.NotificationManager r14 = r13.f     // Catch: java.lang.Throwable -> L19b
                int r0 = r13.a     // Catch: java.lang.Throwable -> L19b
                int r0 = r0 + r4
                r14.cancel(r0)     // Catch: java.lang.Throwable -> L19b
                android.os.Bundle r14 = new android.os.Bundle     // Catch: java.lang.Throwable -> L19b
                r14.<init>()     // Catch: java.lang.Throwable -> L19b
                java.lang.String r0 = r13.b     // Catch: java.lang.Throwable -> L19b
                r14.putString(r2, r0)     // Catch: java.lang.Throwable -> L19b
                android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L19b
                r0.what = r1     // Catch: java.lang.Throwable -> L19b
                r0.arg1 = r3     // Catch: java.lang.Throwable -> L19b
                int r1 = r13.a     // Catch: java.lang.Throwable -> L19b
                r0.arg2 = r1     // Catch: java.lang.Throwable -> L19b
                r0.setData(r14)     // Catch: java.lang.Throwable -> L19b
                com.mbridge.msdk.mbdownload.e r14 = r13.c     // Catch: android.os.RemoteException -> L192 java.lang.Throwable -> L19b
                java.util.Map r14 = com.mbridge.msdk.mbdownload.e.a(r14)     // Catch: android.os.RemoteException -> L192 java.lang.Throwable -> L19b
                com.mbridge.msdk.mbdownload.b$a r1 = r13.d     // Catch: android.os.RemoteException -> L192 java.lang.Throwable -> L19b
                java.lang.Object r14 = r14.get(r1)     // Catch: android.os.RemoteException -> L192 java.lang.Throwable -> L19b
                if (r14 == 0) goto L19b
                com.mbridge.msdk.mbdownload.e r14 = r13.c     // Catch: android.os.RemoteException -> L192 java.lang.Throwable -> L19b
                java.util.Map r14 = com.mbridge.msdk.mbdownload.e.a(r14)     // Catch: android.os.RemoteException -> L192 java.lang.Throwable -> L19b
                com.mbridge.msdk.mbdownload.b$a r1 = r13.d     // Catch: android.os.RemoteException -> L192 java.lang.Throwable -> L19b
                java.lang.Object r14 = r14.get(r1)     // Catch: android.os.RemoteException -> L192 java.lang.Throwable -> L19b
                android.os.Messenger r14 = (android.os.Messenger) r14     // Catch: android.os.RemoteException -> L192 java.lang.Throwable -> L19b
                r14.send(r0)     // Catch: android.os.RemoteException -> L192 java.lang.Throwable -> L19b
                goto L19b
            L192:
                com.mbridge.msdk.mbdownload.e r14 = r13.c     // Catch: java.lang.Throwable -> L19b
                android.content.Context r0 = r13.e     // Catch: java.lang.Throwable -> L19b
                int r1 = r13.a     // Catch: java.lang.Throwable -> L19b
                r14.a(r0, r1)     // Catch: java.lang.Throwable -> L19b
            L19b:
                return
        }

        @Override
        protected final void onPreExecute() {
                r0 = this;
                super.onPreExecute()
                return
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.mbdownload.e> r0 = com.mbridge.msdk.mbdownload.e.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.mbdownload.e.a = r0
            return
    }

    public e(android.util.SparseArray<com.mbridge.msdk.mbdownload.e.b> r1, java.util.Map<com.mbridge.msdk.mbdownload.b.a, android.os.Messenger> r2, com.mbridge.msdk.mbdownload.i r3) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            r0.d = r3
            return
    }

    public static android.app.Notification a(android.content.Context r4, java.lang.String r5, android.app.PendingIntent r6) {
            if (r4 == 0) goto L7
            int r0 = com.mbridge.msdk.foundation.tools.v.w(r4)
            goto L8
        L7:
            r0 = 0
        L8:
            r1 = 26
            if (r0 < r1) goto L60
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> La5
            if (r0 < r1) goto L60
            android.content.res.Resources r0 = r4.getResources()     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "download"
            r2 = 17301634(0x1080082, float:2.497962E-38)
            if (r0 != 0) goto L3a
            android.support.v4.app.NotificationCompat$Builder r0 = new android.support.v4.app.NotificationCompat$Builder     // Catch: java.lang.Throwable -> La5
            r0.<init>(r4, r1)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r0.setSmallIcon(r2)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setTicker(r5)     // Catch: java.lang.Throwable -> La5
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setWhen(r0)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setContentIntent(r6)     // Catch: java.lang.Throwable -> La5
            android.app.Notification r4 = r4.build()     // Catch: java.lang.Throwable -> La5
            goto Lb0
        L3a:
            android.support.v4.app.NotificationCompat$Builder r3 = new android.support.v4.app.NotificationCompat$Builder     // Catch: java.lang.Throwable -> La5
            r3.<init>(r4, r1)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r3.setSmallIcon(r2)     // Catch: java.lang.Throwable -> La5
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeResource(r0, r2)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setLargeIcon(r0)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setTicker(r5)     // Catch: java.lang.Throwable -> La5
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setWhen(r0)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setContentIntent(r6)     // Catch: java.lang.Throwable -> La5
            android.app.Notification r4 = r4.build()     // Catch: java.lang.Throwable -> La5
            goto Lb0
        L60:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> La5
            r1 = 16
            r2 = 17301633(0x1080081, float:2.4979616E-38)
            if (r0 >= r1) goto L87
            android.support.v4.app.NotificationCompat$Builder r0 = new android.support.v4.app.NotificationCompat$Builder     // Catch: java.lang.Throwable -> La5
            r0.<init>(r4)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r0.setSmallIcon(r2)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setTicker(r5)     // Catch: java.lang.Throwable -> La5
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setWhen(r0)     // Catch: java.lang.Throwable -> La5
            android.support.v4.app.NotificationCompat$Builder r4 = r4.setContentIntent(r6)     // Catch: java.lang.Throwable -> La5
            android.app.Notification r4 = r4.build()     // Catch: java.lang.Throwable -> La5
            goto Lb0
        L87:
            android.app.Notification$Builder r0 = new android.app.Notification$Builder     // Catch: java.lang.Throwable -> La5
            r0.<init>(r4)     // Catch: java.lang.Throwable -> La5
            android.app.Notification$Builder r4 = r0.setSmallIcon(r2)     // Catch: java.lang.Throwable -> La5
            android.app.Notification$Builder r4 = r4.setTicker(r5)     // Catch: java.lang.Throwable -> La5
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La5
            android.app.Notification$Builder r4 = r4.setWhen(r0)     // Catch: java.lang.Throwable -> La5
            android.app.Notification$Builder r4 = r4.setContentIntent(r6)     // Catch: java.lang.Throwable -> La5
            android.app.Notification r4 = r4.build()     // Catch: java.lang.Throwable -> La5
            goto Lb0
        La5:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r5 = "DownloadTool"
            com.mbridge.msdk.foundation.tools.z.a(r5, r4)
            r4 = 0
        Lb0:
            return r4
    }

    public static java.io.File a(java.lang.String r3, android.content.Context r4, boolean[] r5) throws java.io.IOException {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r0.equals(r1)
            r1 = 0
            if (r0 == 0) goto L39
            com.mbridge.msdk.foundation.same.b.c r0 = com.mbridge.msdk.foundation.same.b.c.h
            java.lang.String r0 = com.mbridge.msdk.foundation.same.b.e.b(r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "/download/.mb"
            r2.append(r0)
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            r0.mkdirs()
            boolean r3 = r0.exists()
            if (r3 == 0) goto L39
            r3 = 1
            r5[r1] = r3
            return r0
        L39:
            java.io.File r3 = r4.getCacheDir()
            java.lang.String r3 = r3.getAbsolutePath()
            java.io.File r4 = new java.io.File
            r4.<init>(r3)
            r4.mkdir()
            r4 = 505(0x1f9, float:7.08E-43)
            r0 = -1
            a(r3, r4, r0, r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            java.lang.String r3 = "/mbdownload"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r3)
            r2.mkdir()
            a(r3, r4, r0, r0)
            java.io.File r4 = new java.io.File
            r4.<init>(r3)
            r5[r1] = r1
            return r4
    }

    public static java.lang.String a() {
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.util.Locale r2 = java.util.Locale.US
            java.lang.String r3 = "yyyy-MM-dd HH:mm:ss"
            r1.<init>(r3, r2)
            java.lang.String r0 = r1.format(r0)
            return r0
    }

    public static java.lang.String a(java.lang.String r7) {
            if (r7 != 0) goto L4
            r7 = 0
            return r7
        L4:
            byte[] r0 = r7.getBytes()     // Catch: java.lang.Exception -> L3e
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Exception -> L3e
            r1.reset()     // Catch: java.lang.Exception -> L3e
            r1.update(r0)     // Catch: java.lang.Exception -> L3e
            byte[] r0 = r1.digest()     // Catch: java.lang.Exception -> L3e
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L3e
            r1.<init>()     // Catch: java.lang.Exception -> L3e
            r2 = 0
            r3 = r2
        L1f:
            int r4 = r0.length     // Catch: java.lang.Exception -> L3e
            if (r3 >= r4) goto L39
            java.lang.String r4 = "%02X"
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L3e
            r6 = r0[r3]     // Catch: java.lang.Exception -> L3e
            java.lang.Byte r6 = java.lang.Byte.valueOf(r6)     // Catch: java.lang.Exception -> L3e
            r5[r2] = r6     // Catch: java.lang.Exception -> L3e
            java.lang.String r4 = java.lang.String.format(r4, r5)     // Catch: java.lang.Exception -> L3e
            r1.append(r4)     // Catch: java.lang.Exception -> L3e
            int r3 = r3 + 1
            goto L1f
        L39:
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Exception -> L3e
            return r7
        L3e:
            java.lang.String r0 = "[^[a-z][A-Z][0-9][.][_]]"
            java.lang.String r1 = ""
            java.lang.String r7 = r7.replaceAll(r0, r1)
            return r7
    }

    static java.util.Map a(com.mbridge.msdk.mbdownload.e r0) {
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r0 = r0.c
            return r0
    }

    private void a(android.content.Context r6, com.mbridge.msdk.mbdownload.e.a r7, int r8, int r9) {
            r5 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L66
            java.lang.String r0 = "continue"
            java.lang.String r1 = com.mbridge.msdk.mbdownload.j.a(r8, r0)
            android.app.PendingIntent r1 = com.mbridge.msdk.mbdownload.j.a(r6, r1)
            java.lang.String r2 = "install or active"
            java.lang.String r2 = com.mbridge.msdk.mbdownload.j.a(r8, r2)
            android.app.PendingIntent r2 = com.mbridge.msdk.mbdownload.j.a(r6, r2)
            java.lang.String r0 = com.mbridge.msdk.mbdownload.j.a(r8, r0)
            android.app.PendingIntent r0 = com.mbridge.msdk.mbdownload.j.a(r6, r0)
            java.lang.String r3 = "parent_view_click"
            java.lang.String r8 = com.mbridge.msdk.mbdownload.j.a(r8, r3)
            android.app.PendingIntent r8 = com.mbridge.msdk.mbdownload.j.a(r6, r8)
            r3 = 1
            java.lang.String r4 = "id"
            if (r9 == r3) goto L50
            r1 = 2
            if (r9 == r1) goto L44
            r0 = 3
            if (r9 == r0) goto L38
            goto L5b
        L38:
            android.widget.RemoteViews r9 = r7.j
            java.lang.String r0 = "mbridge_download_notify_progress_status"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r6, r0, r4)
            r9.setOnClickPendingIntent(r0, r2)
            goto L5b
        L44:
            android.widget.RemoteViews r9 = r7.j
            java.lang.String r1 = "mbridge_download_notify_pause"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r6, r1, r4)
            r9.setOnClickPendingIntent(r1, r0)
            goto L5b
        L50:
            android.widget.RemoteViews r9 = r7.j
            java.lang.String r0 = "mbridge_download_notify_continue"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r6, r0, r4)
            r9.setOnClickPendingIntent(r0, r1)
        L5b:
            android.widget.RemoteViews r7 = r7.j
            java.lang.String r9 = "mbridge_download_notify_parent_view"
            int r6 = com.mbridge.msdk.foundation.tools.s.a(r6, r9, r4)
            r7.setOnClickPendingIntent(r6, r8)
        L66:
            return
    }

    private static boolean a(java.lang.String r8, int r9, int r10, int r11) {
            java.lang.String r10 = "error when set permissions:"
            r11 = 0
            java.lang.String r0 = "android.os.FileUtils"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            java.lang.String r1 = "setPermissions"
            r2 = 4
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r3[r11] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            r5 = 1
            r3[r5] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            r6 = 2
            r3[r6] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            r7 = 3
            r3[r7] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            r2[r11] = r8     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            java.lang.Integer r8 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            r2[r5] = r8     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            r8 = -1
            java.lang.Integer r9 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            r2[r6] = r9     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            r2[r7] = r8     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            r0.invoke(r1, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L41 java.lang.IllegalAccessException -> L48 java.lang.IllegalArgumentException -> L4f java.lang.NoSuchMethodException -> L56 java.lang.ClassNotFoundException -> L5d
            return r5
        L41:
            r8 = move-exception
            java.lang.String r9 = com.mbridge.msdk.mbdownload.e.a
            com.mbridge.msdk.foundation.tools.z.a(r9, r10, r8)
            goto L63
        L48:
            r8 = move-exception
            java.lang.String r9 = com.mbridge.msdk.mbdownload.e.a
            com.mbridge.msdk.foundation.tools.z.a(r9, r10, r8)
            goto L63
        L4f:
            r8 = move-exception
            java.lang.String r9 = com.mbridge.msdk.mbdownload.e.a
            com.mbridge.msdk.foundation.tools.z.a(r9, r10, r8)
            goto L63
        L56:
            r8 = move-exception
            java.lang.String r9 = com.mbridge.msdk.mbdownload.e.a
            com.mbridge.msdk.foundation.tools.z.a(r9, r10, r8)
            goto L63
        L5d:
            r8 = move-exception
            java.lang.String r9 = com.mbridge.msdk.mbdownload.e.a
            com.mbridge.msdk.foundation.tools.z.a(r9, r10, r8)
        L63:
            return r11
    }

    static java.lang.String b() {
            java.lang.String r0 = com.mbridge.msdk.mbdownload.e.a
            return r0
    }

    private void b(android.content.Context r5, int r6) {
            r4 = this;
            android.content.Context r5 = r5.getApplicationContext()
            java.lang.String r0 = "notification"
            java.lang.Object r0 = r5.getSystemService(r0)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            com.mbridge.msdk.mbdownload.j.a()
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r1 = r4.b
            java.lang.Object r1 = r1.get(r6)
            com.mbridge.msdk.mbdownload.e$b r1 = (com.mbridge.msdk.mbdownload.e.b) r1
            com.mbridge.msdk.mbdownload.e$a r2 = r1.b
            r2.e()
            com.mbridge.msdk.mbdownload.e$a r2 = r1.b
            r3 = 1
            r4.a(r5, r2, r6, r3)
            com.mbridge.msdk.mbdownload.e$a r5 = r1.b
            com.mbridge.msdk.mbdownload.b$a r2 = r1.e
            java.lang.String r2 = r2.c
            com.mbridge.msdk.mbdownload.e$a r5 = r5.c(r2)
            com.mbridge.msdk.mbdownload.b$a r2 = r1.e
            boolean r2 = r2.h
            com.mbridge.msdk.mbdownload.h r5 = r5.a(r2)
            r5.b(r3)
            com.mbridge.msdk.mbdownload.b$a r5 = r1.e
            boolean r5 = r5.i
            if (r5 == 0) goto L42
            com.mbridge.msdk.mbdownload.e$a r5 = r1.b
            r5.c()
        L42:
            com.mbridge.msdk.mbdownload.e$a r5 = r1.b
            android.app.Notification r5 = r5.d()
            r0.notify(r6, r5)
            return
    }

    public static boolean b(android.content.Context r4) {
            r0 = 0
            android.content.pm.PackageManager r1 = r4.getPackageManager()     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = "android.permission.ACCESS_NETWORK_STATE"
            java.lang.String r3 = r4.getPackageName()     // Catch: java.lang.Exception -> L25
            int r1 = r1.checkPermission(r2, r3)     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = "connectivity"
            java.lang.Object r4 = r4.getSystemService(r2)     // Catch: java.lang.Exception -> L25
            android.net.ConnectivityManager r4 = (android.net.ConnectivityManager) r4     // Catch: java.lang.Exception -> L25
            android.net.NetworkInfo r4 = r4.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L25
            boolean r4 = r4.isConnectedOrConnecting()     // Catch: java.lang.Exception -> L25
            if (r1 != 0) goto L25
            if (r4 == 0) goto L25
            r4 = 1
            return r4
        L25:
            return r0
    }

    final int a(com.mbridge.msdk.mbdownload.b.a r5) {
            r4 = this;
            r0 = 0
        L1:
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r1 = r4.b
            int r1 = r1.size()
            if (r0 >= r1) goto L54
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r1 = r4.b
            int r1 = r1.keyAt(r0)
            java.lang.String r2 = r5.f
            if (r2 == 0) goto L32
            java.lang.String r2 = r5.f
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r3 = r4.b
            java.lang.Object r3 = r3.get(r1)
            com.mbridge.msdk.mbdownload.e$b r3 = (com.mbridge.msdk.mbdownload.e.b) r3
            com.mbridge.msdk.mbdownload.b$a r3 = r3.e
            java.lang.String r3 = r3.f
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L32
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r5 = r4.b
            java.lang.Object r5 = r5.get(r1)
            com.mbridge.msdk.mbdownload.e$b r5 = (com.mbridge.msdk.mbdownload.e.b) r5
            int r5 = r5.c
            return r5
        L32:
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r2 = r4.b
            java.lang.Object r2 = r2.get(r1)
            com.mbridge.msdk.mbdownload.e$b r2 = (com.mbridge.msdk.mbdownload.e.b) r2
            com.mbridge.msdk.mbdownload.b$a r2 = r2.e
            java.lang.String r2 = r2.d
            java.lang.String r3 = r5.d
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L51
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r5 = r4.b
            java.lang.Object r5 = r5.get(r1)
            com.mbridge.msdk.mbdownload.e$b r5 = (com.mbridge.msdk.mbdownload.e.b) r5
            int r5 = r5.c
            return r5
        L51:
            int r0 = r0 + 1
            goto L1
        L54:
            r5 = -1
            return r5
    }

    final com.mbridge.msdk.mbdownload.e.a a(android.content.Context r6, com.mbridge.msdk.mbdownload.b.a r7, int r8, int r9) {
            r5 = this;
            android.content.Context r6 = r6.getApplicationContext()
            com.mbridge.msdk.mbdownload.e$a r0 = new com.mbridge.msdk.mbdownload.e$a
            r0.<init>(r6)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            r2 = 0
            r3 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent.getActivity(r6, r2, r1, r3)
            boolean r1 = r7.q
            if (r1 == 0) goto L1f
            r0.e()
            r1 = 2
            r5.a(r6, r0, r8, r1)
        L1f:
            r1 = 3
            r5.a(r6, r0, r8, r1)
            java.lang.String r8 = r7.j
            r0.a(r8)
            com.mbridge.msdk.mbdownload.g.f(r6)
            r6 = 17301633(0x1080081, float:2.4979616E-38)
            com.mbridge.msdk.mbdownload.h r6 = r0.a(r6)
            long r3 = java.lang.System.currentTimeMillis()
            r6.a(r3)
            boolean r6 = r7.i
            if (r6 == 0) goto L40
            r0.a()
        L40:
            java.lang.String r6 = r7.c
            com.mbridge.msdk.mbdownload.e$a r6 = r0.c(r6)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r9)
            java.lang.String r1 = "%"
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            com.mbridge.msdk.mbdownload.e$a r6 = r6.a(r8)
            r8 = 100
            r6.a(r8, r9, r2)
            boolean r6 = r7.h
            com.mbridge.msdk.mbdownload.h r6 = r0.a(r6)
            r7 = 1
            r6.b(r7)
            return r0
    }

    final void a(android.content.Context r5, int r6) {
            r4 = this;
            android.content.Context r5 = r5.getApplicationContext()
            java.lang.String r0 = "notification"
            java.lang.Object r5 = r5.getSystemService(r0)
            android.app.NotificationManager r5 = (android.app.NotificationManager) r5
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r0 = r4.b
            java.lang.Object r0 = r0.get(r6)
            com.mbridge.msdk.mbdownload.e$b r0 = (com.mbridge.msdk.mbdownload.e.b) r0
            if (r0 == 0) goto L64
            java.lang.String r1 = com.mbridge.msdk.mbdownload.e.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "download service clear cache "
            r2.append(r3)
            com.mbridge.msdk.mbdownload.b$a r3 = r0.e
            java.lang.String r3 = r3.c
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.a(r1, r2)
            com.mbridge.msdk.mbdownload.k r1 = r0.a
            if (r1 == 0) goto L3a
            com.mbridge.msdk.mbdownload.k r1 = r0.a
            r2 = 2
            r1.a(r2)
        L3a:
            int r1 = r0.c
            r5.cancel(r1)
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r5 = r4.c
            com.mbridge.msdk.mbdownload.b$a r1 = r0.e
            boolean r5 = r5.containsKey(r1)
            if (r5 == 0) goto L50
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r5 = r4.c
            com.mbridge.msdk.mbdownload.b$a r1 = r0.e
            r5.remove(r1)
        L50:
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r5 = r4.b
            int r1 = r0.c
            int r1 = r5.indexOfKey(r1)
            if (r1 < 0) goto L5f
            int r0 = r0.c
            r5.remove(r0)
        L5f:
            com.mbridge.msdk.mbdownload.i r5 = r4.d
            r5.b(r6)
        L64:
            return
    }

    final boolean a(android.content.Context r6) {
            r5 = this;
            java.lang.String r0 = "activity"
            java.lang.Object r0 = r6.getSystemService(r0)
            android.app.ActivityManager r0 = (android.app.ActivityManager) r0
            java.util.List r0 = r0.getRunningAppProcesses()
            r1 = 0
            if (r0 != 0) goto L10
            return r1
        L10:
            java.lang.String r6 = r6.getPackageName()
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L34
            java.lang.Object r2 = r0.next()
            android.app.ActivityManager$RunningAppProcessInfo r2 = (android.app.ActivityManager.RunningAppProcessInfo) r2
            int r3 = r2.importance
            r4 = 100
            if (r3 != r4) goto L18
            java.lang.String r2 = r2.processName
            boolean r2 = r2.equals(r6)
            if (r2 == 0) goto L18
            r6 = 1
            return r6
        L34:
            return r1
    }

    final boolean a(com.mbridge.msdk.mbdownload.b.a r7, boolean r8, android.os.Messenger r9) {
            r6 = this;
            if (r8 == 0) goto L69
            java.util.Random r8 = new java.util.Random
            r8.<init>()
            r0 = 1000(0x3e8, float:1.401E-42)
            int r8 = r8.nextInt(r0)
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r0 = r6.c
            java.lang.String r1 = "_"
            if (r0 == 0) goto L50
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L1b:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L69
            java.lang.Object r2 = r0.next()
            com.mbridge.msdk.mbdownload.b$a r2 = (com.mbridge.msdk.mbdownload.b.a) r2
            java.lang.String r3 = com.mbridge.msdk.mbdownload.e.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            r4.append(r8)
            java.lang.String r5 = " downling  "
            r4.append(r5)
            java.lang.String r5 = r2.c
            r4.append(r5)
            java.lang.String r5 = "   "
            r4.append(r5)
            java.lang.String r2 = r2.d
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)
            goto L1b
        L50:
            java.lang.String r0 = com.mbridge.msdk.mbdownload.e.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            r2.append(r8)
            java.lang.String r8 = "downling  null"
            r2.append(r8)
            java.lang.String r8 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
        L69:
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r8 = r6.c
            r0 = 0
            if (r8 != 0) goto L6f
            return r0
        L6f:
            java.util.Set r8 = r8.keySet()
            java.util.Iterator r8 = r8.iterator()
        L77:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto La8
            java.lang.Object r1 = r8.next()
            com.mbridge.msdk.mbdownload.b$a r1 = (com.mbridge.msdk.mbdownload.b.a) r1
            java.lang.String r2 = r7.f
            r3 = 1
            if (r2 == 0) goto L98
            java.lang.String r2 = r7.f
            java.lang.String r4 = r1.f
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L98
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r7 = r6.c
            r7.put(r1, r9)
            return r3
        L98:
            java.lang.String r2 = r1.d
            java.lang.String r4 = r7.d
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L77
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r7 = r6.c
            r7.put(r1, r9)
            return r3
        La8:
            return r0
    }

    final boolean a(com.mbridge.msdk.mbdownload.c r17, android.content.Intent r18) {
            r16 = this;
            r1 = r16
            r0 = r17
            r2 = 0
            android.app.Service r3 = r17.c()     // Catch: java.lang.Exception -> L2ec
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Exception -> L2ec
            android.os.Bundle r4 = r18.getExtras()     // Catch: java.lang.Exception -> L2ec
            java.lang.String r5 = "com.mbridge.msdk.broadcast.download.msg"
            java.lang.String r4 = r4.getString(r5)     // Catch: java.lang.Exception -> L2ec
            if (r4 != 0) goto L1a
            return r2
        L1a:
            java.lang.String r5 = ":"
            java.lang.String[] r4 = r4.split(r5)     // Catch: java.lang.Exception -> L2ec
            r5 = r4[r2]     // Catch: java.lang.Exception -> L2ec
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Exception -> L2ec
            r6 = 1
            r4 = r4[r6]     // Catch: java.lang.Exception -> L2ec
            java.lang.String r4 = r4.trim()     // Catch: java.lang.Exception -> L2ec
            if (r5 == 0) goto L2f0
            boolean r7 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L2ec
            if (r7 != 0) goto L2f0
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r7 = r1.b     // Catch: java.lang.Exception -> L2ec
            int r7 = r7.indexOfKey(r5)     // Catch: java.lang.Exception -> L2ec
            if (r7 < 0) goto L2f0
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r7 = r1.b     // Catch: java.lang.Exception -> L2ec
            java.lang.Object r7 = r7.get(r5)     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.e$b r7 = (com.mbridge.msdk.mbdownload.e.b) r7     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.k r8 = r7.a     // Catch: java.lang.Exception -> L2ec
            long[] r9 = r7.f     // Catch: java.lang.Exception -> L2ec
            r10 = r9[r2]     // Catch: java.lang.Exception -> L2ec
            long[] r9 = r7.f     // Catch: java.lang.Exception -> L2ec
            r10 = r9[r6]     // Catch: java.lang.Exception -> L2ec
            long[] r9 = r7.f     // Catch: java.lang.Exception -> L2ec
            r10 = 2
            r11 = r9[r10]     // Catch: java.lang.Exception -> L2ec
            java.lang.String r9 = "continue"
            boolean r9 = r9.equals(r4)     // Catch: java.lang.Exception -> L2ec
            java.lang.String r11 = "Receive action do pause click."
            r12 = 6
            java.lang.String r13 = "Receive action do play click."
            r14 = 7
            java.lang.String r15 = ""
            if (r9 == 0) goto L13a
            if (r8 != 0) goto Lb4
            java.lang.String r4 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            java.lang.String r8 = "Receive action do play click new thread."
            com.mbridge.msdk.foundation.tools.z.a(r4, r8)     // Catch: java.lang.Exception -> L2ec
            boolean r4 = b(r3)     // Catch: java.lang.Exception -> L2ec
            if (r4 != 0) goto L7d
            java.lang.String r0 = com.mbridge.msdk.mbdownload.g.d     // Catch: java.lang.Exception -> L2ec
            android.widget.Toast r0 = android.widget.Toast.makeText(r3, r0, r6)     // Catch: java.lang.Exception -> L2ec
            r0.show()     // Catch: java.lang.Exception -> L2ec
            return r2
        L7d:
            com.mbridge.msdk.mbdownload.k r3 = new com.mbridge.msdk.mbdownload.k     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e     // Catch: java.lang.Exception -> L2ec
            int r8 = r7.d     // Catch: java.lang.Exception -> L2ec
            r3.<init>(r0, r4, r5, r8)     // Catch: java.lang.Exception -> L2ec
            r7.a = r3     // Catch: java.lang.Exception -> L2ec
            r3.start()     // Catch: java.lang.Exception -> L2ec
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L2ec
            r0.what = r10     // Catch: java.lang.Exception -> L2ec
            r0.arg1 = r14     // Catch: java.lang.Exception -> L2ec
            r0.arg2 = r5     // Catch: java.lang.Exception -> L2ec
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r3 = r1.c     // Catch: android.os.RemoteException -> Lad java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e     // Catch: android.os.RemoteException -> Lad java.lang.Exception -> L2ec
            java.lang.Object r3 = r3.get(r4)     // Catch: android.os.RemoteException -> Lad java.lang.Exception -> L2ec
            if (r3 == 0) goto Lb3
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r3 = r1.c     // Catch: android.os.RemoteException -> Lad java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e     // Catch: android.os.RemoteException -> Lad java.lang.Exception -> L2ec
            java.lang.Object r3 = r3.get(r4)     // Catch: android.os.RemoteException -> Lad java.lang.Exception -> L2ec
            android.os.Messenger r3 = (android.os.Messenger) r3     // Catch: android.os.RemoteException -> Lad java.lang.Exception -> L2ec
            r3.send(r0)     // Catch: android.os.RemoteException -> Lad java.lang.Exception -> L2ec
            goto Lb3
        Lad:
            r0 = move-exception
            java.lang.String r3 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.tools.z.c(r3, r15, r0)     // Catch: java.lang.Exception -> L2ec
        Lb3:
            return r6
        Lb4:
            int r0 = r8.c()     // Catch: java.lang.Exception -> L2ec
            int r4 = com.mbridge.msdk.mbdownload.k.b     // Catch: java.lang.Exception -> L2ec
            if (r0 != r4) goto Lfd
            java.lang.String r0 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)     // Catch: java.lang.Exception -> L2ec
            boolean r0 = b(r3)     // Catch: java.lang.Exception -> L2ec
            if (r0 != 0) goto Ld1
            java.lang.String r0 = com.mbridge.msdk.mbdownload.g.d     // Catch: java.lang.Exception -> L2ec
            android.widget.Toast r0 = android.widget.Toast.makeText(r3, r0, r6)     // Catch: java.lang.Exception -> L2ec
            r0.show()     // Catch: java.lang.Exception -> L2ec
            return r2
        Ld1:
            r8.b()     // Catch: java.lang.Exception -> L2ec
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L2ec
            r0.what = r10     // Catch: java.lang.Exception -> L2ec
            r0.arg1 = r14     // Catch: java.lang.Exception -> L2ec
            r0.arg2 = r5     // Catch: java.lang.Exception -> L2ec
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r3 = r1.c     // Catch: android.os.RemoteException -> Lf6 java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e     // Catch: android.os.RemoteException -> Lf6 java.lang.Exception -> L2ec
            java.lang.Object r3 = r3.get(r4)     // Catch: android.os.RemoteException -> Lf6 java.lang.Exception -> L2ec
            if (r3 == 0) goto Lfc
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r3 = r1.c     // Catch: android.os.RemoteException -> Lf6 java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e     // Catch: android.os.RemoteException -> Lf6 java.lang.Exception -> L2ec
            java.lang.Object r3 = r3.get(r4)     // Catch: android.os.RemoteException -> Lf6 java.lang.Exception -> L2ec
            android.os.Messenger r3 = (android.os.Messenger) r3     // Catch: android.os.RemoteException -> Lf6 java.lang.Exception -> L2ec
            r3.send(r0)     // Catch: android.os.RemoteException -> Lf6 java.lang.Exception -> L2ec
            goto Lfc
        Lf6:
            r0 = move-exception
            java.lang.String r3 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.tools.z.c(r3, r15, r0)     // Catch: java.lang.Exception -> L2ec
        Lfc:
            return r6
        Lfd:
            java.lang.String r0 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.tools.z.a(r0, r11)     // Catch: java.lang.Exception -> L2ec
            r8.a()     // Catch: java.lang.Exception -> L2ec
            r8.interrupt()     // Catch: java.lang.Exception -> L109
            goto L10e
        L109:
            r0 = move-exception
            r4 = r0
            r4.printStackTrace()     // Catch: java.lang.Exception -> L2ec
        L10e:
            r1.b(r3, r5)     // Catch: java.lang.Exception -> L2ec
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L2ec
            r0.what = r10     // Catch: java.lang.Exception -> L2ec
            r0.arg1 = r12     // Catch: java.lang.Exception -> L2ec
            r0.arg2 = r5     // Catch: java.lang.Exception -> L2ec
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r3 = r1.c     // Catch: android.os.RemoteException -> L133 java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e     // Catch: android.os.RemoteException -> L133 java.lang.Exception -> L2ec
            java.lang.Object r3 = r3.get(r4)     // Catch: android.os.RemoteException -> L133 java.lang.Exception -> L2ec
            if (r3 == 0) goto L139
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r3 = r1.c     // Catch: android.os.RemoteException -> L133 java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e     // Catch: android.os.RemoteException -> L133 java.lang.Exception -> L2ec
            java.lang.Object r3 = r3.get(r4)     // Catch: android.os.RemoteException -> L133 java.lang.Exception -> L2ec
            android.os.Messenger r3 = (android.os.Messenger) r3     // Catch: android.os.RemoteException -> L133 java.lang.Exception -> L2ec
            r3.send(r0)     // Catch: android.os.RemoteException -> L133 java.lang.Exception -> L2ec
            goto L139
        L133:
            r0 = move-exception
            java.lang.String r3 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.tools.z.c(r3, r15, r0)     // Catch: java.lang.Exception -> L2ec
        L139:
            return r6
        L13a:
            java.lang.String r9 = "cancel"
            boolean r9 = r9.equals(r4)     // Catch: java.lang.Exception -> L2ec
            r2 = 5
            if (r9 == 0) goto L1c0
            java.lang.String r0 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            java.lang.String r4 = "Receive action do stop click."
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)     // Catch: java.lang.Exception -> L2ec
            if (r8 == 0) goto L19e
            r8.a(r10)     // Catch: java.lang.Throwable -> L150 java.lang.Exception -> L178
            goto L19e
        L150:
            r0 = move-exception
            r4 = r0
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L2ec
            r0.what = r2     // Catch: java.lang.Exception -> L2ec
            r0.arg1 = r2     // Catch: java.lang.Exception -> L2ec
            r0.arg2 = r5     // Catch: java.lang.Exception -> L2ec
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = r1.c     // Catch: android.os.RemoteException -> L174 java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r6 = r7.e     // Catch: android.os.RemoteException -> L174 java.lang.Exception -> L2ec
            java.lang.Object r2 = r2.get(r6)     // Catch: android.os.RemoteException -> L174 java.lang.Exception -> L2ec
            if (r2 == 0) goto L177
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = r1.c     // Catch: android.os.RemoteException -> L174 java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r6 = r7.e     // Catch: android.os.RemoteException -> L174 java.lang.Exception -> L2ec
            java.lang.Object r2 = r2.get(r6)     // Catch: android.os.RemoteException -> L174 java.lang.Exception -> L2ec
            android.os.Messenger r2 = (android.os.Messenger) r2     // Catch: android.os.RemoteException -> L174 java.lang.Exception -> L2ec
            r2.send(r0)     // Catch: android.os.RemoteException -> L174 java.lang.Exception -> L2ec
            goto L177
        L174:
            r1.a(r3, r5)     // Catch: java.lang.Exception -> L2ec
        L177:
            throw r4     // Catch: java.lang.Exception -> L2ec
        L178:
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L2ec
            r0.what = r2     // Catch: java.lang.Exception -> L2ec
            r0.arg1 = r2     // Catch: java.lang.Exception -> L2ec
            r0.arg2 = r5     // Catch: java.lang.Exception -> L2ec
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = r1.c     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            java.lang.Object r2 = r2.get(r4)     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            if (r2 == 0) goto L1bf
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = r1.c     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            java.lang.Object r2 = r2.get(r4)     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            android.os.Messenger r2 = (android.os.Messenger) r2     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            r2.send(r0)     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            goto L1bf
        L19a:
            r1.a(r3, r5)     // Catch: java.lang.Exception -> L2ec
            goto L1bf
        L19e:
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L2ec
            r0.what = r2     // Catch: java.lang.Exception -> L2ec
            r0.arg1 = r2     // Catch: java.lang.Exception -> L2ec
            r0.arg2 = r5     // Catch: java.lang.Exception -> L2ec
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = r1.c     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            java.lang.Object r2 = r2.get(r4)     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            if (r2 == 0) goto L1bf
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = r1.c     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r4 = r7.e     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            java.lang.Object r2 = r2.get(r4)     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            android.os.Messenger r2 = (android.os.Messenger) r2     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
            r2.send(r0)     // Catch: android.os.RemoteException -> L19a java.lang.Exception -> L2ec
        L1bf:
            return r6
        L1c0:
            java.lang.String r9 = "install or active"
            boolean r9 = r9.equals(r4)     // Catch: java.lang.Exception -> L2ec
            if (r9 == 0) goto L1d4
            if (r8 == 0) goto L1cf
            r8.d()     // Catch: java.lang.Exception -> L2ec
            goto L2f0
        L1cf:
            r1.a(r3, r5)     // Catch: java.lang.Exception -> L2ec
            goto L2f0
        L1d4:
            java.lang.String r5 = "parent_view_click"
            boolean r4 = r5.equals(r4)     // Catch: java.lang.Exception -> L2ec
            if (r4 == 0) goto L2f0
            java.lang.String r4 = "workthread"
            java.lang.String r5 = "clickParentView"
            com.mbridge.msdk.foundation.tools.z.a(r4, r5)     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.db.i r4 = com.mbridge.msdk.foundation.db.i.a(r3)     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.db.e r4 = com.mbridge.msdk.foundation.db.e.a(r4)     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r5 = r7.e     // Catch: java.lang.Exception -> L2ec
            java.lang.String r5 = r5.g     // Catch: java.lang.Exception -> L2ec
            int r4 = r4.c(r5)     // Catch: java.lang.Exception -> L2ec
            if (r4 == r2) goto L20d
            if (r4 != r12) goto L1f8
            goto L20d
        L1f8:
            if (r4 == r6) goto L206
            r0 = 9
            if (r4 == r0) goto L206
            r0 = 10
            if (r4 == r0) goto L206
            r0 = 11
            if (r4 != r0) goto L2f0
        L206:
            if (r8 == 0) goto L2f0
            r8.d()     // Catch: java.lang.Exception -> L2ec
            goto L2f0
        L20d:
            java.lang.String r2 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            java.lang.String r4 = "Receive action clickParentView to do play click."
            com.mbridge.msdk.foundation.tools.z.a(r2, r4)     // Catch: java.lang.Exception -> L2ec
            if (r8 != 0) goto L269
            java.lang.String r2 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.tools.z.a(r2, r13)     // Catch: java.lang.Exception -> L2ec
            boolean r2 = b(r3)     // Catch: java.lang.Exception -> L2ec
            if (r2 != 0) goto L22c
            java.lang.String r0 = com.mbridge.msdk.mbdownload.g.d     // Catch: java.lang.Exception -> L2ec
            android.widget.Toast r0 = android.widget.Toast.makeText(r3, r0, r6)     // Catch: java.lang.Exception -> L2ec
            r0.show()     // Catch: java.lang.Exception -> L2ec
            goto L2f0
        L22c:
            com.mbridge.msdk.mbdownload.k r2 = new com.mbridge.msdk.mbdownload.k     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r3 = r7.e     // Catch: java.lang.Exception -> L2ec
            int r4 = r7.c     // Catch: java.lang.Exception -> L2ec
            int r5 = r7.d     // Catch: java.lang.Exception -> L2ec
            r2.<init>(r0, r3, r4, r5)     // Catch: java.lang.Exception -> L2ec
            r7.a = r2     // Catch: java.lang.Exception -> L2ec
            r2.start()     // Catch: java.lang.Exception -> L2ec
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L2ec
            r0.what = r10     // Catch: java.lang.Exception -> L2ec
            r0.arg1 = r14     // Catch: java.lang.Exception -> L2ec
            int r2 = r7.c     // Catch: java.lang.Exception -> L2ec
            r0.arg2 = r2     // Catch: java.lang.Exception -> L2ec
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = r1.c     // Catch: android.os.RemoteException -> L261 java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r3 = r7.e     // Catch: android.os.RemoteException -> L261 java.lang.Exception -> L2ec
            java.lang.Object r2 = r2.get(r3)     // Catch: android.os.RemoteException -> L261 java.lang.Exception -> L2ec
            if (r2 == 0) goto L2f0
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = r1.c     // Catch: android.os.RemoteException -> L261 java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r3 = r7.e     // Catch: android.os.RemoteException -> L261 java.lang.Exception -> L2ec
            java.lang.Object r2 = r2.get(r3)     // Catch: android.os.RemoteException -> L261 java.lang.Exception -> L2ec
            android.os.Messenger r2 = (android.os.Messenger) r2     // Catch: android.os.RemoteException -> L261 java.lang.Exception -> L2ec
            r2.send(r0)     // Catch: android.os.RemoteException -> L261 java.lang.Exception -> L2ec
            goto L2f0
        L261:
            r0 = move-exception
            java.lang.String r2 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.tools.z.c(r2, r15, r0)     // Catch: java.lang.Exception -> L2ec
            goto L2f0
        L269:
            int r0 = r8.c()     // Catch: java.lang.Exception -> L2ec
            int r2 = com.mbridge.msdk.mbdownload.k.b     // Catch: java.lang.Exception -> L2ec
            if (r0 != r2) goto L2b4
            java.lang.String r0 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)     // Catch: java.lang.Exception -> L2ec
            boolean r0 = b(r3)     // Catch: java.lang.Exception -> L2ec
            if (r0 != 0) goto L286
            java.lang.String r0 = com.mbridge.msdk.mbdownload.g.d     // Catch: java.lang.Exception -> L2ec
            android.widget.Toast r0 = android.widget.Toast.makeText(r3, r0, r6)     // Catch: java.lang.Exception -> L2ec
            r0.show()     // Catch: java.lang.Exception -> L2ec
            goto L2f0
        L286:
            r8.b()     // Catch: java.lang.Exception -> L2ec
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L2ec
            r0.what = r10     // Catch: java.lang.Exception -> L2ec
            r0.arg1 = r14     // Catch: java.lang.Exception -> L2ec
            int r2 = r7.c     // Catch: java.lang.Exception -> L2ec
            r0.arg2 = r2     // Catch: java.lang.Exception -> L2ec
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = r1.c     // Catch: android.os.RemoteException -> L2ad java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r3 = r7.e     // Catch: android.os.RemoteException -> L2ad java.lang.Exception -> L2ec
            java.lang.Object r2 = r2.get(r3)     // Catch: android.os.RemoteException -> L2ad java.lang.Exception -> L2ec
            if (r2 == 0) goto L2f0
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = r1.c     // Catch: android.os.RemoteException -> L2ad java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r3 = r7.e     // Catch: android.os.RemoteException -> L2ad java.lang.Exception -> L2ec
            java.lang.Object r2 = r2.get(r3)     // Catch: android.os.RemoteException -> L2ad java.lang.Exception -> L2ec
            android.os.Messenger r2 = (android.os.Messenger) r2     // Catch: android.os.RemoteException -> L2ad java.lang.Exception -> L2ec
            r2.send(r0)     // Catch: android.os.RemoteException -> L2ad java.lang.Exception -> L2ec
            goto L2f0
        L2ad:
            r0 = move-exception
            java.lang.String r2 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.tools.z.c(r2, r15, r0)     // Catch: java.lang.Exception -> L2ec
            goto L2f0
        L2b4:
            java.lang.String r0 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.tools.z.a(r0, r11)     // Catch: java.lang.Exception -> L2ec
            r8.a()     // Catch: java.lang.Exception -> L2ec
            int r0 = r7.c     // Catch: java.lang.Exception -> L2ec
            r1.b(r3, r0)     // Catch: java.lang.Exception -> L2ec
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L2ec
            r0.what = r10     // Catch: java.lang.Exception -> L2ec
            r0.arg1 = r12     // Catch: java.lang.Exception -> L2ec
            int r2 = r7.c     // Catch: java.lang.Exception -> L2ec
            r0.arg2 = r2     // Catch: java.lang.Exception -> L2ec
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = r1.c     // Catch: android.os.RemoteException -> L2e5 java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r3 = r7.e     // Catch: android.os.RemoteException -> L2e5 java.lang.Exception -> L2ec
            java.lang.Object r2 = r2.get(r3)     // Catch: android.os.RemoteException -> L2e5 java.lang.Exception -> L2ec
            if (r2 == 0) goto L2f0
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = r1.c     // Catch: android.os.RemoteException -> L2e5 java.lang.Exception -> L2ec
            com.mbridge.msdk.mbdownload.b$a r3 = r7.e     // Catch: android.os.RemoteException -> L2e5 java.lang.Exception -> L2ec
            java.lang.Object r2 = r2.get(r3)     // Catch: android.os.RemoteException -> L2e5 java.lang.Exception -> L2ec
            android.os.Messenger r2 = (android.os.Messenger) r2     // Catch: android.os.RemoteException -> L2e5 java.lang.Exception -> L2ec
            r2.send(r0)     // Catch: android.os.RemoteException -> L2e5 java.lang.Exception -> L2ec
            goto L2f0
        L2e5:
            r0 = move-exception
            java.lang.String r2 = com.mbridge.msdk.mbdownload.e.a     // Catch: java.lang.Exception -> L2ec
            com.mbridge.msdk.foundation.tools.z.c(r2, r15, r0)     // Catch: java.lang.Exception -> L2ec
            goto L2f0
        L2ec:
            r0 = move-exception
            r0.printStackTrace()
        L2f0:
            r2 = 0
            return r2
    }
}
