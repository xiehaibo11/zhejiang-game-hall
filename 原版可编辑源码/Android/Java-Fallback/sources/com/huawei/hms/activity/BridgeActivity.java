package com.huawei.hms.activity;

public class BridgeActivity extends android.app.Activity {
    public static final java.lang.String EXTRA_DELEGATE_CLASS_NAME = "intent.extra.DELEGATE_CLASS_OBJECT";
    public static final java.lang.String EXTRA_DELEGATE_UPDATE_INFO = "intent.extra.update.info";
    public static final java.lang.String EXTRA_INTENT = "intent.extra.intent";
    public static final java.lang.String EXTRA_IS_FULLSCREEN = "intent.extra.isfullscreen";
    public static final java.lang.String EXTRA_RESULT = "intent.extra.RESULT";
    public static final int b = 0;
    public com.huawei.hms.activity.IBridgeActivityDelegate a;

    public class a implements android.view.View.OnApplyWindowInsetsListener {
        public final android.view.ViewGroup a;

        public a(com.huawei.hms.activity.BridgeActivity r1, android.view.ViewGroup r2) {
                r0 = this;
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public android.view.WindowInsets onApplyWindowInsets(android.view.View r8, android.view.WindowInsets r9) {
                r7 = this;
                java.lang.String r0 = "BridgeActivity"
                java.lang.String r1 = "com.huawei.android.view.WindowManagerEx$LayoutParamsEx"
                java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                java.lang.String r2 = "getDisplaySideRegion"
                r3 = 1
                java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                java.lang.Class<android.view.WindowInsets> r5 = android.view.WindowInsets.class
                r6 = 0
                r4[r6] = r5     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                r2 = 0
                java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                r3[r6] = r9     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                java.lang.Object r1 = r1.invoke(r2, r3)     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                if (r1 != 0) goto L27
                java.lang.String r1 = "sideRegion is null"
                com.huawei.hms.support.log.HMSLog.i(r0, r1)     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                goto L6a
            L27:
                java.lang.String r2 = "com.huawei.android.view.DisplaySideRegionEx"
                java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                java.lang.String r3 = "getSafeInsets"
                java.lang.Class[] r4 = new java.lang.Class[r6]     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                java.lang.reflect.Method r2 = r2.getMethod(r3, r4)     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                java.lang.Object[] r3 = new java.lang.Object[r6]     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                java.lang.Object r1 = r2.invoke(r1, r3)     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                android.graphics.Rect r1 = (android.graphics.Rect) r1     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                android.view.ViewGroup r2 = r7.a     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                if (r2 == 0) goto L6a
                android.view.ViewGroup r2 = r7.a     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                int r3 = r1.left     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                int r1 = r1.right     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                r2.setPadding(r3, r6, r1, r6)     // Catch: java.lang.IllegalAccessException -> L4b java.lang.NoSuchMethodException -> L4d java.lang.ClassNotFoundException -> L4f java.lang.reflect.InvocationTargetException -> L51
                goto L6a
            L4b:
                r1 = move-exception
                goto L52
            L4d:
                r1 = move-exception
                goto L52
            L4f:
                r1 = move-exception
                goto L52
            L51:
                r1 = move-exception
            L52:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "An exception occurred while reading: onApplyWindowInsets"
                r2.append(r3)
                java.lang.String r1 = r1.getMessage()
                r2.append(r1)
                java.lang.String r1 = r2.toString()
                com.huawei.hms.support.log.HMSLog.e(r0, r1)
            L6a:
                android.view.WindowInsets r8 = r8.onApplyWindowInsets(r9)
                return r8
        }
    }

    static {
            java.lang.String r0 = "ro.build.hw_emui_api_level"
            r1 = 0
            int r0 = a(r0, r1)
            com.huawei.hms.activity.BridgeActivity.b = r0
            return
    }

    public BridgeActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(java.lang.String r7, int r8) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = "getInt"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e
            r2[r5] = r7     // Catch: java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e
            java.lang.Integer r7 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e
            r2[r6] = r7     // Catch: java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e
            java.lang.Object r7 = r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e java.lang.Throwable -> L2e
            return r7
        L2e:
            java.lang.String r7 = "BridgeActivity"
            java.lang.String r0 = "An exception occurred while reading: EMUI_SDK_INT"
            com.huawei.hms.support.log.HMSLog.e(r7, r0)
            return r8
    }

    public static void a(android.view.Window r6, boolean r7) {
            java.lang.Class r0 = r6.getClass()     // Catch: java.lang.reflect.InvocationTargetException -> L1e java.lang.IllegalArgumentException -> L20 java.lang.IllegalAccessException -> L22 java.lang.NoSuchMethodException -> L24
            java.lang.String r1 = "setHwFloating"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L1e java.lang.IllegalArgumentException -> L20 java.lang.IllegalAccessException -> L22 java.lang.NoSuchMethodException -> L24
            java.lang.Class r4 = java.lang.Boolean.TYPE     // Catch: java.lang.reflect.InvocationTargetException -> L1e java.lang.IllegalArgumentException -> L20 java.lang.IllegalAccessException -> L22 java.lang.NoSuchMethodException -> L24
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L1e java.lang.IllegalArgumentException -> L20 java.lang.IllegalAccessException -> L22 java.lang.NoSuchMethodException -> L24
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L1e java.lang.IllegalArgumentException -> L20 java.lang.IllegalAccessException -> L22 java.lang.NoSuchMethodException -> L24
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L1e java.lang.IllegalArgumentException -> L20 java.lang.IllegalAccessException -> L22 java.lang.NoSuchMethodException -> L24
            java.lang.Boolean r7 = java.lang.Boolean.valueOf(r7)     // Catch: java.lang.reflect.InvocationTargetException -> L1e java.lang.IllegalArgumentException -> L20 java.lang.IllegalAccessException -> L22 java.lang.NoSuchMethodException -> L24
            r1[r5] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L1e java.lang.IllegalArgumentException -> L20 java.lang.IllegalAccessException -> L22 java.lang.NoSuchMethodException -> L24
            r0.invoke(r6, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L1e java.lang.IllegalArgumentException -> L20 java.lang.IllegalAccessException -> L22 java.lang.NoSuchMethodException -> L24
            goto L3f
        L1e:
            r6 = move-exception
            goto L25
        L20:
            r6 = move-exception
            goto L25
        L22:
            r6 = move-exception
            goto L25
        L24:
            r6 = move-exception
        L25:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "In setHwFloating, Failed to call Window.setHwFloating()."
            r7.append(r0)
            java.lang.String r6 = r6.getMessage()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            java.lang.String r7 = "BridgeActivity"
            com.huawei.hms.support.log.HMSLog.e(r7, r6)
        L3f:
            return
    }

    public static android.content.Intent getIntentStartBridgeActivity(android.app.Activity r2, java.lang.String r3) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.huawei.hms.activity.BridgeActivity> r1 = com.huawei.hms.activity.BridgeActivity.class
            r0.<init>(r2, r1)
            java.lang.String r1 = "intent.extra.DELEGATE_CLASS_OBJECT"
            r0.putExtra(r1, r3)
            boolean r2 = com.huawei.hms.utils.UIUtil.isActivityFullscreen(r2)
            java.lang.String r3 = "intent.extra.isfullscreen"
            r0.putExtra(r3, r2)
            return r0
    }

    public static android.content.Intent getIntentStartBridgeActivity(android.content.Context r2, java.lang.String r3) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.huawei.hms.activity.BridgeActivity> r1 = com.huawei.hms.activity.BridgeActivity.class
            r0.<init>(r2, r1)
            java.lang.String r2 = "intent.extra.DELEGATE_CLASS_OBJECT"
            r0.putExtra(r2, r3)
            java.lang.String r2 = "intent.extra.isfullscreen"
            r3 = 0
            r0.putExtra(r2, r3)
            return r0
    }

    public final void a() {
            r9 = this;
            android.view.Window r0 = r9.getWindow()
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r0.findViewById(r1)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            java.lang.String r1 = "BridgeActivity"
            if (r0 != 0) goto L17
            java.lang.String r0 = "rootView is null"
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
            return
        L17:
            android.view.Window r2 = r9.getWindow()
            android.view.WindowManager$LayoutParams r2 = r2.getAttributes()
            java.lang.String r3 = "com.huawei.android.view.WindowManagerEx$LayoutParamsEx"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            r4 = 1
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            java.lang.Class<android.view.WindowManager$LayoutParams> r6 = android.view.WindowManager.LayoutParams.class
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            java.lang.reflect.Constructor r5 = r3.getDeclaredConstructor(r5)     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            r6[r7] = r2     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            java.lang.Object r2 = r5.newInstance(r6)     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            java.lang.String r5 = "setDisplaySideMode"
            java.lang.Class[] r6 = new java.lang.Class[r4]     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            java.lang.Class r8 = java.lang.Integer.TYPE     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            r6[r7] = r8     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            java.lang.reflect.Method r3 = r3.getMethod(r5, r6)     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            r5[r7] = r4     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            r3.invoke(r2, r5)     // Catch: java.lang.ClassNotFoundException -> L51 java.lang.InstantiationException -> L53 java.lang.ClassCastException -> L55 java.lang.reflect.InvocationTargetException -> L57 java.lang.IllegalAccessException -> L59 java.lang.NoSuchMethodException -> L5b
            goto L74
        L51:
            r2 = move-exception
            goto L5c
        L53:
            r2 = move-exception
            goto L5c
        L55:
            r2 = move-exception
            goto L5c
        L57:
            r2 = move-exception
            goto L5c
        L59:
            r2 = move-exception
            goto L5c
        L5b:
            r2 = move-exception
        L5c:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "An exception occurred while reading: setDisplaySideMode"
            r3.append(r4)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r2)
        L74:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 20
            if (r1 < r2) goto L8a
            android.view.Window r1 = r9.getWindow()
            android.view.View r1 = r1.getDecorView()
            com.huawei.hms.activity.BridgeActivity$a r2 = new com.huawei.hms.activity.BridgeActivity$a
            r2.<init>(r9, r0)
            r1.setOnApplyWindowInsetsListener(r2)
        L8a:
            return
    }

    public final boolean b() {
            r5 = this;
            android.content.Intent r0 = r5.getIntent()
            java.lang.String r1 = "BridgeActivity"
            r2 = 0
            if (r0 != 0) goto Lf
            java.lang.String r0 = "In initialize, Must not pass in a null intent."
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
            return r2
        Lf:
            java.lang.String r3 = "intent.extra.isfullscreen"
            boolean r3 = r0.getBooleanExtra(r3, r2)
            if (r3 == 0) goto L20
            android.view.Window r3 = r5.getWindow()
            r4 = 1024(0x400, float:1.435E-42)
            r3.setFlags(r4, r4)
        L20:
            java.lang.String r3 = "intent.extra.DELEGATE_CLASS_OBJECT"
            java.lang.String r0 = r0.getStringExtra(r3)
            if (r0 != 0) goto L2e
            java.lang.String r0 = "In initialize, Must not pass in a null or non class object."
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
            return r2
        L2e:
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L5f java.lang.IllegalAccessException -> L61 java.lang.InstantiationException -> L63 java.lang.ClassCastException -> L65
            java.lang.Class<com.huawei.hms.activity.IBridgeActivityDelegate> r3 = com.huawei.hms.activity.IBridgeActivityDelegate.class
            java.lang.Class r0 = r0.asSubclass(r3)     // Catch: java.lang.ClassNotFoundException -> L5f java.lang.IllegalAccessException -> L61 java.lang.InstantiationException -> L63 java.lang.ClassCastException -> L65
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.ClassNotFoundException -> L5f java.lang.IllegalAccessException -> L61 java.lang.InstantiationException -> L63 java.lang.ClassCastException -> L65
            com.huawei.hms.activity.IBridgeActivityDelegate r0 = (com.huawei.hms.activity.IBridgeActivityDelegate) r0     // Catch: java.lang.ClassNotFoundException -> L5f java.lang.IllegalAccessException -> L61 java.lang.InstantiationException -> L63 java.lang.ClassCastException -> L65
            r5.a = r0     // Catch: java.lang.ClassNotFoundException -> L5f java.lang.IllegalAccessException -> L61 java.lang.InstantiationException -> L63 java.lang.ClassCastException -> L65
            r0.onBridgeActivityCreate(r5)     // Catch: java.lang.RuntimeException -> L45
            r0 = 1
            return r0
        L45:
            r0 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Run time Exception."
            r3.append(r4)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
            return r2
        L5f:
            r0 = move-exception
            goto L66
        L61:
            r0 = move-exception
            goto L66
        L63:
            r0 = move-exception
            goto L66
        L65:
            r0 = move-exception
        L66:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "In initialize, Failed to create 'IUpdateWizard' instance."
            r3.append(r4)
            java.lang.String r0 = r0.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
            return r2
    }

    public final void c() {
            r4 = this;
            r0 = 1
            r4.requestWindowFeature(r0)
            android.view.Window r1 = r4.getWindow()
            int r2 = com.huawei.hms.activity.BridgeActivity.b
            r3 = 9
            if (r2 < r3) goto L16
            r2 = 67108864(0x4000000, float:1.5046328E-36)
            r1.addFlags(r2)
            a(r1, r0)
        L16:
            android.view.View r0 = r1.getDecorView()
            r1 = 0
            r0.setSystemUiVisibility(r1)
            return
    }

    @Override
    public void finish() {
            r2 = this;
            java.lang.String r0 = "BridgeActivity"
            java.lang.String r1 = "Enter finish."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            super.finish()
            return
    }

    @Override
    public android.content.Intent getIntent() {
            r2 = this;
            android.content.Intent r0 = super.getIntent()
            if (r0 == 0) goto Lc
            com.huawei.hms.ui.SafeIntent r1 = new com.huawei.hms.ui.SafeIntent
            r1.<init>(r0)
            return r1
        Lc:
            return r0
    }

    @Override
    public void onActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            com.huawei.hms.ui.SafeIntent r0 = new com.huawei.hms.ui.SafeIntent
            r0.<init>(r4)
            super.onActivityResult(r2, r3, r0)
            com.huawei.hms.activity.IBridgeActivityDelegate r4 = r1.a
            if (r4 == 0) goto L1e
            boolean r2 = r4.onBridgeActivityResult(r2, r3, r0)
            if (r2 != 0) goto L1e
            boolean r2 = r1.isFinishing()
            if (r2 != 0) goto L1e
            r1.setResult(r3, r0)
            r1.finish()
        L1e:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            com.huawei.hms.activity.IBridgeActivityDelegate r1 = r0.a
            if (r1 == 0) goto La
            r1.onBridgeConfigurationChanged()
        La:
            return
    }

    @Override
    public void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            android.content.Intent r2 = r1.getIntent()
            if (r2 != 0) goto La
            return
        La:
            android.view.Window r2 = r1.getWindow()
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r2.addFlags(r0)
            int r2 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r2 < r0) goto L21
            android.view.Window r2 = r1.getWindow()
            r0 = 0
            r2.setStatusBarColor(r0)
        L21:
            r1.c()
            r1.a()
            android.content.Context r2 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r2 != 0) goto L34
            android.content.Context r2 = r1.getApplicationContext()
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r2)
        L34:
            boolean r2 = r1.b()
            if (r2 != 0) goto L42
            r2 = 1
            r0 = 0
            r1.setResult(r2, r0)
            r1.finish()
        L42:
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.huawei.hms.activity.IBridgeActivityDelegate r0 = r1.a
            if (r0 == 0) goto La
            r0.onBridgeActivityDestroy()
        La:
            return
    }

    @Override
    public boolean onKeyUp(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.huawei.hms.activity.IBridgeActivityDelegate r0 = r1.a
            if (r0 == 0) goto L7
            r0.onKeyUp(r2, r3)
        L7:
            boolean r2 = super.onKeyUp(r2, r3)
            return r2
    }
}
