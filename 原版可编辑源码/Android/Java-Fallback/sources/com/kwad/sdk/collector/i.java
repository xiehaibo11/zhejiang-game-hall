package com.kwad.sdk.collector;

public final class i {
    public static void a(android.content.Context r2, com.kwad.sdk.collector.AppStatusRules.Strategy r3, long r4) {
            if (r2 == 0) goto L1b
            if (r3 != 0) goto L5
            goto L1b
        L5:
            java.lang.String r3 = b(r3)
            r0 = 0
            java.lang.String r1 = "ksadsdk_pref"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r1, r0)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            android.content.SharedPreferences$Editor r2 = r2.putLong(r3, r4)
            r2.apply()
        L1b:
            return
    }

    public static boolean a(android.content.Context r8, com.kwad.sdk.collector.AppStatusRules.Strategy r9) {
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = b(r9)
            java.lang.String r2 = "ksadsdk_pref"
            android.content.SharedPreferences r8 = r8.getSharedPreferences(r2, r0)
            r2 = -1
            long r1 = r8.getLong(r1, r2)
            r3 = 0
            int r8 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r5 = 1
            if (r8 >= 0) goto L1c
            return r5
        L1c:
            long r6 = java.lang.System.currentTimeMillis()
            long r8 = r9.getMinLaunchIntervalWithMS()
            int r3 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r3 > 0) goto L29
            return r5
        L29:
            long r1 = r1 + r8
            int r8 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r8 >= 0) goto L2f
            return r5
        L2f:
            return r0
    }

    private static java.lang.String b(com.kwad.sdk.collector.AppStatusRules.Strategy r2) {
            java.lang.String r0 = r2.getName()
            if (r0 != 0) goto L9
            java.lang.String r2 = "defaultStrategy"
            goto Ld
        L9:
            java.lang.String r2 = r2.getName()
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "appstatus_strategy_pref_"
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.util.List<com.kwad.sdk.collector.AppStatusRules.Strategy> c(com.kwad.sdk.collector.AppStatusRules r0) {
            if (r0 != 0) goto L8
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            return r0
        L8:
            java.util.List r0 = r0.obtainNamedStrategyList()
            return r0
    }

    public static com.kwad.sdk.collector.AppStatusRules.Strategy d(com.kwad.sdk.collector.AppStatusRules r0) {
            if (r0 != 0) goto L5
            com.kwad.sdk.collector.AppStatusRules$Strategy r0 = com.kwad.sdk.collector.AppStatusRules.Strategy.LOCAL_DEFAULT
            return r0
        L5:
            com.kwad.sdk.collector.AppStatusRules$Strategy r0 = r0.obtainDefaultStrategy()
            return r0
    }
}
