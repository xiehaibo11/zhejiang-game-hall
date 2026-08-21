package com.mbridge.msdk.widget;

public class MBDownloadProgressBar extends android.widget.RelativeLayout {
    public static final int PROGRESS_STATUS_DEFAULT = 0;
    public static final int PROGRESS_STATUS_DOING = 1;
    public static final int PROGRESS_STATUS_INT = 3;
    public static final int PROGRESS_STATUS_OPEN = 4;
    public static final int PROGRESS_STATUS_PAUSE = 2;
    private int a;
    private int b;
    private int c;
    private android.widget.ProgressBar d;
    private android.widget.ImageView e;
    private android.widget.TextView f;
    private java.lang.String g;
    private java.lang.String h;
    private int i;
    private int j;
    private com.mbridge.msdk.out.IDownloadListener k;



    public MBDownloadProgressBar(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public MBDownloadProgressBar(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public MBDownloadProgressBar(android.content.Context r2, android.util.AttributeSet r3, int r4) {
            r1 = this;
            r1.<init>(r2, r3, r4)
            android.view.LayoutInflater r3 = android.view.LayoutInflater.from(r2)
            java.lang.String r4 = "mbridge_same_download_progress_bar_layout"
            java.lang.String r0 = "layout"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r2, r4, r0)
            r0 = 0
            android.view.View r3 = r3.inflate(r4, r0)
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r1.addView(r3)
            java.lang.String r4 = "id"
            java.lang.String r0 = "mbridge_same_download_mbprogress_progress"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r2, r0, r4)
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ProgressBar r0 = (android.widget.ProgressBar) r0
            r1.d = r0
            java.lang.String r0 = "mbridge_same_download_mbprogress_status_icon"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r2, r0, r4)
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.e = r0
            java.lang.String r0 = "mbridge_same_download_mbprogress_status_desc"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r0, r4)
            android.view.View r2 = r3.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.f = r2
            r1.b()
            return
    }

    static int a(com.mbridge.msdk.widget.MBDownloadProgressBar r0, int r1) {
            r0.b = r1
            return r1
    }

    private void a() {
            r4 = this;
            android.widget.ImageView r0 = r4.e
            if (r0 == 0) goto L11
            int r0 = r0.getVisibility()
            r1 = 8
            if (r0 == r1) goto L11
            android.widget.ImageView r0 = r4.e
            r0.setVisibility(r1)
        L11:
            android.widget.ProgressBar r0 = r4.d
            if (r0 == 0) goto L19
            r1 = 0
            r0.setProgress(r1)
        L19:
            android.widget.TextView r0 = r4.f
            if (r0 == 0) goto L3e
            java.lang.String r0 = r4.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L37
            android.widget.TextView r0 = r4.f
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "mbridge_cm_progress_status_descri_default"
            java.lang.String r3 = "string"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r2, r3)
            r0.setText(r1)
            goto L3e
        L37:
            android.widget.TextView r0 = r4.f
            java.lang.String r1 = r4.g
            r0.setText(r1)
        L3e:
            return
    }

    private void a(int r3) {
            r2 = this;
            r2.a = r3
            int r0 = r2.j
            r1 = 1
            if (r0 == r1) goto La
            if (r3 == 0) goto La
            return
        La:
            com.mbridge.msdk.widget.MBDownloadProgressBar$1 r0 = new com.mbridge.msdk.widget.MBDownloadProgressBar$1
            r0.<init>(r2, r3)
            r2.post(r0)
            return
    }

    static void a(com.mbridge.msdk.widget.MBDownloadProgressBar r0) {
            r0.a()
            return
    }

    private void b() {
            r1 = this;
            int r0 = r1.d()
            r1.b(r0)
            return
    }

    private void b(int r5) {
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
            r4.a = r3
            goto L2a
        L1b:
            r4.a = r1
            goto L2a
        L1e:
            r4.a = r2
            goto L2a
        L21:
            r4.a = r0
            goto L2a
        L24:
            r5 = 4
            r4.a = r5
            goto L2a
        L28:
            r4.a = r1
        L2a:
            int r5 = r4.a
            r4.a(r5)
            return
    }

    static void b(com.mbridge.msdk.widget.MBDownloadProgressBar r2) {
            android.widget.ImageView r0 = r2.e
            if (r0 == 0) goto L10
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L10
            android.widget.ImageView r0 = r2.e
            r1 = 0
            r0.setVisibility(r1)
        L10:
            android.widget.ProgressBar r0 = r2.d
            if (r0 == 0) goto L19
            int r1 = r2.c
            r0.setProgress(r1)
        L19:
            android.widget.TextView r0 = r2.f
            if (r0 == 0) goto L33
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = r2.c
            r1.append(r2)
            java.lang.String r2 = "%"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            r0.setText(r2)
        L33:
            return
    }

    static void b(com.mbridge.msdk.widget.MBDownloadProgressBar r0, int r1) {
            r0.b(r1)
            return
    }

    private void c() {
            r9 = this;
            java.lang.String r0 = r9.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L61
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            com.mbridge.msdk.foundation.db.e r0 = com.mbridge.msdk.foundation.db.e.a(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            java.lang.String r1 = r9.h     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            java.lang.String r0 = r0.b(r1)     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            java.lang.String r1 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            java.lang.String r2 = "getInstance"
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            java.lang.reflect.Method r2 = r1.getMethod(r2, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            r4 = 0
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            java.lang.Object r2 = r2.invoke(r4, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            java.lang.String r4 = "start"
            r5 = 2
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r6[r3] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r8 = 1
            r6[r8] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            java.lang.reflect.Method r1 = r1.getMethod(r4, r6)     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            java.lang.String r5 = r9.h     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            r4[r3] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            r4[r8] = r0     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            r1.invoke(r2, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L4e java.lang.IllegalAccessException -> L53 java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5d
            goto L61
        L4e:
            r0 = move-exception
            r0.printStackTrace()
            goto L61
        L53:
            r0 = move-exception
            r0.printStackTrace()
            goto L61
        L58:
            r0 = move-exception
            r0.printStackTrace()
            goto L61
        L5d:
            r0 = move-exception
            r0.printStackTrace()
        L61:
            return
    }

    static void c(com.mbridge.msdk.widget.MBDownloadProgressBar r3) {
            android.widget.ImageView r0 = r3.e
            if (r0 == 0) goto L10
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L10
            android.widget.ImageView r0 = r3.e
            r1 = 0
            r0.setVisibility(r1)
        L10:
            android.widget.TextView r0 = r3.f
            if (r0 == 0) goto L23
            android.content.Context r3 = r3.getContext()
            java.lang.String r1 = "mbridge_cm_progress_status_descri_pause"
            java.lang.String r2 = "string"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r3, r1, r2)
            r0.setText(r3)
        L23:
            return
    }

    private int d() {
            r7 = this;
            java.lang.String r0 = r7.h
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
            java.lang.String r4 = r7.h     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L41 java.lang.NoSuchMethodException -> L46 java.lang.ClassNotFoundException -> L4b
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

    static void d(com.mbridge.msdk.widget.MBDownloadProgressBar r3) {
            android.widget.ImageView r0 = r3.e
            if (r0 == 0) goto L11
            int r0 = r0.getVisibility()
            r1 = 8
            if (r0 == r1) goto L11
            android.widget.ImageView r0 = r3.e
            r0.setVisibility(r1)
        L11:
            android.widget.ProgressBar r0 = r3.d
            if (r0 == 0) goto L1a
            r1 = 100
            r0.setProgress(r1)
        L1a:
            android.widget.TextView r0 = r3.f
            if (r0 == 0) goto L2d
            android.content.Context r3 = r3.getContext()
            java.lang.String r1 = "mbridge_cm_progress_status_descri_ins"
            java.lang.String r2 = "string"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r3, r1, r2)
            r0.setText(r3)
        L2d:
            return
    }

    private void e() {
            r1 = this;
            com.mbridge.msdk.out.IDownloadListener r0 = r1.k
            if (r0 != 0) goto Le
            com.mbridge.msdk.widget.MBDownloadProgressBar$2 r0 = new com.mbridge.msdk.widget.MBDownloadProgressBar$2
            r0.<init>(r1)
            r1.k = r0
            r1.f()
        Le:
            return
    }

    static void e(com.mbridge.msdk.widget.MBDownloadProgressBar r3) {
            android.widget.ImageView r0 = r3.e
            if (r0 == 0) goto L11
            int r0 = r0.getVisibility()
            r1 = 8
            if (r0 == r1) goto L11
            android.widget.ImageView r0 = r3.e
            r0.setVisibility(r1)
        L11:
            android.widget.ProgressBar r0 = r3.d
            if (r0 == 0) goto L1a
            r1 = 100
            r0.setProgress(r1)
        L1a:
            android.widget.TextView r0 = r3.f
            if (r0 == 0) goto L2d
            android.content.Context r3 = r3.getContext()
            java.lang.String r1 = "mbridge_cm_progress_status_descri_open"
            java.lang.String r2 = "string"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r3, r1, r2)
            r0.setText(r3)
        L2d:
            return
    }

    static int f(com.mbridge.msdk.widget.MBDownloadProgressBar r0) {
            int r0 = r0.b
            return r0
    }

    private void f() {
            r8 = this;
            java.lang.String r0 = r8.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L51
            java.lang.String r0 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            java.lang.String r1 = "getInstance"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            java.lang.reflect.Method r1 = r0.getMethod(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            java.lang.Object r1 = r1.invoke(r3, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            java.lang.String r3 = "addDownloadListener"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r2] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            java.lang.Class<com.mbridge.msdk.out.IDownloadListener> r6 = com.mbridge.msdk.out.IDownloadListener.class
            r7 = 1
            r5[r7] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            java.lang.reflect.Method r0 = r0.getMethod(r3, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            java.lang.String r4 = r8.h     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            r3[r2] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            com.mbridge.msdk.out.IDownloadListener r2 = r8.k     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            r3[r7] = r2     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            r0.invoke(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L3e java.lang.IllegalAccessException -> L43 java.lang.NoSuchMethodException -> L48 java.lang.ClassNotFoundException -> L4d
            goto L51
        L3e:
            r0 = move-exception
            r0.printStackTrace()
            goto L51
        L43:
            r0 = move-exception
            r0.printStackTrace()
            goto L51
        L48:
            r0 = move-exception
            r0.printStackTrace()
            goto L51
        L4d:
            r0 = move-exception
            r0.printStackTrace()
        L51:
            return
    }

    public boolean NotProgressBarInterceptedClick() {
            r3 = this;
            int r0 = r3.i
            r1 = 1
            r2 = 3
            if (r0 != r2) goto L14
            r3.b()
            int r0 = r3.a
            r2 = 2
            if (r0 != r2) goto L12
            r3.c()
            return r1
        L12:
            if (r0 != r1) goto L14
        L14:
            return r1
    }

    public int getmStatus() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r2 = this;
            super.onAttachedToWindow()
            int r0 = r2.a
            if (r0 == 0) goto Lf
            int r0 = r2.j
            r1 = 1
            if (r0 != r1) goto Lf
            r2.e()
        Lf:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r9 = this;
            super.onDetachedFromWindow()
            java.lang.String r0 = r9.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L56
            java.lang.String r0 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            java.lang.String r1 = "getInstance"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            java.lang.reflect.Method r1 = r0.getMethod(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            r4 = 0
            java.lang.Object r1 = r1.invoke(r4, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            java.lang.String r3 = "deleteDownloadListener"
            r5 = 2
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r6[r2] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            java.lang.Class<com.mbridge.msdk.out.IDownloadListener> r7 = com.mbridge.msdk.out.IDownloadListener.class
            r8 = 1
            r6[r8] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            java.lang.reflect.Method r0 = r0.getMethod(r3, r6)     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            java.lang.Object[] r3 = new java.lang.Object[r5]     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            java.lang.String r5 = r9.h     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            r3[r2] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            com.mbridge.msdk.out.IDownloadListener r2 = r9.k     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            r3[r8] = r2     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            r0.invoke(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            r9.k = r4     // Catch: java.lang.reflect.InvocationTargetException -> L43 java.lang.IllegalAccessException -> L48 java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L52
            goto L56
        L43:
            r0 = move-exception
            r0.printStackTrace()
            goto L56
        L48:
            r0 = move-exception
            r0.printStackTrace()
            goto L56
        L4d:
            r0 = move-exception
            r0.printStackTrace()
            goto L56
        L52:
            r0 = move-exception
            r0.printStackTrace()
        L56:
            return
    }

    @Override
    public boolean performClick() {
            r2 = this;
            int r0 = r2.i
            r1 = 3
            if (r0 != r1) goto L13
            r2.e()
            r2.b()
            int r0 = r2.a
            r1 = 2
            if (r0 != r1) goto L13
            r2.c()
        L13:
            boolean r0 = super.performClick()
            return r0
    }

    public void setCtaldtypeUrl(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1e
            java.lang.String r0 = "ctaldtype"
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.ak.a(r2, r0)
            java.lang.String r0 = "1"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L1b
            r2 = 1
            r1.j = r2
            r1.e()
            goto L1e
        L1b:
            r2 = 0
            r1.j = r2
        L1e:
            return
    }

    public void setLinkType(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void setProgress(int r2) {
            r1 = this;
            r1.c = r2
            int r2 = r1.b
            r0 = 2
            if (r2 != r0) goto Lb
            r2 = 1
            r1.a(r2)
        Lb:
            return
    }

    public void setText(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            r0.a()
            return
    }

    public void setTextSize(float r2) {
            r1 = this;
            android.widget.TextView r0 = r1.f
            r0.setTextSize(r2)
            return
    }

    public void setUniqueKey(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            r0.b()
            return
    }
}
