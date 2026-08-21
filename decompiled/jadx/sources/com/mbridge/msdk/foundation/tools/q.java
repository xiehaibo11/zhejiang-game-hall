package com.mbridge.msdk.foundation.tools;

import android.net.ConnectivityManager;

/* JADX INFO: compiled from: NetManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static ConnectivityManager f3545a;

    public static synchronized ConnectivityManager a() {
        try {
        } catch (Exception e) {
            z.d("NetManager", e.getMessage());
        }
        if (f3545a == null && com.mbridge.msdk.foundation.controller.a.f().j() != null) {
            f3545a = (ConnectivityManager) com.mbridge.msdk.foundation.controller.a.f().j().getSystemService("connectivity");
        }
        return f3545a;
    }
}
