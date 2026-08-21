package com.carlt.networklibs.utils;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import com.carlt.networklibs.NetType;
import com.carlt.networklibs.NetworkManager;

public class NetworkUtils {
    public static boolean isAvailable() {
        NetworkInfo[] allNetworkInfo;
        ConnectivityManager connectivityManager = (ConnectivityManager) NetworkManager.getInstance().getApplication().getSystemService("connectivity");
        if (connectivityManager != null && (allNetworkInfo = connectivityManager.getAllNetworkInfo()) != null) {
            for (NetworkInfo networkInfo : allNetworkInfo) {
                if (networkInfo.getState() == NetworkInfo.State.CONNECTED) {
                    return true;
                }
            }
        }
        return false;
    }

    public static NetType getNetType() {
        ConnectivityManager connectivityManager = (ConnectivityManager) NetworkManager.getInstance().getApplication().getSystemService("connectivity");
        if (connectivityManager == null) {
            return NetType.NONE;
        }
        NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
        if (activeNetworkInfo != null) {
            int type = activeNetworkInfo.getType();
            if (type == 0) {
                if (activeNetworkInfo.getExtraInfo() == null) {
                    return NetType.CMWAP;
                }
                if (activeNetworkInfo.getExtraInfo().toLowerCase().equals("cmnet")) {
                    return NetType.CMNET;
                }
                return NetType.CMWAP;
            }
            if (type == 1) {
                return NetType.WIFI;
            }
        }
        return NetType.NONE;
    }

    public static void openNetSetting(Activity activity, int i) {
        Intent intent = new Intent("/");
        intent.setComponent(new ComponentName("com.android.settings", "com.android.settings.WirelessSettings"));
        activity.startActivityForResult(intent, i);
    }
}
