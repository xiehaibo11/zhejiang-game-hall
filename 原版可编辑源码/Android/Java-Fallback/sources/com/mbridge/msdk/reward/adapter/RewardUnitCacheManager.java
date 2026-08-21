package com.mbridge.msdk.reward.adapter;

public final class RewardUnitCacheManager implements com.mbridge.msdk.system.NoProGuard {
    private static final java.lang.String TAG = "RewardUnitCacheManager";
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> rewardUnitSettings;

    static class 1 {
    }

    private static final class a {
        private static final com.mbridge.msdk.reward.adapter.RewardUnitCacheManager a = null;

        static {
                com.mbridge.msdk.reward.adapter.RewardUnitCacheManager r0 = new com.mbridge.msdk.reward.adapter.RewardUnitCacheManager
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.reward.adapter.RewardUnitCacheManager.a.a = r0
                return
        }

        static com.mbridge.msdk.reward.adapter.RewardUnitCacheManager a() {
                com.mbridge.msdk.reward.adapter.RewardUnitCacheManager r0 = com.mbridge.msdk.reward.adapter.RewardUnitCacheManager.a.a
                return r0
        }
    }

    private RewardUnitCacheManager() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.rewardUnitSettings = r0
            return
    }

    RewardUnitCacheManager(com.mbridge.msdk.reward.adapter.RewardUnitCacheManager.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.reward.adapter.RewardUnitCacheManager getInstance() {
            com.mbridge.msdk.reward.adapter.RewardUnitCacheManager r0 = com.mbridge.msdk.reward.adapter.RewardUnitCacheManager.a.a()
            return r0
    }

    public final void add(java.lang.String r2, java.lang.String r3, com.mbridge.msdk.videocommon.d.c r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L29
            r0.<init>()     // Catch: java.lang.Exception -> L29
            r0.append(r2)     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = "_"
            r0.append(r2)     // Catch: java.lang.Exception -> L29
            r0.append(r3)     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L29
            if (r4 == 0) goto L23
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r3 = r1.rewardUnitSettings     // Catch: java.lang.Exception -> L29
            boolean r3 = r3.containsKey(r2)     // Catch: java.lang.Exception -> L29
            if (r3 == 0) goto L23
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r3 = r1.rewardUnitSettings     // Catch: java.lang.Exception -> L29
            r3.remove(r2)     // Catch: java.lang.Exception -> L29
        L23:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r3 = r1.rewardUnitSettings     // Catch: java.lang.Exception -> L29
            r3.put(r2, r4)     // Catch: java.lang.Exception -> L29
            goto L33
        L29:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "RewardUnitCacheManager"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L33:
            return
    }

    public final com.mbridge.msdk.videocommon.d.c get(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L28
            r1.<init>()     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L28
            r1.append(r3)     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L28
            java.lang.String r3 = "_"
            r1.append(r3)     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L28
            r1.append(r4)     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L28
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L28
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r4 = r2.rewardUnitSettings     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L28
            java.lang.Object r3 = r4.remove(r3)     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L28
            com.mbridge.msdk.videocommon.d.c r3 = (com.mbridge.msdk.videocommon.d.c) r3     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L28
            return r3
        L1e:
            r3 = move-exception
            java.lang.String r4 = "RewardUnitCacheManager"
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Throwable -> L28
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)     // Catch: java.lang.Throwable -> L28
        L28:
            return r0
    }
}
