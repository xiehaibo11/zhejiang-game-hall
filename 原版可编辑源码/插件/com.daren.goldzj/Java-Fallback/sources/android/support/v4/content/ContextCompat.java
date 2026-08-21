package android.support.v4.content;

import android.accessibilityservice.AccessibilityService;
import android.accounts.AccountManager;
import android.app.ActivityManager;
import android.app.AlarmManager;
import android.app.AppOpsManager;
import android.app.DownloadManager;
import android.app.KeyguardManager;
import android.app.NotificationManager;
import android.app.SearchManager;
import android.app.UiModeManager;
import android.app.WallpaperManager;
import android.app.admin.DevicePolicyManager;
import android.app.job.JobScheduler;
import android.app.usage.UsageStatsManager;
import android.appwidget.AppWidgetManager;
import android.bluetooth.BluetoothManager;
import android.content.ClipboardManager;
import android.content.Context;
import android.content.Intent;
import android.content.RestrictionsManager;
import android.content.pm.LauncherApps;
import android.content.res.ColorStateList;
import android.graphics.drawable.Drawable;
import android.hardware.ConsumerIrManager;
import android.hardware.SensorManager;
import android.hardware.camera2.CameraManager;
import android.hardware.display.DisplayManager;
import android.hardware.input.InputManager;
import android.hardware.usb.UsbManager;
import android.location.LocationManager;
import android.media.AudioManager;
import android.media.MediaRouter;
import android.media.projection.MediaProjectionManager;
import android.media.session.MediaSessionManager;
import android.media.tv.TvInputManager;
import android.net.ConnectivityManager;
import android.net.nsd.NsdManager;
import android.net.wifi.WifiManager;
import android.net.wifi.p2p.WifiP2pManager;
import android.nfc.NfcManager;
import android.os.BatteryManager;
import android.os.Build;
import android.os.Bundle;
import android.os.DropBoxManager;
import android.os.PowerManager;
import android.os.Process;
import android.os.UserManager;
import android.os.Vibrator;
import android.os.storage.StorageManager;
import android.print.PrintManager;
import android.support.annotation.ColorInt;
import android.support.annotation.ColorRes;
import android.support.annotation.DrawableRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.app.NotificationCompat;
import android.telecom.TelecomManager;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.util.Log;
import android.util.TypedValue;
import android.view.LayoutInflater;
import android.view.WindowManager;
import android.view.accessibility.CaptioningManager;
import android.view.inputmethod.InputMethodManager;
import android.view.textservice.TextServicesManager;
import com.bianfeng.libuniverse.Device;
import java.io.File;
import java.util.HashMap;

public class ContextCompat {
    private static final String TAG = "ContextCompat";
    private static final Object sLock = null;
    private static TypedValue sTempValue;

    private static final class LegacyServiceMapHolder {
        static final HashMap<Class<?>, String> SERVICES = null;

        private LegacyServiceMapHolder() {
        }

        static {
            SERVICES = new HashMap();
            if (Build.VERSION.SDK_INT <= 22) goto L6;
            SERVICES.put(SubscriptionManager.class, "telephony_subscription_service");
            SERVICES.put(UsageStatsManager.class, "usagestats");
        L6:
            if (Build.VERSION.SDK_INT <= 21) goto L9;
            SERVICES.put(AppWidgetManager.class, "appwidget");
            SERVICES.put(BatteryManager.class, "batterymanager");
            SERVICES.put(CameraManager.class, "camera");
            SERVICES.put(JobScheduler.class, "jobscheduler");
            SERVICES.put(LauncherApps.class, "launcherapps");
            SERVICES.put(MediaProjectionManager.class, "media_projection");
            SERVICES.put(MediaSessionManager.class, "media_session");
            SERVICES.put(RestrictionsManager.class, "restrictions");
            SERVICES.put(TelecomManager.class, "telecom");
            SERVICES.put(TvInputManager.class, "tv_input");
        L9:
            if (Build.VERSION.SDK_INT <= 19) goto L12;
            SERVICES.put(AppOpsManager.class, "appops");
            SERVICES.put(CaptioningManager.class, "captioning");
            SERVICES.put(ConsumerIrManager.class, "consumer_ir");
            SERVICES.put(PrintManager.class, "print");
        L12:
            if (Build.VERSION.SDK_INT <= 18) goto L15;
            SERVICES.put(BluetoothManager.class, "bluetooth");
        L15:
            if (Build.VERSION.SDK_INT <= 17) goto L18;
            SERVICES.put(DisplayManager.class, "display");
            SERVICES.put(UserManager.class, "user");
        L18:
            if (Build.VERSION.SDK_INT <= 16) goto L20;
            SERVICES.put(InputManager.class, "input");
            SERVICES.put(MediaRouter.class, "media_router");
            SERVICES.put(NsdManager.class, "servicediscovery");
        L20:
            SERVICES.put(AccessibilityService.class, "accessibility");
            SERVICES.put(AccountManager.class, "account");
            SERVICES.put(ActivityManager.class, "activity");
            SERVICES.put(AlarmManager.class, NotificationCompat.CATEGORY_ALARM);
            SERVICES.put(AudioManager.class, "audio");
            SERVICES.put(ClipboardManager.class, "clipboard");
            SERVICES.put(ConnectivityManager.class, "connectivity");
            SERVICES.put(DevicePolicyManager.class, "device_policy");
            SERVICES.put(DownloadManager.class, "download");
            SERVICES.put(DropBoxManager.class, "dropbox");
            SERVICES.put(InputMethodManager.class, "input_method");
            SERVICES.put(KeyguardManager.class, "keyguard");
            SERVICES.put(LayoutInflater.class, "layout_inflater");
            SERVICES.put(LocationManager.class, "location");
            SERVICES.put(NfcManager.class, "nfc");
            SERVICES.put(NotificationManager.class, "notification");
            SERVICES.put(PowerManager.class, "power");
            SERVICES.put(SearchManager.class, "search");
            SERVICES.put(SensorManager.class, "sensor");
            SERVICES.put(StorageManager.class, "storage");
            SERVICES.put(TelephonyManager.class, "phone");
            SERVICES.put(TextServicesManager.class, "textservices");
            SERVICES.put(UiModeManager.class, "uimode");
            SERVICES.put(UsbManager.class, "usb");
            SERVICES.put(Vibrator.class, "vibrator");
            SERVICES.put(WallpaperManager.class, "wallpaper");
            SERVICES.put(WifiP2pManager.class, "wifip2p");
            SERVICES.put(WifiManager.class, Device.NETWORN_WIFI);
            SERVICES.put(WindowManager.class, "window");
        }
    }

    static {
        sLock = new Object();
    }

    protected ContextCompat() {
    }

    public static boolean startActivities(@NonNull Context r1, @NonNull Intent[] r2) {
        return startActivities(r1, r2, null);
    }

    public static boolean startActivities(@NonNull Context r2, @NonNull Intent[] r3, @Nullable Bundle r4) {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        r2.startActivities(r3, r4);
        return true;
    L5:
        r2.startActivities(r3);
        return true;
    }

    public static void startActivity(@NonNull Context r2, @NonNull Intent r3, @Nullable Bundle r4) {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        r2.startActivity(r3, r4);
        return;
    L5:
        r2.startActivity(r3);
    }

    @Nullable
    public static File getDataDir(@NonNull Context r2) {
        if (Build.VERSION.SDK_INT >= 24) goto L5;
        String r22 = r2.getApplicationInfo().dataDir;
        if (r22 != null) goto L11;
        return null;
    L11:
        return new File(r22);
    L5:
        return r2.getDataDir();
    }

    @NonNull
    public static File[] getObbDirs(@NonNull Context r2) {
        if (Build.VERSION.SDK_INT < 19) goto L7;
        return r2.getObbDirs();
    L7:
        return new File[]{r2.getObbDir()};
    }

    @NonNull
    public static File[] getExternalFilesDirs(@NonNull Context r2, @Nullable String r3) {
        if (Build.VERSION.SDK_INT < 19) goto L7;
        return r2.getExternalFilesDirs(r3);
    L7:
        return new File[]{r2.getExternalFilesDir(r3)};
    }

    @NonNull
    public static File[] getExternalCacheDirs(@NonNull Context r2) {
        if (Build.VERSION.SDK_INT < 19) goto L7;
        return r2.getExternalCacheDirs();
    L7:
        return new File[]{r2.getExternalCacheDir()};
    }

    private static File buildPath(File r4, String... r5) {
        int r0 = r5.length;
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L10;
        String r2 = r5[r1];
        if (r4 != null) goto L7;
        r4 = new File(r2);
    L9:
        r1 = r1 + 1;
        goto L3
    L7:
        if (r2 == null) goto L9;
        r4 = new File(r4, r2);
        goto L9
    L10:
        return r4;
    }

    @Nullable
    public static Drawable getDrawable(@NonNull Context r4, @DrawableRes int r5) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r4.getDrawable(r5);
    L7:
        if (Build.VERSION.SDK_INT >= 16) goto L9;
        Object r0 = sLock;
        monitor-enter(r0);
    L19:
        th = move-exception;
        throw th;
    L13:
        if (sTempValue != null) goto L15;
        sTempValue = new TypedValue();     // Catch: Throwable -> L19
    L15:
        r4.getResources().getValue(r5, sTempValue, true);     // Catch: Throwable -> L19
        int r52 = sTempValue.resourceId;     // Catch: Throwable -> L19
        monitor-exit(r0);     // Catch: Throwable -> L19
        return r4.getResources().getDrawable(r52);
    L9:
        return r4.getResources().getDrawable(r5);
    }

    @Nullable
    public static ColorStateList getColorStateList(@NonNull Context r2, @ColorRes int r3) {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        return r2.getColorStateList(r3);
    L7:
        return r2.getResources().getColorStateList(r3);
    }

    @ColorInt
    public static int getColor(@NonNull Context r2, @ColorRes int r3) {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        return r2.getColor(r3);
    L7:
        return r2.getResources().getColor(r3);
    }

    public static int checkSelfPermission(@NonNull Context r2, @NonNull String r3) {
        if (r3 == null) goto L6;
        return r2.checkPermission(r3, Process.myPid(), Process.myUid());
    L6:
        throw new IllegalArgumentException("permission is null");
    }

    @Nullable
    public static File getNoBackupFilesDir(@NonNull Context r2) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.getNoBackupFilesDir();
    L7:
        return createFilesDir(new File(r2.getApplicationInfo().dataDir, "no_backup"));
    }

    public static File getCodeCacheDir(@NonNull Context r2) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.getCodeCacheDir();
    L7:
        return createFilesDir(new File(r2.getApplicationInfo().dataDir, "code_cache"));
    }

    private static synchronized File createFilesDir(File r4) {
        monitor-enter(ContextCompat.class);
    L18:
        th = move-exception;
        throw th;
    L5:
        if (r4.exists() == false) goto L7;
    L16:
        monitor-exit(ContextCompat.class);
        return r4;
    L7:
        if (r4.mkdirs() == true) goto L16;
        if (r4.exists() == false) goto L12;
        monitor-exit(ContextCompat.class);
        return r4;
    L12:
        Log.w(TAG, "Unable to create files subdir " + r4.getPath());     // Catch: Throwable -> L18
        monitor-exit(ContextCompat.class);
        return null;
    }

    @Nullable
    public static Context createDeviceProtectedStorageContext(@NonNull Context r2) {
        if (Build.VERSION.SDK_INT >= 24) goto L5;
        return null;
    L5:
        return r2.createDeviceProtectedStorageContext();
    }

    public static boolean isDeviceProtectedStorage(@NonNull Context r2) {
        if (Build.VERSION.SDK_INT >= 24) goto L5;
        return false;
    L5:
        return r2.isDeviceProtectedStorage();
    }

    public static void startForegroundService(@NonNull Context r2, @NonNull Intent r3) {
        if (Build.VERSION.SDK_INT < 26) goto L5;
        r2.startForegroundService(r3);
        return;
    L5:
        r2.startService(r3);
    }

    @Nullable
    public static <T> T getSystemService(@NonNull Context r2, @NonNull Class<T> r3) {
        if (Build.VERSION.SDK_INT >= 23) goto L5;
        String r32 = getSystemServiceName(r2, r3);
        if (r32 != null) goto L11;
        return null;
    L11:
        return (T) r2.getSystemService(r32);
    L5:
        return (T) r2.getSystemService(r3);
    }

    @Nullable
    public static String getSystemServiceName(@NonNull Context r2, @NonNull Class<?> r3) {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        return r2.getSystemServiceName(r3);
    L7:
        return LegacyServiceMapHolder.SERVICES.get(r3);
    }
}
