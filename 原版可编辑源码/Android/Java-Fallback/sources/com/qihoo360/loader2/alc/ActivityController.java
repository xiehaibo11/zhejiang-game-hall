package com.qihoo360.loader2.alc;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class ActivityController {
    private static java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> sActivities;
    private static java.util.Map<?, ?> sActivityThreadActivities;
    private static java.util.Map<?, ?> sActivityThreadServices;
    private static java.lang.reflect.InvocationHandler sHandler;
    private static com.qihoo360.loader2.alc.ActivityController.IActivityUpdate sListener;
    private static com.qihoo360.loader2.alc.IActivityWatcher.Stub sStub;



    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public interface IActivityUpdate {
        void handleActivityUpdate();
    }

    public ActivityController() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.util.Map access$000() {
            java.util.Map<?, ?> r0 = com.qihoo360.loader2.alc.ActivityController.sActivityThreadActivities
            return r0
    }

    static java.util.Map access$100() {
            java.util.Map<?, ?> r0 = com.qihoo360.loader2.alc.ActivityController.sActivityThreadServices
            return r0
    }

    static com.qihoo360.loader2.alc.ActivityController.IActivityUpdate access$200() {
            com.qihoo360.loader2.alc.ActivityController$IActivityUpdate r0 = com.qihoo360.loader2.alc.ActivityController.sListener
            return r0
    }

    static java.util.ArrayList access$300() {
            java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r0 = com.qihoo360.loader2.alc.ActivityController.sActivities
            return r0
    }

    public static final void init() {
            loadVar()
            return
    }

    public static final void install(android.app.Application r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r1 = "ws000"
            r2 = 14
            if (r0 >= r2) goto L15
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L11
            java.lang.String r3 = "install activity watcher"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r3)
        L11:
            install2x()
            return
        L15:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1e
            java.lang.String r0 = "install activity lifecycle callbacks"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1e:
            install4x(r3)
            return
    }

    private static final void install2x() {
            com.qihoo360.loader2.alc.ActivityController$1 r0 = new com.qihoo360.loader2.alc.ActivityController$1
            r0.<init>()
            com.qihoo360.loader2.alc.ActivityController.sStub = r0
            java.lang.String r0 = "android.app.ActivityManagerNative"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> Lab
            java.lang.String r1 = "android.app.IActivityWatcher"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> Lab
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r3 = "ws000"
            if (r2 == 0) goto L35
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "AMN="
            r2.append(r4)
            r2.append(r0)
            java.lang.String r4 = " IAW="
            r2.append(r4)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L35:
            java.lang.String r2 = "getDefault"
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.NoSuchMethodException -> La1 java.lang.SecurityException -> La6
            java.lang.reflect.Method r2 = r0.getDeclaredMethod(r2, r5)     // Catch: java.lang.NoSuchMethodException -> La1 java.lang.SecurityException -> La6
            java.lang.String r5 = "registerActivityWatcher"
            r6 = 1
            java.lang.Class[] r7 = new java.lang.Class[r6]     // Catch: java.lang.NoSuchMethodException -> La1 java.lang.SecurityException -> La6
            r7[r4] = r1     // Catch: java.lang.NoSuchMethodException -> La1 java.lang.SecurityException -> La6
            java.lang.reflect.Method r0 = r0.getMethod(r5, r7)     // Catch: java.lang.NoSuchMethodException -> La1 java.lang.SecurityException -> La6
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L69
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r5 = "getDefault="
            r1.append(r5)
            r1.append(r2)
            java.lang.String r5 = " registerActivityWatcher="
            r1.append(r5)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r1)
        L69:
            r1 = 0
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L92 java.lang.IllegalAccessException -> L97 java.lang.IllegalArgumentException -> L9c
            java.lang.Object r1 = r2.invoke(r1, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L92 java.lang.IllegalAccessException -> L97 java.lang.IllegalArgumentException -> L9c
            java.lang.Object[] r2 = new java.lang.Object[r6]     // Catch: java.lang.reflect.InvocationTargetException -> L92 java.lang.IllegalAccessException -> L97 java.lang.IllegalArgumentException -> L9c
            com.qihoo360.loader2.alc.IActivityWatcher$Stub r5 = com.qihoo360.loader2.alc.ActivityController.sStub     // Catch: java.lang.reflect.InvocationTargetException -> L92 java.lang.IllegalAccessException -> L97 java.lang.IllegalArgumentException -> L9c
            r2[r4] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L92 java.lang.IllegalAccessException -> L97 java.lang.IllegalArgumentException -> L9c
            r0.invoke(r1, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L92 java.lang.IllegalAccessException -> L97 java.lang.IllegalArgumentException -> L9c
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L91
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "oAMN="
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r0)
        L91:
            return
        L92:
            r0 = move-exception
            r0.printStackTrace()
            return
        L97:
            r0 = move-exception
            r0.printStackTrace()
            return
        L9c:
            r0 = move-exception
            r0.printStackTrace()
            return
        La1:
            r0 = move-exception
            r0.printStackTrace()
            return
        La6:
            r0 = move-exception
            r0.printStackTrace()
            return
        Lab:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private static final void install4x(android.app.Application r7) {
            com.qihoo360.loader2.alc.ActivityController$2 r0 = new com.qihoo360.loader2.alc.ActivityController$2
            r0.<init>()
            com.qihoo360.loader2.alc.ActivityController.sHandler = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.qihoo360.loader2.alc.ActivityController.sActivities = r0
            java.lang.String r0 = "android.app.Application"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> Laa
            java.lang.String r1 = "android.app.Application$ActivityLifecycleCallbacks"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> Laa
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r3 = "ws000"
            if (r2 == 0) goto L34
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "install activity lifecycle callbacks: class="
            r2.append(r4)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L34:
            java.lang.String r2 = "registerActivityLifecycleCallbacks"
            r4 = 1
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.NoSuchMethodException -> La0 java.lang.SecurityException -> La5
            r6 = 0
            r5[r6] = r1     // Catch: java.lang.NoSuchMethodException -> La0 java.lang.SecurityException -> La5
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r2, r5)     // Catch: java.lang.NoSuchMethodException -> La0 java.lang.SecurityException -> La5
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L58
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "install activity lifecycle callbacks: m="
            r2.append(r5)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L58:
            java.lang.Class<com.qihoo360.loader2.alc.ActivityController> r2 = com.qihoo360.loader2.alc.ActivityController.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            java.lang.Class[] r5 = new java.lang.Class[r4]
            r5[r6] = r1
            java.lang.reflect.InvocationHandler r1 = com.qihoo360.loader2.alc.ActivityController.sHandler
            java.lang.Object r1 = java.lang.reflect.Proxy.newProxyInstance(r2, r5, r1)
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L80
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "install activity lifecycle callbacks: cb="
            r2.append(r5)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L80:
            java.lang.Object[] r2 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L91 java.lang.IllegalAccessException -> L96 java.lang.IllegalArgumentException -> L9b
            r2[r6] = r1     // Catch: java.lang.reflect.InvocationTargetException -> L91 java.lang.IllegalAccessException -> L96 java.lang.IllegalArgumentException -> L9b
            r0.invoke(r7, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L91 java.lang.IllegalAccessException -> L96 java.lang.IllegalArgumentException -> L9b
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L90
            java.lang.String r7 = "install activity lifecycle callbacks: ok"
            com.qihoo360.replugin.helper.LogDebug.d(r3, r7)
        L90:
            return
        L91:
            r7 = move-exception
            r7.printStackTrace()
            return
        L96:
            r7 = move-exception
            r7.printStackTrace()
            return
        L9b:
            r7 = move-exception
            r7.printStackTrace()
            return
        La0:
            r7 = move-exception
            r7.printStackTrace()
            return
        La5:
            r7 = move-exception
            r7.printStackTrace()
            return
        Laa:
            r7 = move-exception
            r7.printStackTrace()
            return
    }

    private static final void loadVar() {
            java.lang.String r0 = "android.app.ActivityThread"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L118
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r2 = "ws000"
            if (r1 == 0) goto L20
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "clsAT="
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L20:
            java.lang.String r1 = "currentActivityThread"
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> L10e java.lang.SecurityException -> L113
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r4)     // Catch: java.lang.NoSuchMethodException -> L10e java.lang.SecurityException -> L113
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L41
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "currentActivityThread="
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r4)
        L41:
            r4 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.reflect.InvocationTargetException -> Lff java.lang.IllegalAccessException -> L104 java.lang.IllegalArgumentException -> L109
            java.lang.Object r1 = r1.invoke(r4, r3)     // Catch: java.lang.reflect.InvocationTargetException -> Lff java.lang.IllegalAccessException -> L104 java.lang.IllegalArgumentException -> L109
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L60
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "oAT="
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3)
        L60:
            java.lang.String r3 = "mActivities"
            java.lang.reflect.Field r3 = r0.getDeclaredField(r3)     // Catch: java.lang.NoSuchFieldException -> Lf5 java.lang.SecurityException -> Lfa
            java.lang.String r4 = "mServices"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r4)     // Catch: java.lang.NoSuchFieldException -> Lf5 java.lang.SecurityException -> Lfa
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L8c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "AT f1="
            r4.append(r5)
            r4.append(r3)
            java.lang.String r5 = " f2="
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r4)
        L8c:
            r4 = 1
            r3.setAccessible(r4)     // Catch: java.lang.IllegalAccessException -> Leb java.lang.IllegalArgumentException -> Lf0
            java.lang.Object r3 = r3.get(r1)     // Catch: java.lang.IllegalAccessException -> Leb java.lang.IllegalArgumentException -> Lf0
            r0.setAccessible(r4)     // Catch: java.lang.IllegalAccessException -> Leb java.lang.IllegalArgumentException -> Lf0
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.IllegalAccessException -> Leb java.lang.IllegalArgumentException -> Lf0
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r4 = " services="
            if (r1 == 0) goto Lbb
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r5 = "AT activities="
            r1.append(r5)
            r1.append(r3)
            r1.append(r4)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        Lbb:
            java.util.Map r3 = (java.util.Map) r3     // Catch: java.lang.Throwable -> Le6
            com.qihoo360.loader2.alc.ActivityController.sActivityThreadActivities = r3     // Catch: java.lang.Throwable -> Le6
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Throwable -> Le6
            com.qihoo360.loader2.alc.ActivityController.sActivityThreadServices = r0     // Catch: java.lang.Throwable -> Le6
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto Le5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "converted: activities="
            r0.append(r1)
            java.util.Map<?, ?> r1 = com.qihoo360.loader2.alc.ActivityController.sActivityThreadActivities
            r0.append(r1)
            r0.append(r4)
            java.util.Map<?, ?> r1 = com.qihoo360.loader2.alc.ActivityController.sActivityThreadServices
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)
        Le5:
            return
        Le6:
            r0 = move-exception
            r0.printStackTrace()
            return
        Leb:
            r0 = move-exception
            r0.printStackTrace()
            return
        Lf0:
            r0 = move-exception
            r0.printStackTrace()
            return
        Lf5:
            r0 = move-exception
            r0.printStackTrace()
            return
        Lfa:
            r0 = move-exception
            r0.printStackTrace()
            return
        Lff:
            r0 = move-exception
            r0.printStackTrace()
            return
        L104:
            r0 = move-exception
            r0.printStackTrace()
            return
        L109:
            r0 = move-exception
            r0.printStackTrace()
            return
        L10e:
            r0 = move-exception
            r0.printStackTrace()
            return
        L113:
            r0 = move-exception
            r0.printStackTrace()
            return
        L118:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public static final void setListener(com.qihoo360.loader2.alc.ActivityController.IActivityUpdate r0) {
            com.qihoo360.loader2.alc.ActivityController.sListener = r0
            return
    }

    public static final int sumActivities() {
            java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r0 = com.qihoo360.loader2.alc.ActivityController.sActivities
            if (r0 == 0) goto L9
            int r0 = r0.size()
            goto L13
        L9:
            java.util.Map<?, ?> r0 = com.qihoo360.loader2.alc.ActivityController.sActivityThreadActivities
            if (r0 == 0) goto L12
            int r0 = r0.size()
            goto L13
        L12:
            r0 = -1
        L13:
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L2d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "process sumActivities = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ws000"
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L2d:
            return r0
    }
}
