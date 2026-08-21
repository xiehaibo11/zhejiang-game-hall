package com.mbridge.msdk.foundation.same.net;

import android.net.TrafficStats;
import android.os.SystemClock;

/* JADX INFO: compiled from: BandWideUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static long f3427a;
    private static long b;
    private static long c;

    private a() {
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.foundation.same.net.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: BandWideUtil.java */
    private static class C0260a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static a f3428a = new a();
    }

    public static a a() {
        return C0260a.f3428a;
    }

    public final synchronized void b() {
        if (f3427a == 0) {
            f3427a = SystemClock.elapsedRealtime();
            c = TrafficStats.getTotalRxBytes();
        }
    }

    public final synchronized void c() {
        if (f3427a != 0 && c != 0) {
            long jElapsedRealtime = SystemClock.elapsedRealtime() - f3427a;
            if (jElapsedRealtime != 0) {
                try {
                    if (TrafficStats.getTotalRxBytes() != -1) {
                        long totalRxBytes = ((TrafficStats.getTotalRxBytes() - c) * 1000) / jElapsedRealtime;
                        if (totalRxBytes == 0) {
                            b = 1L;
                        } else {
                            b = totalRxBytes;
                        }
                    } else {
                        b = 0L;
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            d();
        }
    }

    public final synchronized void d() {
        c = 0L;
        f3427a = 0L;
    }

    public final long e() {
        return b;
    }
}
