package com.mbridge.msdk.mbdownload;

import android.content.Context;

/* JADX INFO: compiled from: DeltaUpdate.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static boolean f3660a;

    public static String a(Context context) {
        return context.getApplicationInfo().sourceDir;
    }

    static {
        try {
            System.loadLibrary("bspatch");
            f3660a = true;
        } catch (UnsatisfiedLinkError unused) {
            f3660a = false;
        }
    }
}
