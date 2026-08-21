package com.czhj.devicehelper;

import android.content.Context;
import android.os.Build;
import android.os.Handler;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.Log;
import com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper;
import com.czhj.sdk.logger.SigmobLog;

/* JADX INFO: loaded from: classes.dex */
public final class DeviceHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f1712a = "getSimState";
    private static final String b = "getImei";
    private static final String c = "getLine1Number";
    private static String d = null;
    private static String e = null;
    private static String f = null;
    private static String g = "";
    private static long h;
    private static long i;
    private static Handler j;
    private static Handler k;
    private static int l;
    private static boolean m;
    private static String n;
    private static String o;
    private static String p;
    private static Thread q;
    private static Thread r;
    private static boolean s;
    private static int t;

    public static String getIMEI(Context context) {
        TelephonyManager telephonyManager;
        String deviceId;
        try {
            SigmobLog.d("private :getIMEI");
            telephonyManager = (TelephonyManager) context.getSystemService("phone");
        } catch (Exception unused) {
        }
        if (telephonyManager == null) {
            return null;
        }
        if (Build.VERSION.SDK_INT >= 26) {
            deviceId = telephonyManager.getImei();
            if (TextUtils.isEmpty(deviceId)) {
                try {
                    return telephonyManager.getDeviceId();
                } catch (Throwable unused2) {
                    return telephonyManager.getMeid();
                }
            }
        } else {
            deviceId = telephonyManager.getDeviceId();
        }
        if (deviceId != null) {
            return deviceId;
        }
        return null;
    }

    public static String getIMEI(Context context, int i2) {
        TelephonyManager telephonyManager;
        String deviceId;
        try {
            SigmobLog.d("private :getIMEI " + i2);
            telephonyManager = (TelephonyManager) context.getSystemService("phone");
        } catch (Exception unused) {
        }
        if (telephonyManager == null) {
            return null;
        }
        if (Build.VERSION.SDK_INT >= 26) {
            deviceId = telephonyManager.getImei(i2);
            if (TextUtils.isEmpty(deviceId)) {
                try {
                    return telephonyManager.getDeviceId(i2);
                } catch (Throwable unused2) {
                    return telephonyManager.getMeid(i2);
                }
            }
        } else {
            deviceId = telephonyManager.getDeviceId();
        }
        if (deviceId != null) {
            return deviceId;
        }
        return null;
    }

    public static String getIMSI(Context context) {
        return null;
    }

    public static String getMacAddress() {
        return "";
    }

    public static void getOAID(final Context context, final DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        if (!TextUtils.isEmpty(d)) {
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid(e);
                return;
            }
            return;
        }
        if (t > 10 || s || System.currentTimeMillis() - h < 1000) {
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid("");
                return;
            }
            return;
        }
        h = System.currentTimeMillis();
        if (r == null) {
            Thread thread = new Thread(new Runnable() { // from class: com.czhj.devicehelper.DeviceHelper.2
                @Override // java.lang.Runnable
                public void run() {
                    SigmobLog.d("private  getOAID");
                    DevicesIDsHelper.b(context, new DevicesIDsHelper.AppIdsUpdater() { // from class: com.czhj.devicehelper.DeviceHelper.2.1
                        @Override // com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater
                        public void OnIdsAvalid(String str) {
                            if (!TextUtils.isEmpty(str)) {
                                String unused = DeviceHelper.d = str;
                                if (appIdsUpdater != null) {
                                    appIdsUpdater.OnIdsAvalid(str);
                                }
                            }
                            boolean unused2 = DeviceHelper.s = false;
                            if (DeviceHelper.j != null) {
                                Handler unused3 = DeviceHelper.j = null;
                            }
                        }
                    });
                }
            });
            r = thread;
            thread.start();
            t++;
            s = true;
        }
    }

    public static void getOAID_API(final Context context, final DevicesIDsHelper.AppIdsUpdater appIdsUpdater) {
        if (!TextUtils.isEmpty(g)) {
            if (appIdsUpdater != null) {
                appIdsUpdater.OnIdsAvalid(g);
            }
        } else {
            if (l > 10 || m || System.currentTimeMillis() - i < 1000) {
                if (appIdsUpdater != null) {
                    appIdsUpdater.OnIdsAvalid("");
                    return;
                }
                return;
            }
            i = System.currentTimeMillis();
            if (q == null) {
                Thread thread = new Thread(new Runnable() { // from class: com.czhj.devicehelper.DeviceHelper.1
                    @Override // java.lang.Runnable
                    public void run() {
                        try {
                            DevicesIDsHelper devicesIDsHelper = new DevicesIDsHelper();
                            SigmobLog.d("private  getOAID_API");
                            devicesIDsHelper.a(context, new DevicesIDsHelper.AppIdsUpdater() { // from class: com.czhj.devicehelper.DeviceHelper.1.1
                                @Override // com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater
                                public void OnIdsAvalid(String str) {
                                    boolean unused = DeviceHelper.m = false;
                                    if (!TextUtils.isEmpty(str)) {
                                        String unused2 = DeviceHelper.g = str;
                                        if (appIdsUpdater != null) {
                                            appIdsUpdater.OnIdsAvalid(DeviceHelper.g);
                                        }
                                    }
                                    Log.d("oaid", "oaid_src: " + str);
                                    Thread unused3 = DeviceHelper.q = null;
                                }
                            });
                        } catch (Exception e2) {
                            SigmobLog.e(e2.getMessage());
                        }
                    }
                });
                q = thread;
                thread.start();
            }
            l++;
            m = true;
        }
    }

    public static String getVAID() {
        return f;
    }

    public static String getWifiName(Context context) {
        return n;
    }

    public static String getWifimac(Context context) {
        return "";
    }
}
