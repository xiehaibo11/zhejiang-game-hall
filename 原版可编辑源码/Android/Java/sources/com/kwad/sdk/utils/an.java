package com.kwad.sdk.utils;

import android.content.Context;
import android.os.Build;
import android.os.PowerManager;
import android.os.SystemClock;

public final class an {
    private static volatile an aIW = new an();
    private volatile boolean aIX;
    private volatile long aIY = 0;
    private volatile PowerManager aIZ;

    public static an IP() {
        return aIW;
    }

    public final boolean cr(Context context) {
        if (this.aIY > 0 && SystemClock.elapsedRealtime() - this.aIY < 600) {
            return this.aIX;
        }
        if (this.aIZ == null && context != null) {
            synchronized (this) {
                if (this.aIZ == null) {
                    this.aIZ = (PowerManager) context.getApplicationContext().getSystemService("power");
                }
            }
        }
        this.aIX = this.aIZ != null ? Build.VERSION.SDK_INT >= 20 ? this.aIZ.isInteractive() : this.aIZ.isScreenOn() : false;
        this.aIY = SystemClock.elapsedRealtime();
        return this.aIX;
    }
}
