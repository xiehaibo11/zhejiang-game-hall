package com.meizu.cloud.pushsdk.util;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;

public class a {
    public static NetworkInfo a(Context context) {
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            if (connectivityManager == null) {
                return null;
            }
            return connectivityManager.getActiveNetworkInfo();
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static boolean b(Context context) {
        NetworkInfo networkInfoA = a(context);
        return networkInfoA != null && networkInfoA.isConnected() && networkInfoA.getType() == 1;
    }
}
