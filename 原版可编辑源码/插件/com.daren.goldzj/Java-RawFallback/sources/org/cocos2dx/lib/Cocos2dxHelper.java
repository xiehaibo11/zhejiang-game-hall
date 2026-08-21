package org.cocos2dx.lib;

public class Cocos2dxHelper {
    public static final int NETWORK_TYPE_LAN = 1;
    public static final int NETWORK_TYPE_NONE = 0;
    public static final int NETWORK_TYPE_WWAN = 2;
    private static final java.lang.String PREFS_NAME = "Cocos2dxPrefsFile";
    private static final int RUNNABLES_PER_FRAME = 5;
    private static final java.lang.String TAG = "Cocos2dxHelper";
    private static java.util.Set<android.preference.PreferenceManager.OnActivityResultListener> onActivityResultListeners;
    private static boolean sAccelerometerEnabled;
    private static android.app.Activity sActivity;
    private static boolean sActivityVisible;
    private static android.content.res.AssetManager sAssetManager;
    private static java.lang.String sAssetsPath;
    private static org.cocos2dx.lib.Cocos2dxHelper.BatteryReceiver sBatteryReceiver;
    private static org.cocos2dx.lib.Cocos2dxAccelerometer sCocos2dxAccelerometer;
    private static org.cocos2dx.lib.Cocos2dxHelper.Cocos2dxHelperListener sCocos2dxHelperListener;
    private static boolean sCompassEnabled;
    private static float[] sDeviceMotionValues;
    private static java.lang.String sFileDirectory;
    private static boolean sInited;
    private static com.android.vending.expansion.zipfile.ZipResourceFile sOBBFile;
    private static org.cocos2dx.lib.Cocos2dxHelper.OnGameInfoUpdatedListener sOnGameInfoUpdatedListener;
    private static java.lang.String sPackageName;
    private static android.os.Vibrator sVibrateService;



    static class BatteryReceiver extends android.content.BroadcastReceiver {
        public float sBatteryLevel;

        BatteryReceiver() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.sBatteryLevel = r0
                return
        }

        @Override
        public void onReceive(android.content.Context r1, android.content.Intent r2) {
                r0 = this;
                r0.setBatteryLevelByIntent(r2)
                return
        }

        public void setBatteryLevelByIntent(android.content.Intent r4) {
                r3 = this;
                if (r4 == 0) goto L22
                r0 = 0
                java.lang.String r1 = "level"
                int r0 = r4.getIntExtra(r1, r0)
                r1 = 1
                java.lang.String r2 = "scale"
                int r4 = r4.getIntExtra(r2, r1)
                float r0 = (float) r0
                r1 = 1065353216(0x3f800000, float:1.0)
                float r0 = r0 * r1
                float r4 = (float) r4
                float r0 = r0 / r4
                r4 = 0
                float r4 = java.lang.Math.max(r0, r4)
                float r4 = java.lang.Math.min(r4, r1)
                r3.sBatteryLevel = r4
            L22:
                return
        }
    }

    public interface Cocos2dxHelperListener {
        void runOnGLThread(java.lang.Runnable r1);

        void showDialog(java.lang.String r1, java.lang.String r2);
    }

    public interface OnGameInfoUpdatedListener {
        void onDisableBatchGLCommandsToNative();

        void onFPSUpdated(float r1);

        void onGameInfoUpdated_0(java.lang.String r1);

        void onGameInfoUpdated_1(java.lang.String r1);

        void onGameInfoUpdated_2(java.lang.String r1);

        void onJSBInvocationCountUpdated(int r1);

        void onOpenDebugView();
    }

    static {
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            org.cocos2dx.lib.Cocos2dxHelper.onActivityResultListeners = r0
            r0 = 0
            org.cocos2dx.lib.Cocos2dxHelper.sVibrateService = r0
            java.lang.String r1 = ""
            org.cocos2dx.lib.Cocos2dxHelper.sAssetsPath = r1
            org.cocos2dx.lib.Cocos2dxHelper.sOBBFile = r0
            org.cocos2dx.lib.Cocos2dxHelper$BatteryReceiver r0 = new org.cocos2dx.lib.Cocos2dxHelper$BatteryReceiver
            r0.<init>()
            org.cocos2dx.lib.Cocos2dxHelper.sBatteryReceiver = r0
            r0 = 0
            org.cocos2dx.lib.Cocos2dxHelper.sInited = r0
            r0 = 9
            float[] r0 = new float[r0]
            org.cocos2dx.lib.Cocos2dxHelper.sDeviceMotionValues = r0
            return
    }

    public Cocos2dxHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.app.Activity access$000() {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            return r0
    }

    static void access$100(byte[] r0) {
            nativeSetEditTextDialogResult(r0)
            return
    }

    public static void addOnActivityResultListener(android.preference.PreferenceManager.OnActivityResultListener r1) {
            java.util.Set<android.preference.PreferenceManager$OnActivityResultListener> r0 = org.cocos2dx.lib.Cocos2dxHelper.onActivityResultListeners
            r0.add(r1)
            return
    }

    public static byte[] conversionEncoding(byte[] r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> La
            r0.<init>(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> La
            byte[] r1 = r0.getBytes(r3)     // Catch: java.io.UnsupportedEncodingException -> La
            return r1
        La:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    public static void copyTextToClipboard(java.lang.String r2) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            org.cocos2dx.lib.Cocos2dxHelper$1 r1 = new org.cocos2dx.lib.Cocos2dxHelper$1
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static void disableAccelerometer() {
            r0 = 0
            org.cocos2dx.lib.Cocos2dxHelper.sAccelerometerEnabled = r0
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxAccelerometer
            r0.disable()
            return
    }

    private static void disableBatchGLCommandsToNative() {
            org.cocos2dx.lib.Cocos2dxHelper$OnGameInfoUpdatedListener r0 = org.cocos2dx.lib.Cocos2dxHelper.sOnGameInfoUpdatedListener
            if (r0 == 0) goto L7
            r0.onDisableBatchGLCommandsToNative()
        L7:
            return
    }

    private static int displayMetricsToDPI(android.util.DisplayMetrics r4) {
            float r0 = r4.xdpi
            float r1 = r4.ydpi
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 == 0) goto L1a
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.String r1 = "xdpi != ydpi, use (xdpi + ydpi)/2 instead."
            android.util.Log.w(r0, r1)
            float r0 = r4.xdpi
            float r4 = r4.ydpi
            float r0 = r0 + r4
            double r0 = (double) r0
            r2 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r0 = r0 / r2
            int r4 = (int) r0
            return r4
        L1a:
            float r4 = r4.xdpi
            int r4 = (int) r4
            return r4
    }

    public static void enableAccelerometer() {
            r0 = 1
            org.cocos2dx.lib.Cocos2dxHelper.sAccelerometerEnabled = r0
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxAccelerometer
            r0.enable()
            return
    }

    public static void endApplication() {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            if (r0 == 0) goto L7
            r0.finish()
        L7:
            return
    }

    public static android.app.Activity getActivity() {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            return r0
    }

    public static android.content.res.AssetManager getAssetManager() {
            android.content.res.AssetManager r0 = org.cocos2dx.lib.Cocos2dxHelper.sAssetManager
            return r0
    }

    public static java.lang.String getAssetsPath() {
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHelper.sAssetsPath
            java.lang.String r1 = ""
            if (r0 != r1) goto L68
            r0 = 1
            android.app.Activity r1 = org.cocos2dx.lib.Cocos2dxHelper.sActivity     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L17
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L17
            java.lang.String r2 = org.cocos2dx.lib.Cocos2dxHelper.sPackageName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L17
            r3 = 0
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L17
            int r0 = r1.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L17
            goto L1b
        L17:
            r1 = move-exception
            r1.printStackTrace()
        L1b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r2 = r2.getAbsolutePath()
            r1.append(r2)
            java.lang.String r2 = "/Android/obb/"
            r1.append(r2)
            java.lang.String r2 = org.cocos2dx.lib.Cocos2dxHelper.sPackageName
            r1.append(r2)
            java.lang.String r2 = "/main."
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = "."
            r1.append(r0)
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHelper.sPackageName
            r1.append(r0)
            java.lang.String r0 = ".obb"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r1 = r1.exists()
            if (r1 == 0) goto L5e
            org.cocos2dx.lib.Cocos2dxHelper.sAssetsPath = r0
            goto L68
        L5e:
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            java.lang.String r0 = r0.sourceDir
            org.cocos2dx.lib.Cocos2dxHelper.sAssetsPath = r0
        L68:
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHelper.sAssetsPath
            return r0
    }

    public static float getBatteryLevel() {
            org.cocos2dx.lib.Cocos2dxHelper$BatteryReceiver r0 = org.cocos2dx.lib.Cocos2dxHelper.sBatteryReceiver
            float r0 = r0.sBatteryLevel
            return r0
    }

    public static java.lang.String getCurrentLanguage() {
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r0.getLanguage()
            return r0
    }

    public static java.lang.String getCurrentLanguageCode() {
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static int getDPI() {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            if (r0 == 0) goto L43
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            android.app.Activity r1 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            android.view.WindowManager r1 = r1.getWindowManager()
            if (r1 == 0) goto L43
            android.view.Display r1 = r1.getDefaultDisplay()
            if (r1 == 0) goto L43
            java.lang.Class r2 = r1.getClass()     // Catch: java.lang.Exception -> L37
            java.lang.String r3 = "getRealMetrics"
            r4 = 1
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L37
            java.lang.Class r6 = r0.getClass()     // Catch: java.lang.Exception -> L37
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Exception -> L37
            java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.Exception -> L37
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L37
            r3[r7] = r0     // Catch: java.lang.Exception -> L37
            r2.invoke(r1, r3)     // Catch: java.lang.Exception -> L37
            int r0 = displayMetricsToDPI(r0)     // Catch: java.lang.Exception -> L37
            return r0
        L37:
            r2 = move-exception
            r2.printStackTrace()
            r1.getMetrics(r0)
            int r0 = displayMetricsToDPI(r0)
            return r0
        L43:
            r0 = -1
            return r0
    }

    public static java.lang.String getDeviceModel() {
            java.lang.String r0 = android.os.Build.MODEL
            return r0
    }

    private static float[] getDeviceMotionValue() {
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxAccelerometer
            org.cocos2dx.lib.Cocos2dxAccelerometer$DeviceMotionEvent r0 = r0.getDeviceMotionEvent()
            float[] r1 = org.cocos2dx.lib.Cocos2dxHelper.sDeviceMotionValues
            org.cocos2dx.lib.Cocos2dxAccelerometer$Acceleration r2 = r0.acceleration
            float r2 = r2.x
            r3 = 0
            r1[r3] = r2
            float[] r1 = org.cocos2dx.lib.Cocos2dxHelper.sDeviceMotionValues
            org.cocos2dx.lib.Cocos2dxAccelerometer$Acceleration r2 = r0.acceleration
            float r2 = r2.y
            r3 = 1
            r1[r3] = r2
            float[] r1 = org.cocos2dx.lib.Cocos2dxHelper.sDeviceMotionValues
            org.cocos2dx.lib.Cocos2dxAccelerometer$Acceleration r2 = r0.acceleration
            float r2 = r2.z
            float r2 = -r2
            r3 = 2
            r1[r3] = r2
            float[] r1 = org.cocos2dx.lib.Cocos2dxHelper.sDeviceMotionValues
            org.cocos2dx.lib.Cocos2dxAccelerometer$Acceleration r2 = r0.accelerationIncludingGravity
            float r2 = r2.x
            r3 = 3
            r1[r3] = r2
            float[] r1 = org.cocos2dx.lib.Cocos2dxHelper.sDeviceMotionValues
            org.cocos2dx.lib.Cocos2dxAccelerometer$Acceleration r2 = r0.accelerationIncludingGravity
            float r2 = r2.y
            r3 = 4
            r1[r3] = r2
            float[] r1 = org.cocos2dx.lib.Cocos2dxHelper.sDeviceMotionValues
            org.cocos2dx.lib.Cocos2dxAccelerometer$Acceleration r2 = r0.accelerationIncludingGravity
            float r2 = r2.z
            r3 = 5
            r1[r3] = r2
            float[] r1 = org.cocos2dx.lib.Cocos2dxHelper.sDeviceMotionValues
            org.cocos2dx.lib.Cocos2dxAccelerometer$RotationRate r2 = r0.rotationRate
            float r2 = r2.alpha
            r3 = 6
            r1[r3] = r2
            float[] r1 = org.cocos2dx.lib.Cocos2dxHelper.sDeviceMotionValues
            org.cocos2dx.lib.Cocos2dxAccelerometer$RotationRate r2 = r0.rotationRate
            float r2 = r2.beta
            r3 = 7
            r1[r3] = r2
            float[] r1 = org.cocos2dx.lib.Cocos2dxHelper.sDeviceMotionValues
            org.cocos2dx.lib.Cocos2dxAccelerometer$RotationRate r0 = r0.rotationRate
            float r0 = r0.gamma
            r2 = 8
            r1[r2] = r0
            float[] r0 = org.cocos2dx.lib.Cocos2dxHelper.sDeviceMotionValues
            return r0
    }

    public static int getDeviceRotation() {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity     // Catch: java.lang.NullPointerException -> L13
            java.lang.String r1 = "window"
            java.lang.Object r0 = r0.getSystemService(r1)     // Catch: java.lang.NullPointerException -> L13
            android.view.WindowManager r0 = (android.view.WindowManager) r0     // Catch: java.lang.NullPointerException -> L13
            android.view.Display r0 = r0.getDefaultDisplay()     // Catch: java.lang.NullPointerException -> L13
            int r0 = r0.getRotation()     // Catch: java.lang.NullPointerException -> L13
            return r0
        L13:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static int getNetworkType() {
            r0 = 0
            android.app.Activity r1 = org.cocos2dx.lib.Cocos2dxHelper.sActivity     // Catch: java.lang.Exception -> L1f
            java.lang.String r2 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Exception -> L1f
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Exception -> L1f
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L1f
            if (r1 != 0) goto L12
            return r0
        L12:
            int r1 = r1.getType()
            r2 = 1
            if (r1 != 0) goto L1b
            r0 = 2
            goto L1e
        L1b:
            if (r1 != r2) goto L1e
            r0 = 1
        L1e:
            return r0
        L1f:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static long[] getObbAssetFileDescriptor(java.lang.String r6) {
            r0 = 3
            long[] r0 = new long[r0]
            com.android.vending.expansion.zipfile.ZipResourceFile r1 = org.cocos2dx.lib.Cocos2dxHelper.sOBBFile
            if (r1 == 0) goto L59
            android.content.res.AssetFileDescriptor r6 = r1.getAssetFileDescriptor(r6)
            if (r6 == 0) goto L59
            android.os.ParcelFileDescriptor r1 = r6.getParcelFileDescriptor()     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            java.lang.Class r2 = r1.getClass()     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            java.lang.String r3 = "getFd"
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            java.lang.Object r1 = r2.invoke(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            int r1 = r1.intValue()     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            long r1 = (long) r1     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            r0[r4] = r1     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            r1 = 1
            long r2 = r6.getStartOffset()     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            r0[r1] = r2     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            r1 = 2
            long r2 = r6.getLength()     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            r0[r1] = r2     // Catch: java.lang.reflect.InvocationTargetException -> L3c java.lang.IllegalAccessException -> L47 java.lang.NoSuchMethodException -> L52
            goto L59
        L3c:
            r6 = move-exception
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.String r6 = r6.toString()
            android.util.Log.e(r1, r6)
            goto L59
        L47:
            r6 = move-exception
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.String r6 = r6.toString()
            android.util.Log.e(r1, r6)
            goto L59
        L52:
            java.lang.String r6 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.String r1 = "Accessing file descriptor directly from the OBB is only supported from Android 3.1 (API level 12) and above."
            android.util.Log.e(r6, r1)
        L59:
            return r0
    }

    public static com.android.vending.expansion.zipfile.ZipResourceFile getObbFile() {
            com.android.vending.expansion.zipfile.ZipResourceFile r0 = org.cocos2dx.lib.Cocos2dxHelper.sOBBFile
            return r0
    }

    public static java.util.Set<android.preference.PreferenceManager.OnActivityResultListener> getOnActivityResultListeners() {
            java.util.Set<android.preference.PreferenceManager$OnActivityResultListener> r0 = org.cocos2dx.lib.Cocos2dxHelper.onActivityResultListeners
            return r0
    }

    public static org.cocos2dx.lib.Cocos2dxHelper.OnGameInfoUpdatedListener getOnGameInfoUpdatedListener() {
            org.cocos2dx.lib.Cocos2dxHelper$OnGameInfoUpdatedListener r0 = org.cocos2dx.lib.Cocos2dxHelper.sOnGameInfoUpdatedListener
            return r0
    }

    public static java.lang.String getPackageName() {
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHelper.sPackageName
            return r0
    }

    public static int getSDKVersion() {
            int r0 = android.os.Build.VERSION.SDK_INT
            return r0
    }

    public static float[] getSafeArea() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 4
            r2 = 28
            if (r0 < r2) goto Lac
            android.app.Activity r0 = getActivity()
            android.view.Window r0 = r0.getWindow()
            android.view.View r0 = r0.getDecorView()
            android.view.WindowInsets r0 = r0.getRootWindowInsets()
            if (r0 != 0) goto L1b
            goto Lac
        L1b:
            java.lang.Class<android.view.WindowInsets> r2 = android.view.WindowInsets.class
            java.lang.String r3 = "getDisplayCutout"
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Object r0 = r2.invoke(r0, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            if (r0 != 0) goto L30
            goto Lac
        L30:
            java.lang.Class r2 = r0.getClass()     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.String r3 = "getSafeInsetLeft"
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.reflect.Method r3 = r2.getMethod(r3, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.String r5 = "getSafeInsetRight"
            java.lang.Class[] r6 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.reflect.Method r5 = r2.getMethod(r5, r6)     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.String r6 = "getSafeInsetBottom"
            java.lang.Class[] r7 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.reflect.Method r6 = r2.getMethod(r6, r7)     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.String r7 = "getSafeInsetTop"
            java.lang.Class[] r8 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.reflect.Method r2 = r2.getMethod(r7, r8)     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            if (r3 == 0) goto Lac
            if (r5 == 0) goto Lac
            if (r6 == 0) goto Lac
            if (r2 == 0) goto Lac
            java.lang.Object[] r7 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Object r3 = r3.invoke(r0, r7)     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            int r3 = r3.intValue()     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Object[] r7 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Object r5 = r5.invoke(r0, r7)     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            int r5 = r5.intValue()     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Object[] r7 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Object r2 = r2.invoke(r0, r7)     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            int r2 = r2.intValue()     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Object[] r7 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Object r0 = r6.invoke(r0, r7)     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            int r0 = r0.intValue()     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            float[] r6 = new float[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            float r2 = (float) r2     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            r6[r4] = r2     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            r2 = 1
            float r3 = (float) r3     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            r6[r2] = r3     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            r2 = 2
            float r0 = (float) r0     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            r6[r2] = r0     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            r0 = 3
            float r2 = (float) r5     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            r6[r0] = r2     // Catch: java.lang.reflect.InvocationTargetException -> L9e java.lang.IllegalAccessException -> La3 java.lang.NoSuchMethodException -> La8
            return r6
        L9e:
            r0 = move-exception
            r0.printStackTrace()
            goto Lac
        La3:
            r0 = move-exception
            r0.printStackTrace()
            goto Lac
        La8:
            r0 = move-exception
            r0.printStackTrace()
        Lac:
            float[] r0 = new float[r1]
            r0 = {x00b2: FILL_ARRAY_DATA , data: [0, 0, 0, 0} // fill-array
            return r0
    }

    public static java.lang.String getSystemVersion() {
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            return r0
    }

    public static java.lang.String getVersion() {
            android.content.Context r0 = org.cocos2dx.lib.Cocos2dxActivity.getContext()     // Catch: java.lang.Exception -> L18
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L18
            android.content.Context r1 = org.cocos2dx.lib.Cocos2dxActivity.getContext()     // Catch: java.lang.Exception -> L18
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Exception -> L18
            r2 = 0
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L18
            java.lang.String r0 = r0.versionName     // Catch: java.lang.Exception -> L18
            return r0
        L18:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String getWritablePath() {
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHelper.sFileDirectory
            return r0
    }

    public static void init(android.app.Activity r10) {
            org.cocos2dx.lib.Cocos2dxHelper.sActivity = r10
            r0 = r10
            org.cocos2dx.lib.Cocos2dxHelper$Cocos2dxHelperListener r0 = (org.cocos2dx.lib.Cocos2dxHelper.Cocos2dxHelperListener) r0
            org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxHelperListener = r0
            boolean r0 = org.cocos2dx.lib.Cocos2dxHelper.sInited
            if (r0 != 0) goto L101
            android.content.pm.PackageManager r0 = r10.getPackageManager()
            java.lang.String r1 = "android.hardware.audio.low_latency"
            boolean r0 = r0.hasSystemFeature(r1)
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "isSupportLowLatency:"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            android.util.Log.d(r1, r2)
            r1 = 44100(0xac44, float:6.1797E-41)
            r2 = 192(0xc0, float:2.69E-43)
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 17
            r5 = 0
            r6 = 1
            if (r3 < r4) goto L9a
            java.lang.String r1 = "audio"
            java.lang.Object r1 = r10.getSystemService(r1)
            android.media.AudioManager r1 = (android.media.AudioManager) r1
            java.lang.Class<android.media.AudioManager> r2 = android.media.AudioManager.class
            java.lang.Object[] r3 = new java.lang.Object[r6]
            java.lang.String r4 = "PROPERTY_OUTPUT_SAMPLE_RATE"
            java.lang.Object r4 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r2, r4)
            r3[r5] = r4
            java.lang.Class[] r4 = new java.lang.Class[r6]
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r4[r5] = r7
            java.lang.String r7 = "getProperty"
            java.lang.Object r3 = org.cocos2dx.lib.Cocos2dxReflectionHelper.invokeInstanceMethod(r1, r7, r4, r3)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object[] r4 = new java.lang.Object[r6]
            java.lang.String r8 = "PROPERTY_OUTPUT_FRAMES_PER_BUFFER"
            java.lang.Object r2 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r2, r8)
            r4[r5] = r2
            java.lang.Class[] r2 = new java.lang.Class[r6]
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r2[r5] = r8
            java.lang.Object r1 = org.cocos2dx.lib.Cocos2dxReflectionHelper.invokeInstanceMethod(r1, r7, r2, r4)
            java.lang.String r1 = (java.lang.String) r1
            int r2 = java.lang.Integer.parseInt(r3)
            int r1 = java.lang.Integer.parseInt(r1)
            java.lang.String r3 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r7 = "sampleRate: "
            r4.append(r7)
            r4.append(r2)
            java.lang.String r7 = ", framesPerBuffer: "
            r4.append(r7)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            android.util.Log.d(r3, r4)
            r9 = r2
            r2 = r1
            r1 = r9
            goto La1
        L9a:
            java.lang.String r3 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.String r4 = "android version is lower than 17"
            android.util.Log.d(r3, r4)
        La1:
            nativeSetAudioDeviceInfo(r0, r1, r2)
            android.content.pm.ApplicationInfo r0 = r10.getApplicationInfo()
            java.lang.String r0 = r0.packageName
            org.cocos2dx.lib.Cocos2dxHelper.sPackageName = r0
            java.io.File r0 = r10.getFilesDir()
            java.lang.String r0 = r0.getAbsolutePath()
            org.cocos2dx.lib.Cocos2dxHelper.sFileDirectory = r0
            java.lang.String r0 = getAssetsPath()
            nativeSetApkPath(r0)
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = new org.cocos2dx.lib.Cocos2dxAccelerometer
            r0.<init>(r10)
            org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxAccelerometer = r0
            android.content.res.AssetManager r0 = r10.getAssets()
            org.cocos2dx.lib.Cocos2dxHelper.sAssetManager = r0
            android.content.res.AssetManager r0 = org.cocos2dx.lib.Cocos2dxHelper.sAssetManager
            nativeSetContext(r10, r0)
            java.lang.String r0 = "vibrator"
            java.lang.Object r10 = r10.getSystemService(r0)
            android.os.Vibrator r10 = (android.os.Vibrator) r10
            org.cocos2dx.lib.Cocos2dxHelper.sVibrateService = r10
            org.cocos2dx.lib.Cocos2dxHelper.sInited = r6
            android.content.Context r10 = org.cocos2dx.lib.Cocos2dxActivity.getContext()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lee
            android.content.pm.PackageManager r10 = r10.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lee
            java.lang.String r0 = getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lee
            android.content.pm.PackageInfo r10 = r10.getPackageInfo(r0, r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lee
            int r6 = r10.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lee
            goto Lf2
        Lee:
            r10 = move-exception
            r10.printStackTrace()
        Lf2:
            android.content.Context r10 = org.cocos2dx.lib.Cocos2dxActivity.getContext()     // Catch: java.io.IOException -> Lfd
            com.android.vending.expansion.zipfile.ZipResourceFile r10 = com.android.vending.expansion.zipfile.APKExpansionSupport.getAPKExpansionZipFile(r10, r6, r5)     // Catch: java.io.IOException -> Lfd
            org.cocos2dx.lib.Cocos2dxHelper.sOBBFile = r10     // Catch: java.io.IOException -> Lfd
            goto L101
        Lfd:
            r10 = move-exception
            r10.printStackTrace()
        L101:
            return
    }

    public static boolean isActivityVisible() {
            boolean r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivityVisible
            return r0
    }

    private static native void nativeSetApkPath(java.lang.String r0);

    private static native void nativeSetAudioDeviceInfo(boolean r0, int r1, int r2);

    private static native void nativeSetContext(android.content.Context r0, android.content.res.AssetManager r1);

    private static native void nativeSetEditTextDialogResult(byte[] r0);

    public static void onEnterBackground() {
            return
    }

    public static void onEnterForeground() {
            return
    }

    public static void onPause() {
            r0 = 0
            org.cocos2dx.lib.Cocos2dxHelper.sActivityVisible = r0
            boolean r0 = org.cocos2dx.lib.Cocos2dxHelper.sAccelerometerEnabled
            if (r0 == 0) goto Lc
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxAccelerometer
            r0.disable()
        Lc:
            return
    }

    public static void onResume() {
            r0 = 1
            org.cocos2dx.lib.Cocos2dxHelper.sActivityVisible = r0
            boolean r0 = org.cocos2dx.lib.Cocos2dxHelper.sAccelerometerEnabled
            if (r0 == 0) goto Lc
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxAccelerometer
            r0.enable()
        Lc:
            return
    }

    private static void openDebugView() {
            org.cocos2dx.lib.Cocos2dxHelper$OnGameInfoUpdatedListener r0 = org.cocos2dx.lib.Cocos2dxHelper.sOnGameInfoUpdatedListener
            if (r0 == 0) goto L7
            r0.onOpenDebugView()
        L7:
            return
    }

    public static boolean openURL(java.lang.String r2) {
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L15
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L15
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Exception -> L15
            r0.setData(r2)     // Catch: java.lang.Exception -> L15
            android.app.Activity r2 = org.cocos2dx.lib.Cocos2dxHelper.sActivity     // Catch: java.lang.Exception -> L15
            r2.startActivity(r0)     // Catch: java.lang.Exception -> L15
            r2 = 1
            goto L16
        L15:
            r2 = 0
        L16:
            return r2
    }

    static void registerBatteryLevelReceiver(android.content.Context r3) {
            org.cocos2dx.lib.Cocos2dxHelper$BatteryReceiver r0 = org.cocos2dx.lib.Cocos2dxHelper.sBatteryReceiver
            android.content.IntentFilter r1 = new android.content.IntentFilter
            java.lang.String r2 = "android.intent.action.BATTERY_CHANGED"
            r1.<init>(r2)
            android.content.Intent r3 = r3.registerReceiver(r0, r1)
            org.cocos2dx.lib.Cocos2dxHelper$BatteryReceiver r0 = org.cocos2dx.lib.Cocos2dxHelper.sBatteryReceiver
            r0.setBatteryLevelByIntent(r3)
            return
    }

    public static void runOnGLThread(java.lang.Runnable r2) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            boolean r1 = r0 instanceof org.cocos2dx.lib.Cocos2dxActivity
            if (r1 == 0) goto Lc
            org.cocos2dx.lib.Cocos2dxActivity r0 = (org.cocos2dx.lib.Cocos2dxActivity) r0
            r0.runOnGLThread(r2)
            goto L15
        Lc:
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = org.cocos2dx.lib.Cocos2dxGLSurfaceView.getInstance()
            if (r0 == 0) goto L15
            r0.queueEvent(r2)
        L15:
            return
    }

    public static void setAccelerometerInterval(float r1) {
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxAccelerometer
            r0.setInterval(r1)
            return
    }

    public static void setEditTextDialogResult(java.lang.String r2) {
            java.lang.String r0 = "UTF8"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L10
            org.cocos2dx.lib.Cocos2dxHelper$Cocos2dxHelperListener r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxHelperListener     // Catch: java.io.UnsupportedEncodingException -> L10
            org.cocos2dx.lib.Cocos2dxHelper$2 r1 = new org.cocos2dx.lib.Cocos2dxHelper$2     // Catch: java.io.UnsupportedEncodingException -> L10
            r1.<init>(r2)     // Catch: java.io.UnsupportedEncodingException -> L10
            r0.runOnGLThread(r1)     // Catch: java.io.UnsupportedEncodingException -> L10
        L10:
            return
    }

    private static void setGameInfoDebugViewText(int r2, java.lang.String r3) {
            org.cocos2dx.lib.Cocos2dxHelper$OnGameInfoUpdatedListener r0 = org.cocos2dx.lib.Cocos2dxHelper.sOnGameInfoUpdatedListener
            if (r0 == 0) goto L17
            if (r2 != 0) goto La
            r0.onGameInfoUpdated_0(r3)
            goto L17
        La:
            r1 = 1
            if (r2 != r1) goto L11
            r0.onGameInfoUpdated_1(r3)
            goto L17
        L11:
            r1 = 2
            if (r2 != r1) goto L17
            r0.onGameInfoUpdated_2(r3)
        L17:
            return
    }

    private static void setJSBInvocationCount(int r1) {
            org.cocos2dx.lib.Cocos2dxHelper$OnGameInfoUpdatedListener r0 = org.cocos2dx.lib.Cocos2dxHelper.sOnGameInfoUpdatedListener
            if (r0 == 0) goto L7
            r0.onJSBInvocationCountUpdated(r1)
        L7:
            return
    }

    public static void setKeepScreenOn(boolean r1) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            org.cocos2dx.lib.Cocos2dxActivity r0 = (org.cocos2dx.lib.Cocos2dxActivity) r0
            r0.setKeepScreenOn(r1)
            return
    }

    public static void setOnGameInfoUpdatedListener(org.cocos2dx.lib.Cocos2dxHelper.OnGameInfoUpdatedListener r0) {
            org.cocos2dx.lib.Cocos2dxHelper.sOnGameInfoUpdatedListener = r0
            return
    }

    private static void showDialog(java.lang.String r1, java.lang.String r2) {
            org.cocos2dx.lib.Cocos2dxHelper$Cocos2dxHelperListener r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxHelperListener
            r0.showDialog(r1, r2)
            return
    }

    public static void terminateProcess() {
            int r0 = android.os.Process.myPid()
            android.os.Process.killProcess(r0)
            return
    }

    static void unregisterBatteryLevelReceiver(android.content.Context r1) {
            org.cocos2dx.lib.Cocos2dxHelper$BatteryReceiver r0 = org.cocos2dx.lib.Cocos2dxHelper.sBatteryReceiver
            r1.unregisterReceiver(r0)
            return
    }

    public static void vibrate(float r11) {
            android.os.Vibrator r0 = org.cocos2dx.lib.Cocos2dxHelper.sVibrateService     // Catch: java.lang.Exception -> L6d
            if (r0 == 0) goto L71
            android.os.Vibrator r0 = org.cocos2dx.lib.Cocos2dxHelper.sVibrateService     // Catch: java.lang.Exception -> L6d
            boolean r0 = r0.hasVibrator()     // Catch: java.lang.Exception -> L6d
            if (r0 == 0) goto L71
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L6d
            r1 = 26
            r2 = 1148846080(0x447a0000, float:1000.0)
            if (r0 < r1) goto L64
            java.lang.String r0 = "android.os.VibrationEffect"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L6d
            if (r0 == 0) goto L71
            java.lang.String r1 = "DEFAULT_AMPLITUDE"
            java.lang.Object r1 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r1)     // Catch: java.lang.Exception -> L6d
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Exception -> L6d
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L6d
            java.lang.String r3 = "createOneShot"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L6d
            java.lang.Class r6 = java.lang.Long.TYPE     // Catch: java.lang.Exception -> L6d
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Exception -> L6d
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L6d
            r8 = 1
            r5[r8] = r6     // Catch: java.lang.Exception -> L6d
            java.lang.reflect.Method r3 = r0.getMethod(r3, r5)     // Catch: java.lang.Exception -> L6d
            java.lang.Class r5 = r3.getReturnType()     // Catch: java.lang.Exception -> L6d
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L6d
            float r11 = r11 * r2
            long r9 = (long) r11     // Catch: java.lang.Exception -> L6d
            java.lang.Long r11 = java.lang.Long.valueOf(r9)     // Catch: java.lang.Exception -> L6d
            r4[r7] = r11     // Catch: java.lang.Exception -> L6d
            java.lang.Integer r11 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L6d
            r4[r8] = r11     // Catch: java.lang.Exception -> L6d
            java.lang.Object r11 = r3.invoke(r0, r4)     // Catch: java.lang.Exception -> L6d
            android.os.Vibrator r0 = org.cocos2dx.lib.Cocos2dxHelper.sVibrateService     // Catch: java.lang.Exception -> L6d
            java.lang.String r1 = "vibrate"
            java.lang.Class[] r2 = new java.lang.Class[r8]     // Catch: java.lang.Exception -> L6d
            r2[r7] = r5     // Catch: java.lang.Exception -> L6d
            java.lang.Object[] r3 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> L6d
            r3[r7] = r11     // Catch: java.lang.Exception -> L6d
            org.cocos2dx.lib.Cocos2dxReflectionHelper.invokeInstanceMethod(r0, r1, r2, r3)     // Catch: java.lang.Exception -> L6d
            goto L71
        L64:
            android.os.Vibrator r0 = org.cocos2dx.lib.Cocos2dxHelper.sVibrateService     // Catch: java.lang.Exception -> L6d
            float r11 = r11 * r2
            long r1 = (long) r11     // Catch: java.lang.Exception -> L6d
            r0.vibrate(r1)     // Catch: java.lang.Exception -> L6d
            goto L71
        L6d:
            r11 = move-exception
            r11.printStackTrace()
        L71:
            return
    }
}
