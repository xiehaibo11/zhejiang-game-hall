package com.mbridge.msdk.d;

public class b {
    private static volatile com.mbridge.msdk.d.b b;
    private java.lang.ref.WeakReference<android.content.Context> a;
    private android.os.Handler c;





    private b(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.d.b$3 r0 = new com.mbridge.msdk.d.b$3
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.c = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r3)
            r2.a = r0
            return
    }

    private android.database.Cursor a(java.lang.String r7, java.lang.String r8, android.content.Context r9) {
            r6 = this;
            android.content.ContentResolver r0 = r9.getContentResolver()
            android.net.Uri r1 = android.net.Uri.parse(r7)
            java.lang.String r7 = "title"
            java.lang.String[] r2 = new java.lang.String[]{r7}
            r7 = 1
            java.lang.String[] r4 = new java.lang.String[r7]
            r7 = 0
            r4[r7] = r8
            java.lang.String r3 = "title=?"
            r5 = 0
            android.database.Cursor r7 = r0.query(r1, r2, r3, r4, r5)
            return r7
    }

    static android.os.Handler a(com.mbridge.msdk.d.b r0) {
            android.os.Handler r0 = r0.c
            return r0
    }

    public static com.mbridge.msdk.d.b a(android.content.Context r2) {
            com.mbridge.msdk.d.b r0 = com.mbridge.msdk.d.b.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.d.b> r0 = com.mbridge.msdk.d.b.class
            monitor-enter(r0)
            com.mbridge.msdk.d.b r1 = com.mbridge.msdk.d.b.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.d.b r1 = new com.mbridge.msdk.d.b     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.d.b.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.d.b r2 = com.mbridge.msdk.d.b.b
            return r2
    }

    private void a(android.app.Activity r1) {
            r0 = this;
            if (r1 == 0) goto L5
            r1.finish()
        L5:
            return
    }

    private void a(android.content.Context r5, com.mbridge.msdk.c.a r6) {
            r4 = this;
            java.lang.String r0 = r6.D()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L76
            com.mbridge.msdk.foundation.db.i r5 = com.mbridge.msdk.foundation.db.i.a(r5)
            com.mbridge.msdk.foundation.db.f r5 = com.mbridge.msdk.foundation.db.f.a(r5)
            java.lang.String r6 = r6.D()
            r0 = 0
            java.util.List r5 = r5.a(r6, r0)
            if (r5 == 0) goto L76
            int r6 = r5.size()
            if (r6 <= 0) goto L76
            java.lang.String r6 = "com.android.launcher.permission.UNINSTALL_SHORTCUT"
            boolean r0 = r4.a(r6)
            if (r0 == 0) goto L76
            java.util.Iterator r5 = r5.iterator()
        L2f:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L76
            java.lang.Object r0 = r5.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            java.lang.String r1 = r0.getAppName()
            int r1 = r4.b(r1)
            java.lang.ref.WeakReference<android.content.Context> r2 = r4.a
            java.lang.Object r2 = r2.get()
            android.content.Context r2 = (android.content.Context) r2
            if (r2 == 0) goto L2f
            java.lang.String r3 = "com.android.launcher.permission.READ_SETTINGS"
            boolean r3 = r4.a(r3)
            if (r3 != 0) goto L68
            java.lang.String r3 = "com.google.android.launcher.permission.READ_SETTINGS"
            boolean r3 = r4.a(r3)
            if (r3 == 0) goto L5e
            goto L68
        L5e:
            boolean r3 = r4.a(r6)
            if (r3 == 0) goto L2f
            r4.a(r2, r0, r1)
            goto L2f
        L68:
            java.lang.String r3 = r0.getAppName()
            boolean r3 = r4.a(r2, r3)
            if (r3 == 0) goto L2f
            r4.a(r2, r0, r1)
            goto L2f
        L76:
            return
    }

    private void a(android.content.Context r7, com.mbridge.msdk.foundation.entity.CampaignEx r8, int r9) {
            r6 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.android.launcher.action.UNINSTALL_SHORTCUT"
            r0.<init>(r1)
            java.lang.String r1 = r8.getAppName()
            java.lang.String r2 = "android.intent.extra.shortcut.NAME"
            r0.putExtra(r2, r1)
            android.content.Intent r1 = new android.content.Intent
            java.lang.Class<com.mbridge.msdk.activity.MBCommonActivity> r2 = com.mbridge.msdk.activity.MBCommonActivity.class
            r1.<init>(r7, r2)
            java.lang.String r2 = "android.intent.action.VIEW"
            r1.setAction(r2)
            java.lang.String r2 = "android.intent.extra.shortcut.INTENT"
            r0.putExtra(r2, r1)
            r7.sendBroadcast(r0)
            com.mbridge.msdk.foundation.db.i r7 = com.mbridge.msdk.foundation.db.i.a(r7)
            com.mbridge.msdk.foundation.db.f r7 = com.mbridge.msdk.foundation.db.f.a(r7)
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r0 = r0.b(r1)
            if (r0 != 0) goto L46
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r0.b()
        L46:
            java.lang.String r0 = r0.D()
            java.lang.String r1 = "com.android.launcher.permission.READ_SETTINGS"
            boolean r1 = r6.a(r1)
            java.lang.String r2 = "is_deleted"
            r3 = 2
            r4 = 1
            if (r1 != 0) goto L77
            java.lang.String r1 = "com.google.android.launcher.permission.READ_SETTINGS"
            boolean r1 = r6.a(r1)
            if (r1 == 0) goto L5f
            goto L77
        L5f:
            r9 = -1
            r6.a(r8, r3, r9)
            android.content.ContentValues r9 = new android.content.ContentValues
            r9.<init>()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r9.put(r2, r1)
            java.lang.String r8 = r8.getId()
            r7.a(r8, r9)
            goto La4
        L77:
            java.lang.String r1 = r8.getAppName()
            int r1 = r6.b(r1)
            r5 = 0
            if (r1 >= r9) goto L84
            r9 = r4
            goto L85
        L84:
            r9 = r5
        L85:
            if (r9 == 0) goto La1
            r6.a(r8, r3, r4)
            r8.setIsDeleted(r4)
            android.content.ContentValues r9 = new android.content.ContentValues
            r9.<init>()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r9.put(r2, r1)
            java.lang.String r8 = r8.getId()
            r7.a(r8, r9)
            goto La4
        La1:
            r6.a(r8, r3, r5)
        La4:
            r7.d(r0)
            return
    }

    static void a(com.mbridge.msdk.d.b r8, int r9, java.lang.String r10) {
            java.lang.String r0 = "mb_shortcuts_ctime"
            java.lang.ref.WeakReference<android.content.Context> r1 = r8.a     // Catch: java.lang.Exception -> L68
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Exception -> L68
            android.content.Context r1 = (android.content.Context) r1     // Catch: java.lang.Exception -> L68
            if (r1 != 0) goto Ld
            goto L70
        Ld:
            r2 = 0
            if (r10 == 0) goto L18
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.c.a r2 = r2.b(r10)     // Catch: java.lang.Exception -> L68
        L18:
            if (r2 != 0) goto L22
            com.mbridge.msdk.c.b r10 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.c.a r2 = r10.b()     // Catch: java.lang.Exception -> L68
        L22:
            if (r2 != 0) goto L25
            goto L56
        L25:
            int r10 = r2.B()     // Catch: java.lang.Exception -> L68
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L68
            r4 = 0
            com.mbridge.msdk.foundation.a.a.a r6 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L68
            java.lang.String r6 = r6.b(r0)     // Catch: java.lang.Exception -> L68
            java.lang.String r7 = ""
            boolean r6 = r6.equals(r7)     // Catch: java.lang.Exception -> L68
            if (r6 != 0) goto L4b
            com.mbridge.msdk.foundation.a.a.a r4 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L68
            java.lang.String r0 = r4.b(r0)     // Catch: java.lang.Exception -> L68
            long r4 = java.lang.Long.parseLong(r0)     // Catch: java.lang.Exception -> L68
        L4b:
            long r2 = r2 - r4
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            long r4 = (long) r10     // Catch: java.lang.Exception -> L68
            int r10 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r10 <= 0) goto L56
            r10 = 1
            goto L57
        L56:
            r10 = 0
        L57:
            if (r10 == 0) goto L70
            android.os.Handler r10 = new android.os.Handler     // Catch: java.lang.Exception -> L68
            r10.<init>()     // Catch: java.lang.Exception -> L68
            com.mbridge.msdk.d.b$4 r0 = new com.mbridge.msdk.d.b$4     // Catch: java.lang.Exception -> L68
            r0.<init>(r8, r1)     // Catch: java.lang.Exception -> L68
            long r8 = (long) r9     // Catch: java.lang.Exception -> L68
            r10.postDelayed(r0, r8)     // Catch: java.lang.Exception -> L68
            goto L70
        L68:
            r8 = move-exception
            boolean r9 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r9 == 0) goto L70
            r8.printStackTrace()
        L70:
            return
    }

    static void a(com.mbridge.msdk.d.b r0, android.app.Activity r1) {
            r0.a(r1)
            return
    }

    static void a(com.mbridge.msdk.d.b r3, android.content.Context r4, android.graphics.Bitmap r5, com.mbridge.msdk.foundation.entity.CampaignEx r6, android.app.Activity r7) {
            java.lang.String r0 = r6.getAppName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L64
            if (r5 == 0) goto L64
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L60
            java.lang.String r1 = "com.android.launcher.action.INSTALL_SHORTCUT"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L60
            java.lang.String r1 = "android.intent.extra.shortcut.NAME"
            java.lang.String r2 = r6.getAppName()     // Catch: java.lang.Exception -> L60
            r0.putExtra(r1, r2)     // Catch: java.lang.Exception -> L60
            java.lang.String r1 = "duplicate"
            r2 = 0
            r0.putExtra(r1, r2)     // Catch: java.lang.Exception -> L60
            r1 = 1
            r2 = 140(0x8c, float:1.96E-43)
            android.graphics.Bitmap r5 = android.graphics.Bitmap.createScaledBitmap(r5, r2, r2, r1)     // Catch: java.lang.Exception -> L60
            java.lang.String r1 = "android.intent.extra.shortcut.ICON"
            r0.putExtra(r1, r5)     // Catch: java.lang.Exception -> L60
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Exception -> L60
            java.lang.Class<com.mbridge.msdk.activity.MBCommonActivity> r1 = com.mbridge.msdk.activity.MBCommonActivity.class
            r5.<init>(r4, r1)     // Catch: java.lang.Exception -> L60
            java.lang.String r1 = "intent_flag"
            java.lang.String r2 = "shortcuts"
            r5.putExtra(r1, r2)     // Catch: java.lang.Exception -> L60
            r1 = 0
            org.json.JSONObject r1 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r6)     // Catch: org.json.JSONException -> L42 java.lang.Exception -> L60
            goto L46
        L42:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Exception -> L60
        L46:
            if (r1 == 0) goto L51
            java.lang.String r6 = "intent_jsonobject"
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L60
            r5.putExtra(r6, r1)     // Catch: java.lang.Exception -> L60
        L51:
            r6 = 32768(0x8000, float:4.5918E-41)
            r5.setFlags(r6)     // Catch: java.lang.Exception -> L60
            java.lang.String r6 = "android.intent.extra.shortcut.INTENT"
            r0.putExtra(r6, r5)     // Catch: java.lang.Exception -> L60
            r4.sendBroadcast(r0)     // Catch: java.lang.Exception -> L60
            goto L64
        L60:
            r4 = move-exception
            r4.printStackTrace()
        L64:
            r3.a(r7)
            return
    }

    static void a(com.mbridge.msdk.d.b r0, android.content.Context r1, com.mbridge.msdk.c.a r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.mbridge.msdk.d.b r5, com.mbridge.msdk.foundation.entity.CampaignEx r6, com.mbridge.msdk.c.a r7, com.mbridge.msdk.foundation.db.f r8, int r9) {
            r0 = 0
            r6.setTimestamp(r0)
            java.lang.String r0 = "com.android.launcher.permission.READ_SETTINGS"
            boolean r0 = r5.a(r0)
            java.lang.String r1 = "mb_shortcuts_ctime"
            r2 = -1
            r3 = 0
            r4 = 1
            if (r0 != 0) goto L3b
            java.lang.String r0 = "com.google.android.launcher.permission.READ_SETTINGS"
            boolean r0 = r5.a(r0)
            if (r0 == 0) goto L1b
            goto L3b
        L1b:
            r6.setIsAddSuccesful(r4)
            r5.a(r6, r4, r2)
            r6.setIsAddSuccesful(r2)
            java.lang.String r5 = r7.D()
            r8.a(r6, r5, r3)
            com.mbridge.msdk.foundation.a.a.a r5 = com.mbridge.msdk.foundation.a.a.a.a()
            long r6 = java.lang.System.currentTimeMillis()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            r5.a(r1, r6)
            goto L83
        L3b:
            java.lang.String r0 = r6.getAppName()
            int r0 = r5.b(r0)
            if (r0 <= r9) goto L47
            r9 = r4
            goto L48
        L47:
            r9 = r3
        L48:
            if (r9 == 0) goto L6a
            r6.setIsAddSuccesful(r4)
            java.lang.String r7 = r7.D()
            r8.a(r6, r7, r3)
            r5.a(r6, r4, r4)
            r6.setIsAddSuccesful(r2)
            com.mbridge.msdk.foundation.a.a.a r5 = com.mbridge.msdk.foundation.a.a.a.a()
            long r6 = java.lang.System.currentTimeMillis()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            r5.a(r1, r6)
            goto L83
        L6a:
            r6.setIsAddSuccesful(r3)
            java.lang.String r5 = r7.D()
            r8.a(r6, r5, r3)
            com.mbridge.msdk.foundation.a.a.a r5 = com.mbridge.msdk.foundation.a.a.a.a()
            long r6 = java.lang.System.currentTimeMillis()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            r5.a(r1, r6)
        L83:
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r3, int r4, int r5) {
            r2 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r2.a
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L1a
            int r0 = r3.getIsDeleted()
            r1 = 1
            if (r0 == r1) goto L1a
            java.lang.ref.WeakReference<android.content.Context> r0 = r2.a
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            com.mbridge.msdk.foundation.same.report.e.a(r0, r3, r4, r5)
        L1a:
            return
    }

    private boolean a(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L39
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto La
            goto L39
        La:
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L15
            java.lang.String r1 = r3.c(r4)
        L15:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L39
            android.database.Cursor r4 = r3.a(r1, r5, r4)     // Catch: java.lang.Exception -> L35
            if (r4 == 0) goto L29
            int r5 = r4.getCount()     // Catch: java.lang.Exception -> L35
            if (r5 <= 0) goto L29
            r5 = 1
            r0 = r5
        L29:
            if (r4 == 0) goto L39
            boolean r5 = r4.isClosed()     // Catch: java.lang.Exception -> L35
            if (r5 != 0) goto L39
            r4.close()     // Catch: java.lang.Exception -> L35
            goto L39
        L35:
            r4 = move-exception
            r4.printStackTrace()
        L39:
            return r0
    }

    static boolean a(com.mbridge.msdk.d.b r0, java.lang.String r1) {
            boolean r0 = r0.a(r1)
            return r0
    }

    private boolean a(java.lang.String r4) {
            r3 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r3.a
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            r1 = 0
            if (r0 == 0) goto L1a
            android.content.pm.PackageManager r2 = r0.getPackageManager()
            java.lang.String r0 = r0.getPackageName()
            int r4 = r2.checkPermission(r4, r0)
            if (r4 != 0) goto L1a
            r1 = 1
        L1a:
            return r1
    }

    static int b(com.mbridge.msdk.d.b r0, java.lang.String r1) {
            int r0 = r0.b(r1)
            return r0
    }

    private int b(java.lang.String r5) {
            r4 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r4.a
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            r1 = 0
            if (r0 == 0) goto L47
            java.lang.String r2 = "com.android.launcher.permission.READ_SETTINGS"
            boolean r2 = r4.a(r2)
            if (r2 != 0) goto L1c
            java.lang.String r2 = "com.google.android.launcher.permission.READ_SETTINGS"
            boolean r2 = r4.a(r2)
            if (r2 != 0) goto L1c
            goto L47
        L1c:
            java.lang.String r2 = r4.c(r0)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L47
            android.database.Cursor r5 = r4.a(r2, r5, r0)     // Catch: java.lang.Exception -> L43
            if (r5 == 0) goto L37
            int r0 = r5.getCount()     // Catch: java.lang.Exception -> L43
            if (r0 <= 0) goto L37
            int r5 = r5.getCount()     // Catch: java.lang.Exception -> L43
            return r5
        L37:
            if (r5 == 0) goto L47
            boolean r0 = r5.isClosed()     // Catch: java.lang.Exception -> L43
            if (r0 != 0) goto L47
            r5.close()     // Catch: java.lang.Exception -> L43
            goto L47
        L43:
            r5 = move-exception
            r5.printStackTrace()
        L47:
            return r1
    }

    private java.lang.String b(android.content.Context r1) {
            r0 = this;
            java.lang.String r1 = ""
            return r1
    }

    static void b(com.mbridge.msdk.d.b r0, android.content.Context r1, com.mbridge.msdk.c.a r2) {
            r0.a(r1, r2)
            return
    }

    private java.lang.String c(android.content.Context r3) {
            r2 = this;
            java.lang.String r3 = r2.b(r3)
            java.lang.String r0 = ""
            if (r3 == 0) goto L12
            java.lang.String r1 = r3.trim()
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L16
        L12:
            r2.b()
            r3 = r0
        L16:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L2e
            int r3 = android.os.Build.VERSION.SDK_INT
            r0 = 8
            if (r3 >= r0) goto L25
            java.lang.String r3 = "com.android.launcher.settings"
            goto L2e
        L25:
            r0 = 19
            if (r3 >= r0) goto L2c
            java.lang.String r3 = "com.android.launcher2.settings"
            goto L2e
        L2c:
            java.lang.String r3 = "com.android.launcher3.settings"
        L2e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "content://"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "/favorites?notify=true"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    public final int a() {
            r4 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r4.a
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            r1 = 0
            if (r0 != 0) goto Lc
            return r1
        Lc:
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r3.k()
            com.mbridge.msdk.c.a r2 = r2.b(r3)
            if (r2 != 0) goto L2e
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r2 = r2.b()
        L2e:
            java.lang.String r2 = r2.D()
            java.util.List r0 = r0.a(r2, r1)
            if (r0 == 0) goto L43
            int r2 = r0.size()
            if (r2 <= 0) goto L43
            int r0 = r0.size()
            return r0
        L43:
            return r1
    }

    public final void a(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r2.a     // Catch: java.lang.Exception -> L19
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Exception -> L19
            android.content.Context r0 = (android.content.Context) r0     // Catch: java.lang.Exception -> L19
            if (r0 != 0) goto Lb
            return
        Lb:
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Exception -> L19
            com.mbridge.msdk.d.b$2 r1 = new com.mbridge.msdk.d.b$2     // Catch: java.lang.Exception -> L19
            r1.<init>(r2, r4, r3)     // Catch: java.lang.Exception -> L19
            r0.<init>(r1)     // Catch: java.lang.Exception -> L19
            r0.start()     // Catch: java.lang.Exception -> L19
            goto L21
        L19:
            r3 = move-exception
            boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r4 == 0) goto L21
            r3.printStackTrace()
        L21:
            return
    }

    public final void a(com.mbridge.msdk.c.a r8) {
            r7 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r7.a     // Catch: java.lang.Exception -> L81
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Exception -> L81
            android.content.Context r0 = (android.content.Context) r0     // Catch: java.lang.Exception -> L81
            if (r0 != 0) goto Lb
            return
        Lb:
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> L81
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)     // Catch: java.lang.Exception -> L81
            java.lang.String r8 = r8.D()     // Catch: java.lang.Exception -> L81
            r1 = 0
            java.util.List r8 = r0.a(r8, r1)     // Catch: java.lang.Exception -> L81
            if (r8 == 0) goto L85
            int r2 = r8.size()     // Catch: java.lang.Exception -> L81
            if (r2 <= 0) goto L85
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Exception -> L81
        L28:
            boolean r2 = r8.hasNext()     // Catch: java.lang.Exception -> L81
            if (r2 == 0) goto L85
            java.lang.Object r2 = r8.next()     // Catch: java.lang.Exception -> L81
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Exception -> L81
            int r3 = r2.getIsAddSuccesful()     // Catch: java.lang.Exception -> L81
            if (r3 != 0) goto L28
            int r3 = r2.getIsDeleted()     // Catch: java.lang.Exception -> L81
            if (r3 != 0) goto L28
            java.lang.String r3 = r2.getAppName()     // Catch: java.lang.Exception -> L81
            int r3 = r7.b(r3)     // Catch: java.lang.Exception -> L81
            r4 = 1
            if (r3 == 0) goto L60
            r7.a(r2, r4, r4)     // Catch: java.lang.Exception -> L81
            com.mbridge.msdk.foundation.a.a.a r3 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L81
            java.lang.String r4 = "mb_shortcuts_ctime"
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L81
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> L81
            r3.a(r4, r5)     // Catch: java.lang.Exception -> L81
            goto L63
        L60:
            r7.a(r2, r4, r1)     // Catch: java.lang.Exception -> L81
        L63:
            r3 = -1
            r2.setIsAddSuccesful(r3)     // Catch: java.lang.Exception -> L81
            android.content.ContentValues r3 = new android.content.ContentValues     // Catch: java.lang.Exception -> L81
            r3.<init>()     // Catch: java.lang.Exception -> L81
            java.lang.String r4 = "is_add_sucesful"
            int r5 = r2.getIsAddSuccesful()     // Catch: java.lang.Exception -> L81
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L81
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L81
            java.lang.String r2 = r2.getId()     // Catch: java.lang.Exception -> L81
            r0.a(r2, r3)     // Catch: java.lang.Exception -> L81
            goto L28
        L81:
            r8 = move-exception
            r8.printStackTrace()
        L85:
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r7, android.app.Activity r8) {
            r6 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r6.a
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            if (r0 != 0) goto Lb
            return
        Lb:
            r1 = 0
            if (r0 != 0) goto Lf
            goto L6e
        Lf:
            com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.f r2 = com.mbridge.msdk.foundation.db.f.a(r2)
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r4 = r4.k()
            com.mbridge.msdk.c.a r3 = r3.b(r4)
            if (r3 != 0) goto L31
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r3 = r3.b()
        L31:
            java.lang.String r3 = r3.D()
            java.util.List r2 = r2.a(r3, r1)
            if (r2 == 0) goto L6e
            int r3 = r2.size()
            if (r3 <= 0) goto L6e
            java.util.Iterator r2 = r2.iterator()
        L45:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L6e
            java.lang.Object r3 = r2.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            java.lang.String r4 = r3.getId()
            java.lang.String r5 = r7.getId()
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L45
            java.lang.String r3 = r3.getAppName()
            java.lang.String r4 = r7.getAppName()
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L45
            r1 = 1
        L6e:
            if (r1 == 0) goto L74
            r6.a(r8)
            return
        L74:
            java.lang.String r1 = r7.getIconUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L8f
            com.mbridge.msdk.foundation.same.c.b r1 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            java.lang.String r2 = r7.getIconUrl()
            com.mbridge.msdk.d.b$1 r3 = new com.mbridge.msdk.d.b$1
            r3.<init>(r6, r8, r0, r7)
            r1.a(r2, r3)
            goto L92
        L8f:
            r6.a(r8)
        L92:
            return
    }

    public final java.lang.String b() {
            r4 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.MAIN"
            r0.<init>(r1)
            java.lang.String r1 = "android.intent.category.HOME"
            r0.addCategory(r1)
            java.lang.ref.WeakReference<android.content.Context> r1 = r4.a
            java.lang.Object r1 = r1.get()
            android.content.Context r1 = (android.content.Context) r1
            java.lang.String r2 = ""
            if (r1 != 0) goto L19
            return r2
        L19:
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            r3 = 0
            android.content.pm.ResolveInfo r0 = r1.resolveActivity(r0, r3)
            if (r0 == 0) goto L3b
            android.content.pm.ActivityInfo r1 = r0.activityInfo
            if (r1 != 0) goto L29
            goto L3b
        L29:
            android.content.pm.ActivityInfo r1 = r0.activityInfo
            java.lang.String r1 = r1.packageName
            java.lang.String r3 = "android"
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L36
            return r2
        L36:
            android.content.pm.ActivityInfo r0 = r0.activityInfo
            java.lang.String r0 = r0.packageName
            return r0
        L3b:
            return r2
    }

    public final java.lang.String c() {
            r5 = this;
            java.lang.String r0 = "com.android.launcher.permission.INSTALL_SHORTCUT"
            boolean r0 = r5.a(r0)
            java.lang.String r1 = "1"
            java.lang.String r2 = "0"
            if (r0 == 0) goto Le
            r0 = r1
            goto Lf
        Le:
            r0 = r2
        Lf:
            java.lang.String r3 = "com.android.launcher.permission.UNINSTALL_SHORTCUT"
            boolean r3 = r5.a(r3)
            if (r3 == 0) goto L19
            r3 = r1
            goto L1a
        L19:
            r3 = r2
        L1a:
            java.lang.String r4 = "com.android.launcher.permission.READ_SETTINGS"
            boolean r4 = r5.a(r4)
            if (r4 != 0) goto L2c
            java.lang.String r4 = "com.google.android.launcher.permission.READ_SETTINGS"
            boolean r4 = r5.a(r4)
            if (r4 == 0) goto L2b
            goto L2c
        L2b:
            r1 = r2
        L2c:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "["
            r2.append(r4)
            r2.append(r0)
            java.lang.String r0 = ","
            r2.append(r0)
            r2.append(r3)
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = "]"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
    }
}
