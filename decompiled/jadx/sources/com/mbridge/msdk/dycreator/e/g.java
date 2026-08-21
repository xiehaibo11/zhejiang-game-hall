package com.mbridge.msdk.dycreator.e;

import android.util.Log;

/* JADX INFO: compiled from: Logger.java */
/* JADX INFO: loaded from: classes2.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static boolean f3302a;

    public static void a(String str) {
        if (f3302a) {
            new SecurityManager();
            Log.e(new Throwable().getStackTrace()[1].getFileName(), str);
        }
    }
}
