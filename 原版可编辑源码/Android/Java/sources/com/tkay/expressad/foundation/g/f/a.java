package com.tkay.expressad.foundation.g.f;

import android.net.TrafficStats;
import android.os.SystemClock;

public final class a {
    private static long a;
    private static long b;
    private static long c;

    a(byte b2) {
        this();
    }

    private a() {
    }

    private static class a {
        private static a a = new a(0);

        private a() {
        }
    }

    public static a a() {
        return a.a;
    }

    private synchronized void c() {
        if (a == 0) {
            a = SystemClock.elapsedRealtime();
            c = TrafficStats.getTotalRxBytes();
        }
    }

    private synchronized void d() {
        if (a != 0 && c != 0) {
            long jElapsedRealtime = SystemClock.elapsedRealtime() - a;
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
        a = 0L;
    }

    public static long b() {
        return b;
    }
}
