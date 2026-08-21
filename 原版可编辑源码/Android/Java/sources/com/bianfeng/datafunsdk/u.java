package com.bianfeng.datafunsdk;

import android.os.Handler;
import android.os.Looper;

public class u {
    public static Handler a = new Handler(Looper.getMainLooper());

    public static void a(Runnable runnable) {
        a.post(runnable);
    }
}
