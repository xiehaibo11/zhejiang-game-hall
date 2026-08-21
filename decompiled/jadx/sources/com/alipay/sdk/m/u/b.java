package com.alipay.sdk.m.u;

import android.os.SystemClock;

/* JADX INFO: loaded from: classes.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final long f1250a = 3000;
    public static long b = -1;

    public static synchronized boolean a() {
        boolean z;
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (jElapsedRealtime - b >= 3000) {
            b = jElapsedRealtime;
            z = false;
        } else {
            z = true;
        }
        return z;
    }
}
