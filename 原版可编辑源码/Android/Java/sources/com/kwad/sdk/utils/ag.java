package com.kwad.sdk.utils;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.telephony.ServiceState;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import java.net.InetAddress;

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
    */
    public static int d(Context context, String str, boolean z) {
        if (context == null || aIR > 0 || aIS) {
            return aIR;
        }
        if (!z) {
            try {
                TelephonyManager telephonyManager = (TelephonyManager) context.getApplicationContext().getSystemService("phone");
                if (Build.VERSION.SDK_INT >= 22) {
                    String simOperator = telephonyManager.getSimOperator();
                    byte b = -1;
                    int iHashCode = simOperator.hashCode();
                    if (iHashCode != 49679502) {
                        switch (iHashCode) {
                            case 49679470:
                                if (simOperator.equals("46000")) {
                                    b = 0;
                                }
                                break;
                            case 49679471:
                                if (simOperator.equals("46001")) {
                                    b = 4;
                                }
                                break;
                            case 49679472:
                                if (simOperator.equals("46002")) {
                                    b = 1;
                                }
                                break;
                            case 49679473:
                                if (simOperator.equals("46003")) {
                                    b = 7;
                                }
                                break;
                            default:
                                switch (iHashCode) {
                                    case 49679475:
                                        if (simOperator.equals("46005")) {
                                            b = 8;
                                        }
                                        break;
                                    case 49679476:
                                        if (simOperator.equals("46006")) {
                                            b = 5;
                                        }
                                        break;
                                    case 49679477:
                                        if (simOperator.equals("46007")) {
                                            b = 2;
                                        }
                                        break;
                                    case 49679478:
                                        if (simOperator.equals("46008")) {
                                            b = 3;
                                        }
                                        break;
                                    case 49679479:
                                        if (simOperator.equals("46009")) {
                                            b = 6;
                                        }
                                        break;
                                }
                                break;
                        }
                    } else if (simOperator.equals("46011")) {
                        b = 9;
                    }
                    switch (b) {
                        case 0:
                        case 1:
                        case 2:
                        case 3:
                            aIR = 1;
                            break;
                        case 4:
                        case 5:
                        case 6:
                            aIR = 3;
                            break;
                        case 7:
                        case 8:
                        case 9:
                            aIR = 2;
                            break;
                        default:
                            aIR = 0;
                            break;
                    }
                }
                if (aIR == 0 && !TextUtils.isEmpty(str)) {
                    if (str.startsWith("46000") || str.startsWith("46002")) {
                        aIR = 1;
                    } else if (str.startsWith("46001")) {
                        aIR = 3;
                    } else if (str.startsWith("46003")) {
                        aIR = 2;
                    }
                }
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            }
        }
        aIS = aIR == 0;
        return aIR;
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
