package com.huawei.hms.framework.common;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.LinkProperties;
import android.net.Network;
import android.net.NetworkInfo;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.os.UserManager;
import android.support.v4.os.EnvironmentCompat;
import android.telephony.ServiceState;
import android.telephony.SignalStrength;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;
import com.huawei.android.os.BuildEx;
import com.huawei.android.telephony.ServiceStateEx;
import com.kuaishou.weapon.p0.g;
import com.kwad.sdk.api.model.AdnName;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.net.InetAddress;
import java.net.URI;
import java.net.URISyntaxException;
import java.net.UnknownHostException;
import java.security.AccessController;
import java.security.PrivilegedAction;
import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedList;

/* JADX INFO: loaded from: classes.dex */
public class NetworkUtil {
    private static final int INVALID_RSSI = -127;
    private static final String TAG = NetworkUtil.class.getSimpleName();
    private static final int TYPE_WIFI_P2P = 13;

    public static final class NetType {
        public static final int TYPE_2G = 2;
        public static final int TYPE_3G = 3;
        public static final int TYPE_4G = 4;
        public static final int TYPE_5G = 5;
        public static final int TYPE_NO_NETWORK = -1;
        public static final int TYPE_UNKNOWN = 0;
        public static final int TYPE_WIFI = 1;
    }

    public static NetworkInfo getNetworkInfo(Context context) {
        ConnectivityManager connectivityManager;
        if (!ContextCompat.checkSelfPermission(context, g.b) || (connectivityManager = (ConnectivityManager) ContextCompat.getSystemService(context, "connectivity")) == null) {
            return null;
        }
        try {
            return connectivityManager.getActiveNetworkInfo();
        } catch (RuntimeException e) {
            Logger.i(TAG, "getActiveNetworkInfo failed, exception:" + e.getClass().getSimpleName() + e.getMessage());
            return null;
        }
    }

    public static boolean isNetworkAvailable(Context context) {
        if (!ContextCompat.checkSelfPermission(context, g.b)) {
            return true;
        }
        NetworkInfo networkInfo = getNetworkInfo(context);
        return networkInfo != null && networkInfo.isConnected();
    }

    public static int getNetworkType(Context context) {
        if (context != null) {
            return getNetworkType(getNetworkInfo(context), context);
        }
        return 0;
    }

    private static int getHwNetworkType(Context context) {
        TelephonyManager telephonyManager;
        ServiceState serviceState;
        if (!ReflectionUtils.checkCompatible(EmuiUtil.BUILDEX_VERSION) || context == null || (telephonyManager = (TelephonyManager) ContextCompat.getSystemService(context, "phone")) == null) {
            return 0;
        }
        try {
            if (BuildEx.VERSION.EMUI_SDK_INT < 21 || (serviceState = telephonyManager.getServiceState()) == null) {
                return 0;
            }
            return ServiceStateEx.getConfigRadioTechnology(serviceState);
        } catch (NoClassDefFoundError unused) {
            Logger.w(TAG, "NoClassDefFoundError occur in method getHwNetworkType.");
            return 0;
        } catch (NoSuchMethodError unused2) {
            Logger.w(TAG, "NoSuchMethodError occur in method getHwNetworkType.");
            return 0;
        } catch (SecurityException unused3) {
            Logger.w(TAG, "requires permission maybe missing.");
            return 0;
        }
    }

    public static int getNetworkType(NetworkInfo networkInfo, Context context) {
        int i;
        if (networkInfo == null || !networkInfo.isConnected()) {
            return -1;
        }
        int type = networkInfo.getType();
        if (1 == type || 13 == type) {
            return 1;
        }
        if (type == 0) {
            int hwNetworkType = getHwNetworkType(context);
            Logger.v(TAG, "getHwNetworkType return is: " + hwNetworkType);
            if (hwNetworkType == 0) {
                hwNetworkType = networkInfo.getSubtype();
            }
            if (hwNetworkType != 20) {
                switch (hwNetworkType) {
                    case 1:
                    case 2:
                    case 4:
                    case 7:
                    case 11:
                        i = 2;
                        break;
                    case 3:
                    case 5:
                    case 6:
                    case 8:
                    case 9:
                    case 10:
                    case 12:
                    case 14:
                    case 15:
                        i = 3;
                        break;
                    case 13:
                        i = 4;
                        break;
                    default:
                        i = 0;
                        break;
                }
            } else {
                i = 5;
            }
            if (i != 0 || Build.VERSION.SDK_INT < 25) {
                return i;
            }
            if (hwNetworkType == 16) {
                return 2;
            }
            if (hwNetworkType == 17) {
                return 3;
            }
        }
        return 0;
    }

    public static int getNetworkType(NetworkInfo networkInfo) {
        return getNetworkType(networkInfo, null);
    }

    private static String[] getDnsServerIpsFromConnectionManager(Context context) {
        ConnectivityManager connectivityManager;
        NetworkInfo networkInfo;
        LinkProperties linkProperties;
        LinkedList linkedList = new LinkedList();
        if (Build.VERSION.SDK_INT >= 21 && context != null && (connectivityManager = (ConnectivityManager) ContextCompat.getSystemService(context, "connectivity")) != null) {
            try {
                NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
                if (activeNetworkInfo != null) {
                    for (Network network : connectivityManager.getAllNetworks()) {
                        if (network != null && (networkInfo = connectivityManager.getNetworkInfo(network)) != null && networkInfo.getType() == activeNetworkInfo.getType() && (linkProperties = connectivityManager.getLinkProperties(network)) != null) {
                            Iterator<InetAddress> it = linkProperties.getDnsServers().iterator();
                            while (it.hasNext()) {
                                linkedList.add(it.next().getHostAddress());
                            }
                        }
                    }
                }
            } catch (SecurityException e) {
                Logger.i(TAG, "getActiveNetworkInfo failed, exception:" + e.getClass().getSimpleName());
            } catch (RuntimeException e2) {
                Logger.i(TAG, "getActiveNetworkInfo failed, exception:" + e2.getClass().getSimpleName());
            }
        }
        return linkedList.isEmpty() ? new String[0] : (String[]) linkedList.toArray(new String[linkedList.size()]);
    }

    public static String getDnsServerIps(Context context) {
        return Arrays.toString(getDnsServerIpsFromConnectionManager(context));
    }

    public static int getMobileRsrp(Context context) {
        SignalStrength signalStrength = getSignalStrength(context);
        if (signalStrength == null) {
            return 0;
        }
        try {
            final Method declaredMethod = SignalStrength.class.getDeclaredMethod("getDbm", new Class[0]);
            AccessController.doPrivileged(new PrivilegedAction() { // from class: com.huawei.hms.framework.common.NetworkUtil.1
                @Override // java.security.PrivilegedAction
                public Object run() {
                    declaredMethod.setAccessible(true);
                    return null;
                }
            });
            return ((Integer) declaredMethod.invoke(signalStrength, new Object[0])).intValue();
        } catch (IllegalAccessException unused) {
            Logger.i(TAG, "getDbm: cannot access");
            return 0;
        } catch (NoSuchMethodException unused2) {
            Logger.i(TAG, "getDbm: function not found");
            return 0;
        } catch (InvocationTargetException unused3) {
            Logger.i(TAG, "getDbm: InvocationTargetException");
            return 0;
        }
    }

    private static SignalStrength getSignalStrength(Context context) {
        if (context == null || Build.VERSION.SDK_INT < 28) {
            return null;
        }
        Object systemService = ContextCompat.getSystemService(context, "phone");
        if (systemService instanceof TelephonyManager) {
            return ((TelephonyManager) systemService).createForSubscriptionId(SubscriptionManager.getDefaultDataSubscriptionId()).getSignalStrength();
        }
        return null;
    }

    public static int getMobileRsrpLevel(Context context) {
        SignalStrength signalStrength = getSignalStrength(context);
        if (signalStrength == null) {
            return 0;
        }
        try {
            final Method declaredMethod = SignalStrength.class.getDeclaredMethod("getLteLevel", new Class[0]);
            AccessController.doPrivileged(new PrivilegedAction() { // from class: com.huawei.hms.framework.common.NetworkUtil.2
                @Override // java.security.PrivilegedAction
                public Object run() {
                    declaredMethod.setAccessible(true);
                    return null;
                }
            });
            return ((Integer) declaredMethod.invoke(signalStrength, new Object[0])).intValue();
        } catch (IllegalAccessException unused) {
            Logger.i(TAG, "getLteLevel: cannot access");
            return 0;
        } catch (NoSuchMethodException unused2) {
            Logger.i(TAG, "getLteLevel: function not found");
            return 0;
        } catch (InvocationTargetException unused3) {
            Logger.i(TAG, "getLteLevel: InvocationTargetException");
            return 0;
        }
    }

    public static int getWifiRssi(Context context) {
        if (context == null) {
            return INVALID_RSSI;
        }
        Object systemService = ContextCompat.getSystemService(context.getApplicationContext(), Device.NETWORN_WIFI);
        if (!(systemService instanceof WifiManager)) {
            return INVALID_RSSI;
        }
        try {
            WifiInfo connectionInfo = ((WifiManager) systemService).getConnectionInfo();
            return (connectionInfo == null || connectionInfo.getBSSID() == null) ? INVALID_RSSI : connectionInfo.getRssi();
        } catch (RuntimeException e) {
            Logger.i(TAG, "getWifiRssiLevel did not has permission!" + e.getClass().getSimpleName() + e.getMessage());
            return INVALID_RSSI;
        }
    }

    public static int getWifiRssiLevel(Context context) {
        return WifiManager.calculateSignalLevel(getWifiRssi(context), 5);
    }

    public static String getWifiGatewayIp(Context context) {
        if (context == null) {
            return " ";
        }
        Object systemService = ContextCompat.getSystemService(context.getApplicationContext(), Device.NETWORN_WIFI);
        if (!(systemService instanceof WifiManager)) {
            return " ";
        }
        try {
            int i = ((WifiManager) systemService).getDhcpInfo().gateway;
            return InetAddress.getByAddress(new byte[]{(byte) (i & 255), (byte) ((i >> 8) & 255), (byte) ((i >> 16) & 255), (byte) ((i >> 24) & 255)}).getHostAddress();
        } catch (RuntimeException | UnknownHostException e) {
            Logger.i(TAG, "getWifiGatewayIp error!" + e.getClass().getSimpleName() + e.getMessage());
            return " ";
        }
    }

    public static NetworkInfo.DetailedState getNetworkStatus(Context context) {
        NetworkInfo.DetailedState detailedState = NetworkInfo.DetailedState.IDLE;
        if (context != null) {
            Object systemService = ContextCompat.getSystemService(context, "connectivity");
            if (systemService instanceof ConnectivityManager) {
                try {
                    NetworkInfo activeNetworkInfo = ((ConnectivityManager) systemService).getActiveNetworkInfo();
                    if (activeNetworkInfo != null) {
                        detailedState = activeNetworkInfo.getDetailedState();
                    } else {
                        Logger.i(TAG, "getNetworkStatus networkIsConnected netInfo is null!");
                    }
                } catch (RuntimeException e) {
                    Logger.i(TAG, "getNetworkStatus exception" + e.getClass().getSimpleName() + e.getMessage());
                }
            } else {
                Logger.i(TAG, "getNetworkStatus ConnectivityManager is null!");
            }
        }
        return detailedState;
    }

    public static int readDataSaverMode(Context context) {
        int restrictBackgroundStatus = 0;
        if (context != null && Build.VERSION.SDK_INT >= 24 && ContextCompat.checkSelfPermission(context, g.b)) {
            Object systemService = ContextCompat.getSystemService(context, "connectivity");
            if (systemService instanceof ConnectivityManager) {
                ConnectivityManager connectivityManager = (ConnectivityManager) systemService;
                try {
                    if (connectivityManager.isActiveNetworkMetered()) {
                        restrictBackgroundStatus = connectivityManager.getRestrictBackgroundStatus();
                    } else {
                        Logger.v(TAG, "ConnectType is not Mobile Network!");
                    }
                } catch (RuntimeException e) {
                    Logger.e(TAG, "SystemServer error:", e);
                }
            }
        }
        return restrictBackgroundStatus;
    }

    public static boolean isSimReady(Context context) {
        Object systemService = ContextCompat.getSystemService(context, "phone");
        TelephonyManager telephonyManager = systemService instanceof TelephonyManager ? (TelephonyManager) systemService : null;
        return telephonyManager != null && telephonyManager.getSimState() == 5;
    }

    public static String getMNC(Context context) {
        if (context == null || !isSimReady(context)) {
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
        Object systemService = ContextCompat.getSystemService(context, "phone");
        TelephonyManager telephonyManager = systemService instanceof TelephonyManager ? (TelephonyManager) systemService : null;
        if (telephonyManager == null) {
            Logger.e(TAG, "getSubscriptionOperatorType: other error!");
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
        String networkOperator = telephonyManager.getNetworkOperator();
        return ("46001".equals(networkOperator) || "46006".equals(networkOperator) || "46009".equals(networkOperator)) ? "China_Unicom" : ("46000".equals(networkOperator) || "46002".equals(networkOperator) || "46004".equals(networkOperator) || "46007".equals(networkOperator)) ? "China_Mobile" : ("46003".equals(networkOperator) || "46005".equals(networkOperator) || "46011".equals(networkOperator)) ? "China_Telecom" : AdnName.OTHER;
    }

    public static String getHost(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        try {
            URI uri = new URI(str);
            if (uri.getPort() == -1) {
                return uri.getHost();
            }
            return uri.getHost() + Constants.COLON_SEPARATOR + uri.getPort();
        } catch (URISyntaxException e) {
            Logger.w(TAG, e.getClass().getSimpleName());
            return "";
        }
    }

    public static boolean isUserUnlocked(Context context) {
        UserManager userManager;
        if (Build.VERSION.SDK_INT < 24 || (userManager = (UserManager) ContextCompat.getSystemService(context, "user")) == null) {
            return true;
        }
        try {
            return userManager.isUserUnlocked();
        } catch (RuntimeException e) {
            Logger.e(TAG, "dealType rethrowFromSystemServer:", e);
            return true;
        }
    }

    @Deprecated
    public static boolean isForeground(Context context) {
        return ActivityUtil.isForeground(context);
    }

    @Deprecated
    public static NetworkInfo.DetailedState networkStatus(Context context) {
        return getNetworkStatus(context);
    }
}
