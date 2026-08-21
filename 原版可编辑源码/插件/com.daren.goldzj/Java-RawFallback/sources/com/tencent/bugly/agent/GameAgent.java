package com.tencent.bugly.agent;

public class GameAgent {
    private static final java.lang.String CLASS_COCOS_ACTIVITY = "org.cocos2dx.lib.Cocos2dxActivity";
    private static final java.lang.String CLASS_UNITY_PLAYER = "com.unity3d.player.UnityPlayer";
    private static final java.lang.String CRASH_REPORT_CLASS_SUFFIX = "crashreport.CrashReport";
    public static final int GAME_TYPE_COCOS = 1;
    public static final int GAME_TYPE_UNITY = 2;
    public static final int GAME_TYPE_UNKNOWN = 0;
    private static final int LOG_LEVEL_DEBUG = 1;
    private static final int LOG_LEVEL_ERROR = 4;
    private static final int LOG_LEVEL_INFO = 2;
    private static final int LOG_LEVEL_VERBOSE = 0;
    private static final int LOG_LEVEL_WARN = 3;
    private static final java.lang.String LOG_TAG = "CrashReport-GameAgent";
    private static final java.lang.String OLD_STRATEGY_CLASS_SUFFIX = "crashreport.CrashReport$UserStrategy";
    private static final java.lang.String STRATEGY_CLASS_SUFFIX = "BuglyStrategy";
    private static final int TYPE_COCOS2DX_JS_CRASH = 5;
    private static final int TYPE_COCOS2DX_LUA_CRASH = 6;
    private static final int TYPE_U3D_CRASH = 4;
    private static final java.lang.String VERSION = "3.2";
    private static boolean hasGuessed = false;
    private static java.lang.ref.WeakReference<android.app.Activity> sActivity = null;
    private static java.lang.String sAppChannel = null;
    private static java.lang.String sAppVersion = null;
    private static java.lang.ref.WeakReference<android.content.Context> sContext = null;
    private static int sGameType = 0;
    private static android.os.Handler sHandler = null;
    private static boolean sIsDebug = false;
    private static java.lang.String sUserId = null;
    private static java.lang.String sdkPackageName = "com.tencent.bugly";














    private static class Reflection {
        private Reflection() {
                r0 = this;
                r0.<init>()
                return
        }

        static java.lang.Object access$000(java.lang.String r0, java.lang.String r1, java.lang.Object r2) {
                java.lang.Object r0 = getStaticField(r0, r1, r2)
                return r0
        }

        static java.lang.Object access$100(java.lang.String r0, java.lang.String r1, java.lang.Object[] r2, java.lang.Class[] r3) {
                java.lang.Object r0 = invokeStaticMethod(r0, r1, r2, r3)
                return r0
        }

        static java.lang.Object access$300(java.lang.String r0, java.lang.Object[] r1, java.lang.Class[] r2) {
                java.lang.Object r0 = newInstance(r0, r1, r2)
                return r0
        }

        private static java.lang.Object getStaticField(java.lang.String r0, java.lang.String r1, java.lang.Object r2) {
                java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.IllegalAccessException -> L11 java.lang.NoSuchFieldException -> L16 java.lang.ClassNotFoundException -> L1b
                java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.IllegalAccessException -> L11 java.lang.NoSuchFieldException -> L16 java.lang.ClassNotFoundException -> L1b
                r1 = 1
                r0.setAccessible(r1)     // Catch: java.lang.IllegalAccessException -> L11 java.lang.NoSuchFieldException -> L16 java.lang.ClassNotFoundException -> L1b
                java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.IllegalAccessException -> L11 java.lang.NoSuchFieldException -> L16 java.lang.ClassNotFoundException -> L1b
                return r0
            L11:
                r0 = move-exception
                r0.printStackTrace()
                goto L1f
            L16:
                r0 = move-exception
                r0.printStackTrace()
                goto L1f
            L1b:
                r0 = move-exception
                r0.printStackTrace()
            L1f:
                r0 = 0
                return r0
        }

        private static java.lang.Object invokeStaticMethod(java.lang.String r1, java.lang.String r2, java.lang.Object[] r3, java.lang.Class<?>... r4) {
                r0 = 0
                java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L12 java.lang.IllegalAccessException -> L17 java.lang.reflect.InvocationTargetException -> L1c java.lang.NoSuchMethodException -> L21 java.lang.ClassNotFoundException -> L26
                java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r4)     // Catch: java.lang.Exception -> L12 java.lang.IllegalAccessException -> L17 java.lang.reflect.InvocationTargetException -> L1c java.lang.NoSuchMethodException -> L21 java.lang.ClassNotFoundException -> L26
                r2 = 1
                r1.setAccessible(r2)     // Catch: java.lang.Exception -> L12 java.lang.IllegalAccessException -> L17 java.lang.reflect.InvocationTargetException -> L1c java.lang.NoSuchMethodException -> L21 java.lang.ClassNotFoundException -> L26
                java.lang.Object r1 = r1.invoke(r0, r3)     // Catch: java.lang.Exception -> L12 java.lang.IllegalAccessException -> L17 java.lang.reflect.InvocationTargetException -> L1c java.lang.NoSuchMethodException -> L21 java.lang.ClassNotFoundException -> L26
                return r1
            L12:
                r1 = move-exception
                r1.printStackTrace()
                goto L2a
            L17:
                r1 = move-exception
                r1.printStackTrace()
                goto L2a
            L1c:
                r1 = move-exception
                r1.printStackTrace()
                goto L2a
            L21:
                r1 = move-exception
                r1.printStackTrace()
                goto L2a
            L26:
                r1 = move-exception
                r1.printStackTrace()
            L2a:
                return r0
        }

        private static java.lang.Object newInstance(java.lang.String r0, java.lang.Object[] r1, java.lang.Class<?>... r2) {
                java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L14 java.lang.reflect.InvocationTargetException -> L19 java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L23 java.lang.NoSuchMethodException -> L28 java.lang.ClassNotFoundException -> L2d
                if (r1 != 0) goto Lb
                java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Exception -> L14 java.lang.reflect.InvocationTargetException -> L19 java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L23 java.lang.NoSuchMethodException -> L28 java.lang.ClassNotFoundException -> L2d
                return r0
            Lb:
                java.lang.reflect.Constructor r0 = r0.getConstructor(r2)     // Catch: java.lang.Exception -> L14 java.lang.reflect.InvocationTargetException -> L19 java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L23 java.lang.NoSuchMethodException -> L28 java.lang.ClassNotFoundException -> L2d
                java.lang.Object r0 = r0.newInstance(r1)     // Catch: java.lang.Exception -> L14 java.lang.reflect.InvocationTargetException -> L19 java.lang.IllegalAccessException -> L1e java.lang.InstantiationException -> L23 java.lang.NoSuchMethodException -> L28 java.lang.ClassNotFoundException -> L2d
                return r0
            L14:
                r0 = move-exception
                r0.printStackTrace()
                goto L31
            L19:
                r0 = move-exception
                r0.printStackTrace()
                goto L31
            L1e:
                r0 = move-exception
                r0.printStackTrace()
                goto L31
            L23:
                r0 = move-exception
                r0.printStackTrace()
                goto L31
            L28:
                r0 = move-exception
                r0.printStackTrace()
                goto L31
            L2d:
                r0 = move-exception
                r0.printStackTrace()
            L31:
                r0 = 0
                return r0
        }
    }

    static {
            return
    }

    public GameAgent() {
            r0 = this;
            r0.<init>()
            return
    }

    static void access$200() {
            exitApplication()
            return
    }

    static boolean access$400() {
            boolean r0 = com.tencent.bugly.agent.GameAgent.sIsDebug
            return r0
    }

    static java.lang.String access$500(java.lang.String r0) {
            java.lang.String r0 = convertToCanonicalName(r0)
            return r0
    }

    static android.content.Context access$600() {
            android.content.Context r0 = getApplicationContext()
            return r0
    }

    static void access$700(long r0) {
            delayExit(r0)
            return
    }

    private static java.lang.String convertToCanonicalName(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.tencent.bugly.agent.GameAgent.sdkPackageName
            if (r1 != 0) goto Ld
            java.lang.String r1 = "com.tencent.bugly"
            com.tencent.bugly.agent.GameAgent.sdkPackageName = r1
        Ld:
            java.lang.String r1 = com.tencent.bugly.agent.GameAgent.sdkPackageName
            r0.append(r1)
            java.lang.String r1 = "."
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static void delayExit(long r2) {
            r0 = 0
            long r2 = java.lang.Math.max(r0, r2)
            android.os.Handler r0 = com.tencent.bugly.agent.GameAgent.sHandler
            if (r0 == 0) goto L13
            com.tencent.bugly.agent.GameAgent$1 r1 = new com.tencent.bugly.agent.GameAgent$1
            r1.<init>()
            r0.postDelayed(r1, r2)
            goto L1e
        L13:
            java.lang.Thread.sleep(r2)     // Catch: java.lang.InterruptedException -> L1a
            exitApplication()     // Catch: java.lang.InterruptedException -> L1a
            goto L1e
        L1a:
            r2 = move-exception
            r2.printStackTrace()
        L1e:
            return
    }

    private static void exitApplication() {
            int r0 = android.os.Process.myPid()
            java.util.Locale r1 = java.util.Locale.US
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r0)
            r4 = 0
            r2[r4] = r3
            java.lang.String r3 = "Exit application by kill process[%d]"
            java.lang.String r1 = java.lang.String.format(r1, r3, r2)
            r2 = 3
            printLog(r2, r1)
            android.os.Process.killProcess(r0)
            return
    }

    private static android.app.Activity getActivity() {
            java.lang.ref.WeakReference<android.app.Activity> r0 = com.tencent.bugly.agent.GameAgent.sActivity
            if (r0 == 0) goto La
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto L30
        La:
            int r0 = com.tencent.bugly.agent.GameAgent.sGameType
            r1 = 1
            if (r0 == r1) goto L23
            r1 = 2
            if (r0 == r1) goto L1e
            java.lang.String r0 = "CrashReport-GameAgent"
            java.lang.String r1 = "Game type has not been set."
            android.util.Log.w(r0, r1)
            android.app.Activity r0 = guessActivity()
            goto L27
        L1e:
            android.app.Activity r0 = getUnityActivity()
            goto L27
        L23:
            android.app.Activity r0 = getCocosActivity()
        L27:
            if (r0 == 0) goto L30
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r0)
            com.tencent.bugly.agent.GameAgent.sActivity = r1
        L30:
            java.lang.ref.WeakReference<android.app.Activity> r0 = com.tencent.bugly.agent.GameAgent.sActivity
            if (r0 == 0) goto L3b
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            goto L3c
        L3b:
            r0 = 0
        L3c:
            return r0
    }

    private static android.content.Context getApplicationContext() {
            java.lang.ref.WeakReference<android.content.Context> r0 = com.tencent.bugly.agent.GameAgent.sContext
            if (r0 == 0) goto La
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto L1b
        La:
            android.app.Activity r0 = getActivity()
            if (r0 == 0) goto L1b
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            android.content.Context r0 = r0.getApplicationContext()
            r1.<init>(r0)
            com.tencent.bugly.agent.GameAgent.sContext = r1
        L1b:
            java.lang.ref.WeakReference<android.content.Context> r0 = com.tencent.bugly.agent.GameAgent.sContext
            if (r0 == 0) goto L26
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            goto L27
        L26:
            r0 = 0
        L27:
            return r0
    }

    public static android.app.Activity getCocosActivity() {
            r0 = 0
            java.lang.String r1 = "org.cocos2dx.lib.Cocos2dxActivity"
            java.lang.String r2 = "getContext"
            r3 = 0
            java.lang.Class[] r3 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L15
            java.lang.Object r1 = com.tencent.bugly.agent.GameAgent.Reflection.access$100(r1, r2, r0, r3)     // Catch: java.lang.Exception -> L15
            if (r1 == 0) goto L1c
            boolean r2 = r1 instanceof android.app.Activity     // Catch: java.lang.Exception -> L15
            if (r2 == 0) goto L1c
            android.app.Activity r1 = (android.app.Activity) r1     // Catch: java.lang.Exception -> L15
            return r1
        L15:
            java.lang.String r1 = "CrashReport-GameAgent"
            java.lang.String r2 = "Failed to get activity of Cocos."
            android.util.Log.w(r1, r2)
        L1c:
            return r0
    }

    public static android.app.Activity getUnityActivity() {
            r0 = 0
            java.lang.String r1 = "com.unity3d.player.UnityPlayer"
            java.lang.String r2 = "currentActivity"
            java.lang.Object r1 = com.tencent.bugly.agent.GameAgent.Reflection.access$000(r1, r2, r0)     // Catch: java.lang.Exception -> L12
            if (r1 == 0) goto L19
            boolean r2 = r1 instanceof android.app.Activity     // Catch: java.lang.Exception -> L12
            if (r2 == 0) goto L19
            android.app.Activity r1 = (android.app.Activity) r1     // Catch: java.lang.Exception -> L12
            return r1
        L12:
            java.lang.String r1 = "CrashReport-GameAgent"
            java.lang.String r2 = "Failed to get activity of Unity."
            android.util.Log.w(r1, r2)
        L19:
            return r0
    }

    public static java.lang.String getVersion() {
            java.lang.String r0 = "3.2"
            return r0
    }

    private static android.app.Activity guessActivity() {
            boolean r0 = com.tencent.bugly.agent.GameAgent.hasGuessed
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            r0 = 1
            com.tencent.bugly.agent.GameAgent.hasGuessed = r0
            int r2 = com.tencent.bugly.agent.GameAgent.sGameType
            if (r2 == 0) goto L11
            android.app.Activity r1 = getActivity()
        L11:
            if (r1 != 0) goto L19
            com.tencent.bugly.agent.GameAgent.sGameType = r0
            android.app.Activity r1 = getActivity()
        L19:
            if (r1 != 0) goto L22
            r0 = 2
            com.tencent.bugly.agent.GameAgent.sGameType = r0
            android.app.Activity r1 = getActivity()
        L22:
            if (r1 != 0) goto L27
            r0 = 0
            com.tencent.bugly.agent.GameAgent.sGameType = r0
        L27:
            return r1
    }

    private static void initCrashReport(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, long r7) {
            android.content.Context r0 = getApplicationContext()
            r1 = 4
            if (r0 != 0) goto Ld
            java.lang.String r3 = "Context is null. bugly initialize terminated."
            printLog(r1, r3)
            return
        Ld:
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 == 0) goto L19
            java.lang.String r3 = "Please input appid when initCrashReport."
            printLog(r1, r3)
            return
        L19:
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r2)
            com.tencent.bugly.agent.GameAgent.sHandler = r1
            java.lang.Object r4 = newStrategy(r0, r4, r5, r7)
            com.tencent.bugly.agent.GameAgent$2 r5 = new com.tencent.bugly.agent.GameAgent$2
            r5.<init>(r4, r0, r3, r6)
            runTaskInUiThread(r5)
            return
    }

    public static void initCrashReport(java.lang.String r6, boolean r7) {
            setLogEnable(r7)
            java.lang.String r1 = com.tencent.bugly.agent.GameAgent.sAppChannel
            java.lang.String r2 = com.tencent.bugly.agent.GameAgent.sAppVersion
            java.lang.String r3 = com.tencent.bugly.agent.GameAgent.sUserId
            r4 = 0
            r0 = r6
            initCrashReport(r0, r1, r2, r3, r4)
            return
    }

    private static java.lang.Object newStrategy(android.content.Context r7, java.lang.String r8, java.lang.String r9, long r10) {
            r0 = 0
            if (r7 == 0) goto L89
            boolean r1 = android.text.TextUtils.isEmpty(r8)
            if (r1 == 0) goto L11
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            if (r1 == 0) goto L11
            goto L89
        L11:
            java.lang.String r1 = "crashreport.CrashReport$UserStrategy"
            java.lang.String r1 = convertToCanonicalName(r1)
            r2 = 1
            java.lang.Object[] r3 = new java.lang.Object[r2]
            r4 = 0
            r3[r4] = r7
            java.lang.Class[] r7 = new java.lang.Class[r2]
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r7[r4] = r5
            java.lang.Object r7 = com.tencent.bugly.agent.GameAgent.Reflection.access$300(r1, r3, r7)
            if (r7 == 0) goto L89
            java.lang.String r1 = "BuglyStrategy"
            java.lang.String r1 = convertToCanonicalName(r1)     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.String r3 = "setAppChannel"
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r4] = r6     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.reflect.Method r3 = r1.getDeclaredMethod(r3, r5)     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.Object[] r5 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            r5[r4] = r8     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            r3.invoke(r7, r5)     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.String r8 = "setAppVersion"
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r3[r4] = r5     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.reflect.Method r8 = r1.getDeclaredMethod(r8, r3)     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            r3[r4] = r9     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            r8.invoke(r7, r3)     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.String r8 = "setAppReportDelay"
            java.lang.Class[] r9 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.Class r3 = java.lang.Long.TYPE     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            r9[r4] = r3     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.reflect.Method r8 = r1.getDeclaredMethod(r8, r9)     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.Object[] r9 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            java.lang.Long r10 = java.lang.Long.valueOf(r10)     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            r9[r4] = r10     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            r8.invoke(r7, r9)     // Catch: java.lang.Exception -> L71 java.lang.reflect.InvocationTargetException -> L76 java.lang.IllegalArgumentException -> L7b java.lang.IllegalAccessException -> L80 java.lang.NoSuchMethodException -> L85
            return r7
        L71:
            r7 = move-exception
            r7.printStackTrace()
            goto L89
        L76:
            r7 = move-exception
            r7.printStackTrace()
            goto L89
        L7b:
            r7 = move-exception
            r7.printStackTrace()
            goto L89
        L80:
            r7 = move-exception
            r7.printStackTrace()
            goto L89
        L85:
            r7 = move-exception
            r7.printStackTrace()
        L89:
            return r0
    }

    private static void postCocosJsException(int r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, boolean r11) {
            com.tencent.bugly.agent.GameAgent$12 r6 = new com.tencent.bugly.agent.GameAgent$12
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            runTaskInUiThread(r6)
            return
    }

    private static void postCocosLuaException(int r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, boolean r11) {
            java.lang.String r0 = "stack traceback"
            boolean r0 = r10.startsWith(r0)     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = "\n"
            if (r0 == 0) goto L1c
            int r0 = r10.indexOf(r1)     // Catch: java.lang.Throwable -> L53
            int r0 = r0 + 1
            int r2 = r10.length()     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = r10.substring(r0, r2)     // Catch: java.lang.Throwable -> L53
            java.lang.String r10 = r0.trim()     // Catch: java.lang.Throwable -> L53
        L1c:
            int r0 = r10.indexOf(r1)     // Catch: java.lang.Throwable -> L53
            if (r0 <= 0) goto L2c
            int r0 = r0 + 1
            int r2 = r10.length()     // Catch: java.lang.Throwable -> L53
            java.lang.String r10 = r10.substring(r0, r2)     // Catch: java.lang.Throwable -> L53
        L2c:
            int r0 = r10.indexOf(r1)     // Catch: java.lang.Throwable -> L53
            r1 = 0
            if (r0 <= 0) goto L38
            java.lang.String r0 = r10.substring(r1, r0)     // Catch: java.lang.Throwable -> L53
            goto L39
        L38:
            r0 = r10
        L39:
            java.lang.String r2 = "]:"
            int r2 = r0.indexOf(r2)     // Catch: java.lang.Throwable -> L53
            if (r8 == 0) goto L47
            int r3 = r8.length()     // Catch: java.lang.Throwable -> L53
            if (r3 != 0) goto L5d
        L47:
            r3 = -1
            if (r2 == r3) goto L51
            int r2 = r2 + 1
            java.lang.String r8 = r0.substring(r1, r2)     // Catch: java.lang.Throwable -> L53
            goto L5d
        L51:
            r8 = r9
            goto L5d
        L53:
            if (r8 == 0) goto L5f
            int r0 = r8.length()
            if (r0 != 0) goto L5d
            goto L5f
        L5d:
            r3 = r8
            goto L60
        L5f:
            r3 = r9
        L60:
            r5 = r10
            com.tencent.bugly.agent.GameAgent$11 r8 = new com.tencent.bugly.agent.GameAgent$11
            r1 = r8
            r2 = r7
            r4 = r9
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            runTaskInUiThread(r8)
            return
    }

    public static void postException(int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, boolean r6) {
            r0 = 4
            if (r2 == r0) goto L2a
            r1 = 5
            if (r2 == r1) goto L26
            r1 = 6
            if (r2 == r1) goto L22
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "The category of exception posted is unknown: "
            r3.append(r4)
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            printLog(r0, r2)
            goto L2d
        L22:
            postCocosLuaException(r2, r3, r4, r5, r6)
            goto L2d
        L26:
            postCocosJsException(r2, r3, r4, r5, r6)
            goto L2d
        L2a:
            postUnityException(r3, r4, r5, r6)
        L2d:
            return
    }

    private static void postUnityException(java.lang.String r1, java.lang.String r2, java.lang.String r3, boolean r4) {
            com.tencent.bugly.agent.GameAgent$13 r0 = new com.tencent.bugly.agent.GameAgent$13
            r0.<init>(r1, r2, r3, r4)
            runTaskInUiThread(r0)
            return
    }

    private static void printLog(int r1, java.lang.String r2) {
            java.lang.String r0 = "CrashReport-GameAgent"
            setLog(r1, r0, r2)
            return
    }

    public static void printLog(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r0 = "<Log>"
            boolean r0 = r2.startsWith(r0)
            r1 = 2
            if (r0 == 0) goto L14
            printLog(r1, r2)
            goto L63
        L14:
            java.lang.String r0 = "<LogDebug>"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L21
            r0 = 1
            printLog(r0, r2)
            goto L63
        L21:
            java.lang.String r0 = "<LogInfo>"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L2d
            printLog(r1, r2)
            goto L63
        L2d:
            java.lang.String r0 = "<LogWarning>"
            boolean r0 = r2.startsWith(r0)
            r1 = 3
            if (r0 == 0) goto L3a
            printLog(r1, r2)
            goto L63
        L3a:
            java.lang.String r0 = "<LogAssert>"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L46
            printLog(r1, r2)
            goto L63
        L46:
            java.lang.String r0 = "<LogError>"
            boolean r0 = r2.startsWith(r0)
            r1 = 4
            if (r0 == 0) goto L53
            printLog(r1, r2)
            goto L63
        L53:
            java.lang.String r0 = "<LogException>"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L5f
            printLog(r1, r2)
            goto L63
        L5f:
            r0 = 0
            printLog(r0, r2)
        L63:
            return
    }

    public static void putUserData(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L15
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            goto L15
        Ld:
            com.tencent.bugly.agent.GameAgent$7 r0 = new com.tencent.bugly.agent.GameAgent$7
            r0.<init>(r1, r2)
            runTaskInUiThread(r0)
        L15:
            return
    }

    public static void removeUserData(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            com.tencent.bugly.agent.GameAgent$8 r0 = new com.tencent.bugly.agent.GameAgent$8
            r0.<init>(r1)
            runTaskInUiThread(r0)
            return
    }

    private static void runTaskInUiThread(java.lang.Runnable r1) {
            android.app.Activity r0 = getActivity()
            if (r0 == 0) goto La
            r0.runOnUiThread(r1)
            goto L12
        La:
            java.lang.Thread r0 = new java.lang.Thread
            r0.<init>(r1)
            r0.start()
        L12:
            return
    }

    public static void setAppChannel(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            com.tencent.bugly.agent.GameAgent.sAppChannel = r1
            com.tencent.bugly.agent.GameAgent$4 r0 = new com.tencent.bugly.agent.GameAgent$4
            r0.<init>(r1)
            runTaskInUiThread(r0)
            return
    }

    public static void setAppVersion(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            com.tencent.bugly.agent.GameAgent.sAppVersion = r1
            com.tencent.bugly.agent.GameAgent$3 r0 = new com.tencent.bugly.agent.GameAgent$3
            r0.<init>(r1)
            runTaskInUiThread(r0)
            return
    }

    public static void setGameType(int r0) {
            com.tencent.bugly.agent.GameAgent.sGameType = r0
            return
    }

    public static void setLog(int r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            if (r1 == 0) goto L23
            r0 = 1
            if (r1 == r0) goto L20
            r0 = 2
            if (r1 == r0) goto L1d
            r0 = 3
            if (r1 == r0) goto L1a
            r0 = 4
            if (r1 == r0) goto L17
            r1 = 0
            goto L25
        L17:
            java.lang.String r1 = "e"
            goto L25
        L1a:
            java.lang.String r1 = "w"
            goto L25
        L1d:
            java.lang.String r1 = "i"
            goto L25
        L20:
            java.lang.String r1 = "d"
            goto L25
        L23:
            java.lang.String r1 = "v"
        L25:
            if (r1 == 0) goto L2f
            com.tencent.bugly.agent.GameAgent$10 r0 = new com.tencent.bugly.agent.GameAgent$10
            r0.<init>(r1, r2, r3)
            runTaskInUiThread(r0)
        L2f:
            return
    }

    public static void setLogEnable(boolean r0) {
            com.tencent.bugly.agent.GameAgent.sIsDebug = r0
            return
    }

    public static void setSdkConfig(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L15
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            goto L15
        Ld:
            com.tencent.bugly.agent.GameAgent$9 r0 = new com.tencent.bugly.agent.GameAgent$9
            r0.<init>(r1, r2)
            runTaskInUiThread(r0)
        L15:
            return
    }

    public static void setSdkPackageName(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            com.tencent.bugly.agent.GameAgent.sdkPackageName = r1
            return
    }

    public static void setUserId(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            com.tencent.bugly.agent.GameAgent.sUserId = r1
            com.tencent.bugly.agent.GameAgent$5 r0 = new com.tencent.bugly.agent.GameAgent$5
            r0.<init>(r1)
            runTaskInUiThread(r0)
            return
    }

    public static void setUserSceneTag(int r1) {
            com.tencent.bugly.agent.GameAgent$6 r0 = new com.tencent.bugly.agent.GameAgent$6
            r0.<init>(r1)
            runTaskInUiThread(r0)
            return
    }
}
