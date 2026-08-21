package com.reyun.tracking.utils;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;

public class b {
    private static long a;

    public static boolean a(Context context) {
        NetworkInfo[] allNetworkInfo;
        if (context == null) {
            return false;
        }
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            if (connectivityManager != null && (allNetworkInfo = connectivityManager.getAllNetworkInfo()) != null) {
                for (NetworkInfo networkInfo : allNetworkInfo) {
                    if (networkInfo.getState() == NetworkInfo.State.CONNECTED) {
                        return true;
                    }
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }
}
