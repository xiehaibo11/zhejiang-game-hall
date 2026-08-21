package com.tkay.expressad.exoplayer.k;

import android.os.Trace;

/* JADX INFO: loaded from: classes3.dex */
public final class ad {
    private ad() {
    }

    public static void a(String str) {
        if (af.f6754a >= 18) {
            Trace.beginSection(str);
        }
    }

    public static void a() {
        if (af.f6754a >= 18) {
            Trace.endSection();
        }
    }

    private static void b(String str) {
        Trace.beginSection(str);
    }

    private static void b() {
        Trace.endSection();
    }
}
