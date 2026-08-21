package android.support.v4.content;

public class ContextCompat {
    private static final java.lang.String TAG = "ContextCompat";
    private static final java.lang.Object sLock = null;
    private static android.util.TypedValue sTempValue;

    private static final class LegacyServiceMapHolder {
        static final java.util.HashMap<java.lang.Class<?>, java.lang.String> SERVICES = null;

        static {
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES = r0
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 22
                if (r0 <= r1) goto L1f
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.telephony.SubscriptionManager> r1 = android.telephony.SubscriptionManager.class
                java.lang.String r2 = "telephony_subscription_service"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.app.usage.UsageStatsManager> r1 = android.app.usage.UsageStatsManager.class
                java.lang.String r2 = "usagestats"
                r0.put(r1, r2)
            L1f:
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 21
                if (r0 <= r1) goto L7f
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.appwidget.AppWidgetManager> r1 = android.appwidget.AppWidgetManager.class
                java.lang.String r2 = "appwidget"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.os.BatteryManager> r1 = android.os.BatteryManager.class
                java.lang.String r2 = "batterymanager"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.hardware.camera2.CameraManager> r1 = android.hardware.camera2.CameraManager.class
                java.lang.String r2 = "camera"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.app.job.JobScheduler> r1 = android.app.job.JobScheduler.class
                java.lang.String r2 = "jobscheduler"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.content.pm.LauncherApps> r1 = android.content.pm.LauncherApps.class
                java.lang.String r2 = "launcherapps"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.media.projection.MediaProjectionManager> r1 = android.media.projection.MediaProjectionManager.class
                java.lang.String r2 = "media_projection"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.media.session.MediaSessionManager> r1 = android.media.session.MediaSessionManager.class
                java.lang.String r2 = "media_session"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.content.RestrictionsManager> r1 = android.content.RestrictionsManager.class
                java.lang.String r2 = "restrictions"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.telecom.TelecomManager> r1 = android.telecom.TelecomManager.class
                java.lang.String r2 = "telecom"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.media.tv.TvInputManager> r1 = android.media.tv.TvInputManager.class
                java.lang.String r2 = "tv_input"
                r0.put(r1, r2)
            L7f:
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 19
                if (r0 <= r1) goto La9
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.app.AppOpsManager> r1 = android.app.AppOpsManager.class
                java.lang.String r2 = "appops"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.view.accessibility.CaptioningManager> r1 = android.view.accessibility.CaptioningManager.class
                java.lang.String r2 = "captioning"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.hardware.ConsumerIrManager> r1 = android.hardware.ConsumerIrManager.class
                java.lang.String r2 = "consumer_ir"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.print.PrintManager> r1 = android.print.PrintManager.class
                java.lang.String r2 = "print"
                r0.put(r1, r2)
            La9:
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 18
                if (r0 <= r1) goto Lb8
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.bluetooth.BluetoothManager> r1 = android.bluetooth.BluetoothManager.class
                java.lang.String r2 = "bluetooth"
                r0.put(r1, r2)
            Lb8:
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 17
                if (r0 <= r1) goto Ld0
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.hardware.display.DisplayManager> r1 = android.hardware.display.DisplayManager.class
                java.lang.String r2 = "display"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.os.UserManager> r1 = android.os.UserManager.class
                java.lang.String r2 = "user"
                r0.put(r1, r2)
            Ld0:
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 16
                if (r0 <= r1) goto Lf1
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.hardware.input.InputManager> r1 = android.hardware.input.InputManager.class
                java.lang.String r2 = "input"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.media.MediaRouter> r1 = android.media.MediaRouter.class
                java.lang.String r2 = "media_router"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.net.nsd.NsdManager> r1 = android.net.nsd.NsdManager.class
                java.lang.String r2 = "servicediscovery"
                r0.put(r1, r2)
            Lf1:
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.accessibilityservice.AccessibilityService> r1 = android.accessibilityservice.AccessibilityService.class
                java.lang.String r2 = "accessibility"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.accounts.AccountManager> r1 = android.accounts.AccountManager.class
                java.lang.String r2 = "account"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.app.ActivityManager> r1 = android.app.ActivityManager.class
                java.lang.String r2 = "activity"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.app.AlarmManager> r1 = android.app.AlarmManager.class
                java.lang.String r2 = "alarm"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.media.AudioManager> r1 = android.media.AudioManager.class
                java.lang.String r2 = "audio"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.content.ClipboardManager> r1 = android.content.ClipboardManager.class
                java.lang.String r2 = "clipboard"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.net.ConnectivityManager> r1 = android.net.ConnectivityManager.class
                java.lang.String r2 = "connectivity"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.app.admin.DevicePolicyManager> r1 = android.app.admin.DevicePolicyManager.class
                java.lang.String r2 = "device_policy"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.app.DownloadManager> r1 = android.app.DownloadManager.class
                java.lang.String r2 = "download"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.os.DropBoxManager> r1 = android.os.DropBoxManager.class
                java.lang.String r2 = "dropbox"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.view.inputmethod.InputMethodManager> r1 = android.view.inputmethod.InputMethodManager.class
                java.lang.String r2 = "input_method"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.app.KeyguardManager> r1 = android.app.KeyguardManager.class
                java.lang.String r2 = "keyguard"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.view.LayoutInflater> r1 = android.view.LayoutInflater.class
                java.lang.String r2 = "layout_inflater"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.location.LocationManager> r1 = android.location.LocationManager.class
                java.lang.String r2 = "location"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.nfc.NfcManager> r1 = android.nfc.NfcManager.class
                java.lang.String r2 = "nfc"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.app.NotificationManager> r1 = android.app.NotificationManager.class
                java.lang.String r2 = "notification"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.os.PowerManager> r1 = android.os.PowerManager.class
                java.lang.String r2 = "power"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.app.SearchManager> r1 = android.app.SearchManager.class
                java.lang.String r2 = "search"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.hardware.SensorManager> r1 = android.hardware.SensorManager.class
                java.lang.String r2 = "sensor"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.os.storage.StorageManager> r1 = android.os.storage.StorageManager.class
                java.lang.String r2 = "storage"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.telephony.TelephonyManager> r1 = android.telephony.TelephonyManager.class
                java.lang.String r2 = "phone"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.view.textservice.TextServicesManager> r1 = android.view.textservice.TextServicesManager.class
                java.lang.String r2 = "textservices"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.app.UiModeManager> r1 = android.app.UiModeManager.class
                java.lang.String r2 = "uimode"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.hardware.usb.UsbManager> r1 = android.hardware.usb.UsbManager.class
                java.lang.String r2 = "usb"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.os.Vibrator> r1 = android.os.Vibrator.class
                java.lang.String r2 = "vibrator"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.app.WallpaperManager> r1 = android.app.WallpaperManager.class
                java.lang.String r2 = "wallpaper"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.net.wifi.p2p.WifiP2pManager> r1 = android.net.wifi.p2p.WifiP2pManager.class
                java.lang.String r2 = "wifip2p"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.net.wifi.WifiManager> r1 = android.net.wifi.WifiManager.class
                java.lang.String r2 = "wifi"
                r0.put(r1, r2)
                java.util.HashMap<java.lang.Class<?>, java.lang.String> r0 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
                java.lang.Class<android.view.WindowManager> r1 = android.view.WindowManager.class
                java.lang.String r2 = "window"
                r0.put(r1, r2)
                return
        }

        private LegacyServiceMapHolder() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v4.content.ContextCompat.sLock = r0
            return
    }

    protected ContextCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.io.File buildPath(java.io.File r4, java.lang.String... r5) {
            int r0 = r5.length
            r1 = 0
        L2:
            if (r1 >= r0) goto L19
            r2 = r5[r1]
            if (r4 != 0) goto Le
            java.io.File r4 = new java.io.File
            r4.<init>(r2)
            goto L16
        Le:
            if (r2 == 0) goto L16
            java.io.File r3 = new java.io.File
            r3.<init>(r4, r2)
            r4 = r3
        L16:
            int r1 = r1 + 1
            goto L2
        L19:
            return r4
    }

    public static int checkSelfPermission(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.NonNull java.lang.String r3) {
            if (r3 == 0) goto Lf
            int r0 = android.os.Process.myPid()
            int r1 = android.os.Process.myUid()
            int r2 = r2.checkPermission(r3, r0, r1)
            return r2
        Lf:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "permission is null"
            r2.<init>(r3)
            throw r2
    }

    @android.support.annotation.Nullable
    public static android.content.Context createDeviceProtectedStorageContext(@android.support.annotation.NonNull android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lb
            android.content.Context r2 = r2.createDeviceProtectedStorageContext()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    private static synchronized java.io.File createFilesDir(java.io.File r4) {
            java.lang.Class<android.support.v4.content.ContextCompat> r0 = android.support.v4.content.ContextCompat.class
            monitor-enter(r0)
            boolean r1 = r4.exists()     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto L34
            boolean r1 = r4.mkdirs()     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto L34
            boolean r1 = r4.exists()     // Catch: java.lang.Throwable -> L36
            if (r1 == 0) goto L17
            monitor-exit(r0)
            return r4
        L17:
            java.lang.String r1 = "ContextCompat"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
            r2.<init>()     // Catch: java.lang.Throwable -> L36
            java.lang.String r3 = "Unable to create files subdir "
            r2.append(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r4 = r4.getPath()     // Catch: java.lang.Throwable -> L36
            r2.append(r4)     // Catch: java.lang.Throwable -> L36
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L36
            android.util.Log.w(r1, r4)     // Catch: java.lang.Throwable -> L36
            r4 = 0
            monitor-exit(r0)
            return r4
        L34:
            monitor-exit(r0)
            return r4
        L36:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static java.io.File getCodeCacheDir(@android.support.annotation.NonNull android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            java.io.File r2 = r2.getCodeCacheDir()
            return r2
        Lb:
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            java.io.File r0 = new java.io.File
            java.lang.String r2 = r2.dataDir
            java.lang.String r1 = "code_cache"
            r0.<init>(r2, r1)
            java.io.File r2 = createFilesDir(r0)
            return r2
    }

    @android.support.annotation.ColorInt
    public static int getColor(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.ColorRes int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            int r2 = r2.getColor(r3)
            return r2
        Lb:
            android.content.res.Resources r2 = r2.getResources()
            int r2 = r2.getColor(r3)
            return r2
    }

    @android.support.annotation.Nullable
    public static android.content.res.ColorStateList getColorStateList(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.ColorRes int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            android.content.res.ColorStateList r2 = r2.getColorStateList(r3)
            return r2
        Lb:
            android.content.res.Resources r2 = r2.getResources()
            android.content.res.ColorStateList r2 = r2.getColorStateList(r3)
            return r2
    }

    @android.support.annotation.Nullable
    public static java.io.File getDataDir(@android.support.annotation.NonNull android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lb
            java.io.File r2 = r2.getDataDir()
            return r2
        Lb:
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            java.lang.String r2 = r2.dataDir
            if (r2 == 0) goto L19
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            goto L1a
        L19:
            r0 = 0
        L1a:
            return r0
    }

    @android.support.annotation.Nullable
    public static android.graphics.drawable.Drawable getDrawable(@android.support.annotation.NonNull android.content.Context r4, @android.support.annotation.DrawableRes int r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.graphics.drawable.Drawable r4 = r4.getDrawable(r5)
            return r4
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L1a
            android.content.res.Resources r4 = r4.getResources()
            android.graphics.drawable.Drawable r4 = r4.getDrawable(r5)
            return r4
        L1a:
            java.lang.Object r0 = android.support.v4.content.ContextCompat.sLock
            monitor-enter(r0)
            android.util.TypedValue r1 = android.support.v4.content.ContextCompat.sTempValue     // Catch: java.lang.Throwable -> L40
            if (r1 != 0) goto L28
            android.util.TypedValue r1 = new android.util.TypedValue     // Catch: java.lang.Throwable -> L40
            r1.<init>()     // Catch: java.lang.Throwable -> L40
            android.support.v4.content.ContextCompat.sTempValue = r1     // Catch: java.lang.Throwable -> L40
        L28:
            android.content.res.Resources r1 = r4.getResources()     // Catch: java.lang.Throwable -> L40
            android.util.TypedValue r2 = android.support.v4.content.ContextCompat.sTempValue     // Catch: java.lang.Throwable -> L40
            r3 = 1
            r1.getValue(r5, r2, r3)     // Catch: java.lang.Throwable -> L40
            android.util.TypedValue r5 = android.support.v4.content.ContextCompat.sTempValue     // Catch: java.lang.Throwable -> L40
            int r5 = r5.resourceId     // Catch: java.lang.Throwable -> L40
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L40
            android.content.res.Resources r4 = r4.getResources()
            android.graphics.drawable.Drawable r4 = r4.getDrawable(r5)
            return r4
        L40:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L40
            throw r4
    }

    @android.support.annotation.NonNull
    public static java.io.File[] getExternalCacheDirs(@android.support.annotation.NonNull android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            java.io.File[] r2 = r2.getExternalCacheDirs()
            return r2
        Lb:
            r0 = 1
            java.io.File[] r0 = new java.io.File[r0]
            r1 = 0
            java.io.File r2 = r2.getExternalCacheDir()
            r0[r1] = r2
            return r0
    }

    @android.support.annotation.NonNull
    public static java.io.File[] getExternalFilesDirs(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.Nullable java.lang.String r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            java.io.File[] r2 = r2.getExternalFilesDirs(r3)
            return r2
        Lb:
            r0 = 1
            java.io.File[] r0 = new java.io.File[r0]
            r1 = 0
            java.io.File r2 = r2.getExternalFilesDir(r3)
            r0[r1] = r2
            return r0
    }

    @android.support.annotation.Nullable
    public static java.io.File getNoBackupFilesDir(@android.support.annotation.NonNull android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            java.io.File r2 = r2.getNoBackupFilesDir()
            return r2
        Lb:
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            java.io.File r0 = new java.io.File
            java.lang.String r2 = r2.dataDir
            java.lang.String r1 = "no_backup"
            r0.<init>(r2, r1)
            java.io.File r2 = createFilesDir(r0)
            return r2
    }

    @android.support.annotation.NonNull
    public static java.io.File[] getObbDirs(@android.support.annotation.NonNull android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            java.io.File[] r2 = r2.getObbDirs()
            return r2
        Lb:
            r0 = 1
            java.io.File[] r0 = new java.io.File[r0]
            r1 = 0
            java.io.File r2 = r2.getObbDir()
            r0[r1] = r2
            return r0
    }

    @android.support.annotation.Nullable
    public static <T> T getSystemService(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.NonNull java.lang.Class<T> r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            java.lang.Object r2 = r2.getSystemService(r3)
            return r2
        Lb:
            java.lang.String r3 = getSystemServiceName(r2, r3)
            if (r3 == 0) goto L16
            java.lang.Object r2 = r2.getSystemService(r3)
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    @android.support.annotation.Nullable
    public static java.lang.String getSystemServiceName(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.NonNull java.lang.Class<?> r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            java.lang.String r2 = r2.getSystemServiceName(r3)
            return r2
        Lb:
            java.util.HashMap<java.lang.Class<?>, java.lang.String> r2 = android.support.v4.content.ContextCompat.LegacyServiceMapHolder.SERVICES
            java.lang.Object r2 = r2.get(r3)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public static boolean isDeviceProtectedStorage(@android.support.annotation.NonNull android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lb
            boolean r2 = r2.isDeviceProtectedStorage()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static boolean startActivities(@android.support.annotation.NonNull android.content.Context r1, @android.support.annotation.NonNull android.content.Intent[] r2) {
            r0 = 0
            boolean r1 = startActivities(r1, r2, r0)
            return r1
    }

    public static boolean startActivities(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.NonNull android.content.Intent[] r3, @android.support.annotation.Nullable android.os.Bundle r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto La
            r2.startActivities(r3, r4)
            goto Ld
        La:
            r2.startActivities(r3)
        Ld:
            r2 = 1
            return r2
    }

    public static void startActivity(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.NonNull android.content.Intent r3, @android.support.annotation.Nullable android.os.Bundle r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto La
            r2.startActivity(r3, r4)
            goto Ld
        La:
            r2.startActivity(r3)
        Ld:
            return
    }

    public static void startForegroundService(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.NonNull android.content.Intent r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto La
            r2.startForegroundService(r3)
            goto Ld
        La:
            r2.startService(r3)
        Ld:
            return
    }
}
