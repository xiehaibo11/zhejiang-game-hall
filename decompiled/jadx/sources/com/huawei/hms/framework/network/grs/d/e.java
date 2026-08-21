package com.huawei.hms.framework.network.grs.d;

import com.huawei.hms.framework.common.Logger;

/* JADX INFO: loaded from: classes.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2079a = "e";

    public static boolean a(Long l) {
        if (l == null) {
            Logger.v(f2079a, "Method isTimeExpire input param expireTime is null.");
            return true;
        }
        try {
        } catch (NumberFormatException unused) {
            Logger.v(f2079a, "isSpExpire spValue NumberFormatException.");
        }
        if (l.longValue() - System.currentTimeMillis() >= 0) {
            Logger.v(f2079a, "isSpExpire false.");
            return false;
        }
        Logger.v(f2079a, "isSpExpire true.");
        return true;
    }

    public static boolean a(Long l, long j) {
        if (l == null) {
            Logger.v(f2079a, "Method isTimeWillExpire input param expireTime is null.");
            return true;
        }
        try {
            if (l.longValue() - (System.currentTimeMillis() + j) >= 0) {
                Logger.v(f2079a, "isSpExpire false.");
                return false;
            }
        } catch (NumberFormatException unused) {
            Logger.v(f2079a, "isSpExpire spValue NumberFormatException.");
        }
        return true;
    }
}
