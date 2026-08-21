package com.mbridge.msdk.mbjscommon.confirmation;

public final class d {
    com.mbridge.msdk.widget.custom.baseview.MBButton a;
    private int b;
    private int c;
    private int d;
    private java.lang.String e;
    private java.lang.String f;
    private int g;
    private int h;
    private com.mbridge.msdk.out.IDownloadListener i;




    public d(com.mbridge.msdk.widget.custom.baseview.MBButton r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.c()
            return
    }

    static int a(com.mbridge.msdk.mbjscommon.confirmation.d r0, int r1) {
            r0.c = r1
            return r1
    }

    static void a(com.mbridge.msdk.mbjscommon.confirmation.d r3) {
            com.mbridge.msdk.widget.custom.baseview.MBButton r0 = r3.a
            if (r0 == 0) goto L25
            java.lang.String r0 = r3.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1e
            com.mbridge.msdk.widget.custom.baseview.MBButton r3 = r3.a
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "mbridge_cm_progress_status_descri_default"
            java.lang.String r2 = "string"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r1, r2)
            r3.setText(r0)
            goto L25
        L1e:
            com.mbridge.msdk.widget.custom.baseview.MBButton r0 = r3.a
            java.lang.String r3 = r3.e
            r0.setText(r3)
        L25:
            return
    }

    static void b(com.mbridge.msdk.mbjscommon.confirmation.d r4) {
            com.mbridge.msdk.widget.custom.baseview.MBButton r0 = r4.a
            if (r0 == 0) goto L38
            r1 = 0
            r0.setIndeterminateProgressMode(r1)
            com.mbridge.msdk.widget.custom.baseview.MBButton r0 = r4.a
            com.mbridge.msdk.mbjscommon.confirmation.d$2 r1 = new com.mbridge.msdk.mbjscommon.confirmation.d$2
            r1.<init>(r4)
            r0.post(r1)
            int r0 = r4.d
            r1 = 100
            if (r0 != r1) goto L38
            com.mbridge.msdk.widget.custom.baseview.MBButton r0 = r4.a     // Catch: java.lang.Exception -> L34
            android.content.Context r0 = r0.getContext()     // Catch: java.lang.Exception -> L34
            android.content.res.Resources r1 = r0.getResources()     // Catch: java.lang.Exception -> L34
            java.lang.String r2 = "mbridge_cm_progress_status_descri_ins"
            java.lang.String r3 = "string"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r3)     // Catch: java.lang.Exception -> L34
            java.lang.String r0 = r1.getString(r0)     // Catch: java.lang.Exception -> L34
            com.mbridge.msdk.widget.custom.baseview.MBButton r4 = r4.a     // Catch: java.lang.Exception -> L34
            r4.setText(r0)     // Catch: java.lang.Exception -> L34
            goto L38
        L34:
            r4 = move-exception
            r4.printStackTrace()
        L38:
            return
    }

    static void b(com.mbridge.msdk.mbjscommon.confirmation.d r0, int r1) {
            r0.d(r1)
            return
    }

    static int c(com.mbridge.msdk.mbjscommon.confirmation.d r0) {
            int r0 = r0.d
            return r0
    }

    private void c() {
            r1 = this;
            int r0 = r1.d()
            r1.d(r0)
            return
    }

    private void c(int r3) {
            r2 = this;
            r2.b = r3
            int r0 = r2.h
            r1 = 1
            if (r0 == r1) goto La
            if (r3 == 0) goto La
            return
        La:
            com.mbridge.msdk.widget.custom.baseview.MBButton r0 = r2.a
            com.mbridge.msdk.mbjscommon.confirmation.d$1 r1 = new com.mbridge.msdk.mbjscommon.confirmation.d$1
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    private int d() {
            r7 = this;
            java.lang.String r0 = r7.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4f
            java.lang.String r0 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            java.lang.String r1 = "getInstance"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            java.lang.reflect.Method r1 = r0.getMethod(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            java.lang.Object r1 = r1.invoke(r3, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            java.lang.String r3 = "getTaskStatusByUniqueKey"
            r4 = 1
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r2] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            java.lang.reflect.Method r0 = r0.getMethod(r3, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            java.lang.String r4 = r7.f     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            r3[r2] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            java.lang.Object r0 = r0.invoke(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            int r0 = r0.intValue()     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
            goto L50
        L3c:
            r0 = move-exception
            r0.printStackTrace()
            goto L4f
        L41:
            r0 = move-exception
            r0.printStackTrace()
            goto L4f
        L46:
            r0 = move-exception
            r0.printStackTrace()
            goto L4f
        L4b:
            r0 = move-exception
            r0.printStackTrace()
        L4f:
            r0 = -1
        L50:
            return r0
    }

    static int d(com.mbridge.msdk.mbjscommon.confirmation.d r0) {
            int r0 = r0.c
            return r0
    }

    private void d(int r5) {
            r4 = this;
            r0 = -1
            r1 = 0
            if (r5 == r0) goto L28
            r0 = 9
            if (r5 == r0) goto L24
            r0 = 3
            r2 = 1
            if (r5 == r2) goto L21
            r3 = 2
            if (r5 == r3) goto L1e
            if (r5 == r0) goto L1b
            r0 = 5
            if (r5 == r0) goto L18
            r0 = 6
            if (r5 == r0) goto L18
            goto L2a
        L18:
            r4.b = r3
            goto L2a
        L1b:
            r4.b = r1
            goto L2a
        L1e:
            r4.b = r2
            goto L2a
        L21:
            r4.b = r0
            goto L2a
        L24:
            r5 = 4
            r4.b = r5
            goto L2a
        L28:
            r4.b = r1
        L2a:
            int r5 = r4.b
            r4.c(r5)
            return
    }

    public final void a() {
            r9 = this;
            int r0 = r9.g
            r1 = 3
            if (r0 != r1) goto L6f
            r9.c()
            int r0 = r9.b
            r1 = 2
            if (r0 != r1) goto L6f
            java.lang.String r0 = r9.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L6f
            com.mbridge.msdk.widget.custom.baseview.MBButton r0 = r9.a     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            android.content.Context r0 = r0.getContext()     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            com.mbridge.msdk.foundation.db.e r0 = com.mbridge.msdk.foundation.db.e.a(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            java.lang.String r2 = r9.f     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            java.lang.String r0 = r0.b(r2)     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            java.lang.String r2 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            java.lang.String r3 = "getInstance"
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            java.lang.reflect.Method r3 = r2.getMethod(r3, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            r5 = 0
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            java.lang.Object r3 = r3.invoke(r5, r6)     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            java.lang.String r5 = "start"
            java.lang.Class[] r6 = new java.lang.Class[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r6[r4] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r8 = 1
            r6[r8] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            java.lang.reflect.Method r2 = r2.getMethod(r5, r6)     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            java.lang.String r5 = r9.f     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            r1[r4] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            r1[r8] = r0     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            r2.invoke(r3, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L5c java.lang.IllegalAccessException -> L61 java.lang.NoSuchMethodException -> L66 java.lang.ClassNotFoundException -> L6b
            goto L6f
        L5c:
            r0 = move-exception
            r0.printStackTrace()
            goto L6f
        L61:
            r0 = move-exception
            r0.printStackTrace()
            goto L6f
        L66:
            r0 = move-exception
            r0.printStackTrace()
            goto L6f
        L6b:
            r0 = move-exception
            r0.printStackTrace()
        L6f:
            return
    }

    public final void a(int r2) {
            r1 = this;
            r1.d = r2
            int r2 = r1.c
            r0 = 2
            if (r2 != r0) goto Lb
            r2 = 1
            r1.c(r2)
        Lb:
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            r0.c()
            return
    }

    public final void b() {
            r9 = this;
            java.lang.String r0 = r9.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L53
            java.lang.String r0 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            java.lang.String r1 = "getInstance"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            java.lang.reflect.Method r1 = r0.getMethod(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            r4 = 0
            java.lang.Object r1 = r1.invoke(r4, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            java.lang.String r3 = "deleteDownloadListener"
            r5 = 2
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r6[r2] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            java.lang.Class<com.mbridge.msdk.out.IDownloadListener> r7 = com.mbridge.msdk.out.IDownloadListener.class
            r8 = 1
            r6[r8] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            java.lang.reflect.Method r0 = r0.getMethod(r3, r6)     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            java.lang.Object[] r3 = new java.lang.Object[r5]     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            java.lang.String r5 = r9.f     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            r3[r2] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            com.mbridge.msdk.out.IDownloadListener r2 = r9.i     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            r3[r8] = r2     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            r0.invoke(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            r9.i = r4     // Catch: java.lang.reflect.InvocationTargetException -> L40 java.lang.IllegalAccessException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
            goto L53
        L40:
            r0 = move-exception
            r0.printStackTrace()
            goto L53
        L45:
            r0 = move-exception
            r0.printStackTrace()
            goto L53
        L4a:
            r0 = move-exception
            r0.printStackTrace()
            goto L53
        L4f:
            r0 = move-exception
            r0.printStackTrace()
        L53:
            return
    }

    public final void b(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void b(java.lang.String r8) {
            r7 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L84
            java.lang.String r0 = "ctaldtype"
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.ak.a(r8, r0)
            java.lang.String r0 = "1"
            boolean r8 = r0.equals(r8)
            r0 = 0
            if (r8 == 0) goto L82
            r8 = 1
            r7.h = r8
            java.lang.String r1 = r7.f
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L27
            com.mbridge.msdk.widget.custom.baseview.MBButton r1 = r7.a
            r2 = 50
            r1.setProgress(r2)
        L27:
            com.mbridge.msdk.out.IDownloadListener r1 = r7.i
            if (r1 != 0) goto L32
            com.mbridge.msdk.mbjscommon.confirmation.d$3 r1 = new com.mbridge.msdk.mbjscommon.confirmation.d$3
            r1.<init>(r7)
            r7.i = r1
        L32:
            java.lang.String r1 = r7.f
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L84
            java.lang.String r1 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            java.lang.String r2 = "getInstance"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            java.lang.reflect.Method r2 = r1.getMethod(r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            java.lang.Object r2 = r2.invoke(r3, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            java.lang.String r3 = "addDownloadListener"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r0] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            java.lang.Class<com.mbridge.msdk.out.IDownloadListener> r6 = com.mbridge.msdk.out.IDownloadListener.class
            r5[r8] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            java.lang.reflect.Method r1 = r1.getMethod(r3, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            java.lang.String r4 = r7.f     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            r3[r0] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            com.mbridge.msdk.out.IDownloadListener r0 = r7.i     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            r3[r8] = r0     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            r1.invoke(r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L6e java.lang.IllegalAccessException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
            goto L84
        L6e:
            r8 = move-exception
            r8.printStackTrace()
            goto L84
        L73:
            r8 = move-exception
            r8.printStackTrace()
            goto L84
        L78:
            r8 = move-exception
            r8.printStackTrace()
            goto L84
        L7d:
            r8 = move-exception
            r8.printStackTrace()
            goto L84
        L82:
            r7.h = r0
        L84:
            return
    }
}
