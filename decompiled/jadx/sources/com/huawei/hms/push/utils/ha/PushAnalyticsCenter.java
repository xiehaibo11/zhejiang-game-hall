package com.huawei.hms.push.utils.ha;

/* JADX INFO: loaded from: classes.dex */
public class PushAnalyticsCenter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public PushBaseAnalytics f2167a;

    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static PushAnalyticsCenter f2168a = new PushAnalyticsCenter();
    }

    public static PushAnalyticsCenter getInstance() {
        return a.f2168a;
    }

    public PushBaseAnalytics getPushAnalytics() {
        return this.f2167a;
    }

    public void register(PushBaseAnalytics pushBaseAnalytics) {
        this.f2167a = pushBaseAnalytics;
    }
}
