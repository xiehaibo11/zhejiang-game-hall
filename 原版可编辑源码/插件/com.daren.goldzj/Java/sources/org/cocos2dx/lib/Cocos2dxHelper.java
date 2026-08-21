package org.cocos2dx.lib;

import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.ClipData;
import android.content.ClipboardManager;
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
    private static boolean sAccelerometerEnabled;
    private static Activity sActivity;
    private static boolean sActivityVisible;
    private static AssetManager sAssetManager;
    private static Cocos2dxAccelerometer sCocos2dxAccelerometer;
    private static Cocos2dxHelperListener sCocos2dxHelperListener;
    private static boolean sCompassEnabled;
    private static String sFileDirectory;
    private static OnGameInfoUpdatedListener sOnGameInfoUpdatedListener;
    private static String sPackageName;
    private static Set<PreferenceManager.OnActivityResultListener> onActivityResultListeners = new LinkedHashSet();
    private static Vibrator sVibrateService = null;
    private static String sAssetsPath = "";
    private static ZipResourceFile sOBBFile = null;
    private static BatteryReceiver sBatteryReceiver = new BatteryReceiver();
    private static boolean sInited = false;
    private static float[] sDeviceMotionValues = new float[9];

    public interface Cocos2dxHelperListener {
        void runOnGLThread(Runnable runnable);

        void showDialog(String str, String str2);
    }

    public interface OnGameInfoUpdatedListener {
        void onDisableBatchGLCommandsToNative();

        void onFPSUpdated(float f);

        void onGameInfoUpdated_0(String str);

        void onGameInfoUpdated_1(String str);

        void onGameInfoUpdated_2(String str);

        void onJSBInvocationCountUpdated(int i);

        void onOpenDebugView();
    }

    private static native void nativeSetApkPath(String str);

    private static native void nativeSetAudioDeviceInfo(boolean z, int i, int i2);

    private static native void nativeSetContext(Context context, AssetManager assetManager);

    private static native void nativeSetEditTextDialogResult(byte[] bArr);

    public static void onEnterBackground() {
    }

    public static void onEnterForeground() {
    }

    static class BatteryReceiver extends BroadcastReceiver {
        public float sBatteryLevel = 0.0f;

        BatteryReceiver() {
        }

        @Override
        public void onReceive(Context context, Intent intent) {
            setBatteryLevelByIntent(intent);
        }

        public void setBatteryLevelByIntent(Intent intent) {
            if (intent != null) {
                this.sBatteryLevel = Math.min(Math.max((intent.getIntExtra("level", 0) * 1.0f) / intent.getIntExtra("scale", 1), 0.0f), 1.0f);
            }
        }
    }

    static void registerBatteryLevelReceiver(Context context) {
        sBatteryReceiver.setBatteryLevelByIntent(context.registerReceiver(sBatteryReceiver, new IntentFilter("android.intent.action.BATTERY_CHANGED")));
    }

    static void unregisterBatteryLevelReceiver(Context context) {
        context.unregisterReceiver(sBatteryReceiver);
    }

    public static float getBatteryLevel() {
        return sBatteryReceiver.sBatteryLevel;
    }

    public static int getNetworkType() {
        try {
            NetworkInfo activeNetworkInfo = ((ConnectivityManager) sActivity.getSystemService("connectivity")).getActiveNetworkInfo();
            if (activeNetworkInfo == null) {
                return 0;
            }
            int type = activeNetworkInfo.getType();
            if (type == 0) {
                return 2;
            }
            return type == 1 ? 1 : 0;
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public static void runOnGLThread(Runnable runnable) {
        Activity activity = sActivity;
        if (activity instanceof Cocos2dxActivity) {
            ((Cocos2dxActivity) activity).runOnGLThread(runnable);
            return;
        }
        Cocos2dxGLSurfaceView cocos2dxGLSurfaceView = Cocos2dxGLSurfaceView.getInstance();
        if (cocos2dxGLSurfaceView != null) {
            cocos2dxGLSurfaceView.queueEvent(runnable);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void init(Activity activity) {
        sActivity = activity;
        sCocos2dxHelperListener = (Cocos2dxHelperListener) activity;
        if (sInited) {
            return;
        }
        boolean zHasSystemFeature = activity.getPackageManager().hasSystemFeature("android.hardware.audio.low_latency");
        Log.d(TAG, "isSupportLowLatency:" + zHasSystemFeature);
        int i = 44100;
        int i2 = 192;
        int i3 = 1;
        if (Build.VERSION.SDK_INT >= 17) {
            AudioManager audioManager = (AudioManager) activity.getSystemService("audio");
            String str = (String) Cocos2dxReflectionHelper.invokeInstanceMethod(audioManager, "getProperty", new Class[]{String.class}, new Object[]{Cocos2dxReflectionHelper.getConstantValue(AudioManager.class, "PROPERTY_OUTPUT_SAMPLE_RATE")});
            String str2 = (String) Cocos2dxReflectionHelper.invokeInstanceMethod(audioManager, "getProperty", new Class[]{String.class}, new Object[]{Cocos2dxReflectionHelper.getConstantValue(AudioManager.class, "PROPERTY_OUTPUT_FRAMES_PER_BUFFER")});
            int i4 = Integer.parseInt(str);
            int i5 = Integer.parseInt(str2);
            Log.d(TAG, "sampleRate: " + i4 + ", framesPerBuffer: " + i5);
            i2 = i5;
            i = i4;
        } else {
            Log.d(TAG, "android version is lower than 17");
        }
        nativeSetAudioDeviceInfo(zHasSystemFeature, i, i2);
        sPackageName = activity.getApplicationInfo().packageName;
        sFileDirectory = activity.getFilesDir().getAbsolutePath();
        nativeSetApkPath(getAssetsPath());
        sCocos2dxAccelerometer = new Cocos2dxAccelerometer(activity);
        sAssetManager = activity.getAssets();
        nativeSetContext(activity, sAssetManager);
        sVibrateService = (Vibrator) activity.getSystemService("vibrator");
        sInited = true;
        try {
            i3 = Cocos2dxActivity.getContext().getPackageManager().getPackageInfo(getPackageName(), 0).versionCode;
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
        }
        try {
            sOBBFile = APKExpansionSupport.getAPKExpansionZipFile(Cocos2dxActivity.getContext(), i3, 0);
        } catch (IOException e2) {
            e2.printStackTrace();
        }
    }

    public static String getAssetsPath() {
        if (sAssetsPath == "") {
            int i = 1;
            try {
                i = sActivity.getPackageManager().getPackageInfo(sPackageName, 0).versionCode;
            } catch (PackageManager.NameNotFoundException e) {
                e.printStackTrace();
            }
            String str = Environment.getExternalStorageDirectory().getAbsolutePath() + "/Android/obb/" + sPackageName + "/main." + i + "." + sPackageName + ".obb";
            if (new File(str).exists()) {
                sAssetsPath = str;
            } else {
                sAssetsPath = sActivity.getApplicationInfo().sourceDir;
            }
        }
        return sAssetsPath;
    }

    public static ZipResourceFile getObbFile() {
        return sOBBFile;
    }

    public static Activity getActivity() {
        return sActivity;
    }

    public static void addOnActivityResultListener(PreferenceManager.OnActivityResultListener onActivityResultListener) {
        onActivityResultListeners.add(onActivityResultListener);
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

    public static void setAccelerometerInterval(float f) {
        sCocos2dxAccelerometer.setInterval(f);
    }

    public static void disableAccelerometer() {
        sAccelerometerEnabled = false;
        sCocos2dxAccelerometer.disable();
    }

    public static void setKeepScreenOn(boolean z) {
        ((Cocos2dxActivity) sActivity).setKeepScreenOn(z);
    }

    public static void vibrate(float f) {
        try {
            if (sVibrateService != null && sVibrateService.hasVibrator()) {
                if (Build.VERSION.SDK_INT >= 26) {
                    Class<?> cls = Class.forName("android.os.VibrationEffect");
                    if (cls != null) {
                        int iIntValue = ((Integer) Cocos2dxReflectionHelper.getConstantValue(cls, "DEFAULT_AMPLITUDE")).intValue();
                        Method method = cls.getMethod("createOneShot", Long.TYPE, Integer.TYPE);
                        Cocos2dxReflectionHelper.invokeInstanceMethod(sVibrateService, "vibrate", new Class[]{method.getReturnType()}, new Object[]{method.invoke(cls, Long.valueOf((long) (f * 1000.0f)), Integer.valueOf(iIntValue))});
                    }
                } else {
                    sVibrateService.vibrate((long) (f * 1000.0f));
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getVersion() {
        try {
            return Cocos2dxActivity.getContext().getPackageManager().getPackageInfo(Cocos2dxActivity.getContext().getPackageName(), 0).versionName;
        } catch (Exception unused) {
            return "";
        }
    }

    public static boolean openURL(String str) {
        try {
            Intent intent = new Intent("android.intent.action.VIEW");
            intent.setData(Uri.parse(str));
            sActivity.startActivity(intent);
            return true;
        } catch (Exception unused) {
            return false;
        }
    }

    public static void copyTextToClipboard(final String str) {
        sActivity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                ((ClipboardManager) Cocos2dxHelper.sActivity.getSystemService("clipboard")).setPrimaryClip(ClipData.newPlainText("text", str));
            }
        });
    }

    public static long[] getObbAssetFileDescriptor(String str) {
        AssetFileDescriptor assetFileDescriptor;
        long[] jArr = new long[3];
        ZipResourceFile zipResourceFile = sOBBFile;
        if (zipResourceFile != null && (assetFileDescriptor = zipResourceFile.getAssetFileDescriptor(str)) != null) {
            try {
                ParcelFileDescriptor parcelFileDescriptor = assetFileDescriptor.getParcelFileDescriptor();
                jArr[0] = ((Integer) parcelFileDescriptor.getClass().getMethod("getFd", new Class[0]).invoke(parcelFileDescriptor, new Object[0])).intValue();
                jArr[1] = assetFileDescriptor.getStartOffset();
                jArr[2] = assetFileDescriptor.getLength();
            } catch (IllegalAccessException e) {
                Log.e(TAG, e.toString());
            } catch (NoSuchMethodException unused) {
                Log.e(TAG, "Accessing file descriptor directly from the OBB is only supported from Android 3.1 (API level 12) and above.");
            } catch (InvocationTargetException e2) {
                Log.e(TAG, e2.toString());
            }
        }
        return jArr;
    }

    public static void endApplication() {
        Activity activity = sActivity;
        if (activity != null) {
            activity.finish();
        }
    }

    public static void onResume() {
        sActivityVisible = true;
        if (sAccelerometerEnabled) {
            sCocos2dxAccelerometer.enable();
        }
    }

    public static void onPause() {
        sActivityVisible = false;
        if (sAccelerometerEnabled) {
            sCocos2dxAccelerometer.disable();
        }
    }

    public static void terminateProcess() {
        Process.killProcess(Process.myPid());
    }

    private static void showDialog(String str, String str2) {
        sCocos2dxHelperListener.showDialog(str, str2);
    }

    public static void setEditTextDialogResult(String str) {
        try {
            final byte[] bytes = str.getBytes("UTF8");
            sCocos2dxHelperListener.runOnGLThread(new Runnable() {
                @Override
                public void run() {
                    Cocos2dxHelper.nativeSetEditTextDialogResult(bytes);
                }
            });
        } catch (UnsupportedEncodingException unused) {
        }
    }

    private static int displayMetricsToDPI(DisplayMetrics displayMetrics) {
        if (displayMetrics.xdpi != displayMetrics.ydpi) {
            Log.w(TAG, "xdpi != ydpi, use (xdpi + ydpi)/2 instead.");
            return (int) (((double) (displayMetrics.xdpi + displayMetrics.ydpi)) / 2.0d);
        }
        return (int) displayMetrics.xdpi;
    }

    public static int getDPI() {
        Display defaultDisplay;
        if (sActivity == null) {
            return -1;
        }
        DisplayMetrics displayMetrics = new DisplayMetrics();
        WindowManager windowManager = sActivity.getWindowManager();
        if (windowManager == null || (defaultDisplay = windowManager.getDefaultDisplay()) == null) {
            return -1;
        }
        try {
            defaultDisplay.getClass().getMethod("getRealMetrics", displayMetrics.getClass()).invoke(defaultDisplay, displayMetrics);
            return displayMetricsToDPI(displayMetrics);
        } catch (Exception e) {
            e.printStackTrace();
            defaultDisplay.getMetrics(displayMetrics);
            return displayMetricsToDPI(displayMetrics);
        }
    }

    public static byte[] conversionEncoding(byte[] bArr, String str, String str2) {
        try {
            return new String(bArr, str).getBytes(str2);
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
            return null;
        }
    }

    private static void setGameInfoDebugViewText(int i, String str) {
        OnGameInfoUpdatedListener onGameInfoUpdatedListener = sOnGameInfoUpdatedListener;
        if (onGameInfoUpdatedListener != null) {
            if (i == 0) {
                onGameInfoUpdatedListener.onGameInfoUpdated_0(str);
            } else if (i == 1) {
                onGameInfoUpdatedListener.onGameInfoUpdated_1(str);
            } else if (i == 2) {
                onGameInfoUpdatedListener.onGameInfoUpdated_2(str);
            }
        }
    }

    private static void setJSBInvocationCount(int i) {
        OnGameInfoUpdatedListener onGameInfoUpdatedListener = sOnGameInfoUpdatedListener;
        if (onGameInfoUpdatedListener != null) {
            onGameInfoUpdatedListener.onJSBInvocationCountUpdated(i);
        }
    }

    private static void openDebugView() {
        OnGameInfoUpdatedListener onGameInfoUpdatedListener = sOnGameInfoUpdatedListener;
        if (onGameInfoUpdatedListener != null) {
            onGameInfoUpdatedListener.onOpenDebugView();
        }
    }

    private static void disableBatchGLCommandsToNative() {
        OnGameInfoUpdatedListener onGameInfoUpdatedListener = sOnGameInfoUpdatedListener;
        if (onGameInfoUpdatedListener != null) {
            onGameInfoUpdatedListener.onDisableBatchGLCommandsToNative();
        }
    }

    public static void setOnGameInfoUpdatedListener(OnGameInfoUpdatedListener onGameInfoUpdatedListener) {
        sOnGameInfoUpdatedListener = onGameInfoUpdatedListener;
    }

    public static OnGameInfoUpdatedListener getOnGameInfoUpdatedListener() {
        return sOnGameInfoUpdatedListener;
    }

    private static float[] getDeviceMotionValue() {
        Cocos2dxAccelerometer.DeviceMotionEvent deviceMotionEvent = sCocos2dxAccelerometer.getDeviceMotionEvent();
        sDeviceMotionValues[0] = deviceMotionEvent.acceleration.x;
        sDeviceMotionValues[1] = deviceMotionEvent.acceleration.y;
        sDeviceMotionValues[2] = -deviceMotionEvent.acceleration.z;
        sDeviceMotionValues[3] = deviceMotionEvent.accelerationIncludingGravity.x;
        sDeviceMotionValues[4] = deviceMotionEvent.accelerationIncludingGravity.y;
        sDeviceMotionValues[5] = deviceMotionEvent.accelerationIncludingGravity.z;
        sDeviceMotionValues[6] = deviceMotionEvent.rotationRate.alpha;
        sDeviceMotionValues[7] = deviceMotionEvent.rotationRate.beta;
        sDeviceMotionValues[8] = deviceMotionEvent.rotationRate.gamma;
        return sDeviceMotionValues;
    }

    public static int getSDKVersion() {
        return Build.VERSION.SDK_INT;
    }

    public static String getSystemVersion() {
        return Build.VERSION.RELEASE;
    }

    public static int getDeviceRotation() {
        try {
            return ((WindowManager) sActivity.getSystemService("window")).getDefaultDisplay().getRotation();
        } catch (NullPointerException e) {
            e.printStackTrace();
            return 0;
        }
    }

    public static float[] getSafeArea() {
        WindowInsets rootWindowInsets;
        if (Build.VERSION.SDK_INT >= 28 && (rootWindowInsets = getActivity().getWindow().getDecorView().getRootWindowInsets()) != null) {
            try {
                Object objInvoke = WindowInsets.class.getMethod("getDisplayCutout", new Class[0]).invoke(rootWindowInsets, new Object[0]);
                if (objInvoke != null) {
                    Class<?> cls = objInvoke.getClass();
                    Method method = cls.getMethod("getSafeInsetLeft", new Class[0]);
                    Method method2 = cls.getMethod("getSafeInsetRight", new Class[0]);
                    Method method3 = cls.getMethod("getSafeInsetBottom", new Class[0]);
                    Method method4 = cls.getMethod("getSafeInsetTop", new Class[0]);
                    if (method != null && method2 != null && method3 != null && method4 != null) {
                        return new float[]{((Integer) method4.invoke(objInvoke, new Object[0])).intValue(), ((Integer) method.invoke(objInvoke, new Object[0])).intValue(), ((Integer) method3.invoke(objInvoke, new Object[0])).intValue(), ((Integer) method2.invoke(objInvoke, new Object[0])).intValue()};
                    }
                }
            } catch (IllegalAccessException e) {
                e.printStackTrace();
            } catch (NoSuchMethodException e2) {
                e2.printStackTrace();
            } catch (InvocationTargetException e3) {
                e3.printStackTrace();
            }
        }
        return new float[]{0.0f, 0.0f, 0.0f, 0.0f};
    }
}
