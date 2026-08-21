package com.mbridge.msdk.widget.custom.b;

import android.util.Log;

/* JADX INFO: compiled from: Logger.java */
/* JADX INFO: loaded from: classes3.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static boolean f4438a = false;
    public static String b = "com.mbridge.msdk.widget.custom.baseview.MB";

    public static void a(String str) {
        if (f4438a) {
            new SecurityManager();
            Log.e(new Throwable().getStackTrace()[1].getFileName(), str);
        }
    }
}
