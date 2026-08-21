package com.kwad.sdk.utils;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.telephony.ServiceState;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import java.net.InetAddress;

/* JADX INFO: loaded from: classes2.dex */
public final class ag {
    private static int aIR;
    private static boolean aIS;

    public static NetworkInfo ci(Context context) {
        ConnectivityManager connectivityManager;
        if (!SystemUtil.b(context, com.kuaishou.weapon.p0.g.b) || (connectivityManager = (ConnectivityManager) context.getSystemService("connectivity")) == null) {
            return null;
        }
        try {
            return connectivityManager.getActiveNetworkInfo();
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static int cj(Context context) {
        if (context != null && SystemUtil.b(context, com.kuaishou.weapon.p0.g.b) && SystemUtil.b(context, "android.permission.READ_PHONE_STATE")) {
            try {
                NetworkInfo networkInfoCi = ci(context);
                if (!(networkInfoCi != null && networkInfoCi.isConnected())) {
                    return 0;
                }
                if (1 == networkInfoCi.getType()) {
                    return 100;
                }
                TelephonyManager telephonyManager = (TelephonyManager) context.getApplicationContext().getSystemService("phone");
                if (telephonyManager != null) {
                    int iL = l(context, telephonyManager.getNetworkType());
                    if (iL == 20) {
                        return 5;
                    }
                    switch (iL) {
                    }
                    return 0;
                }
            } catch (Exception unused) {
            }
        }
        return 0;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00a2 A[Catch: Exception -> 0x00d9, TryCatch #0 {Exception -> 0x00d9, blocks: (B:10:0x001a, B:12:0x002c, B:14:0x003a, B:15:0x003d, B:47:0x009f, B:49:0x00a5, B:50:0x00a8, B:51:0x00ab, B:17:0x0042, B:20:0x004c, B:23:0x0056, B:26:0x0060, B:29:0x006a, B:32:0x0075, B:35:0x007d, B:38:0x0085, B:41:0x008d, B:44:0x0095, B:52:0x00ad, B:54:0x00b1, B:56:0x00b7, B:58:0x00bd, B:61:0x00c4, B:63:0x00ca, B:64:0x00cd, B:66:0x00d3, B:67:0x00d6, B:48:0x00a2), top: B:79:0x001a }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static int d(android.content.Context r10, java.lang.String r11, boolean r12) {
        /*
            Method dump skipped, instruction units count: 286
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.utils.ag.d(android.content.Context, java.lang.String, boolean):int");
    }

    private static boolean fA(String str) {
        return str.contains("nrState=NOT_RESTRICTED") || str.contains("nrState=CONNECTED");
    }

    public static boolean fB(String str) {
        return p(str, 3000);
    }

    public static int getActiveNetworkType(Context context) {
        try {
            NetworkInfo networkInfoCi = ci(context);
            if (networkInfoCi == null) {
                return -1;
            }
            return networkInfoCi.getType();
        } catch (Exception unused) {
            return -1;
        }
    }

    private static int getSubId() {
        if (Build.VERSION.SDK_INT >= 24) {
            return SubscriptionManager.getDefaultDataSubscriptionId();
        }
        return -1;
    }

    public static boolean isMobileConnected(Context context) {
        try {
            NetworkInfo networkInfoCi = ci(context);
            if (networkInfoCi != null && networkInfoCi.isConnected()) {
                if (networkInfoCi.getType() == 0) {
                    return true;
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }

    public static boolean isNetworkConnected(Context context) {
        try {
            NetworkInfo networkInfoCi = ci(context);
            if (networkInfoCi != null) {
                if (networkInfoCi.isConnected()) {
                    return true;
                }
            }
            return false;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean isWifiConnected(Context context) {
        try {
            NetworkInfo networkInfoCi = ci(context);
            if (networkInfoCi != null && networkInfoCi.isConnected()) {
                return 1 == networkInfoCi.getType();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return false;
    }

    private static int l(Context context, int i) {
        ServiceState serviceState;
        if (Build.VERSION.SDK_INT < 26 || !SystemUtil.b(context, com.kuaishou.weapon.p0.g.b)) {
            return i;
        }
        try {
            TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
            if (telephonyManager == null) {
                return i;
            }
            int subId = getSubId();
            if (subId != -1 && (context.getApplicationInfo().targetSdkVersion < 29 || Build.VERSION.SDK_INT < 29)) {
                try {
                    serviceState = (ServiceState) s.f(telephonyManager, "getServiceStateForSubscriber", Integer.valueOf(subId));
                } catch (Throwable unused) {
                    serviceState = telephonyManager.getServiceState();
                }
            } else {
                serviceState = telephonyManager.getServiceState();
            }
            if (serviceState == null) {
                return i;
            }
            if (as.IS()) {
                Integer num = (Integer) s.a("com.huawei.android.telephony.ServiceStateEx", "getConfigRadioTechnology", serviceState);
                return num != null ? num.intValue() : i;
            }
            if (fA(serviceState.toString())) {
                return 20;
            }
            return i;
        } catch (Exception unused2) {
            return i;
        }
    }

    private static boolean p(String str, int i) {
        try {
            return InetAddress.getByName(str).isReachable(3000);
        } catch (Throwable unused) {
            return false;
        }
    }
}
