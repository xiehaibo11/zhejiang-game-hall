package com.huawei.hms.push.utils.ha;

public class PushAnalyticsCenter {
    public com.huawei.hms.push.utils.ha.PushBaseAnalytics a;

    private static class a {
        public static com.huawei.hms.push.utils.ha.PushAnalyticsCenter a;

        static {
                com.huawei.hms.push.utils.ha.PushAnalyticsCenter r0 = new com.huawei.hms.push.utils.ha.PushAnalyticsCenter
                r0.<init>()
                com.huawei.hms.push.utils.ha.PushAnalyticsCenter.a.a = r0
                return
        }

        public static com.huawei.hms.push.utils.ha.PushAnalyticsCenter a() {
                com.huawei.hms.push.utils.ha.PushAnalyticsCenter r0 = com.huawei.hms.push.utils.ha.PushAnalyticsCenter.a.a
                return r0
        }
    }

    public PushAnalyticsCenter() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.push.utils.ha.PushAnalyticsCenter getInstance() {
            com.huawei.hms.push.utils.ha.PushAnalyticsCenter r0 = com.huawei.hms.push.utils.ha.PushAnalyticsCenter.a.a()
            return r0
    }

    public com.huawei.hms.push.utils.ha.PushBaseAnalytics getPushAnalytics() {
            r1 = this;
            com.huawei.hms.push.utils.ha.PushBaseAnalytics r0 = r1.a
            return r0
    }

    public void register(com.huawei.hms.push.utils.ha.PushBaseAnalytics r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
