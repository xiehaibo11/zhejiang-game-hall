package com.huawei.hms.framework.network.grs.d;

import android.os.SystemClock;
import com.huawei.hms.framework.common.Logger;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Map<String, a> f2077a = new ConcurrentHashMap(16);

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private long f2078a;
        private long b;

        public a(long j, long j2) {
            this.f2078a = j;
            this.b = j2;
        }

        public boolean a() {
            return SystemClock.elapsedRealtime() - this.b <= this.f2078a;
        }
    }

    public static a a(String str) {
        Logger.v("RequestUtil", "map size of get is before:" + f2077a.size());
        a aVar = f2077a.get(str);
        Logger.v("RequestUtil", "map size of get is after:" + f2077a.size());
        return aVar;
    }

    public static void a(String str, a aVar) {
        Logger.v("RequestUtil", "map size of put is before:" + f2077a.size());
        f2077a.put(str, aVar);
        Logger.v("RequestUtil", "map size of put is after:" + f2077a.size());
    }
}
