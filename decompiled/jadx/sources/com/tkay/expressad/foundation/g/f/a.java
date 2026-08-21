package com.tkay.expressad.foundation.g.f;

import android.net.TrafficStats;
import android.os.SystemClock;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static long f6889a;
    private static long b;
    private static long c;

    /* synthetic */ a(byte b2) {
        this();
    }

    private a() {
    }

    /* JADX INFO: renamed from: com.tkay.expressad.foundation.g.f.a$a, reason: collision with other inner class name */
    private static class C0464a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static a f6890a = new a(0);

        private C0464a() {
        }
    }

    public static a a() {
        return C0464a.f6890a;
    }

    private synchronized void c() {
        if (f6889a == 0) {
            f6889a = SystemClock.elapsedRealtime();
            c = TrafficStats.getTotalRxBytes();
        }
    }

    private synchronized void d() {
        if (f6889a != 0 && c != 0) {
            long jElapsedRealtime = SystemClock.elapsedRealtime() - f6889a;
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
            e();
        }
    }

    private synchronized void e() {
        c = 0L;
        f6889a = 0L;
    }

    public static long b() {
        return b;
    }
}
