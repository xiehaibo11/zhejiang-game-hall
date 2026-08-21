package com.huawei.hms.aaid.plugin;

/* JADX INFO: loaded from: classes.dex */
public class ProxyCenter {
    public PushProxy proxy;

    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static ProxyCenter f1980a = new ProxyCenter();
    }

    public static ProxyCenter getInstance() {
        return a.f1980a;
    }

    public static PushProxy getProxy() {
        return getInstance().proxy;
    }

    public static void register(PushProxy pushProxy) {
        getInstance().proxy = pushProxy;
    }
}
