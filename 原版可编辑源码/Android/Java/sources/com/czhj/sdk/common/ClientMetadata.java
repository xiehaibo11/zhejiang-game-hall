package com.czhj.sdk.common;

import android.app.DownloadManager;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.location.Location;
import android.location.LocationManager;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.text.TextUtils;
import android.util.Base64;
import android.util.DisplayMetrics;
import android.view.WindowInsets;
import android.view.WindowManager;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.czhj.devicehelper.DeviceHelper;
import com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper;
import com.czhj.sdk.common.Database.SQLiteMTAHelper;
import com.czhj.sdk.common.models.Config;
import com.czhj.sdk.common.mta.BuriedPointManager;
import com.czhj.sdk.common.network.SigmobRequestUtil;
import com.czhj.sdk.common.utils.AESUtil;
import com.czhj.sdk.common.utils.AdvertisingId;
import com.czhj.sdk.common.utils.AppPackageUtil;
import com.czhj.sdk.common.utils.DeviceUtils;
import com.czhj.sdk.common.utils.IdentifierManager;
import com.czhj.sdk.common.utils.SharedPreferencesUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.qihoo360.replugin.RePlugin;
import com.tan.mark.SigNativeId;
import com.tkay.expressad.foundation.h.i;
import java.net.URL;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;

public class ClientMetadata implements IdentifierManager.AdvertisingIdChangeListener {
    private static final AtomicInteger a = new AtomicInteger(1);
    private static String b = RePlugin.PROCESS_UI;
    private static String c;
    private static volatile ClientMetadata d;
    private static String g;
    private Location e;
    private IdentifierManager f;
    private int h;
    private boolean i = true;
    private String j;
    private String k;
    private String l;
    private String m;
    private Context n;
    private boolean o;
    private String p;
    private String q;
    private String r;
    private CustomController s;

    public enum a {
        FORCE_PORTRAIT("portrait"),
        FORCE_LANDSCAPE("landscape"),
        DEVICE_ORIENTATION("device"),
        UNDEFINED("");

        private final String mKey;

        a(String str) {
            this.mKey = str;
        }
    }

    private String b() {
        if (!TextUtils.isEmpty(this.q)) {
            return this.q;
        }
        try {
            DeviceHelper.getOAID(this.n, new DevicesIDsHelper.AppIdsUpdater() {
                @Override
                public void OnIdsAvalid(String str) {
                    if (TextUtils.isEmpty(str)) {
                        return;
                    }
                    ClientMetadata.this.q = str;
                    if (str.equalsIgnoreCase(ClientMetadata.this.p)) {
                        return;
                    }
                    SharedPreferences.Editor editorEdit = SharedPreferencesUtil.getSharedPreferences(ClientMetadata.this.n).edit();
                    editorEdit.putString("oaid_aes", AESUtil.EncryptString(str, Constants.AESKEY));
                    editorEdit.apply();
                }
            });
        } catch (Throwable unused) {
        }
        return this.q;
    }

    private boolean c() {
        return Build.VERSION.SDK_INT < 21 || this.n.getPackageManager().queryIntentActivities(new Intent("android.settings.USAGE_ACCESS_SETTINGS"), 65536).size() > 0;
    }

    public static int generateViewId() {
        int i;
        int i2;
        do {
            i = a.get();
            i2 = i + 1;
            if (i2 > 16777215) {
                i2 = 1;
            }
        } while (!a.compareAndSet(i, i2));
        return i;
    }

    public static Long getBootSystemTime() {
        return Long.valueOf(DeviceUtils.getBootSystemTime());
    }

    public static String getCPUInfo() {
        try {
            return DeviceUtils.getCPUInfo();
        } catch (Throwable unused) {
            return null;
        }
    }

    public static String getCPUModel() {
        return Build.BOARD;
    }

    public static String getCell_ip() {
        return DeviceUtils.getCell_ip();
    }

    public static String getDeviceBrand() {
        return DeviceUtils.getDeviceBrand();
    }

    public static String getDeviceManufacturer() {
        return DeviceUtils.getDeviceManufacturer();
    }

    public static String getDeviceModel() {
        return DeviceUtils.getDeviceModel();
    }

    public static Integer getDeviceOSLevel() {
        return Integer.valueOf(DeviceUtils.getDeviceOSLevel());
    }

    public static String getDeviceOsVersion() {
        return DeviceUtils.getDeviceOsVersion();
    }

    public static ClientMetadata getInstance() {
        if (d == null) {
            synchronized (ClientMetadata.class) {
                if (d == null) {
                    d = new ClientMetadata();
                }
            }
        }
        return d;
    }

    public static String getMacAddress() {
        try {
            return DeviceHelper.getMacAddress();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static PackageInfo getPackageInfoWithUri(Context context, String str) {
        try {
            return context.getPackageManager().getPackageArchiveInfo(str, 0);
        } catch (Throwable unused) {
            return null;
        }
    }

    public static Map<String, String> getQueryParamMap(Uri uri) {
        HashMap map = new HashMap();
        for (String str : uri.getQueryParameterNames()) {
            map.put(str, TextUtils.join(com.xiaomi.mipush.sdk.Constants.ACCEPT_TIME_SEPARATOR_SP, uri.getQueryParameters(str)));
        }
        return map;
    }

    public static String getUid() {
        return g;
    }

    public static String getUserId() {
        return TextUtils.isEmpty(b) ? RePlugin.PROCESS_UI : b;
    }

    public static String getVAID() {
        try {
            return DeviceHelper.getVAID();
        } catch (Throwable unused) {
            return null;
        }
    }

    public static boolean isEmulator() {
        try {
            return DeviceUtils.isEmulator();
        } catch (Throwable unused) {
            return false;
        }
    }

    public static boolean isPermissionGranted(Context context, String str) {
        if (Build.VERSION.SDK_INT >= 23) {
            return context != null && context.checkSelfPermission(str) == 0;
        }
        return true;
    }

    public static boolean isRoot() {
        try {
            return DeviceUtils.isRoot();
        } catch (Throwable unused) {
            return false;
        }
    }

    public static void setOAIDCertPem(String str) {
        try {
            DevicesIDsHelper.a(str);
        } catch (Throwable unused) {
            SigmobLog.e("not support OAID Module");
        }
    }

    public static void setOaidCertFileName(String str) {
        try {
            DevicesIDsHelper.b(str);
        } catch (Throwable unused) {
            SigmobLog.e("not support OAID Module");
        }
    }

    public static void setUserId(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        b = str;
    }

    DownloadManager a() {
        return (DownloadManager) this.n.getSystemService("download");
    }

    public int getActiveNetworkType() {
        try {
            return DeviceUtils.getActiveNetworkType().getId();
        } catch (Throwable unused) {
            return DeviceUtils.NetworkType.UNKNOWN.getId();
        }
    }

    public String getAdvertisingId() {
        try {
            return this.f.getAdvertisingInfo().mAdvertisingId;
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getAndroidId() {
        try {
            return (this.s == null || this.s.isCanUseAndroidId()) ? DeviceUtils.getAndroidId(this.n) : this.s.getAndroidId();
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getApkMd5() {
        try {
            return DeviceUtils.getApkSha1OrMd5(this.n, "MD5");
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getApkSha1() {
        try {
            return DeviceUtils.getApkSha1OrMd5(this.n, "SHA1");
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getAppName() {
        try {
            return (String) this.n.getPackageManager().getApplicationLabel(this.n.getApplicationInfo());
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public String getAppPackageName() {
        try {
            return AppPackageUtil.getAppPackageName(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getAppVersion() {
        try {
            return AppPackageUtil.getAppVersionFromContext(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public Float getBatteryLevel() {
        try {
            return Float.valueOf(DeviceUtils.getBatteryLevel(this.n));
        } catch (Throwable unused) {
            return Float.valueOf(0.0f);
        }
    }

    public Boolean getBatterySaveEnable() {
        try {
            return Boolean.valueOf(DeviceUtils.getBatterySaveEnable(this.n));
        } catch (Throwable unused) {
            return false;
        }
    }

    public Integer getBatteryState() {
        try {
            return Integer.valueOf(DeviceUtils.getBatteryState(this.n));
        } catch (Throwable unused) {
            return 0;
        }
    }

    public String getBlueToothName() {
        try {
            return DeviceUtils.getBlueToothName(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getBootId() {
        try {
            if (Config.sharedInstance().isDisableBootMark()) {
                return "";
            }
            if (TextUtils.isEmpty(c)) {
                byte[] bootFromJNI = SigNativeId.getBootFromJNI();
                if (bootFromJNI != null && bootFromJNI.length > 0) {
                    c = new String(bootFromJNI);
                }
                SigmobLog.i("origin bootId:" + c);
                if (!TextUtils.isEmpty(c)) {
                    String strReplaceAll = c.replaceAll("\\s*|\t|\r|\n", "");
                    c = strReplaceAll;
                    if (strReplaceAll.length() > 36) {
                        c = c.substring(0, 36);
                    }
                }
                SigmobLog.i("bootId:" + c);
            }
        } catch (Throwable th) {
            SigmobLog.i("getBootId:" + th.getMessage());
        }
        return c;
    }

    public Context getContext() {
        return this.n;
    }

    public CustomController getCustomController() {
        return this.s;
    }

    public int getDensityDpi() {
        try {
            return (int) DeviceUtils.getDensityDpi(this.n);
        } catch (Throwable unused) {
            return 0;
        }
    }

    public String getDeviceId() {
        try {
            return (this.s == null || this.s.isCanUsePhoneState()) ? getDeviceId(-1) : this.s.getDevImei();
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getDeviceId(int i) {
        try {
            if (this.s != null && !this.s.isCanUsePhoneState()) {
                return this.s.getDevImei();
            }
            if (TextUtils.isEmpty(this.j)) {
                if (DeviceUtils.isCanUsePhoneState(this.n) && DeviceUtils.isCanRetryIMEI()) {
                    this.j = DeviceHelper.getIMEI(this.n);
                    this.k = DeviceHelper.getIMEI(this.n, 0);
                    this.l = DeviceHelper.getIMEI(this.n, 1);
                }
                return null;
            }
            return i == -1 ? this.j : i == 0 ? this.k : this.l;
        } catch (Throwable unused) {
            return null;
        }
    }

    public Locale getDeviceLocale() {
        try {
            return DeviceUtils.getDeviceLocale(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getDeviceName() {
        try {
            return DeviceUtils.getDeviceName(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public Integer getDeviceScreenHeightDip() {
        try {
            return Integer.valueOf(DeviceUtils.getDeviceScreenHeightDip(this.n));
        } catch (Throwable unused) {
            return 0;
        }
    }

    public Integer getDeviceScreenRealHeightDip() {
        try {
            return Integer.valueOf(DeviceUtils.getDeviceScreenRealHeightDip(this.n));
        } catch (Throwable unused) {
            return null;
        }
    }

    public Integer getDeviceScreenRealWidthDip() {
        try {
            return Integer.valueOf(DeviceUtils.getDeviceScreenRealWidthDip(this.n));
        } catch (Throwable unused) {
            return null;
        }
    }

    public Integer getDeviceScreenWidthDip() {
        try {
            return Integer.valueOf(DeviceUtils.getDeviceScreenWidthDip(this.n));
        } catch (Throwable unused) {
            return 0;
        }
    }

    public String getDeviceSerial() {
        try {
            return DeviceUtils.getDeviceSerial();
        } catch (Throwable unused) {
            return null;
        }
    }

    public DisplayMetrics getDisplayMetrics() {
        try {
            return DeviceUtils.getDisplayMetrics(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getIMSI() {
        try {
            return DeviceHelper.getIMSI(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public int getInsetBottom() {
        return this.h;
    }

    public boolean getLimitAdTrackingEnabled() {
        try {
            return this.f.getAdvertisingInfo().mDoNotTrack;
        } catch (Throwable unused) {
            return false;
        }
    }

    public Location getLocation() {
        if (this.s != null && !this.s.isCanUseLocation()) {
            return this.s.getLocation();
        }
        if (!this.o) {
            return null;
        }
        if (this.e != null) {
            return this.e;
        }
        LocationManager locationManager = getLocationManager();
        if (locationManager != null && DeviceUtils.isCanRetryLocation()) {
            SigmobLog.d("private :use_location ");
            Location lastKnownLocation = locationManager.getLastKnownLocation("passive");
            if (lastKnownLocation != null) {
                this.e = lastKnownLocation;
            }
        }
        return this.e;
    }

    public LocationManager getLocationManager() {
        try {
            if ((this.s == null || this.s.isCanUseLocation()) && DeviceUtils.isCanUseLocation(this.n)) {
                return (LocationManager) this.n.getSystemService(RequestParameters.SUBRESOURCE_LOCATION);
            }
            return null;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return null;
        }
    }

    public String getNetworkOperatorForUrl() {
        try {
            return DeviceUtils.getNetworkOperatorForUrl(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getNetworkOperatorName() {
        try {
            return DeviceUtils.getNetworkOperatorName(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getOAID() {
        CustomController customController = this.s;
        if (customController != null && !TextUtils.isEmpty(customController.getDevOaid())) {
            String devOaid = this.s.getDevOaid();
            this.p = devOaid;
            return devOaid;
        }
        int disable_up_OAid = Config.sharedInstance().getDisable_up_OAid();
        boolean oaidApiDisable = Config.sharedInstance().getOaidApiDisable();
        if ((disable_up_OAid < 0 || disable_up_OAid > 1) && oaidApiDisable) {
            return null;
        }
        String oaid_sdk = getOAID_SDK();
        if (TextUtils.isEmpty(oaid_sdk)) {
            oaid_sdk = getOAID_API();
        }
        if (TextUtils.isEmpty(oaid_sdk) || oaid_sdk.equalsIgnoreCase(this.p)) {
            return this.p;
        }
        this.p = oaid_sdk;
        return oaid_sdk;
    }

    public String getOAID_API() {
        try {
            if (this.s != null && !TextUtils.isEmpty(this.s.getDevOaid())) {
                return this.s.getDevOaid();
            }
            if (Build.VERSION.SDK_INT <= 28 || Config.sharedInstance().getOaidApiDisable()) {
                return null;
            }
            if (!TextUtils.isEmpty(this.r)) {
                return this.r;
            }
            DeviceHelper.getOAID_API(this.n, new DevicesIDsHelper.AppIdsUpdater() {
                @Override
                public void OnIdsAvalid(String str) {
                    if (TextUtils.isEmpty(str)) {
                        return;
                    }
                    ClientMetadata.this.r = str;
                    if (str.equalsIgnoreCase(ClientMetadata.this.p)) {
                        return;
                    }
                    SharedPreferences.Editor editorEdit = SharedPreferencesUtil.getSharedPreferences(ClientMetadata.this.n).edit();
                    editorEdit.putString("oaid_aes", AESUtil.EncryptString(str, Constants.AESKEY));
                    editorEdit.apply();
                }
            });
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getOAID_SDK() {
        try {
            if (this.s != null && !TextUtils.isEmpty(this.s.getDevOaid())) {
                return this.s.getDevOaid();
            }
            int disable_up_OAid = Config.sharedInstance().getDisable_up_OAid();
            if (disable_up_OAid == 0) {
                if (Build.VERSION.SDK_INT > 28) {
                    return b();
                }
                return null;
            }
            if (disable_up_OAid == 1 && Build.VERSION.SDK_INT >= 23) {
                return b();
            }
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }

    public Integer getOrientationInt() {
        try {
            return Integer.valueOf(DeviceUtils.getOrientationInt(this.n));
        } catch (Throwable unused) {
            return 0;
        }
    }

    public String getPermission(Context context) {
        StringBuilder sb;
        String string = "";
        try {
            PackageManager packageManager = context.getPackageManager();
            String packageName = context.getPackageName();
            String[] strArr = packageManager.getPackageInfo(packageName, 4096).requestedPermissions;
            for (int i = 0; i < strArr.length; i++) {
                if (packageManager.checkPermission(strArr[i], packageName) == 0) {
                    if (i == strArr.length - 1) {
                        sb = new StringBuilder();
                        sb.append(string);
                        sb.append(strArr[i]);
                    } else {
                        sb = new StringBuilder();
                        sb.append(string);
                        sb.append(strArr[i]);
                        sb.append(com.xiaomi.mipush.sdk.Constants.ACCEPT_TIME_SEPARATOR_SP);
                    }
                    string = sb.toString();
                }
            }
            SigmobLog.d("permissionReq:" + string);
            if (!TextUtils.isEmpty(string)) {
                return Base64.encodeToString(string.getBytes(), 2);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return string;
    }

    public DisplayMetrics getRealMetrics() {
        try {
            return DeviceUtils.getRealMetrics(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getRotation() {
        try {
            return DeviceUtils.getRotation(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getSDCardPath() {
        try {
            return DeviceUtils.getSDCardPath(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public int getScreenOrientation(Context context) {
        WindowManager windowManager = (WindowManager) context.getSystemService("window");
        if (windowManager == null) {
            return 0;
        }
        return windowManager.getDefaultDisplay().getRotation();
    }

    public String getStringResources(String str, String str2) {
        Resources resources;
        int identifier;
        Context context = this.n;
        return (context == null || (resources = context.getResources()) == null || (identifier = resources.getIdentifier(str, i.g, this.n.getPackageName())) == 0) ? str2 : resources.getString(identifier);
    }

    public String getStringResources(String str, String str2, Object... objArr) {
        Resources resources;
        Context context = this.n;
        if (context == null || (resources = context.getResources()) == null) {
            return str2;
        }
        int identifier = resources.getIdentifier(str, i.g, this.n.getPackageName());
        if (identifier == 0) {
            return String.format(str2, objArr);
        }
        SigmobLog.d("getStringResources resid" + identifier);
        return resources.getString(identifier, objArr);
    }

    public int getStyleResources(String str) {
        Resources resources;
        Context context = this.n;
        if (context == null || (resources = context.getResources()) == null) {
            return 0;
        }
        return resources.getIdentifier(str, "style", this.n.getPackageName());
    }

    public Long getSystemTotalMemorySize() {
        try {
            return Long.valueOf(DeviceUtils.getSysteTotalMemorySize(this.n));
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getTargetSdkVersion() {
        try {
            return String.valueOf(this.n.getApplicationInfo().targetSdkVersion);
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getUpdateId() {
        try {
            if (Config.sharedInstance().isDisableBootMark()) {
                return "";
            }
            if (TextUtils.isEmpty(this.m)) {
                this.m = SigNativeId.getUpdateFromJNI();
                SigmobLog.i("updateId:" + this.m);
            }
        } catch (Throwable th) {
            SigmobLog.i("getUpdateId:" + th.getMessage());
        }
        return this.m;
    }

    public String getWifiName() {
        try {
            return DeviceHelper.getWifiName(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    public String getWifimac() {
        try {
            return DeviceHelper.getWifimac(this.n);
        } catch (Throwable unused) {
            return null;
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(9:4|(1:6)(2:7|(1:9))|10|(2:15|(1:17)(6:19|(1:21)|26|22|23|24))(1:14)|18|26|22|23|24) */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void initialize(Context context) {
        String strDecryptString;
        if (this.n == null) {
            Context applicationContext = context.getApplicationContext();
            this.n = applicationContext;
            String string = SharedPreferencesUtil.getSharedPreferences(applicationContext).getString("uid_aes", null);
            if (string != null) {
                g = AESUtil.DecryptString(string, Constants.AESKEY);
            } else {
                String string2 = SharedPreferencesUtil.getSharedPreferences(this.n).getString(IUserFeature.LOGIN_SUC_RS_UID, null);
                g = string2;
                if (string2 != null) {
                    SharedPreferences.Editor editorEdit = SharedPreferencesUtil.getSharedPreferences(this.n).edit();
                    editorEdit.remove(IUserFeature.LOGIN_SUC_RS_UID);
                    editorEdit.putString("uid_aes", AESUtil.EncryptString(g, Constants.AESKEY));
                    editorEdit.apply();
                }
            }
            CustomController customController = this.s;
            if (customController == null || TextUtils.isEmpty(customController.getDevOaid())) {
                String string3 = SharedPreferencesUtil.getSharedPreferences(this.n).getString("oaid_aes", null);
                if (string3 == null) {
                    String string4 = SharedPreferencesUtil.getSharedPreferences(this.n).getString("oaid", null);
                    this.p = string4;
                    if (string4 != null) {
                        SharedPreferences.Editor editorEdit2 = SharedPreferencesUtil.getSharedPreferences(this.n).edit();
                        editorEdit2.remove("oaid");
                        editorEdit2.putString("oaid_aes", AESUtil.EncryptString(this.p, Constants.AESKEY));
                        editorEdit2.apply();
                    }
                    getOAID();
                    this.f = new IdentifierManager(this.n, this);
                    SQLiteMTAHelper.initialize(this.n);
                    BuriedPointManager.getInstance().start();
                    DeviceUtils.registerNetworkChange(this.n);
                }
                strDecryptString = AESUtil.DecryptString(string3, Constants.AESKEY);
            } else {
                strDecryptString = this.s.getDevOaid();
            }
            this.p = strDecryptString;
            getOAID();
            this.f = new IdentifierManager(this.n, this);
            SQLiteMTAHelper.initialize(this.n);
            BuriedPointManager.getInstance().start();
            DeviceUtils.registerNetworkChange(this.n);
        }
    }

    public void initializeWithController(Context context, CustomController customController) {
        this.s = customController;
        initialize(context);
    }

    public boolean isNetworkConnected(String str) {
        try {
            return SigmobRequestUtil.isConnection(new URL(str).getHost());
        } catch (Throwable unused) {
            return false;
        }
    }

    public boolean isRetryAble() {
        return this.i;
    }

    public boolean isSDCardAvailable() {
        return Environment.getExternalStorageState().equals("mounted");
    }

    public boolean isTablet() {
        try {
            return DeviceUtils.isTablet(this.n);
        } catch (Throwable unused) {
            return false;
        }
    }

    @Override
    public void onIdChanged(AdvertisingId advertisingId, AdvertisingId advertisingId2) {
    }

    public void setEnableLocation(boolean z) {
        this.o = z;
    }

    public void setLocation(Location location) {
        this.e = location;
    }

    public void setRetryAble(boolean z) {
        this.i = z;
    }

    public void setUid(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            if (TextUtils.isEmpty(g) || !str.equalsIgnoreCase(g)) {
                g = str;
                SharedPreferences.Editor editorEdit = SharedPreferencesUtil.getSharedPreferences(this.n).edit();
                editorEdit.putString("uid_aes", AESUtil.EncryptString(str, Constants.AESKEY));
                editorEdit.apply();
            }
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    public void setWindInsets(WindowInsets windowInsets) {
        if (Build.VERSION.SDK_INT < 20 || windowInsets == null || !windowInsets.isRound()) {
            return;
        }
        this.h = windowInsets.getSystemWindowInsetBottom();
    }
}
