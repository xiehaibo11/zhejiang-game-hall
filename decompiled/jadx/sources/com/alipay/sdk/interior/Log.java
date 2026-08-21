package com.alipay.sdk.interior;

import android.content.Context;
import android.os.SystemClock;
import com.alipay.sdk.m.k.a;
import com.alipay.sdk.m.s.b;
import com.alipay.sdk.m.u.e;

/* JADX INFO: loaded from: classes.dex */
public class Log {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static long f1148a;

    public interface ISdkLogCallback {
        void onLogLine(String str);
    }

    public static boolean forcedLogReport(Context context) {
        try {
            b.d().a(context);
            long jElapsedRealtime = SystemClock.elapsedRealtime() / 1000;
            if (jElapsedRealtime - f1148a < 600) {
                return false;
            }
            f1148a = jElapsedRealtime;
            a.a(context);
            return true;
        } catch (Exception e) {
            e.a(e);
            return false;
        }
    }

    public static void setupLogCallback(ISdkLogCallback iSdkLogCallback) {
        e.a(iSdkLogCallback);
    }
}
