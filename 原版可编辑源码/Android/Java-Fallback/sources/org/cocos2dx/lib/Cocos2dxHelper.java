package org.cocos2dx.lib;

public class Cocos2dxHelper {
    private static final int BOOST_TIME = 7;
    private static final java.lang.String PREFS_NAME = "Cocos2dxPrefsFile";
    private static final int RUNNABLES_PER_FRAME = 5;
    private static final java.lang.String TAG = "Cocos2dxHelper";
    private static android.content.ServiceConnection connection;
    private static com.enhance.gameservice.IGameTuningService mGameServiceBinder;
    private static java.util.Set<android.preference.PreferenceManager.OnActivityResultListener> onActivityResultListeners;
    private static boolean sAccelerometerEnabled;
    private static android.app.Activity sActivity;
    private static boolean sActivityVisible;
    private static android.content.res.AssetManager sAssetManager;
    private static java.lang.String sAssetsPath;
    private static org.cocos2dx.lib.Cocos2dxMusic sCocos2dMusic;
    private static org.cocos2dx.lib.Cocos2dxSound sCocos2dSound;
    private static org.cocos2dx.lib.Cocos2dxAccelerometer sCocos2dxAccelerometer;
    private static org.cocos2dx.lib.Cocos2dxHelper.Cocos2dxHelperListener sCocos2dxHelperListener;
    private static boolean sCompassEnabled;
    private static boolean sInited;
    private static com.android.vending.expansion.zipfile.ZipResourceFile sOBBFile;
    private static java.lang.String sPackageName;
    private static android.os.Vibrator sVibrateService;




    public interface Cocos2dxHelperListener {
        void runOnGLThread(java.lang.Runnable r1);

        void showDialog(java.lang.String r1, java.lang.String r2);
    }

    static {
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            org.cocos2dx.lib.Cocos2dxHelper.onActivityResultListeners = r0
            r0 = 0
            org.cocos2dx.lib.Cocos2dxHelper.sVibrateService = r0
            org.cocos2dx.lib.Cocos2dxHelper.mGameServiceBinder = r0
            java.lang.String r1 = ""
            org.cocos2dx.lib.Cocos2dxHelper.sAssetsPath = r1
            org.cocos2dx.lib.Cocos2dxHelper.sOBBFile = r0
            r0 = 0
            org.cocos2dx.lib.Cocos2dxHelper.sInited = r0
            org.cocos2dx.lib.Cocos2dxHelper$2 r0 = new org.cocos2dx.lib.Cocos2dxHelper$2
            r0.<init>()
            org.cocos2dx.lib.Cocos2dxHelper.connection = r0
            return
    }

    public Cocos2dxHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.enhance.gameservice.IGameTuningService access$002(com.enhance.gameservice.IGameTuningService r0) {
            org.cocos2dx.lib.Cocos2dxHelper.mGameServiceBinder = r0
            return r0
    }

    static android.content.ServiceConnection access$100() {
            android.content.ServiceConnection r0 = org.cocos2dx.lib.Cocos2dxHelper.connection
            return r0
    }

    static android.app.Activity access$200() {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            return r0
    }

    static void access$300(byte[] r0) {
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

    public static void deleteValueForKey(java.lang.String r3) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            java.lang.String r1 = "Cocos2dxPrefsFile"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.remove(r3)
            r0.apply()
            return
    }

    public static void disableAccelerometer() {
            r0 = 0
            org.cocos2dx.lib.Cocos2dxHelper.sAccelerometerEnabled = r0
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = getAccelerometer()
            r0.disable()
            return
    }

    public static void enableAccelerometer() {
            r0 = 1
            org.cocos2dx.lib.Cocos2dxHelper.sAccelerometerEnabled = r0
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = getAccelerometer()
            r0.enableAccel()
            return
    }

    public static void enableCompass() {
            r0 = 1
            org.cocos2dx.lib.Cocos2dxHelper.sCompassEnabled = r0
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = getAccelerometer()
            r0.enableCompass()
            return
    }

    public static void end() {
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            r0.end()
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.end()
            return
    }

    public static int fastLoading(int r2) {
            r0 = -1
            com.enhance.gameservice.IGameTuningService r1 = org.cocos2dx.lib.Cocos2dxHelper.mGameServiceBinder     // Catch: java.lang.Exception -> Ld
            if (r1 == 0) goto Lc
            com.enhance.gameservice.IGameTuningService r1 = org.cocos2dx.lib.Cocos2dxHelper.mGameServiceBinder     // Catch: java.lang.Exception -> Ld
            int r2 = r1.boostUp(r2)     // Catch: java.lang.Exception -> Ld
            return r2
        Lc:
            return r0
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            return r0
    }

    public static float[] getAccelValue() {
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = getAccelerometer()
            float[] r0 = r0.accelerometerValues
            return r0
    }

    private static org.cocos2dx.lib.Cocos2dxAccelerometer getAccelerometer() {
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxAccelerometer
            if (r0 != 0) goto Ld
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = new org.cocos2dx.lib.Cocos2dxAccelerometer
            android.app.Activity r1 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            r0.<init>(r1)
            org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxAccelerometer = r0
        Ld:
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxAccelerometer
            return r0
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
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L6a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r2 = r2.getAbsolutePath()
            r0.append(r2)
            java.lang.String r2 = "/Android/obb/"
            r0.append(r2)
            java.lang.String r2 = org.cocos2dx.lib.Cocos2dxHelper.sPackageName
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            org.cocos2dx.lib.Cocos2dxHelper$1 r3 = new org.cocos2dx.lib.Cocos2dxHelper$1
            r3.<init>()
            java.lang.String[] r2 = r2.list(r3)
            if (r2 == 0) goto L52
            int r3 = r2.length
            if (r3 <= 0) goto L52
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "/"
            r1.append(r0)
            r0 = 0
            r0 = r2[r0]
            r1.append(r0)
            java.lang.String r1 = r1.toString()
        L52:
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r0 = r0.exists()
            if (r0 == 0) goto L60
            org.cocos2dx.lib.Cocos2dxHelper.sAssetsPath = r1
            goto L6a
        L60:
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            java.lang.String r0 = r0.sourceDir
            org.cocos2dx.lib.Cocos2dxHelper.sAssetsPath = r0
        L6a:
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHelper.sAssetsPath
            return r0
    }

    public static float getBackgroundMusicVolume() {
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            float r0 = r0.getBackgroundVolume()
            return r0
    }

    public static boolean getBoolForKey(java.lang.String r3, boolean r4) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            r1 = 0
            java.lang.String r2 = "Cocos2dxPrefsFile"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            boolean r3 = r0.getBoolean(r3, r4)     // Catch: java.lang.Exception -> Le
            return r3
        Le:
            r2 = move-exception
            r2.printStackTrace()
            java.util.Map r0 = r0.getAll()
            java.lang.Object r3 = r0.get(r3)
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L27
            java.lang.String r3 = r3.toString()
            boolean r3 = java.lang.Boolean.parseBoolean(r3)
            return r3
        L27:
            boolean r0 = r3 instanceof java.lang.Integer
            r2 = 1
            if (r0 == 0) goto L36
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            if (r3 == 0) goto L35
            r1 = 1
        L35:
            return r1
        L36:
            boolean r0 = r3 instanceof java.lang.Float
            if (r0 == 0) goto L47
            java.lang.Float r3 = (java.lang.Float) r3
            float r3 = r3.floatValue()
            r4 = 0
            int r3 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r3 == 0) goto L46
            r1 = 1
        L46:
            return r1
        L47:
            return r4
    }

    public static java.lang.String getCocos2dxPackageName() {
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHelper.sPackageName
            return r0
    }

    public static java.lang.String getCocos2dxWritablePath() {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            java.io.File r0 = r0.getFilesDir()
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    public static float[] getCompassValue() {
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = getAccelerometer()
            float[] r0 = r0.compassFieldValues
            return r0
    }

    public static java.lang.String getCurrentLanguage() {
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r0.getLanguage()
            return r0
    }

    public static int getDPI() {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            if (r0 == 0) goto L22
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            android.app.Activity r1 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            android.view.WindowManager r1 = r1.getWindowManager()
            if (r1 == 0) goto L22
            android.view.Display r1 = r1.getDefaultDisplay()
            if (r1 == 0) goto L22
            r1.getMetrics(r0)
            float r0 = r0.density
            r1 = 1126170624(0x43200000, float:160.0)
            float r0 = r0 * r1
            int r0 = (int) r0
            return r0
        L22:
            r0 = -1
            return r0
    }

    public static java.lang.String getDeviceModel() {
            java.lang.String r0 = android.os.Build.MODEL
            return r0
    }

    public static double getDoubleForKey(java.lang.String r0, double r1) {
            float r1 = (float) r1
            float r0 = getFloatForKey(r0, r1)
            double r0 = (double) r0
            return r0
    }

    public static float getEffectsVolume() {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            float r0 = r0.getEffectsVolume()
            return r0
    }

    public static float getFloatForKey(java.lang.String r3, float r4) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            java.lang.String r1 = "Cocos2dxPrefsFile"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            float r3 = r0.getFloat(r3, r4)     // Catch: java.lang.Exception -> Le
            return r3
        Le:
            r1 = move-exception
            r1.printStackTrace()
            java.util.Map r0 = r0.getAll()
            java.lang.Object r3 = r0.get(r3)
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L27
            java.lang.String r3 = r3.toString()
            float r3 = java.lang.Float.parseFloat(r3)
            return r3
        L27:
            boolean r0 = r3 instanceof java.lang.Integer
            if (r0 == 0) goto L32
            java.lang.Integer r3 = (java.lang.Integer) r3
            float r3 = r3.floatValue()
            return r3
        L32:
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L41
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L41
            r3 = 1065353216(0x3f800000, float:1.0)
            return r3
        L41:
            return r4
    }

    public static int getIntegerForKey(java.lang.String r3, int r4) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            java.lang.String r1 = "Cocos2dxPrefsFile"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            int r3 = r0.getInt(r3, r4)     // Catch: java.lang.Exception -> Le
            return r3
        Le:
            r1 = move-exception
            r1.printStackTrace()
            java.util.Map r0 = r0.getAll()
            java.lang.Object r3 = r0.get(r3)
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L27
            java.lang.String r3 = r3.toString()
            int r3 = java.lang.Integer.parseInt(r3)
            return r3
        L27:
            boolean r0 = r3 instanceof java.lang.Float
            if (r0 == 0) goto L32
            java.lang.Float r3 = (java.lang.Float) r3
            int r3 = r3.intValue()
            return r3
        L32:
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L40
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L40
            r3 = 1
            return r3
        L40:
            return r4
    }

    public static long[] getObbAssetFileDescriptor(java.lang.String r6) {
            r0 = 3
            long[] r0 = new long[r0]
            com.android.vending.expansion.zipfile.ZipResourceFile r1 = getObbFile()
            if (r1 == 0) goto L5f
            com.android.vending.expansion.zipfile.ZipResourceFile r1 = getObbFile()
            android.content.res.AssetFileDescriptor r6 = r1.getAssetFileDescriptor(r6)
            if (r6 == 0) goto L5f
            android.os.ParcelFileDescriptor r1 = r6.getParcelFileDescriptor()     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            java.lang.Class r2 = r1.getClass()     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            java.lang.String r3 = "getFd"
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            java.lang.Object r1 = r2.invoke(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            int r1 = r1.intValue()     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            long r1 = (long) r1     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            r0[r4] = r1     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            r1 = 1
            long r2 = r6.getStartOffset()     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            r0[r1] = r2     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            r1 = 2
            long r2 = r6.getLength()     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            r0[r1] = r2     // Catch: java.lang.reflect.InvocationTargetException -> L42 java.lang.IllegalAccessException -> L4d java.lang.NoSuchMethodException -> L58
            goto L5f
        L42:
            r6 = move-exception
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.String r6 = r6.toString()
            android.util.Log.e(r1, r6)
            goto L5f
        L4d:
            r6 = move-exception
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.String r6 = r6.toString()
            android.util.Log.e(r1, r6)
            goto L5f
        L58:
            java.lang.String r6 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.String r1 = "Accessing file descriptor directly from the OBB is only supported from Android 3.1 (API level 12) and above."
            android.util.Log.e(r6, r1)
        L5f:
            return r0
    }

    public static com.android.vending.expansion.zipfile.ZipResourceFile getObbFile() {
            com.android.vending.expansion.zipfile.ZipResourceFile r0 = org.cocos2dx.lib.Cocos2dxHelper.sOBBFile
            if (r0 != 0) goto L2c
            r0 = 1
            r1 = 0
            android.content.Context r2 = org.cocos2dx.lib.Cocos2dxActivity.getContext()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            java.lang.String r3 = getCocos2dxPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r3, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            int r0 = r2.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            goto L1d
        L19:
            r2 = move-exception
            r2.printStackTrace()
        L1d:
            android.content.Context r2 = org.cocos2dx.lib.Cocos2dxActivity.getContext()     // Catch: java.io.IOException -> L28
            com.android.vending.expansion.zipfile.ZipResourceFile r0 = com.android.vending.expansion.zipfile.APKExpansionSupport.getAPKExpansionZipFile(r2, r0, r1)     // Catch: java.io.IOException -> L28
            org.cocos2dx.lib.Cocos2dxHelper.sOBBFile = r0     // Catch: java.io.IOException -> L28
            goto L2c
        L28:
            r0 = move-exception
            r0.printStackTrace()
        L2c:
            com.android.vending.expansion.zipfile.ZipResourceFile r0 = org.cocos2dx.lib.Cocos2dxHelper.sOBBFile
            return r0
    }

    public static java.util.Set<android.preference.PreferenceManager.OnActivityResultListener> getOnActivityResultListeners() {
            java.util.Set<android.preference.PreferenceManager$OnActivityResultListener> r0 = org.cocos2dx.lib.Cocos2dxHelper.onActivityResultListeners
            return r0
    }

    public static int getSDKVersion() {
            int r0 = android.os.Build.VERSION.SDK_INT
            return r0
    }

    @android.annotation.SuppressLint({"NewApi"})
    public static int[] getSafeInsets() {
            r0 = 4
            int[] r0 = new int[r0]
            r0 = {x004a: FILL_ARRAY_DATA , data: [0, 0, 0, 0} // fill-array
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 28
            if (r1 < r2) goto L48
            android.app.Activity r1 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            android.view.Window r1 = r1.getWindow()
            android.view.View r1 = r1.getDecorView()
            android.view.WindowInsets r1 = r1.getRootWindowInsets()
            android.view.DisplayCutout r1 = r1.getDisplayCutout()
            if (r1 == 0) goto L48
            java.util.List r2 = r1.getBoundingRects()
            if (r2 == 0) goto L48
            int r2 = r2.size()
            if (r2 == 0) goto L48
            r2 = 0
            int r3 = r1.getSafeInsetBottom()
            r0[r2] = r3
            r2 = 1
            int r3 = r1.getSafeInsetLeft()
            r0[r2] = r3
            r2 = 2
            int r3 = r1.getSafeInsetRight()
            r0[r2] = r3
            r2 = 3
            int r1 = r1.getSafeInsetTop()
            r0[r2] = r1
        L48:
            return r0
    }

    private static org.cocos2dx.lib.Cocos2dxSound getSound() {
            org.cocos2dx.lib.Cocos2dxSound r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dSound
            if (r0 != 0) goto Ld
            org.cocos2dx.lib.Cocos2dxSound r0 = new org.cocos2dx.lib.Cocos2dxSound
            android.app.Activity r1 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            r0.<init>(r1)
            org.cocos2dx.lib.Cocos2dxHelper.sCocos2dSound = r0
        Ld:
            org.cocos2dx.lib.Cocos2dxSound r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dSound
            return r0
    }

    public static java.lang.String getStringForKey(java.lang.String r3, java.lang.String r4) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            java.lang.String r1 = "Cocos2dxPrefsFile"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r3 = r0.getString(r3, r4)     // Catch: java.lang.Exception -> Le
            return r3
        Le:
            r4 = move-exception
            r4.printStackTrace()
            java.util.Map r4 = r0.getAll()
            java.lang.Object r3 = r4.get(r3)
            java.lang.String r3 = r3.toString()
            return r3
    }

    public static int getTemperature() {
            r0 = -1
            com.enhance.gameservice.IGameTuningService r1 = org.cocos2dx.lib.Cocos2dxHelper.mGameServiceBinder     // Catch: java.lang.Exception -> Lc
            if (r1 == 0) goto Lb
            com.enhance.gameservice.IGameTuningService r1 = org.cocos2dx.lib.Cocos2dxHelper.mGameServiceBinder     // Catch: java.lang.Exception -> Lc
            int r0 = r1.getAbstractTemperature()     // Catch: java.lang.Exception -> Lc
        Lb:
            return r0
        Lc:
            r1 = move-exception
            r1.printStackTrace()
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

    public static boolean hasSoftKeys() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 0
            r3 = 17
            if (r0 < r3) goto L33
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            android.view.WindowManager r0 = r0.getWindowManager()
            android.view.Display r0 = r0.getDefaultDisplay()
            android.util.DisplayMetrics r3 = new android.util.DisplayMetrics
            r3.<init>()
            r0.getRealMetrics(r3)
            int r4 = r3.heightPixels
            int r3 = r3.widthPixels
            android.util.DisplayMetrics r5 = new android.util.DisplayMetrics
            r5.<init>()
            r0.getMetrics(r5)
            int r0 = r5.heightPixels
            int r5 = r5.widthPixels
            int r3 = r3 - r5
            if (r3 > 0) goto L46
            int r4 = r4 - r0
            if (r4 <= 0) goto L31
            goto L46
        L31:
            r1 = 0
            goto L46
        L33:
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            android.view.ViewConfiguration r0 = android.view.ViewConfiguration.get(r0)
            boolean r0 = r0.hasPermanentMenuKey()
            r3 = 4
            boolean r3 = android.view.KeyCharacterMap.deviceHasKey(r3)
            if (r0 != 0) goto L31
            if (r3 != 0) goto L31
        L46:
            return r1
    }

    public static void init(android.app.Activity r11) {
            org.cocos2dx.lib.Cocos2dxHelper.sActivity = r11
            r0 = r11
            org.cocos2dx.lib.Cocos2dxHelper$Cocos2dxHelperListener r0 = (org.cocos2dx.lib.Cocos2dxHelper.Cocos2dxHelperListener) r0
            org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxHelperListener = r0
            boolean r0 = org.cocos2dx.lib.Cocos2dxHelper.sInited
            if (r0 != 0) goto Lec
            android.content.pm.PackageManager r0 = r11.getPackageManager()
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
            r5 = 1
            if (r3 < r4) goto La0
            java.lang.String r3 = "audio"
            java.lang.Object r3 = r11.getSystemService(r3)
            android.media.AudioManager r3 = (android.media.AudioManager) r3
            java.lang.Class<android.media.AudioManager> r4 = android.media.AudioManager.class
            java.lang.Object[] r6 = new java.lang.Object[r5]
            java.lang.String r7 = "PROPERTY_OUTPUT_SAMPLE_RATE"
            java.lang.Object r7 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r4, r7)
            r8 = 0
            r6[r8] = r7
            java.lang.Class[] r7 = new java.lang.Class[r5]
            java.lang.Class<java.lang.String> r9 = java.lang.String.class
            r7[r8] = r9
            java.lang.String r9 = "getProperty"
            java.lang.Object r6 = org.cocos2dx.lib.Cocos2dxReflectionHelper.invokeInstanceMethod(r3, r9, r7, r6)
            java.lang.String r6 = (java.lang.String) r6
            java.lang.Object[] r7 = new java.lang.Object[r5]
            java.lang.String r10 = "PROPERTY_OUTPUT_FRAMES_PER_BUFFER"
            java.lang.Object r4 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r4, r10)
            r7[r8] = r4
            java.lang.Class[] r4 = new java.lang.Class[r5]
            java.lang.Class<java.lang.String> r10 = java.lang.String.class
            r4[r8] = r10
            java.lang.Object r3 = org.cocos2dx.lib.Cocos2dxReflectionHelper.invokeInstanceMethod(r3, r9, r4, r7)
            java.lang.String r3 = (java.lang.String) r3
            int r1 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.NumberFormatException -> L79
            int r2 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.NumberFormatException -> L79
            goto L81
        L79:
            r3 = move-exception
            java.lang.String r4 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.String r6 = "parseInt failed"
            android.util.Log.e(r4, r6, r3)
        L81:
            java.lang.String r3 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "sampleRate: "
            r4.append(r6)
            r4.append(r1)
            java.lang.String r6 = ", framesPerBuffer: "
            r4.append(r6)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            android.util.Log.d(r3, r4)
            goto La7
        La0:
            java.lang.String r3 = org.cocos2dx.lib.Cocos2dxHelper.TAG
            java.lang.String r4 = "android version is lower than 17"
            android.util.Log.d(r3, r4)
        La7:
            nativeSetAudioDeviceInfo(r0, r1, r2)
            android.content.pm.ApplicationInfo r0 = r11.getApplicationInfo()
            java.lang.String r0 = r0.packageName
            org.cocos2dx.lib.Cocos2dxHelper.sPackageName = r0
            org.cocos2dx.lib.Cocos2dxMusic r0 = new org.cocos2dx.lib.Cocos2dxMusic
            r0.<init>(r11)
            org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic = r0
            android.content.res.AssetManager r0 = r11.getAssets()
            org.cocos2dx.lib.Cocos2dxHelper.sAssetManager = r0
            android.content.res.AssetManager r0 = org.cocos2dx.lib.Cocos2dxHelper.sAssetManager
            nativeSetContext(r11, r0)
            org.cocos2dx.lib.Cocos2dxBitmap.setContext(r11)
            java.lang.String r0 = "vibrator"
            java.lang.Object r0 = r11.getSystemService(r0)
            android.os.Vibrator r0 = (android.os.Vibrator) r0
            org.cocos2dx.lib.Cocos2dxHelper.sVibrateService = r0
            org.cocos2dx.lib.Cocos2dxHelper.sInited = r5
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.enhance.gameservice.IGameTuningService> r1 = com.enhance.gameservice.IGameTuningService.class
            java.lang.String r1 = r1.getName()
            r0.<init>(r1)
            java.lang.String r1 = "com.enhance.gameservice"
            r0.setPackage(r1)
            android.content.Context r11 = r11.getApplicationContext()
            android.content.ServiceConnection r1 = org.cocos2dx.lib.Cocos2dxHelper.connection
            r11.bindService(r0, r1, r5)
        Lec:
            return
    }

    public static boolean isActivityVisible() {
            boolean r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivityVisible
            return r0
    }

    public static boolean isBackgroundMusicPlaying() {
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            boolean r0 = r0.isBackgroundMusicPlaying()
            return r0
    }

    @android.annotation.SuppressLint({"InlinedApi"})
    public static boolean isCutoutEnabled() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 28
            if (r0 < r2) goto L17
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            android.view.Window r0 = r0.getWindow()
            android.view.WindowManager$LayoutParams r0 = r0.getAttributes()
            int r0 = r0.layoutInDisplayCutoutMode
            r2 = 1
            if (r0 != r2) goto L17
            r1 = 1
        L17:
            return r1
    }

    public static boolean isScreenRound() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L18
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            android.content.res.Resources r0 = r0.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            boolean r0 = r0.isScreenRound()
            if (r0 == 0) goto L18
            r0 = 1
            return r0
        L18:
            r0 = 0
            return r0
    }

    private static native void nativeSetAudioDeviceInfo(boolean r0, int r1, int r2);

    private static native void nativeSetContext(android.content.Context r0, android.content.res.AssetManager r1);

    private static native void nativeSetEditTextDialogResult(byte[] r0);

    public static void onEnterBackground() {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.onEnterBackground()
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            r0.onEnterBackground()
            return
    }

    public static void onEnterForeground() {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.onEnterForeground()
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            r0.onEnterForeground()
            return
    }

    public static void onPause() {
            r0 = 0
            org.cocos2dx.lib.Cocos2dxHelper.sActivityVisible = r0
            boolean r0 = org.cocos2dx.lib.Cocos2dxHelper.sAccelerometerEnabled
            if (r0 == 0) goto Le
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = getAccelerometer()
            r0.disable()
        Le:
            return
    }

    public static void onResume() {
            r0 = 1
            org.cocos2dx.lib.Cocos2dxHelper.sActivityVisible = r0
            boolean r0 = org.cocos2dx.lib.Cocos2dxHelper.sAccelerometerEnabled
            if (r0 == 0) goto Le
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = getAccelerometer()
            r0.enableAccel()
        Le:
            boolean r0 = org.cocos2dx.lib.Cocos2dxHelper.sCompassEnabled
            if (r0 == 0) goto L19
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = getAccelerometer()
            r0.enableCompass()
        L19:
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

    public static void pauseAllEffects() {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.pauseAllEffects()
            return
    }

    public static void pauseBackgroundMusic() {
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            r0.pauseBackgroundMusic()
            return
    }

    public static void pauseEffect(int r1) {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.pauseEffect(r1)
            return
    }

    public static void playBackgroundMusic(java.lang.String r1, boolean r2) {
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            r0.playBackgroundMusic(r1, r2)
            return
    }

    public static int playEffect(java.lang.String r6, boolean r7, float r8, float r9, float r10) {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r1 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            int r6 = r0.playEffect(r1, r2, r3, r4, r5)
            return r6
    }

    public static void preloadBackgroundMusic(java.lang.String r1) {
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            r0.preloadBackgroundMusic(r1)
            return
    }

    public static void preloadEffect(java.lang.String r1) {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.preloadEffect(r1)
            return
    }

    public static void resumeAllEffects() {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.resumeAllEffects()
            return
    }

    public static void resumeBackgroundMusic() {
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            r0.resumeBackgroundMusic()
            return
    }

    public static void resumeEffect(int r1) {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.resumeEffect(r1)
            return
    }

    public static void rewindBackgroundMusic() {
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            r0.rewindBackgroundMusic()
            return
    }

    public static void runOnGLThread(java.lang.Runnable r1) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            org.cocos2dx.lib.Cocos2dxActivity r0 = (org.cocos2dx.lib.Cocos2dxActivity) r0
            r0.runOnGLThread(r1)
            return
    }

    public static void setAccelerometerInterval(float r1) {
            org.cocos2dx.lib.Cocos2dxAccelerometer r0 = getAccelerometer()
            r0.setInterval(r1)
            return
    }

    static void setAudioFocus(boolean r1) {
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            r0.setAudioFocus(r1)
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.setAudioFocus(r1)
            return
    }

    public static void setBackgroundMusicVolume(float r1) {
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            r0.setBackgroundVolume(r1)
            return
    }

    public static void setBoolForKey(java.lang.String r3, boolean r4) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            java.lang.String r1 = "Cocos2dxPrefsFile"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.putBoolean(r3, r4)
            r0.apply()
            return
    }

    public static void setDoubleForKey(java.lang.String r3, double r4) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            java.lang.String r1 = "Cocos2dxPrefsFile"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            float r4 = (float) r4
            r0.putFloat(r3, r4)
            r0.apply()
            return
    }

    public static void setEditTextDialogResult(java.lang.String r2) {
            java.lang.String r0 = "UTF8"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L10
            org.cocos2dx.lib.Cocos2dxHelper$Cocos2dxHelperListener r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxHelperListener     // Catch: java.io.UnsupportedEncodingException -> L10
            org.cocos2dx.lib.Cocos2dxHelper$3 r1 = new org.cocos2dx.lib.Cocos2dxHelper$3     // Catch: java.io.UnsupportedEncodingException -> L10
            r1.<init>(r2)     // Catch: java.io.UnsupportedEncodingException -> L10
            r0.runOnGLThread(r1)     // Catch: java.io.UnsupportedEncodingException -> L10
        L10:
            return
    }

    public static void setEffectsVolume(float r1) {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.setEffectsVolume(r1)
            return
    }

    public static int setFPS(int r2) {
            r0 = -1
            com.enhance.gameservice.IGameTuningService r1 = org.cocos2dx.lib.Cocos2dxHelper.mGameServiceBinder     // Catch: java.lang.Exception -> Ld
            if (r1 == 0) goto Lc
            com.enhance.gameservice.IGameTuningService r1 = org.cocos2dx.lib.Cocos2dxHelper.mGameServiceBinder     // Catch: java.lang.Exception -> Ld
            int r2 = r1.setFramePerSecond(r2)     // Catch: java.lang.Exception -> Ld
            return r2
        Lc:
            return r0
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            return r0
    }

    public static void setFloatForKey(java.lang.String r3, float r4) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            java.lang.String r1 = "Cocos2dxPrefsFile"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.putFloat(r3, r4)
            r0.apply()
            return
    }

    public static void setIntegerForKey(java.lang.String r3, int r4) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            java.lang.String r1 = "Cocos2dxPrefsFile"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.putInt(r3, r4)
            r0.apply()
            return
    }

    public static void setKeepScreenOn(boolean r1) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            org.cocos2dx.lib.Cocos2dxActivity r0 = (org.cocos2dx.lib.Cocos2dxActivity) r0
            r0.setKeepScreenOn(r1)
            return
    }

    public static int setLowPowerMode(boolean r2) {
            r0 = -1
            com.enhance.gameservice.IGameTuningService r1 = org.cocos2dx.lib.Cocos2dxHelper.mGameServiceBinder     // Catch: java.lang.Exception -> Ld
            if (r1 == 0) goto Lc
            com.enhance.gameservice.IGameTuningService r1 = org.cocos2dx.lib.Cocos2dxHelper.mGameServiceBinder     // Catch: java.lang.Exception -> Ld
            int r2 = r1.setGamePowerSaving(r2)     // Catch: java.lang.Exception -> Ld
            return r2
        Lc:
            return r0
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            return r0
    }

    public static int setResolutionPercent(int r2) {
            r0 = -1
            com.enhance.gameservice.IGameTuningService r1 = org.cocos2dx.lib.Cocos2dxHelper.mGameServiceBinder     // Catch: java.lang.Exception -> Ld
            if (r1 == 0) goto Lc
            com.enhance.gameservice.IGameTuningService r1 = org.cocos2dx.lib.Cocos2dxHelper.mGameServiceBinder     // Catch: java.lang.Exception -> Ld
            int r2 = r1.setPreferredResolution(r2)     // Catch: java.lang.Exception -> Ld
            return r2
        Lc:
            return r0
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            return r0
    }

    public static void setStringForKey(java.lang.String r3, java.lang.String r4) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.sActivity
            java.lang.String r1 = "Cocos2dxPrefsFile"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.putString(r3, r4)
            r0.apply()
            return
    }

    private static void showDialog(java.lang.String r1, java.lang.String r2) {
            org.cocos2dx.lib.Cocos2dxHelper$Cocos2dxHelperListener r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dxHelperListener
            r0.showDialog(r1, r2)
            return
    }

    public static void stopAllEffects() {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.stopAllEffects()
            return
    }

    public static void stopBackgroundMusic() {
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            r0.stopBackgroundMusic()
            return
    }

    public static void stopEffect(int r1) {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.stopEffect(r1)
            return
    }

    public static void terminateProcess() {
            int r0 = android.os.Process.myPid()
            android.os.Process.killProcess(r0)
            return
    }

    public static void unloadEffect(java.lang.String r1) {
            org.cocos2dx.lib.Cocos2dxSound r0 = getSound()
            r0.unloadEffect(r1)
            return
    }

    public static void vibrate(float r3) {
            android.os.Vibrator r0 = org.cocos2dx.lib.Cocos2dxHelper.sVibrateService
            r1 = 1148846080(0x447a0000, float:1000.0)
            float r3 = r3 * r1
            long r1 = (long) r3
            r0.vibrate(r1)
            return
    }

    public static boolean willPlayBackgroundMusic() {
            org.cocos2dx.lib.Cocos2dxMusic r0 = org.cocos2dx.lib.Cocos2dxHelper.sCocos2dMusic
            boolean r0 = r0.willPlayBackgroundMusic()
            return r0
    }
}
