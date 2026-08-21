package com.huawei.hms.aaid.plugin;

public class ProxyCenter {
    public com.huawei.hms.aaid.plugin.PushProxy proxy;

    private static class a {
        public static com.huawei.hms.aaid.plugin.ProxyCenter a;

        static {
                com.huawei.hms.aaid.plugin.ProxyCenter r0 = new com.huawei.hms.aaid.plugin.ProxyCenter
                r0.<init>()
                com.huawei.hms.aaid.plugin.ProxyCenter.a.a = r0
                return
        }

        public static com.huawei.hms.aaid.plugin.ProxyCenter a() {
                com.huawei.hms.aaid.plugin.ProxyCenter r0 = com.huawei.hms.aaid.plugin.ProxyCenter.a.a
                return r0
        }
    }

    public ProxyCenter() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.aaid.plugin.ProxyCenter getInstance() {
            com.huawei.hms.aaid.plugin.ProxyCenter r0 = com.huawei.hms.aaid.plugin.ProxyCenter.a.a()
            return r0
    }

    public static com.huawei.hms.aaid.plugin.PushProxy getProxy() {
            com.huawei.hms.aaid.plugin.ProxyCenter r0 = getInstance()
            com.huawei.hms.aaid.plugin.PushProxy r0 = r0.proxy
            return r0
    }

    public static void register(com.huawei.hms.aaid.plugin.PushProxy r1) {
            com.huawei.hms.aaid.plugin.ProxyCenter r0 = getInstance()
            r0.proxy = r1
            return
    }
}
