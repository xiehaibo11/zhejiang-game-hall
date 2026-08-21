package com.tencent.bugly.agent;

import android.app.Activity;
import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.Process;
import android.text.TextUtils;
import android.util.Log;
import java.lang.ref.WeakReference;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Locale;

public class GameAgent {
    private static final String CLASS_COCOS_ACTIVITY = "org.cocos2dx.lib.Cocos2dxActivity";
    private static final String CLASS_UNITY_PLAYER = "com.unity3d.player.UnityPlayer";
    private static final String CRASH_REPORT_CLASS_SUFFIX = "crashreport.CrashReport";
    public static final int GAME_TYPE_COCOS = 1;
    public static final int GAME_TYPE_UNITY = 2;
    public static final int GAME_TYPE_UNKNOWN = 0;
    private static final int LOG_LEVEL_DEBUG = 1;
    private static final int LOG_LEVEL_ERROR = 4;
    private static final int LOG_LEVEL_INFO = 2;
    private static final int LOG_LEVEL_VERBOSE = 0;
    private static final int LOG_LEVEL_WARN = 3;
    private static final String LOG_TAG = "CrashReport-GameAgent";
    private static final String OLD_STRATEGY_CLASS_SUFFIX = "crashreport.CrashReport$UserStrategy";
    private static final String STRATEGY_CLASS_SUFFIX = "BuglyStrategy";
    private static final int TYPE_COCOS2DX_JS_CRASH = 5;
    private static final int TYPE_COCOS2DX_LUA_CRASH = 6;
    private static final int TYPE_U3D_CRASH = 4;
    private static final String VERSION = "3.2";
    private static boolean hasGuessed = false;
    private static WeakReference<Activity> sActivity = null;
    private static String sAppChannel = null;
    private static String sAppVersion = null;
    private static WeakReference<Context> sContext = null;
    private static int sGameType = 0;
    private static Handler sHandler = null;
    private static boolean sIsDebug = false;
    private static String sUserId = null;
    private static String sdkPackageName = "com.tencent.bugly";

    private static class Reflection {
        private Reflection() {
        }

        static Object access$000(String r0, String r1, Object r2) {
            return getStaticField(r0, r1, r2);
        }

        static Object access$100(String r0, String r1, Object[] r2, Class[] r3) {
            return invokeStaticMethod(r0, r1, r2, r3);
        }

        static Object access$300(String r0, Object[] r1, Class[] r2) {
            return newInstance(r0, r1, r2);
        }

        private static Object getStaticField(String r0, String r1, Object r2) {
            Field r02 = Class.forName(r0).getDeclaredField(r1);     // Catch: IllegalAccessException -> L4 NoSuchFieldException -> L6 ClassNotFoundException -> L8
            r02.setAccessible(true);     // Catch: IllegalAccessException -> L4 NoSuchFieldException -> L6 ClassNotFoundException -> L8
            return r02.get(r2);
        L8:
            e = move-exception;
            e.printStackTrace();
            return null;
        L4:
            e = move-exception;
            e.printStackTrace();
            return null;
        L6:
            e = move-exception;
            e.printStackTrace();
            return null;
        }

        private static Object invokeStaticMethod(String r1, String r2, Object[] r3, Class<?>... r4) {
            Method r12 = Class.forName(r1).getDeclaredMethod(r2, r4);     // Catch: Exception -> L5 IllegalAccessException -> L7 InvocationTargetException -> L9 NoSuchMethodException -> L11 ClassNotFoundException -> L13
            r12.setAccessible(true);     // Catch: Exception -> L5 IllegalAccessException -> L7 InvocationTargetException -> L9 NoSuchMethodException -> L11 ClassNotFoundException -> L13
            return r12.invoke(null, r3);
        L13:
            e = move-exception;
            e.printStackTrace();
        L15:
            return null;
        L7:
            e = move-exception;
            e.printStackTrace();
        L11:
            e = move-exception;
            e.printStackTrace();
        L9:
            e = move-exception;
            e.printStackTrace();
        L5:
            e = move-exception;
            e.printStackTrace();
            goto L15
        }

        private static Object newInstance(String r0, Object[] r1, Class<?>... r2) {
            Class<?> r02 = Class.forName(r0);     // Catch: Exception -> L8 InvocationTargetException -> L10 IllegalAccessException -> L12 InstantiationException -> L14 NoSuchMethodException -> L16 ClassNotFoundException -> L18
            if (r1 != null) goto L7;
            return r02.newInstance();
        L7:
            return r02.getConstructor(r2).newInstance(r1);
        L18:
            e = move-exception;
            e.printStackTrace();
            return null;
        L12:
            e = move-exception;
            e.printStackTrace();
            return null;
        L14:
            e = move-exception;
            e.printStackTrace();
            return null;
        L16:
            e = move-exception;
            e.printStackTrace();
            return null;
        L10:
            e = move-exception;
            e.printStackTrace();
            return null;
        L8:
            e = move-exception;
            e.printStackTrace();
            return null;
        }
    }

    static {
    }

    public static String getVersion() {
        return VERSION;
    }

    public GameAgent() {
    }

    static void access$200() {
        exitApplication();
    }

    static boolean access$400() {
        return sIsDebug;
    }

    static String access$500(String r0) {
        return convertToCanonicalName(r0);
    }

    static Context access$600() {
        return getApplicationContext();
    }

    static void access$700(long r0) {
        delayExit(r0);
    }

    public static void printLog(String r2) {
        if (TextUtils.isEmpty(r2) == false) goto L6;
        return;
    L6:
        if (r2.startsWith("<Log>") == false) goto L9;
        printLog(2, r2);
        return;
    L9:
        if (r2.startsWith("<LogDebug>") == false) goto L12;
        printLog(1, r2);
        return;
    L12:
        if (r2.startsWith("<LogInfo>") == false) goto L15;
        printLog(2, r2);
        return;
    L15:
        if (r2.startsWith("<LogWarning>") == false) goto L18;
        printLog(3, r2);
        return;
    L18:
        if (r2.startsWith("<LogAssert>") == false) goto L21;
        printLog(3, r2);
        return;
    L21:
        if (r2.startsWith("<LogError>") == false) goto L24;
        printLog(4, r2);
        return;
    L24:
        if (r2.startsWith("<LogException>") == false) goto L26;
        printLog(4, r2);
        return;
    L26:
        printLog(0, r2);
    }

    private static void printLog(int r1, String r2) {
        setLog(r1, LOG_TAG, r2);
    }

    public static Activity getUnityActivity() {
        Object r1 = Reflection.access$000(CLASS_UNITY_PLAYER, "currentActivity", null);     // Catch: Exception -> L9
        if (r1 != null) goto L6;
    L10:
        return null;
    L6:
        if ((r1 instanceof Activity) == false) goto L10;
        return (Activity) r1;
    L9:
        Log.w(LOG_TAG, "Failed to get activity of Unity.");
        goto L10
    }

    public static Activity getCocosActivity() {
        Object r1 = Reflection.access$100(CLASS_COCOS_ACTIVITY, "getContext", null, new Class[0]);     // Catch: Exception -> L9
        if (r1 != null) goto L6;
    L10:
        return null;
    L6:
        if ((r1 instanceof Activity) == false) goto L10;
        return (Activity) r1;
    L9:
        Log.w(LOG_TAG, "Failed to get activity of Cocos.");
        goto L10
    }

    private static Activity guessActivity() {
        Activity r1 = null;
        if (hasGuessed == false) goto L5;
        return null;
    L5:
        hasGuessed = true;
        if (sGameType == 0) goto L8;
        r1 = getActivity();
    L8:
        if (r1 != null) goto L10;
        sGameType = 1;
        r1 = getActivity();
    L10:
        if (r1 != null) goto L12;
        sGameType = 2;
        r1 = getActivity();
    L12:
        if (r1 != null) goto L14;
        sGameType = 0;
    L14:
        return r1;
    }

    private static Activity getActivity() {
        WeakReference<Activity> r0 = sActivity;
        if (r0 != null) goto L5;
    L6:
        int r02 = sGameType;
        if (r02 != 1) goto L9;
        Activity r03 = getCocosActivity();
    L13:
        if (r03 == null) goto L15;
        sActivity = new WeakReference(r03);
    L15:
        WeakReference<Activity> r04 = sActivity;
        if (r04 != null) goto L20;
        return null;
    L20:
        return r04.get();
    L9:
        if (r02 == 2) goto L11;
        Log.w(LOG_TAG, "Game type has not been set.");
        r03 = guessActivity();
        goto L13
    L11:
        r03 = getUnityActivity();
        goto L13
    L5:
        if (r0.get() != null) goto L15;
        goto L6
    }

    private static Context getApplicationContext() {
        WeakReference<Context> r0 = sContext;
        if (r0 != null) goto L5;
    L6:
        Activity r02 = getActivity();
        if (r02 == null) goto L9;
        sContext = new WeakReference(r02.getApplicationContext());
    L9:
        WeakReference<Context> r03 = sContext;
        if (r03 != null) goto L14;
        return null;
    L14:
        return r03.get();
    L5:
        if (r0.get() != null) goto L9;
        goto L6
    }

    private static void runTaskInUiThread(Runnable r1) {
        Activity r0 = getActivity();
        if (r0 == null) goto L5;
        r0.runOnUiThread(r1);
        return;
    L5:
        new Thread(r1).start();
    }

    private static void exitApplication() {
        int r0 = Process.myPid();
        printLog(3, String.format(Locale.US, "Exit application by kill process[%d]", new Object[]{Integer.valueOf(r0)}));
        Process.killProcess(r0);
    }

    private static void delayExit(long r2) {
        long r22 = Math.max(0, r2);
        Handler r0 = sHandler;
        if (r0 == null) goto L10;
        r0.postDelayed(new 1(), r22);
        return;
    L10:
        Thread.sleep(r22);     // Catch: InterruptedException -> L7
        exitApplication();     // Catch: InterruptedException -> L7
        return;
    L7:
        e = move-exception;
        e.printStackTrace();
    }

    private static String convertToCanonicalName(String r2) {
        StringBuilder r0 = new StringBuilder();
        if (sdkPackageName != null) goto L5;
        sdkPackageName = "com.tencent.bugly";
    L5:
        r0.append(sdkPackageName);
        r0.append(".");
        r0.append(r2);
        return r0.toString();
    }

    public static void setSdkPackageName(String r1) {
        if (TextUtils.isEmpty(r1) == false) goto L5;
        return;
    L5:
        sdkPackageName = r1;
    }

    public static void setGameType(int r0) {
        sGameType = r0;
    }

    public static void setLogEnable(boolean r0) {
        sIsDebug = r0;
    }

    private static Object newStrategy(Context r7, String r8, String r9, long r10) {
        if (r7 != null) goto L5;
    L23:
        return null;
    L5:
        if (TextUtils.isEmpty(r8) == true) goto L7;
    L9:
        Object r72 = Reflection.access$300(convertToCanonicalName(OLD_STRATEGY_CLASS_SUFFIX), new Object[]{r7}, new Class[]{Context.class});
        if (r72 == null) goto L23;
        Class<?> r1 = Class.forName(convertToCanonicalName(STRATEGY_CLASS_SUFFIX));     // Catch: Exception -> L13 InvocationTargetException -> L15 IllegalArgumentException -> L17 IllegalAccessException -> L19 NoSuchMethodException -> L21
        r1.getDeclaredMethod("setAppChannel", new Class[]{String.class}).invoke(r72, new Object[]{r8});     // Catch: Exception -> L13 InvocationTargetException -> L15 IllegalArgumentException -> L17 IllegalAccessException -> L19 NoSuchMethodException -> L21
        r1.getDeclaredMethod("setAppVersion", new Class[]{String.class}).invoke(r72, new Object[]{r9});     // Catch: Exception -> L13 InvocationTargetException -> L15 IllegalArgumentException -> L17 IllegalAccessException -> L19 NoSuchMethodException -> L21
        r1.getDeclaredMethod("setAppReportDelay", new Class[]{Long.TYPE}).invoke(r72, new Object[]{Long.valueOf(r10)});     // Catch: Exception -> L13 InvocationTargetException -> L15 IllegalArgumentException -> L17 IllegalAccessException -> L19 NoSuchMethodException -> L21
        return r72;
    L19:
        e = move-exception;
        e.printStackTrace();
    L17:
        e = move-exception;
        e.printStackTrace();
    L21:
        e = move-exception;
        e.printStackTrace();
    L15:
        e = move-exception;
        e.printStackTrace();
    L13:
        e = move-exception;
        e.printStackTrace();
        goto L23
    L7:
        if (TextUtils.isEmpty(r9) == false) goto L9;
        goto L9
    }

    public static void initCrashReport(String r6, boolean r7) {
        setLogEnable(r7);
        initCrashReport(r6, sAppChannel, sAppVersion, sUserId, 0);
    }

    private static void initCrashReport(final String r3, String r4, String r5, final String r6, long r7) {
        final Context r0 = getApplicationContext();
        if (r0 != null) goto L7;
        printLog(4, "Context is null. bugly initialize terminated.");
        return;
    L7:
        if (TextUtils.isEmpty(r3) == false) goto L10;
        printLog(4, "Please input appid when initCrashReport.");
        return;
    L10:
        sHandler = new Handler(Looper.getMainLooper());
        final Object r42 = newStrategy(r0, r4, r5, r7);
        runTaskInUiThread(new 2(r42, r0, r3, r6));
    }

    public static void setAppVersion(final String r1) {
        if (TextUtils.isEmpty(r1) == false) goto L5;
        return;
    L5:
        sAppVersion = r1;
        runTaskInUiThread(new 3(r1));
    }

    public static void setAppChannel(final String r1) {
        if (TextUtils.isEmpty(r1) == false) goto L5;
        return;
    L5:
        sAppChannel = r1;
        runTaskInUiThread(new 4(r1));
    }

    public static void setUserId(final String r1) {
        if (TextUtils.isEmpty(r1) == false) goto L5;
        return;
    L5:
        sUserId = r1;
        runTaskInUiThread(new 5(r1));
    }

    public static void setUserSceneTag(final int r1) {
        runTaskInUiThread(new 6(r1));
    }

    public static void putUserData(final String r1, final String r2) {
        if (TextUtils.isEmpty(r1) == false) goto L5;
        return;
    L5:
        if (TextUtils.isEmpty(r2) == true) goto L10;
        runTaskInUiThread(new 7(r1, r2));
        return;
    }

    public static void removeUserData(final String r1) {
        if (TextUtils.isEmpty(r1) == false) goto L5;
        return;
    L5:
        runTaskInUiThread(new 8(r1));
    }

    public static void setSdkConfig(final String r1, final String r2) {
        if (TextUtils.isEmpty(r1) == false) goto L5;
        return;
    L5:
        if (TextUtils.isEmpty(r2) == true) goto L10;
        runTaskInUiThread(new 9(r1, r2));
        return;
    }

    public static void setLog(int r1, final String r2, final String r3) {
        if (TextUtils.isEmpty(r2) == false) goto L5;
        return;
    L5:
        if (r1 != 0) goto L7;
        final String r12 = "v";
    L20:
        if (r12 == null) goto L23;
        runTaskInUiThread(new 10(r12, r2, r3));
        return;
    L23:
        return;
    L7:
        if (r1 != 1) goto L9;
        r12 = "d";
        goto L20
    L9:
        if (r1 != 2) goto L11;
        r12 = "i";
        goto L20
    L11:
        if (r1 != 3) goto L13;
        r12 = "w";
        goto L20
    L13:
        if (r1 == 4) goto L15;
        r12 = null;
        goto L20
    L15:
        r12 = "e";
        goto L20
    }

    private static void postCocosLuaException(final int r7, String r8, final String r9, String r10, final boolean r11) {
        if (r10.startsWith("stack traceback") == false) goto L6;
        r10 = r10.substring(r10.indexOf("\n") + 1, r10.length()).trim();     // Catch: Throwable -> L22
    L6:
        int r0 = r10.indexOf("\n");     // Catch: Throwable -> L22
        if (r0 <= 0) goto L9;
        r10 = r10.substring(r0 + 1, r10.length());     // Catch: Throwable -> L22
    L9:
        int r02 = r10.indexOf("\n");     // Catch: Throwable -> L22
        if (r02 <= 0) goto L12;
        String r03 = r10.substring(0, r02);     // Catch: Throwable -> L22
    L13:
        int r2 = r03.indexOf("]:");     // Catch: Throwable -> L22
        if (r8 == null) goto L18;
        if (r8.length() == 0) goto L18;
    L27:
        final String r3 = r8;
    L29:
        final String r5 = r10;
        runTaskInUiThread(new 11(r7, r3, r9, r5, r11));
        return;
    L18:
        if (r2 == (-1)) goto L21;
        r8 = r03.substring(0, r2 + 1);     // Catch: Throwable -> L22
    L21:
        r8 = r9;
        goto L27
    L12:
        r03 = r10;
    L23:
        if (r8 != null) goto L25;
    L28:
        r3 = r9;
        goto L29
    L25:
        if (r8.length() != 0) goto L27;
        goto L27
    }

    private static void postCocosJsException(final int r7, final String r8, final String r9, final String r10, final boolean r11) {
        runTaskInUiThread(new 12(r7, r8, r9, r10, r11));
    }

    private static void postUnityException(final String r1, final String r2, final String r3, final boolean r4) {
        runTaskInUiThread(new 13(r1, r2, r3, r4));
    }

    public static void postException(int r2, String r3, String r4, String r5, boolean r6) {
        if (r2 != 4) goto L5;
        postUnityException(r3, r4, r5, r6);
        return;
    L5:
        if (r2 != 5) goto L7;
        postCocosJsException(r2, r3, r4, r5, r6);
        return;
    L7:
        if (r2 == 6) goto L9;
        printLog(4, "The category of exception posted is unknown: " + String.valueOf(r2));
        return;
    L9:
        postCocosLuaException(r2, r3, r4, r5, r6);
    }
}
