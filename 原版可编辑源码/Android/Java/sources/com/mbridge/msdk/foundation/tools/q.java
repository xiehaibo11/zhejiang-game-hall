package com.mbridge.msdk.foundation.tools;

import android.net.ConnectivityManager;

public final class q {
    private static ConnectivityManager a;

    public static synchronized ConnectivityManager a() {
        try {
        } catch (Exception e) {
            z.d("NetManager", e.getMessage());
        }
        if (a == null && com.mbridge.msdk.foundation.controller.a.f().j() != null) {
            a = (ConnectivityManager) com.mbridge.msdk.foundation.controller.a.f().j().getSystemService("connectivity");
        }
        return a;
    }
}
