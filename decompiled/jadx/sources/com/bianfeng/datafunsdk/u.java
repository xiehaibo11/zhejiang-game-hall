package com.bianfeng.datafunsdk;

import android.os.Handler;
import android.os.Looper;

/* JADX INFO: compiled from: DatafunRunningMainUtils.java */
/* JADX INFO: loaded from: classes.dex */
public class u {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static Handler f1417a = new Handler(Looper.getMainLooper());

    public static void a(Runnable runnable) {
        f1417a.post(runnable);
    }
}
