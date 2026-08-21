package com.mbridge.msdk.optimize;

import android.content.Context;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.os.Environment;
import android.provider.Settings;
import android.support.v4.os.EnvironmentCompat;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;
import com.mbridge.msdk.optimize.a.a.c;
import com.mbridge.msdk.optimize.a.a.d;
import com.mbridge.msdk.optimize.a.a.e;
import com.mbridge.msdk.optimize.a.a.f;
import com.mbridge.msdk.optimize.a.a.g;
import com.mbridge.msdk.optimize.a.a.h;
import com.mbridge.msdk.optimize.a.a.i;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.xiaomi.mipush.sdk.Constants;
import com.ymnsdk.replugin.util.RomUtil;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.lang.reflect.Method;
import java.net.NetworkInterface;
import java.util.Arrays;
import java.util.Collections;
import java.util.UUID;

/* JADX INFO: loaded from: classes2.dex */
public class SensitiveDataUtil {
    private static String androidID;
    private static String deviceid;
    private static String imsi;
    private static boolean isAcquireAndroidId;
    private static boolean isAcquireIMEI;
    private static boolean isAcquireMac;
    private static boolean isAcquireOAID;
    private static boolean isAcquiredIMSI;
    private static String mSelfId;
    private static String macAddress;
    private static String oaid;

    private static void writeFile(Context context, File file, String str) throws IOException {
        FileOutputStream fileOutputStream;
        Throwable th;
        if (!file.getParentFile().exists()) {
            file.getParentFile().mkdirs();
        }
        file.createNewFile();
        try {
            fileOutputStream = new FileOutputStream(file);
            try {
                fileOutputStream.write(str.getBytes());
            } catch (Throwable th2) {
                th = th2;
                try {
                    th.printStackTrace();
                } finally {
                    if (fileOutputStream != null) {
                        fileOutputStream.close();
                    }
                }
            }
        } catch (Throwable th3) {
            fileOutputStream = null;
            th = th3;
        }
    }

    private static String writeInstallationFile(Context context, File file) throws IOException {
        UUID uuidRandomUUID = UUID.randomUUID();
        writeFile(context, file, uuidRandomUUID.toString());
        return uuidRandomUUID.toString();
    }

    private static String readInstallationFile(File file) throws IOException {
        RandomAccessFile randomAccessFile;
        try {
            randomAccessFile = new RandomAccessFile(file, "r");
            try {
                byte[] bArr = new byte[(int) randomAccessFile.length()];
                randomAccessFile.readFully(bArr);
                String str = new String(bArr);
                randomAccessFile.close();
                return str;
            } catch (Throwable th) {
                th = th;
                try {
                    th.printStackTrace();
                    return null;
                } finally {
                    if (randomAccessFile != null) {
                        randomAccessFile.close();
                    }
                }
            }
        } catch (Throwable th2) {
            th = th2;
            randomAccessFile = null;
        }
    }

    public static String getSelfId(Context context) {
        if (mSelfId == null) {
            File file = new File(Environment.getExternalStorageDirectory().toString(), "/.a/track_id.bin");
            try {
                if (!file.exists()) {
                    mSelfId = writeInstallationFile(context, file);
                } else {
                    mSelfId = readInstallationFile(file);
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        String str = mSelfId;
        return str == null ? "" : str;
    }

    public static String getIMEI(Context context) {
        if (isAcquireIMEI) {
            return deviceid;
        }
        try {
            String deviceId = ((TelephonyManager) context.getSystemService("phone")).getDeviceId();
            deviceid = deviceId;
            if (deviceId == null) {
                deviceid = "";
            }
        } catch (Throwable unused) {
            deviceid = "";
        }
        isAcquireIMEI = true;
        return deviceid;
    }

    public static String getMacAddress(Context context) {
        String macAddress2;
        if (isAcquireMac) {
            return macAddress;
        }
        try {
            if (Build.VERSION.SDK_INT >= 23) {
                macAddress2 = getMac();
            } else {
                macAddress2 = ((WifiManager) context.getSystemService(Device.NETWORN_WIFI)).getConnectionInfo().getMacAddress();
            }
            if (macAddress2 == null) {
                return "";
            }
            String lowerCase = macAddress2.replaceAll(Constants.COLON_SEPARATOR, "").toLowerCase();
            macAddress = lowerCase;
            isAcquireMac = true;
            return lowerCase;
        } catch (Exception unused) {
            return "";
        }
    }

    private static String getMac() {
        try {
        } catch (Exception e) {
            e.printStackTrace();
        }
        for (NetworkInterface networkInterface : Collections.list(NetworkInterface.getNetworkInterfaces())) {
            if (networkInterface.getName().equalsIgnoreCase("wlan0")) {
                byte[] hardwareAddress = networkInterface.getHardwareAddress();
                if (hardwareAddress == null) {
                    return "";
                }
                StringBuilder sb = new StringBuilder();
                for (byte b : hardwareAddress) {
                    sb.append(String.format("%02X:", Byte.valueOf(b)));
                }
                if (sb.length() > 0) {
                    sb.deleteCharAt(sb.length() - 1);
                }
                return sb.toString();
            }
            return "";
        }
        return "";
    }

    public static String getAndroidID(Context context) {
        if (isAcquireAndroidId) {
            return androidID;
        }
        try {
            String string = Settings.Secure.getString(context.getContentResolver(), "android_id");
            androidID = string;
            if (string == null) {
                androidID = "";
            }
        } catch (Exception unused) {
            androidID = "";
        }
        isAcquireAndroidId = true;
        return androidID;
    }

    public static String getImsi(Context context) {
        if (isAcquiredIMSI) {
            return imsi;
        }
        try {
            String subscriberId = ((TelephonyManager) context.getSystemService("phone")).getSubscriberId();
            imsi = subscriberId;
            if (subscriberId == null) {
                imsi = "";
            }
        } catch (Exception unused) {
            imsi = "";
        }
        isAcquiredIMSI = true;
        return imsi;
    }

    public static String getOaid(Context context) {
        String str;
        if (isAcquireOAID) {
            return oaid;
        }
        if (!TextUtils.isEmpty(oaid)) {
            return oaid;
        }
        try {
            str = new a(context).b;
            oaid = str;
        } catch (Throwable unused) {
            oaid = "";
        }
        if (!TextUtils.isEmpty(str)) {
            return oaid;
        }
        String str2 = Build.MANUFACTURER;
        if (isFreeMeOS()) {
            str2 = "FERRMEOS";
        } else if (isSSUIOS()) {
            str2 = "SSUI";
        }
        if (!TextUtils.isEmpty(str2)) {
            String upperCase = str2.toUpperCase();
            if (Arrays.asList("ASUS", "HUAWEI", "HONOR", RomUtil.ROM_OPPO, "ONEPLUS", "ZTE", "FERRMEOS", "SSUI", "SAMSUNG", "MEIZU", "MOTOLORA", "LENOVO").contains(upperCase)) {
                getFormNewThread(context, upperCase);
            } else if (RomUtil.ROM_VIVO.equals(upperCase)) {
                oaid = new h(context).a();
            } else if ("NUBIA".equals(upperCase)) {
                oaid = new d(context).a();
            }
        }
        isAcquireOAID = true;
        return oaid;
    }

    public static boolean isFreeMeOS() {
        String property = getProperty("ro.build.freeme.label");
        return !TextUtils.isEmpty(property) && property.equalsIgnoreCase("FREEMEOS");
    }

    public static boolean isSSUIOS() {
        String property = getProperty("ro.ssui.product");
        return (TextUtils.isEmpty(property) || property.equalsIgnoreCase(EnvironmentCompat.MEDIA_UNKNOWN)) ? false : true;
    }

    private static String getProperty(String str) {
        if (str == null) {
            return null;
        }
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            return (String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class, String.class).invoke(cls, str, EnvironmentCompat.MEDIA_UNKNOWN);
        } catch (Exception unused) {
            return null;
        }
    }

    static final class a {
        private static Object e;
        private static Class<?> f;
        private static Method g;
        private static Method h;
        private static Method i;
        private static Method j;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final String f3853a;
        final String b;
        final String c;
        final String d;

        static {
            try {
                Class<?> cls = Class.forName("com.android.id.impl.IdProviderImpl");
                f = cls;
                e = cls.newInstance();
                g = f.getMethod("getUDID", Context.class);
                h = f.getMethod("getOAID", Context.class);
                i = f.getMethod("getVAID", Context.class);
                j = f.getMethod("getAAID", Context.class);
            } catch (Throwable unused) {
            }
        }

        a(Context context) {
            this.f3853a = a(context, g);
            this.b = a(context, h);
            this.c = a(context, i);
            this.d = a(context, j);
        }

        private static String a(Context context, Method method) {
            Object obj = e;
            if (obj == null || method == null) {
                return null;
            }
            try {
                Object objInvoke = method.invoke(obj, context);
                if (objInvoke != null) {
                    return (String) objInvoke;
                }
                return null;
            } catch (Throwable unused) {
                return null;
            }
        }
    }

    private static void getFormNewThread(final Context context, final String str) {
        new Thread(new Runnable() { // from class: com.mbridge.msdk.optimize.SensitiveDataUtil.1
            @Override // java.lang.Runnable
            public final void run() {
                com.mbridge.msdk.optimize.a.b bVar = new com.mbridge.msdk.optimize.a.b() { // from class: com.mbridge.msdk.optimize.SensitiveDataUtil.1.1
                    @Override // com.mbridge.msdk.optimize.a.b
                    public final void a(String str2) {
                    }

                    @Override // com.mbridge.msdk.optimize.a.b
                    public final void a(String str2, boolean z) {
                        String unused = SensitiveDataUtil.oaid = str2;
                    }
                };
                if ("ASUS".equals(str)) {
                    new com.mbridge.msdk.optimize.a.a.a(context).a(bVar);
                    return;
                }
                if (RomUtil.ROM_OPPO.equals(str)) {
                    new f(context).a(bVar);
                    return;
                }
                if ("ONEPLUS".equals(str)) {
                    new e(context).a(bVar);
                    return;
                }
                if ("ZTE".equals(str) || "FERRMEOS".equals(str) || "SSUI".equals(str)) {
                    new i(context).a(bVar);
                    return;
                }
                if ("HUAWEI".equals(str) || "HONOR".equals(str)) {
                    new com.mbridge.msdk.optimize.a.a(context).a(bVar);
                    return;
                }
                if ("SAMSUNG".equals(str)) {
                    new g(context).a(bVar);
                    return;
                }
                if ("LENOVO".equals(str) || "MOTOLORA".equals(str)) {
                    new com.mbridge.msdk.optimize.a.a.b(context).a(bVar);
                } else if ("MEIZU".equals(str)) {
                    new c(context).a(bVar);
                }
            }
        }).start();
    }
}
