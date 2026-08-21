package com.mbridge.msdk.click;

public class c {
    static android.os.Handler a;
    private static volatile boolean b;



    static {
            com.mbridge.msdk.click.c$1 r0 = new com.mbridge.msdk.click.c$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.mbridge.msdk.click.c.a = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.io.File r2) {
            java.lang.String r2 = r2.getName()
            java.lang.String r0 = "."
            int r0 = r2.lastIndexOf(r0)
            int r0 = r0 + 1
            int r1 = r2.length()
            java.lang.String r2 = r2.substring(r0, r1)
            java.lang.String r2 = r2.toLowerCase()
            android.webkit.MimeTypeMap r0 = android.webkit.MimeTypeMap.getSingleton()
            java.lang.String r2 = r0.getMimeTypeFromExtension(r2)
            return r2
    }

    public static java.lang.String a(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r0 = "/"
            int r2 = r4.lastIndexOf(r0)
            r3 = -1
            if (r2 != r3) goto L26
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r4 = r4.hashCode()
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            return r4
        L26:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r3 = r4.hashCode()
            int r0 = r4.lastIndexOf(r0)
            int r0 = r0 + 1
            java.lang.String r4 = r4.substring(r0)
            int r4 = r4.hashCode()
            int r3 = r3 + r4
            r2.append(r3)
            r2.append(r1)
            java.lang.String r4 = r2.toString()
            return r4
    }

    public static java.lang.String a(java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L9c
            if (r0 == 0) goto L7
            return r5
        L7:
            android.net.Uri r0 = android.net.Uri.parse(r5)     // Catch: java.lang.Exception -> L9c
            java.lang.String r0 = r0.getHost()     // Catch: java.lang.Exception -> L9c
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L9c
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L9c
            java.lang.String r2 = r2.k()     // Catch: java.lang.Exception -> L9c
            com.mbridge.msdk.c.a r1 = r1.b(r2)     // Catch: java.lang.Exception -> L9c
            if (r1 == 0) goto La0
            java.util.Map r1 = r1.aA()     // Catch: java.lang.Exception -> L9c
            if (r1 == 0) goto La0
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L9c
            if (r2 != 0) goto La0
            java.util.Set r2 = r1.entrySet()     // Catch: java.lang.Exception -> L9c
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L9c
        L35:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L9c
            if (r3 == 0) goto La0
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L9c
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Exception -> L9c
            java.lang.Object r3 = r3.getKey()     // Catch: java.lang.Exception -> L9c
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L9c
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L9c
            if (r4 != 0) goto L35
            boolean r4 = r0.contains(r3)     // Catch: java.lang.Exception -> L9c
            if (r4 == 0) goto L35
            java.lang.Object r0 = r1.get(r3)     // Catch: java.lang.Exception -> L9c
            com.mbridge.msdk.c.a$a r0 = (com.mbridge.msdk.c.a.a) r0     // Catch: java.lang.Exception -> L9c
            java.util.List r1 = r0.d()     // Catch: java.lang.Exception -> L9c
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L9c
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L9c
            int r2 = com.mbridge.msdk.foundation.tools.v.y(r2)     // Catch: java.lang.Exception -> L9c
            float r2 = (float) r2     // Catch: java.lang.Exception -> L9c
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L9c
            java.lang.String r5 = a(r5, r1, r2)     // Catch: java.lang.Exception -> L9c
            java.util.List r1 = r0.c()     // Catch: java.lang.Exception -> L9c
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L9c
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L9c
            int r2 = com.mbridge.msdk.foundation.tools.v.x(r2)     // Catch: java.lang.Exception -> L9c
            float r2 = (float) r2     // Catch: java.lang.Exception -> L9c
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L9c
            java.lang.String r5 = a(r5, r1, r2)     // Catch: java.lang.Exception -> L9c
            java.util.List r1 = r0.a()     // Catch: java.lang.Exception -> L9c
            java.lang.String r5 = a(r5, r1, r6)     // Catch: java.lang.Exception -> L9c
            java.util.List r6 = r0.b()     // Catch: java.lang.Exception -> L9c
            java.lang.String r5 = a(r5, r6, r7)     // Catch: java.lang.Exception -> L9c
            goto La0
        L9c:
            r6 = move-exception
            r6.printStackTrace()
        La0:
            return r5
    }

    private static java.lang.String a(java.lang.String r2, java.util.List<java.lang.String> r3, java.lang.String r4) {
            if (r3 == 0) goto L1d
            java.util.Iterator r3 = r3.iterator()
        L6:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1d
            java.lang.Object r0 = r3.next()
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L6
            java.lang.String r2 = r2.replaceAll(r0, r4)
            goto L6
        L1d:
            return r2
    }

    private static void a(int r8, int r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            android.os.Looper r0 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L49
            android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L49
            if (r0 != r1) goto L20
            com.mbridge.msdk.foundation.same.report.d r2 = new com.mbridge.msdk.foundation.same.report.d     // Catch: java.lang.Throwable -> L49
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L49
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L49
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L49
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r7 = r12
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L49
            goto L51
        L20:
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L49
            r1 = 1000(0x3e8, float:1.401E-42)
            r0.what = r1     // Catch: java.lang.Throwable -> L49
            r0.arg1 = r8     // Catch: java.lang.Throwable -> L49
            r0.arg2 = r9     // Catch: java.lang.Throwable -> L49
            android.os.Bundle r8 = new android.os.Bundle     // Catch: java.lang.Throwable -> L49
            r8.<init>()     // Catch: java.lang.Throwable -> L49
            java.lang.String r9 = "rid"
            r8.putString(r9, r10)     // Catch: java.lang.Throwable -> L49
            java.lang.String r9 = "rid_n"
            r8.putString(r9, r11)     // Catch: java.lang.Throwable -> L49
            java.lang.String r9 = "cid"
            r8.putString(r9, r12)     // Catch: java.lang.Throwable -> L49
            r0.setData(r8)     // Catch: java.lang.Throwable -> L49
            android.os.Handler r8 = com.mbridge.msdk.click.c.a     // Catch: java.lang.Throwable -> L49
            r8.sendMessage(r0)     // Catch: java.lang.Throwable -> L49
            goto L51
        L49:
            r8 = move-exception
            boolean r9 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r9 == 0) goto L51
            r8.printStackTrace()
        L51:
            return
    }

    public static void a(android.app.Activity r7, int r8, boolean r9, android.content.Context r10) {
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "======onActivityStarted:"
            r7.append(r0)
            r7.append(r8)
            java.lang.String r0 = "---"
            r7.append(r0)
            r7.append(r9)
            java.lang.String r7 = r7.toString()
            java.lang.String r0 = "======"
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
            int r7 = android.os.Build.VERSION.SDK_INT
            r1 = 29
            if (r7 < r1) goto L93
            if (r9 != 0) goto L93
            if (r8 != 0) goto L93
            java.lang.String r7 = "======onActivityStarted:inner"
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
            com.mbridge.msdk.foundation.db.i r7 = com.mbridge.msdk.foundation.db.i.a(r10)
            com.mbridge.msdk.foundation.db.e r7 = com.mbridge.msdk.foundation.db.e.a(r7)
            com.mbridge.msdk.foundation.entity.f r7 = r7.a()
            if (r7 == 0) goto L93
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "======dlinfo:"
            r8.append(r9)
            java.lang.String r9 = r7.toString()
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
            java.lang.String r8 = r7.a()
            boolean r9 = android.text.TextUtils.isEmpty(r8)
            if (r9 != 0) goto L93
            java.io.File r9 = new java.io.File
            r9.<init>(r8)
            boolean r8 = r9.exists()
            if (r8 == 0) goto L93
            java.lang.String r1 = r7.c()
            android.net.Uri r8 = android.net.Uri.fromFile(r9)
            java.lang.String r9 = r7.b()
            java.lang.String r0 = r7.c()
            a(r10, r8, r9, r0)
            java.lang.String r2 = r7.d()
            java.lang.String r3 = r7.e()
            java.lang.String r4 = r7.f()
            java.lang.String r5 = r7.h()
            java.lang.String r6 = r7.g()
            r0 = r10
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2, r3, r4, r5, r6)
        L93:
            return
    }

    public static void a(android.content.Context r11, android.net.Uri r12, java.lang.String r13, java.lang.String r14) {
            boolean r0 = com.mbridge.msdk.click.c.b
            if (r0 == 0) goto L12
            java.lang.Class<com.mbridge.msdk.click.c> r0 = com.mbridge.msdk.click.c.class
            monitor-enter(r0)
            boolean r1 = com.mbridge.msdk.click.c.b     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            return
        Ld:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            goto L12
        Lf:
            r11 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            throw r11
        L12:
            r0 = 1
            com.mbridge.msdk.click.c.b = r0
            r1 = 0
            java.io.File r2 = new java.io.File     // Catch: java.net.URISyntaxException -> L25
            java.net.URI r3 = new java.net.URI     // Catch: java.net.URISyntaxException -> L25
            java.lang.String r12 = r12.toString()     // Catch: java.net.URISyntaxException -> L25
            r3.<init>(r12)     // Catch: java.net.URISyntaxException -> L25
            r2.<init>(r3)     // Catch: java.net.URISyntaxException -> L25
            goto L2a
        L25:
            r12 = move-exception
            r12.printStackTrace()
            r2 = r1
        L2a:
            android.content.Intent r12 = new android.content.Intent
            r12.<init>()
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r12.addFlags(r3)
            java.lang.String r3 = "android.intent.action.VIEW"
            r12.setAction(r3)
            r3 = 0
            r4 = -1
            boolean r5 = com.mbridge.msdk.foundation.tools.aj.b(r11)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            if (r5 == 0) goto L109
            boolean r5 = com.mbridge.msdk.foundation.tools.aj.d(r11)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            if (r5 == 0) goto Led
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            r6 = 24
            if (r5 < r6) goto Ldb
            java.lang.String r5 = com.mbridge.msdk.MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            if (r5 != 0) goto L5c
            java.lang.String r5 = com.mbridge.msdk.MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            goto L62
        L5c:
            java.lang.String r5 = "com.mbridge.msdk.foundation.tools.MBFileProvider"
            java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
        L62:
            java.lang.String r6 = "getUriForFile"
            r7 = 3
            java.lang.Class[] r8 = new java.lang.Class[r7]     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.Class<android.content.Context> r9 = android.content.Context.class
            r8[r3] = r9     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.Class<java.lang.String> r9 = java.lang.String.class
            r8[r0] = r9     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.Class<java.io.File> r9 = java.io.File.class
            r10 = 2
            r8[r10] = r9     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.reflect.Method r5 = r5.getMethod(r6, r8)     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.Object[] r6 = new java.lang.Object[r7]     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            r6[r3] = r11     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            r7.<init>()     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            android.content.Context r8 = r11.getApplicationContext()     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.String r8 = r8.getPackageName()     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            r7.append(r8)     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.String r8 = ".mbFileProvider"
            r7.append(r8)     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.String r7 = r7.toString()     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            r6[r0] = r7     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            r6[r10] = r2     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.Object r2 = r5.invoke(r1, r6)     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            android.net.Uri r2 = (android.net.Uri) r2     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            android.net.Uri r2 = (android.net.Uri) r2     // Catch: java.lang.reflect.InvocationTargetException -> La3 java.lang.IllegalArgumentException -> La8 java.lang.IllegalAccessException -> Lad java.lang.SecurityException -> Lb2 java.lang.NoSuchMethodException -> Lb7 java.lang.ClassNotFoundException -> Lbc java.lang.Throwable -> L184 java.lang.Exception -> L217
            r1 = r2
            goto Lc0
        La3:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            goto Lc0
        La8:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            goto Lc0
        Lad:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            goto Lc0
        Lb2:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            goto Lc0
        Lb7:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            goto Lc0
        Lbc:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
        Lc0:
            if (r1 == 0) goto Ld7
            r12.addFlags(r0)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            android.content.ContentResolver r0 = r11.getContentResolver()     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.String r0 = r0.getType(r1)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            r12.setDataAndType(r1, r0)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            c(r11, r14)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            r11.startActivity(r12)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            goto L10c
        Ld7:
            b(r11, r13, r14)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            goto L10c
        Ldb:
            android.net.Uri r0 = android.net.Uri.fromFile(r2)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.String r1 = a(r2)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            r12.setDataAndType(r0, r1)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            c(r11, r14)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            r11.startActivity(r12)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            goto L10c
        Led:
            boolean r0 = com.mbridge.msdk.foundation.tools.aj.e(r11)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            if (r0 == 0) goto Lf7
            b(r11, r13, r14)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            goto L10c
        Lf7:
            android.net.Uri r0 = android.net.Uri.fromFile(r2)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            java.lang.String r1 = a(r2)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            r12.setDataAndType(r0, r1)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            c(r11, r14)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            r11.startActivity(r12)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
            goto L10c
        L109:
            b(r11, r13, r14)     // Catch: java.lang.Throwable -> L184 java.lang.Exception -> L217
        L10c:
            com.mbridge.msdk.click.c.b = r3
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r14)
            java.lang.String r13 = "downloadType"
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            java.lang.Integer r13 = java.lang.Integer.valueOf(r4)
            java.lang.Object r12 = com.mbridge.msdk.foundation.tools.ag.b(r11, r12, r13)
            java.lang.Integer r12 = (java.lang.Integer) r12
            int r12 = r12.intValue()
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            r13.append(r14)
            java.lang.String r0 = "linkType"
            r13.append(r0)
            java.lang.String r13 = r13.toString()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r4)
            java.lang.Object r13 = com.mbridge.msdk.foundation.tools.ag.b(r11, r13, r0)
            java.lang.Integer r13 = (java.lang.Integer) r13
            int r13 = r13.intValue()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r14)
            java.lang.String r1 = "rid"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = ""
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r11, r0, r1)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r14)
            java.lang.String r2 = "rid_n"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = ""
            java.lang.Object r1 = com.mbridge.msdk.foundation.tools.ag.b(r11, r1, r2)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            goto L1fe
        L184:
            b(r11, r13, r14)     // Catch: java.lang.Throwable -> L298
            com.mbridge.msdk.click.c.b = r3
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r14)
            java.lang.String r13 = "downloadType"
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            java.lang.Integer r13 = java.lang.Integer.valueOf(r4)
            java.lang.Object r12 = com.mbridge.msdk.foundation.tools.ag.b(r11, r12, r13)
            java.lang.Integer r12 = (java.lang.Integer) r12
            int r12 = r12.intValue()
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            r13.append(r14)
            java.lang.String r0 = "linkType"
            r13.append(r0)
            java.lang.String r13 = r13.toString()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r4)
            java.lang.Object r13 = com.mbridge.msdk.foundation.tools.ag.b(r11, r13, r0)
            java.lang.Integer r13 = (java.lang.Integer) r13
            int r13 = r13.intValue()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r14)
            java.lang.String r1 = "rid"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = ""
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r11, r0, r1)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r14)
            java.lang.String r2 = "rid_n"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = ""
            java.lang.Object r1 = com.mbridge.msdk.foundation.tools.ag.b(r11, r1, r2)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
        L1fe:
            r2.append(r14)
            java.lang.String r14 = "cid"
            r2.append(r14)
            java.lang.String r14 = r2.toString()
            java.lang.String r2 = ""
            java.lang.Object r11 = com.mbridge.msdk.foundation.tools.ag.b(r11, r14, r2)
            java.lang.String r11 = (java.lang.String) r11
            a(r12, r13, r0, r1, r11)
            goto L297
        L217:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L298
            b(r11, r13, r14)     // Catch: java.lang.Throwable -> L298
            com.mbridge.msdk.click.c.b = r3
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r14)
            java.lang.String r13 = "downloadType"
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            java.lang.Integer r13 = java.lang.Integer.valueOf(r4)
            java.lang.Object r12 = com.mbridge.msdk.foundation.tools.ag.b(r11, r12, r13)
            java.lang.Integer r12 = (java.lang.Integer) r12
            int r12 = r12.intValue()
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            r13.append(r14)
            java.lang.String r0 = "linkType"
            r13.append(r0)
            java.lang.String r13 = r13.toString()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r4)
            java.lang.Object r13 = com.mbridge.msdk.foundation.tools.ag.b(r11, r13, r0)
            java.lang.Integer r13 = (java.lang.Integer) r13
            int r13 = r13.intValue()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r14)
            java.lang.String r1 = "rid"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = ""
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r11, r0, r1)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r14)
            java.lang.String r2 = "rid_n"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = ""
            java.lang.Object r1 = com.mbridge.msdk.foundation.tools.ag.b(r11, r1, r2)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            goto L1fe
        L297:
            return
        L298:
            r12 = move-exception
            com.mbridge.msdk.click.c.b = r3
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            r13.append(r14)
            java.lang.String r0 = "downloadType"
            r13.append(r0)
            java.lang.String r13 = r13.toString()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r4)
            java.lang.Object r13 = com.mbridge.msdk.foundation.tools.ag.b(r11, r13, r0)
            java.lang.Integer r13 = (java.lang.Integer) r13
            int r13 = r13.intValue()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r14)
            java.lang.String r1 = "linkType"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r11, r0, r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r14)
            java.lang.String r2 = "rid"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = ""
            java.lang.Object r1 = com.mbridge.msdk.foundation.tools.ag.b(r11, r1, r2)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r14)
            java.lang.String r3 = "rid_n"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = ""
            java.lang.Object r2 = com.mbridge.msdk.foundation.tools.ag.b(r11, r2, r3)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r14)
            java.lang.String r14 = "cid"
            r3.append(r14)
            java.lang.String r14 = r3.toString()
            java.lang.String r3 = ""
            java.lang.Object r11 = com.mbridge.msdk.foundation.tools.ag.b(r11, r14, r3)
            java.lang.String r11 = (java.lang.String) r11
            a(r13, r0, r1, r2, r11)
            throw r12
    }

    public static void a(android.content.Context r5, java.lang.String r6) {
            java.lang.String r0 = "android.intent.action.VIEW"
            if (r6 == 0) goto L48
            if (r5 != 0) goto L7
            goto L48
        L7:
            r1 = 268435456(0x10000000, float:2.524355E-29)
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Exception -> L30
            android.net.Uri r3 = android.net.Uri.parse(r6)     // Catch: java.lang.Exception -> L30
            r2.<init>(r0, r3)     // Catch: java.lang.Exception -> L30
            r2.addFlags(r1)     // Catch: java.lang.Exception -> L30
            android.content.pm.PackageManager r3 = r5.getPackageManager()     // Catch: java.lang.Exception -> L30
            r4 = 65536(0x10000, float:9.1835E-41)
            android.content.pm.ResolveInfo r3 = r3.resolveActivity(r2, r4)     // Catch: java.lang.Exception -> L30
            if (r3 == 0) goto L2c
            android.content.pm.ActivityInfo r4 = r3.activityInfo     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = r4.packageName     // Catch: java.lang.Exception -> L30
            android.content.pm.ActivityInfo r3 = r3.activityInfo     // Catch: java.lang.Exception -> L30
            java.lang.String r3 = r3.name     // Catch: java.lang.Exception -> L30
            r2.setClassName(r4, r3)     // Catch: java.lang.Exception -> L30
        L2c:
            r5.startActivity(r2)     // Catch: java.lang.Exception -> L30
            goto L48
        L30:
            r2 = move-exception
            r2.printStackTrace()
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Exception -> L44
            android.net.Uri r6 = android.net.Uri.parse(r6)     // Catch: java.lang.Exception -> L44
            r2.<init>(r0, r6)     // Catch: java.lang.Exception -> L44
            r2.addFlags(r1)     // Catch: java.lang.Exception -> L44
            r5.startActivity(r2)     // Catch: java.lang.Exception -> L44
            goto L48
        L44:
            r5 = move-exception
            r5.printStackTrace()
        L48:
            return
    }

    public static void a(android.content.Context r5, java.lang.String r6, java.lang.String r7) {
            java.lang.String r0 = "downloadType"
            java.lang.String r1 = ""
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lac
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r3.<init>()     // Catch: java.lang.Throwable -> Lac
            r3.append(r7)     // Catch: java.lang.Throwable -> Lac
            r3.append(r0)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Lac
            r4 = 3
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> Lac
            com.mbridge.msdk.foundation.tools.ag.a(r2, r3, r4)     // Catch: java.lang.Throwable -> Lac
            a(r5, r6)     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r6.<init>()     // Catch: java.lang.Throwable -> Lac
            r6.append(r7)     // Catch: java.lang.Throwable -> Lac
            r6.append(r0)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Lac
            r0 = -1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> Lac
            java.lang.Object r6 = com.mbridge.msdk.foundation.tools.ag.b(r5, r6, r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Throwable -> Lac
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r2.<init>()     // Catch: java.lang.Throwable -> Lac
            r2.append(r7)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r3 = "linkType"
            r2.append(r3)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lac
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> Lac
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r5, r2, r0)     // Catch: java.lang.Throwable -> Lac
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> Lac
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r2.<init>()     // Catch: java.lang.Throwable -> Lac
            r2.append(r7)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r3 = "rid"
            r2.append(r3)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lac
            java.lang.Object r2 = com.mbridge.msdk.foundation.tools.ag.b(r5, r2, r1)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r3.<init>()     // Catch: java.lang.Throwable -> Lac
            r3.append(r7)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r4 = "rid_n"
            r3.append(r4)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Lac
            java.lang.Object r3 = com.mbridge.msdk.foundation.tools.ag.b(r5, r3, r1)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r4.<init>()     // Catch: java.lang.Throwable -> Lac
            r4.append(r7)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r7 = "cid"
            r4.append(r7)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Throwable -> Lac
            java.lang.Object r5 = com.mbridge.msdk.foundation.tools.ag.b(r5, r7, r1)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> Lac
            a(r6, r0, r2, r3, r5)     // Catch: java.lang.Throwable -> Lac
            goto Lb4
        Lac:
            r5 = move-exception
            boolean r6 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r6 == 0) goto Lb4
            r5.printStackTrace()
        Lb4:
            return
    }

    private static boolean a(android.content.Context r3, android.content.Intent r4) {
            r0 = 0
            boolean r1 = r3 instanceof android.app.Activity     // Catch: java.lang.Throwable -> L25
            r2 = 1
            if (r1 == 0) goto La
            r3.startActivity(r4)     // Catch: java.lang.Throwable -> L25
            return r2
        La:
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L25
            android.content.Context r3 = r3.c()     // Catch: java.lang.Throwable -> L25
            if (r3 == 0) goto L2f
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L25
            android.content.Context r3 = r3.c()     // Catch: java.lang.Throwable -> L25
            boolean r1 = r3 instanceof android.app.Activity     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L24
            r3.startActivity(r4)     // Catch: java.lang.Throwable -> L25
            return r2
        L24:
            return r0
        L25:
            r3 = move-exception
            java.lang.String r4 = r3.getMessage()
            java.lang.String r1 = "SDKCLICK"
            com.mbridge.msdk.foundation.tools.z.c(r1, r4, r3)
        L2f:
            return r0
    }

    public static boolean a(com.mbridge.msdk.foundation.entity.CampaignEx r7) {
            r0 = 0
            r1 = 1
            if (r7 == 0) goto L97
            java.lang.String r2 = r7.getAkdlui()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L16
            java.lang.String r7 = r7.getClickURL()
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r7)
        L16:
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r7 = r7.j()
            java.lang.String r3 = ""
            java.lang.Object r7 = com.mbridge.msdk.foundation.tools.ag.b(r7, r2, r3)
            java.lang.String r7 = r7.toString()
            boolean r3 = android.text.TextUtils.isEmpty(r7)
            if (r3 != 0) goto L3a
            java.io.File r0 = new java.io.File
            r0.<init>(r7)
            boolean r7 = r0.exists()
            r0 = r7 ^ 1
            goto L98
        L3a:
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r7 = r7.j()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            java.lang.String r4 = "process"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r0)
            java.lang.Object r7 = com.mbridge.msdk.foundation.tools.ag.b(r7, r3, r4)
            java.lang.Integer r7 = (java.lang.Integer) r7
            int r7 = r7.intValue()
            int r3 = android.os.Process.myPid()
            if (r7 == 0) goto L97
            if (r7 != r3) goto L97
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r7 = r7.j()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            java.lang.String r2 = "isDowning"
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r3 = 0
            java.lang.Long r5 = java.lang.Long.valueOf(r3)
            java.lang.Object r7 = com.mbridge.msdk.foundation.tools.ag.b(r7, r2, r5)
            java.lang.Long r7 = (java.lang.Long) r7
            long r5 = r7.longValue()
            int r7 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r7 == 0) goto L97
            goto L98
        L97:
            r0 = r1
        L98:
            return r0
    }

    public static void b(android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = "CommonClickUtil"
            java.lang.String r1 = "com.mbridge.msdk.activity.MBCommonActivity"
            if (r3 == 0) goto L3a
            if (r4 != 0) goto L9
            goto L3a
        L9:
            java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L27 java.lang.ClassNotFoundException -> L29
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L27 java.lang.ClassNotFoundException -> L29
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> L27 java.lang.ClassNotFoundException -> L29
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> L27 java.lang.ClassNotFoundException -> L29
            java.lang.String r1 = "url"
            r2.putExtra(r1, r4)     // Catch: java.lang.Throwable -> L27 java.lang.ClassNotFoundException -> L29
            boolean r4 = r3 instanceof android.view.ContextThemeWrapper     // Catch: java.lang.Throwable -> L27 java.lang.ClassNotFoundException -> L29
            if (r4 != 0) goto L23
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r2.setFlags(r4)     // Catch: java.lang.Throwable -> L27 java.lang.ClassNotFoundException -> L29
        L23:
            r3.startActivity(r2)     // Catch: java.lang.Throwable -> L27 java.lang.ClassNotFoundException -> L29
            goto L3a
        L27:
            r3 = move-exception
            goto L2b
        L29:
            r3 = move-exception
            goto L33
        L2b:
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            goto L3a
        L33:
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L3a:
            return
    }

    private static void b(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L25
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L25
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L25
            r1.<init>()     // Catch: java.lang.Throwable -> L25
            r1.append(r4)     // Catch: java.lang.Throwable -> L25
            java.lang.String r4 = "downloadType"
            r1.append(r4)     // Catch: java.lang.Throwable -> L25
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L25
            r1 = 3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L25
            com.mbridge.msdk.foundation.tools.ag.a(r0, r4, r1)     // Catch: java.lang.Throwable -> L25
            a(r2, r3)     // Catch: java.lang.Throwable -> L25
            goto L2d
        L25:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r3 == 0) goto L2d
            r2.printStackTrace()
        L2d:
            return
    }

    public static void b(com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.a()
            com.mbridge.msdk.click.c$2 r1 = new com.mbridge.msdk.click.c$2
            r1.<init>(r2)
            r0.execute(r1)
            return
    }

    public static void c(android.content.Context r4, java.lang.String r5) {
            com.mbridge.msdk.foundation.db.i r4 = com.mbridge.msdk.foundation.db.i.a(r4)
            com.mbridge.msdk.foundation.db.e r4 = com.mbridge.msdk.foundation.db.e.a(r4)
            int r0 = r4.c(r5)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 1
            r3 = 29
            if (r1 < r3) goto L1f
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            int r1 = r1.b()
            if (r1 != 0) goto L1f
            r1 = r2
            goto L20
        L1f:
            r1 = 0
        L20:
            if (r1 == 0) goto L27
            if (r0 != r2) goto L27
            r4.a(r5)
        L27:
            r1 = 10
            if (r0 != r1) goto L30
            r0 = 11
            r4.a(r5, r0)
        L30:
            return
    }

    public static boolean d(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r3 == 0) goto L1f
            java.lang.String r1 = ""
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto Lc
            goto L1f
        Lc:
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L1f
            r1 = 8192(0x2000, float:1.148E-41)
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r3, r1)     // Catch: java.lang.Exception -> L1f
            if (r2 == 0) goto L1f
            java.lang.String r2 = r2.packageName     // Catch: java.lang.Exception -> L1f
            boolean r2 = r3.equals(r2)     // Catch: java.lang.Exception -> L1f
            return r2
        L1f:
            return r0
    }

    public static boolean e(android.content.Context r5, java.lang.String r6) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L41
            r2 = 1
            if (r1 != 0) goto L4b
            android.net.Uri r1 = android.net.Uri.parse(r6)     // Catch: java.lang.Throwable -> L41
            android.content.Intent r3 = new android.content.Intent     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = "android.intent.action.VIEW"
            r3.<init>(r4, r1)     // Catch: java.lang.Throwable -> L41
            r3.setData(r1)     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = r1.getScheme()     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = "L7QthdSsLkP8"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.t.b(r4)     // Catch: java.lang.Throwable -> L41
            boolean r1 = r1.startsWith(r4)     // Catch: java.lang.Throwable -> L41
            if (r1 != 0) goto L30
            com.mbridge.msdk.foundation.tools.o r1 = com.mbridge.msdk.foundation.tools.o.a()     // Catch: java.lang.Throwable -> L41
            boolean r6 = r1.a(r6)     // Catch: java.lang.Throwable -> L41
            if (r6 == 0) goto L37
        L30:
            boolean r6 = a(r5, r3)     // Catch: java.lang.Throwable -> L41
            if (r6 == 0) goto L37
            return r2
        L37:
            r6 = 268435456(0x10000000, float:2.524355E-29)
            r3.setFlags(r6)     // Catch: java.lang.Throwable -> L41
            r5.startActivity(r3)     // Catch: java.lang.Throwable -> L41
            r0 = r2
            goto L4b
        L41:
            r5 = move-exception
            java.lang.String r6 = r5.getMessage()
            java.lang.String r1 = "SDKCLICK"
            com.mbridge.msdk.foundation.tools.z.c(r1, r6, r5)
        L4b:
            return r0
    }

    public static void f(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L51
            if (r1 != 0) goto L5e
            boolean r1 = d(r3, r4)     // Catch: java.lang.Exception -> L51
            if (r1 == 0) goto L5e
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Exception -> L51
            android.content.Intent r4 = r1.getLaunchIntentForPackage(r4)     // Catch: java.lang.Exception -> L51
            if (r4 == 0) goto L5e
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Exception -> L51
            java.util.List r4 = r1.queryIntentActivities(r4, r0)     // Catch: java.lang.Exception -> L51
            if (r4 == 0) goto L5e
            int r1 = r4.size()     // Catch: java.lang.Exception -> L51
            if (r1 <= 0) goto L5e
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Exception -> L51
            java.lang.Object r4 = r4.next()     // Catch: java.lang.Exception -> L51
            android.content.pm.ResolveInfo r4 = (android.content.pm.ResolveInfo) r4     // Catch: java.lang.Exception -> L51
            if (r4 == 0) goto L5e
            android.content.ComponentName r1 = new android.content.ComponentName     // Catch: java.lang.Exception -> L51
            android.content.pm.ActivityInfo r2 = r4.activityInfo     // Catch: java.lang.Exception -> L51
            java.lang.String r2 = r2.packageName     // Catch: java.lang.Exception -> L51
            android.content.pm.ActivityInfo r4 = r4.activityInfo     // Catch: java.lang.Exception -> L51
            java.lang.String r4 = r4.name     // Catch: java.lang.Exception -> L51
            r1.<init>(r2, r4)     // Catch: java.lang.Exception -> L51
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Exception -> L51
            r4.<init>()     // Catch: java.lang.Exception -> L51
            r4.setComponent(r1)     // Catch: java.lang.Exception -> L51
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r4.addFlags(r1)     // Catch: java.lang.Exception -> L51
            r3.startActivity(r4)     // Catch: java.lang.Exception -> L51
            goto L5e
        L51:
            r4 = move-exception
            java.lang.String r1 = "The app connot start up"
            android.widget.Toast r3 = android.widget.Toast.makeText(r3, r1, r0)
            r3.show()
            r4.printStackTrace()
        L5e:
            return
    }
}
