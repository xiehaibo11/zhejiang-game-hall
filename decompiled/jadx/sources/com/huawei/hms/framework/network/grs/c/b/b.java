package com.huawei.hms.framework.network.grs.c.b;

import android.os.SystemClock;
import com.huawei.hms.framework.network.grs.c.f;
import java.util.concurrent.Future;

/* JADX INFO: loaded from: classes.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Future<f> f2063a;
    private long b = SystemClock.elapsedRealtime();

    public b(Future<f> future) {
        this.f2063a = future;
    }

    public Future<f> a() {
        return this.f2063a;
    }

    public boolean b() {
        return SystemClock.elapsedRealtime() - this.b <= 300000;
    }
}
