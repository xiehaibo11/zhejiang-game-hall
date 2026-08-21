package com.vivo.push.util;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;

public final class r {
    public static NetworkInfo a(Context context) {
        try {
            return ((ConnectivityManager) context.getSystemService("connectivity")).getActiveNetworkInfo();
        } catch (Exception e) {
            p.a("NetUtils", e);
            return null;
        }
    }
}
