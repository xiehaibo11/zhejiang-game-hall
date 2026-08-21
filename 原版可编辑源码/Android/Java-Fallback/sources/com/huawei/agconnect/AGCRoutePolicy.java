package com.huawei.agconnect;

public final class AGCRoutePolicy {
    public static final com.huawei.agconnect.AGCRoutePolicy CHINA = null;
    public static final com.huawei.agconnect.AGCRoutePolicy GERMANY = null;
    public static final com.huawei.agconnect.AGCRoutePolicy RUSSIA = null;
    public static final com.huawei.agconnect.AGCRoutePolicy SINGAPORE = null;
    public static final com.huawei.agconnect.AGCRoutePolicy UNKNOWN = null;
    private final int route;

    static {
            com.huawei.agconnect.AGCRoutePolicy r0 = new com.huawei.agconnect.AGCRoutePolicy
            r1 = 0
            r0.<init>(r1)
            com.huawei.agconnect.AGCRoutePolicy.UNKNOWN = r0
            com.huawei.agconnect.AGCRoutePolicy r0 = new com.huawei.agconnect.AGCRoutePolicy
            r1 = 1
            r0.<init>(r1)
            com.huawei.agconnect.AGCRoutePolicy.CHINA = r0
            com.huawei.agconnect.AGCRoutePolicy r0 = new com.huawei.agconnect.AGCRoutePolicy
            r1 = 2
            r0.<init>(r1)
            com.huawei.agconnect.AGCRoutePolicy.GERMANY = r0
            com.huawei.agconnect.AGCRoutePolicy r0 = new com.huawei.agconnect.AGCRoutePolicy
            r1 = 3
            r0.<init>(r1)
            com.huawei.agconnect.AGCRoutePolicy.RUSSIA = r0
            com.huawei.agconnect.AGCRoutePolicy r0 = new com.huawei.agconnect.AGCRoutePolicy
            r1 = 4
            r0.<init>(r1)
            com.huawei.agconnect.AGCRoutePolicy.SINGAPORE = r0
            return
    }

    private AGCRoutePolicy(int r1) {
            r0 = this;
            r0.<init>()
            r0.route = r1
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L1d
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L1d
        L12:
            com.huawei.agconnect.AGCRoutePolicy r5 = (com.huawei.agconnect.AGCRoutePolicy) r5
            int r2 = r4.route
            int r5 = r5.route
            if (r2 != r5) goto L1b
            goto L1c
        L1b:
            r0 = r1
        L1c:
            return r0
        L1d:
            return r1
    }

    public java.lang.String getRouteName() {
            r2 = this;
            int r0 = r2.route
            r1 = 1
            if (r0 == r1) goto L1a
            r1 = 2
            if (r0 == r1) goto L17
            r1 = 3
            if (r0 == r1) goto L14
            r1 = 4
            if (r0 == r1) goto L11
            java.lang.String r0 = "UNKNOWN"
            return r0
        L11:
            java.lang.String r0 = "SG"
            return r0
        L14:
            java.lang.String r0 = "RU"
            return r0
        L17:
            java.lang.String r0 = "DE"
            return r0
        L1a:
            java.lang.String r0 = "CN"
            return r0
    }

    public int hashCode() {
            r3 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r1 = r3.route
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            int r0 = java.util.Objects.hash(r0)
            return r0
    }
}
