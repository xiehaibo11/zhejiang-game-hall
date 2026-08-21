package org.cocos2dx.lib;

import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.content.res.AssetFileDescriptor;
import android.content.res.AssetManager;
import android.media.AudioManager;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.os.ParcelFileDescriptor;
import android.os.Process;
import android.os.Vibrator;
import android.preference.PreferenceManager;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.Display;
import android.view.WindowInsets;
import android.view.WindowManager;
import com.android.vending.expansion.zipfile.APKExpansionSupport;
import com.android.vending.expansion.zipfile.ZipResourceFile;
import java.io.File;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.LinkedHashSet;
import java.util.Locale;
import java.util.Set;
import org.cocos2dx.lib.Cocos2dxAccelerometer;

public class Cocos2dxHelper {
    public static final int NETWORK_TYPE_LAN = 1;
    public static final int NETWORK_TYPE_NONE = 0;
    public static final int NETWORK_TYPE_WWAN = 2;
    private static final String PREFS_NAME = "Cocos2dxPrefsFile";
    private static final int RUNNABLES_PER_FRAME = 5;
    private static final String TAG = "Cocos2dxHelper";
    private static Set<PreferenceManager.OnActivityResultListener> onActivityResultListeners;
    private static boolean sAccelerometerEnabled;
    private static Activity sActivity;
    private static boolean sActivityVisible;
    private static AssetManager sAssetManager;
    private static String sAssetsPath;
    private static BatteryReceiver sBatteryReceiver;
    private static Cocos2dxAccelerometer sCocos2dxAccelerometer;
    private static Cocos2dxHelperListener sCocos2dxHelperListener;
    private static boolean sCompassEnabled;
    private static float[] sDeviceMotionValues;
    private static String sFileDirectory;
    private static boolean sInited;
    private static ZipResourceFile sOBBFile;
    private static OnGameInfoUpdatedListener sOnGameInfoUpdatedListener;
    private static String sPackageName;
    private static Vibrator sVibrateService;

    static class BatteryReceiver extends BroadcastReceiver {
        public float sBatteryLevel;

        BatteryReceiver() {
            this.sBatteryLevel = 0.0f;
        }

        @Override
        public void onReceive(Context r1, Intent r2) {
            setBatteryLevelByIntent(r2);
        }

        public void setBatteryLevelByIntent(Intent r4) {
            if (r4 == null) goto L5;
            this.sBatteryLevel = Math.min(Math.max((r4.getIntExtra("level", 0) * 1.0f) / r4.getIntExtra("scale", 1), 0.0f), 1.0f);
            return;
        }
    }

    public interface Cocos2dxHelperListener {
        void runOnGLThread(Runnable r1);

        void showDialog(String r1, String r2);
    }

    public interface OnGameInfoUpdatedListener {
        void onDisableBatchGLCommandsToNative();

        void onFPSUpdated(float r1);

        void onGameInfoUpdated_0(String r1);

        void onGameInfoUpdated_1(String r1);

        void onGameInfoUpdated_2(String r1);

        void onJSBInvocationCountUpdated(int r1);

        void onOpenDebugView();
    }

    private static native void nativeSetApkPath(String r0);

    private static native void nativeSetAudioDeviceInfo(boolean r0, int r1, int r2);

    private static native void nativeSetContext(Context r0, AssetManager r1);

    private static native void nativeSetEditTextDialogResult(byte[] r0);

    public static void onEnterBackground() {
    }

    public static void onEnterForeground() {
    }

    public Cocos2dxHelper() {
    }

    static Activity access$000() {
        return sActivity;
    }

    static void access$100(byte[] r0) {
        nativeSetEditTextDialogResult(r0);
    }

    static {
        onActivityResultListeners = new LinkedHashSet();
        sVibrateService = null;
        sAssetsPath = "";
        sOBBFile = null;
        sBatteryReceiver = new BatteryReceiver();
        sInited = false;
        sDeviceMotionValues = new float[9];
    }

    static void registerBatteryLevelReceiver(Context r3) {
        Intent r32 = r3.registerReceiver(sBatteryReceiver, new IntentFilter("android.intent.action.BATTERY_CHANGED"));
        sBatteryReceiver.setBatteryLevelByIntent(r32);
    }

    static void unregisterBatteryLevelReceiver(Context r1) {
        r1.unregisterReceiver(sBatteryReceiver);
    }

    public static float getBatteryLevel() {
        return sBatteryReceiver.sBatteryLevel;
    }

    public static int getNetworkType() {
        NetworkInfo r1 = ((ConnectivityManager) sActivity.getSystemService("connectivity")).getActiveNetworkInfo();     // Catch: Exception -> L12
        if (r1 != null) goto L6;
        return 0;
    L6:
        int r12 = r1.getType();
        if (r12 != 0) goto L9;
        return 2;
    L9:
        if (r12 != 1) goto L18;
        return 1;
    L18:
        return 0;
    L12:
        e = move-exception;
        e.printStackTrace();
        return 0;
    }

    public static void runOnGLThread(Runnable r2) {
        Activity r0 = sActivity;
        if ((r0 instanceof Cocos2dxActivity) == false) goto L5;
        ((Cocos2dxActivity) r0).runOnGLThread(r2);
        return;
    L5:
        Cocos2dxGLSurfaceView r02 = Cocos2dxGLSurfaceView.getInstance();
        if (r02 == null) goto L10;
        r02.queueEvent(r2);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void init(Activity r10) {
        sActivity = r10;
        sCocos2dxHelperListener = (Cocos2dxHelperListener) r10;
        if (sInited == true) goto L22;
        boolean r0 = r10.getPackageManager().hasSystemFeature("android.hardware.audio.low_latency");
        Log.d(TAG, "isSupportLowLatency:" + r0);
        int r1 = 44100;
        int r2 = 192;
        int r6 = 1;
        if (Build.VERSION.SDK_INT < 17) goto L7;
        AudioManager r12 = (AudioManager) r10.getSystemService("audio");
        String r3 = (String) Cocos2dxReflectionHelper.invokeInstanceMethod(r12, "getProperty", new Class[]{String.class}, new Object[]{Cocos2dxReflectionHelper.getConstantValue(AudioManager.class, "PROPERTY_OUTPUT_SAMPLE_RATE")});
        String r13 = (String) Cocos2dxReflectionHelper.invokeInstanceMethod(r12, "getProperty", new Class[]{String.class}, new Object[]{Cocos2dxReflectionHelper.getConstantValue(AudioManager.class, "PROPERTY_OUTPUT_FRAMES_PER_BUFFER")});
        int r22 = Integer.parseInt(r3);
        int r14 = Integer.parseInt(r13);
        Log.d(TAG, "sampleRate: " + r22 + ", framesPerBuffer: " + r14);
        r2 = r14;
        r1 = r22;
    L8:
        nativeSetAudioDeviceInfo(r0, r1, r2);
        sPackageName = r10.getApplicationInfo().packageName;
        sFileDirectory = r10.getFilesDir().getAbsolutePath();
        nativeSetApkPath(getAssetsPath());
        sCocos2dxAccelerometer = new Cocos2dxAccelerometer(r10);
        sAssetManager = r10.getAssets();
        nativeSetContext(r10, sAssetManager);
        sVibrateService = (Vibrator) r10.getSystemService("vibrator");
        sInited = true;
        r6 = Cocos2dxActivity.getContext().getPackageManager().getPackageInfo(getPackageName(), 0).versionCode;     // Catch: PackageManager.NameNotFoundException -> L11
    L18:
        sOBBFile = APKExpansionSupport.getAPKExpansionZipFile(Cocos2dxActivity.getContext(), r6, 0);     // Catch: IOException -> L15
        return;
    L15:
        e = move-exception;
        e.printStackTrace();
        return;
    L11:
        e = move-exception;
        e.printStackTrace();
        goto L18
    L7:
        Log.d(TAG, "android version is lower than 17");
        goto L8
    }

    public static String getAssetsPath() {
        if (sAssetsPath != "") goto L14;
        int r0 = 1;
        r0 = sActivity.getPackageManager().getPackageInfo(sPackageName, 0).versionCode;     // Catch: PackageManager.NameNotFoundException -> L7
    L9:
        String r02 = Environment.getExternalStorageDirectory().getAbsolutePath() + "/Android/obb/" + sPackageName + "/main." + r0 + "." + sPackageName + ".obb";
        if (new File(r02).exists() == false) goto L12;
        sAssetsPath = r02;
        goto L14
    L12:
        sAssetsPath = sActivity.getApplicationInfo().sourceDir;
    L7:
        e = move-exception;
        e.printStackTrace();
    L14:
        return sAssetsPath;
    }

    public static ZipResourceFile getObbFile() {
        return sOBBFile;
    }

    public static Activity getActivity() {
        return sActivity;
    }

    public static void addOnActivityResultListener(PreferenceManager.OnActivityResultListener r1) {
        onActivityResultListeners.add(r1);
    }

    public static Set<PreferenceManager.OnActivityResultListener> getOnActivityResultListeners() {
        return onActivityResultListeners;
    }

    public static boolean isActivityVisible() {
        return sActivityVisible;
    }

    public static String getPackageName() {
        return sPackageName;
    }

    public static String getWritablePath() {
        return sFileDirectory;
    }

    public static String getCurrentLanguage() {
        return Locale.getDefault().getLanguage();
    }

    public static String getCurrentLanguageCode() {
        return Locale.getDefault().toString();
    }

    public static String getDeviceModel() {
        return Build.MODEL;
    }

    public static AssetManager getAssetManager() {
        return sAssetManager;
    }

    public static void enableAccelerometer() {
        sAccelerometerEnabled = true;
        sCocos2dxAccelerometer.enable();
    }

    public static void setAccelerometerInterval(float r1) {
        sCocos2dxAccelerometer.setInterval(r1);
    }

    public static void disableAccelerometer() {
        sAccelerometerEnabled = false;
        sCocos2dxAccelerometer.disable();
    }

    public static void setKeepScreenOn(boolean r1) {
        ((Cocos2dxActivity) sActivity).setKeepScreenOn(r1);
    }

    public static void vibrate(float r11) {
    L13:
        e = move-exception;
        e.printStackTrace();
        return;
    L3:
        if (sVibrateService != null) goto L5;
    L16:
        return;
    L5:
        if (sVibrateService.hasVibrator() == false) goto L16;
        if (Build.VERSION.SDK_INT < 26) goto L11;
        Class<?> r0 = Class.forName("android.os.VibrationEffect");     // Catch: Exception -> L13
        if (r0 == null) goto L16;
        int r1 = ((Integer) Cocos2dxReflectionHelper.getConstantValue(r0, "DEFAULT_AMPLITUDE")).intValue();     // Catch: Exception -> L13
        Method r3 = r0.getMethod("createOneShot", new Class[]{Long.TYPE, Integer.TYPE});     // Catch: Exception -> L13
        Class<?> r5 = r3.getReturnType();     // Catch: Exception -> L13
        Cocos2dxReflectionHelper.invokeInstanceMethod(sVibrateService, "vibrate", new Class[]{r5}, new Object[]{r3.invoke(r0, new Object[]{Long.valueOf((long) (r11 * 1000.0f)), Integer.valueOf(r1)})});     // Catch: Exception -> L13
        goto L16
    L11:
        sVibrateService.vibrate((long) (r11 * 1000.0f));     // Catch: Exception -> L13
        goto L16
    }

    public static String getVersion() {
        return Cocos2dxActivity.getContext().getPackageManager().getPackageInfo(Cocos2dxActivity.getContext().getPackageName(), 0).versionName;
    L4:
        return "";
    }

    public static boolean openURL(String r2) {
        Intent r0 = new Intent("android.intent.action.VIEW");     // Catch: Exception -> L4
        r0.setData(Uri.parse(r2));     // Catch: Exception -> L4
        sActivity.startActivity(r0);     // Catch: Exception -> L4
        return true;
    L4:
        return false;
    }

    public static void copyTextToClipboard(final String r2) {
        sActivity.runOnUiThread(new 1(r2));
    }

    public static long[] getObbAssetFileDescriptor(String r6) {
        long[] r0 = new long[3];
        ZipResourceFile r1 = sOBBFile;
        if (r1 == null) goto L13;
        AssetFileDescriptor r62 = r1.getAssetFileDescriptor(r6);
        if (r62 == null) goto L13;
        ParcelFileDescriptor r12 = r62.getParcelFileDescriptor();     // Catch: InvocationTargetException -> L8 IllegalAccessException -> L10 NoSuchMethodException -> L12
        r0[0] = ((Integer) r12.getClass().getMethod("getFd", new Class[0]).invoke(r12, new Object[0])).intValue();     // Catch: InvocationTargetException -> L8 IllegalAccessException -> L10 NoSuchMethodException -> L12
        r0[1] = r62.getStartOffset();     // Catch: InvocationTargetException -> L8 IllegalAccessException -> L10 NoSuchMethodException -> L12
        r0[2] = r62.getLength();     // Catch: InvocationTargetException -> L8 IllegalAccessException -> L10 NoSuchMethodException -> L12
    L10:
        e = move-exception;
        Log.e(TAG, e.toString());
    L12:
        Log.e(TAG, "Accessing file descriptor directly from the OBB is only supported from Android 3.1 (API level 12) and above.");
    L8:
        e = move-exception;
        Log.e(TAG, e.toString());
    L13:
        return r0;
    }

    public static void endApplication() {
        Activity r0 = sActivity;
        if (r0 == null) goto L6;
        r0.finish();
        return;
    }

    public static void onResume() {
        sActivityVisible = true;
        if (sAccelerometerEnabled == false) goto L6;
        sCocos2dxAccelerometer.enable();
        return;
    }

    public static void onPause() {
        sActivityVisible = false;
        if (sAccelerometerEnabled == false) goto L6;
        sCocos2dxAccelerometer.disable();
        return;
    }

    public static void terminateProcess() {
        Process.killProcess(Process.myPid());
    }

    private static void showDialog(String r1, String r2) {
        sCocos2dxHelperListener.showDialog(r1, r2);
    }

    public static void setEditTextDialogResult(String r2) {
        final byte[] r22 = r2.getBytes("UTF8");     // Catch: UnsupportedEncodingException -> L4
        sCocos2dxHelperListener.runOnGLThread(new 2(r22));     // Catch: UnsupportedEncodingException -> L4
        return;
    }

    private static int displayMetricsToDPI(DisplayMetrics r4) {
        if (r4.xdpi == r4.ydpi) goto L7;
        Log.w(TAG, "xdpi != ydpi, use (xdpi + ydpi)/2 instead.");
        return (int) (((double) (r4.xdpi + r4.ydpi)) / 2.0d);
    L7:
        return (int) r4.xdpi;
    }

    public static int getDPI() {
        if (sActivity == null) goto L13;
        DisplayMetrics r0 = new DisplayMetrics();
        WindowManager r1 = sActivity.getWindowManager();
        if (r1 == null) goto L17;
        Display r12 = r1.getDefaultDisplay();
        if (r12 == null) goto L18;
        r12.getClass().getMethod("getRealMetrics", new Class[]{r0.getClass()}).invoke(r12, new Object[]{r0});     // Catch: Exception -> L10
        return displayMetricsToDPI(r0);
    L10:
        e = move-exception;
        e.printStackTrace();
        r12.getMetrics(r0);
        return displayMetricsToDPI(r0);
    L18:
        return -1;
    L17:
        return -1;
    L13:
        return -1;
    }

    public static byte[] conversionEncoding(byte[] r1, String r2, String r3) {
        return new String(r1, r2).getBytes(r3);
    L4:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    private static void setGameInfoDebugViewText(int r2, String r3) {
        OnGameInfoUpdatedListener r0 = sOnGameInfoUpdatedListener;
        if (r0 == null) goto L13;
        if (r2 != 0) goto L7;
        r0.onGameInfoUpdated_0(r3);
        return;
    L7:
        if (r2 != 1) goto L10;
        r0.onGameInfoUpdated_1(r3);
        return;
    L10:
        if (r2 != 2) goto L16;
        r0.onGameInfoUpdated_2(r3);
        return;
    L16:
        return;
    }

    private static void setJSBInvocationCount(int r1) {
        OnGameInfoUpdatedListener r0 = sOnGameInfoUpdatedListener;
        if (r0 == null) goto L6;
        r0.onJSBInvocationCountUpdated(r1);
        return;
    }

    private static void openDebugView() {
        OnGameInfoUpdatedListener r0 = sOnGameInfoUpdatedListener;
        if (r0 == null) goto L6;
        r0.onOpenDebugView();
        return;
    }

    private static void disableBatchGLCommandsToNative() {
        OnGameInfoUpdatedListener r0 = sOnGameInfoUpdatedListener;
        if (r0 == null) goto L6;
        r0.onDisableBatchGLCommandsToNative();
        return;
    }

    public static void setOnGameInfoUpdatedListener(OnGameInfoUpdatedListener r0) {
        sOnGameInfoUpdatedListener = r0;
    }

    public static OnGameInfoUpdatedListener getOnGameInfoUpdatedListener() {
        return sOnGameInfoUpdatedListener;
    }

    private static float[] getDeviceMotionValue() {
        Cocos2dxAccelerometer.DeviceMotionEvent r0 = sCocos2dxAccelerometer.getDeviceMotionEvent();
        sDeviceMotionValues[0] = r0.acceleration.x;
        sDeviceMotionValues[1] = r0.acceleration.y;
        sDeviceMotionValues[2] = -r0.acceleration.z;
        sDeviceMotionValues[3] = r0.accelerationIncludingGravity.x;
        sDeviceMotionValues[4] = r0.accelerationIncludingGravity.y;
        sDeviceMotionValues[5] = r0.accelerationIncludingGravity.z;
        sDeviceMotionValues[6] = r0.rotationRate.alpha;
        sDeviceMotionValues[7] = r0.rotationRate.beta;
        sDeviceMotionValues[8] = r0.rotationRate.gamma;
        return sDeviceMotionValues;
    }

    public static int getSDKVersion() {
        return Build.VERSION.SDK_INT;
    }

    public static String getSystemVersion() {
        return Build.VERSION.RELEASE;
    }

    public static int getDeviceRotation() {
        return ((WindowManager) sActivity.getSystemService("window")).getDefaultDisplay().getRotation();
    L4:
        e = move-exception;
        e.printStackTrace();
        return 0;
    }

    public static float[] getSafeArea() {
        if (Build.VERSION.SDK_INT < 28) goto L25;
        WindowInsets r0 = getActivity().getWindow().getDecorView().getRootWindowInsets();
        if (r0 == null) goto L25;
        Object r02 = WindowInsets.class.getMethod("getDisplayCutout", new Class[0]).invoke(r0, new Object[0]);     // Catch: InvocationTargetException -> L18 IllegalAccessException -> L20 NoSuchMethodException -> L22
        if (r02 == null) goto L25;
        Class<?> r2 = r02.getClass();     // Catch: InvocationTargetException -> L18 IllegalAccessException -> L20 NoSuchMethodException -> L22
        Method r3 = r2.getMethod("getSafeInsetLeft", new Class[0]);     // Catch: InvocationTargetException -> L18 IllegalAccessException -> L20 NoSuchMethodException -> L22
        Method r5 = r2.getMethod("getSafeInsetRight", new Class[0]);     // Catch: InvocationTargetException -> L18 IllegalAccessException -> L20 NoSuchMethodException -> L22
        Method r6 = r2.getMethod("getSafeInsetBottom", new Class[0]);     // Catch: InvocationTargetException -> L18 IllegalAccessException -> L20 NoSuchMethodException -> L22
        Method r22 = r2.getMethod("getSafeInsetTop", new Class[0]);     // Catch: InvocationTargetException -> L18 IllegalAccessException -> L20 NoSuchMethodException -> L22
        if (r3 == null) goto L25;
        if (r5 == null) goto L25;
        if (r6 == null) goto L25;
        if (r22 == null) goto L25;
        return new float[]{((Integer) r22.invoke(r02, new Object[0])).intValue(), ((Integer) r3.invoke(r02, new Object[0])).intValue(), ((Integer) r6.invoke(r02, new Object[0])).intValue(), ((Integer) r5.invoke(r02, new Object[0])).intValue()};
    L20:
        e = move-exception;
        e.printStackTrace();
    L22:
        e = move-exception;
        e.printStackTrace();
    L18:
        e = move-exception;
        e.printStackTrace();
    L25:
        return new float[]{0.0f, 0.0f, 0.0f, 0.0f};
    }
}
