package com.bykv.vk.openvk.api.plugin;

public class fw implements com.bykv.vk.openvk.TTInitializer {
    private static final java.util.Map<java.lang.String, android.os.Bundle> q = null;
    public static java.util.concurrent.ScheduledExecutorService rg;
    private volatile com.bykv.vk.openvk.TTInitializer df;


    public static class df implements java.util.concurrent.ThreadFactory {
        private final java.util.concurrent.atomic.AtomicInteger df;
        private final java.lang.String q;
        private final java.lang.ThreadGroup rg;

        df() {
                r2 = this;
                r2.<init>()
                java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
                r1 = 1
                r0.<init>(r1)
                r2.df = r0
                java.lang.ThreadGroup r0 = new java.lang.ThreadGroup
                java.lang.String r1 = "csj_g_pl_init"
                r0.<init>(r1)
                r2.rg = r0
                java.lang.String r0 = "csj_pl_init"
                r2.q = r0
                return
        }

        df(java.lang.String r3) {
                r2 = this;
                r2.<init>()
                java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
                r1 = 1
                r0.<init>(r1)
                r2.df = r0
                java.lang.ThreadGroup r0 = new java.lang.ThreadGroup
                java.lang.String r1 = "csj_g_pl_init"
                r0.<init>(r1)
                r2.rg = r0
                r2.q = r3
                return
        }

        @Override
        public java.lang.Thread newThread(java.lang.Runnable r8) {
                r7 = this;
                java.lang.Thread r6 = new java.lang.Thread
                java.lang.ThreadGroup r1 = r7.rg
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = r7.q
                r0.append(r2)
                java.util.concurrent.atomic.AtomicInteger r2 = r7.df
                int r2 = r2.getAndIncrement()
                r0.append(r2)
                java.lang.String r3 = r0.toString()
                r4 = 0
                r0 = r6
                r2 = r8
                r0.<init>(r1, r2, r3, r4)
                boolean r8 = r6.isDaemon()
                if (r8 == 0) goto L2c
                r8 = 0
                r6.setDaemon(r8)
            L2c:
                int r8 = r6.getPriority()
                r0 = 10
                if (r8 == r0) goto L37
                r6.setPriority(r0)
            L37:
                return r6
        }
    }

    private static class rg implements com.bykv.vk.openvk.TTVfSdk.InitCallback {
        private com.bykv.vk.openvk.TTVfSdk.InitCallback rg;

        public rg(com.bykv.vk.openvk.TTVfSdk.InitCallback r1) {
                r0 = this;
                r0.<init>()
                r0.rg = r1
                return
        }

        @Override
        public void fail(int r3, java.lang.String r4) {
                r2 = this;
                com.bykv.vk.openvk.TTVfSdk$InitCallback r0 = r2.rg
                if (r0 == 0) goto Lc
                r0.fail(r3, r4)
                r0 = 0
                com.bykv.vk.openvk.api.plugin.pt.df(r3, r4, r0)
            Lc:
                return
        }

        @Override
        public void success() {
                r1 = this;
                com.bykv.vk.openvk.TTVfSdk$InitCallback r0 = r1.rg
                if (r0 == 0) goto L7
                r0.success()
            L7:
                com.bykv.vk.openvk.api.plugin.pt.rg()
                return
        }
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.bykv.vk.openvk.api.plugin.fw.q = r0
            com.bykv.vk.openvk.api.plugin.fw$df r0 = new com.bykv.vk.openvk.api.plugin.fw$df
            r0.<init>()
            java.util.concurrent.ScheduledExecutorService r0 = java.util.concurrent.Executors.newSingleThreadScheduledExecutor(r0)
            com.bykv.vk.openvk.api.plugin.fw.rg = r0
            return
    }

    public fw() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.bykv.vk.openvk.TTInitializer df(com.bykv.vk.openvk.AdConfig r11, com.bykv.vk.openvk.api.plugin.pp r12) {
            java.lang.String r0 = "Load plugin failed"
            java.lang.String r1 = "TTPluginManager"
            r2 = 0
            r3 = 6
            r4 = 0
            java.lang.String r6 = "call_create_initializer"
            r12.df(r6)     // Catch: java.lang.Throwable -> La3
            android.content.Context r6 = com.bykv.vk.openvk.TTAppContextHolder.getContext()     // Catch: java.lang.Throwable -> La3
            com.bykv.vk.openvk.api.plugin.c r6 = com.bykv.vk.openvk.api.plugin.c.rg(r6)     // Catch: java.lang.Throwable -> La3
            dalvik.system.BaseDexClassLoader r7 = r6.rg(r12)     // Catch: java.lang.Throwable -> La3
            if (r7 != 0) goto L23
            com.bykv.vk.openvk.api.plugin.pt.rg(r3, r0, r4)     // Catch: java.lang.Throwable -> La3
            com.bykv.vk.openvk.api.rg.pp(r1, r0)     // Catch: java.lang.Throwable -> La3
            goto Ld2
        L23:
            java.lang.String r0 = "com.bykv.vk.openvk.core.AdSdkInitializerHolder"
            java.lang.Class r0 = r7.loadClass(r0)     // Catch: java.lang.Throwable -> La3
            java.lang.String r7 = "get_init_class_cost"
            r12.df(r7)     // Catch: java.lang.Throwable -> La3
            android.os.Bundle r7 = new android.os.Bundle     // Catch: java.lang.Throwable -> La3
            r7.<init>()     // Catch: java.lang.Throwable -> La3
            java.lang.String r8 = "_pl_update_listener_"
            com.bykv.vk.openvk.api.plugin.c$df r9 = new com.bykv.vk.openvk.api.plugin.c$df     // Catch: java.lang.Throwable -> La3
            r9.<init>()     // Catch: java.lang.Throwable -> La3
            r7.putSerializable(r8, r9)     // Catch: java.lang.Throwable -> La3
            java.lang.String r8 = "_pl_update_event_listener_"
            com.bykv.vk.openvk.api.plugin.c$q r9 = new com.bykv.vk.openvk.api.plugin.c$q     // Catch: java.lang.Throwable -> La3
            r9.<init>()     // Catch: java.lang.Throwable -> La3
            r7.putSerializable(r8, r9)     // Catch: java.lang.Throwable -> La3
            java.util.Map<java.lang.String, android.os.Bundle> r8 = com.bykv.vk.openvk.api.plugin.fw.q     // Catch: java.lang.Throwable -> La3
            android.os.Bundle r8 = rg(r8)     // Catch: java.lang.Throwable -> La3
            java.lang.String r9 = "_pl_config_info_"
            r7.putBundle(r9, r8)     // Catch: java.lang.Throwable -> La3
            java.lang.String r9 = "create_bundle_cost"
            r12.df(r9)     // Catch: java.lang.Throwable -> La3
            java.lang.String r9 = "_live_sdk_"
            com.bykv.vk.openvk.live.df r10 = com.bykv.vk.openvk.live.df.rg()     // Catch: java.lang.Throwable -> La3
            r7.putSerializable(r9, r10)     // Catch: java.lang.Throwable -> La3
            java.lang.String r11 = r11.getAppId()     // Catch: java.lang.Throwable -> La3
            android.os.Bundle r11 = com.bykv.vk.openvk.live.rg.rg(r6, r11)     // Catch: java.lang.Throwable -> La3
            com.bykv.vk.openvk.live.df r9 = com.bykv.vk.openvk.live.df.rg()     // Catch: java.lang.Throwable -> La3
            r9.rg(r6, r11)     // Catch: java.lang.Throwable -> La3
            if (r11 == 0) goto L76
            java.lang.String r6 = "com.byted.live.lite"
            r8.putBundle(r6, r11)     // Catch: java.lang.Throwable -> La3
        L76:
            java.lang.String r11 = "live_init_cost"
            r12.df(r11)     // Catch: java.lang.Throwable -> La3
            java.lang.String r11 = "getInstance"
            r6 = 1
            java.lang.Class[] r8 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> La3
            java.lang.Class<android.os.Bundle> r9 = android.os.Bundle.class
            r10 = 0
            r8[r10] = r9     // Catch: java.lang.Throwable -> La3
            java.lang.reflect.Method r11 = r0.getDeclaredMethod(r11, r8)     // Catch: java.lang.Throwable -> La3
            java.lang.String r0 = "get_init_method_cost"
            r12.df(r0)     // Catch: java.lang.Throwable -> La3
            java.lang.Object[] r0 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> La3
            r0[r10] = r7     // Catch: java.lang.Throwable -> La3
            java.lang.Object r11 = r11.invoke(r2, r0)     // Catch: java.lang.Throwable -> La3
            com.bykv.vk.openvk.TTInitializer r11 = (com.bykv.vk.openvk.TTInitializer) r11     // Catch: java.lang.Throwable -> La3
            java.lang.String r0 = "get_init_instance_cost"
            r12.df(r0)     // Catch: java.lang.Throwable -> La3
            java.lang.String r12 = "Create initializer success"
            com.bykv.vk.openvk.api.rg.df(r1, r12)     // Catch: java.lang.Throwable -> La3
            return r11
        La3:
            r11 = move-exception
            boolean r12 = r11 instanceof com.bykv.vk.openvk.api.plugin.q
            if (r12 == 0) goto Lb7
            r12 = r11
            com.bykv.vk.openvk.api.plugin.q r12 = (com.bykv.vk.openvk.api.plugin.q) r12
            int r0 = r12.rg()
            java.lang.String r12 = r12.getMessage()
            com.bykv.vk.openvk.api.plugin.pt.rg(r0, r12, r4)
            goto Lbe
        Lb7:
            java.lang.String r12 = r11.getMessage()
            com.bykv.vk.openvk.api.plugin.pt.rg(r3, r12, r4)
        Lbe:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r0 = "Create initializer failed: "
            r12.append(r0)
            r12.append(r11)
            java.lang.String r11 = r12.toString()
            com.bykv.vk.openvk.api.rg.pp(r1, r11)
        Ld2:
            return r2
    }

    private static final android.os.Bundle rg(java.util.Map<java.lang.String, android.os.Bundle> r4) {
            if (r4 == 0) goto L3b
            int r0 = r4.size()
            if (r0 != 0) goto L9
            goto L3b
        L9:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L16:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L3a
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            android.os.Bundle r1 = (android.os.Bundle) r1
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L16
            if (r1 == 0) goto L16
            r0.putBundle(r2, r1)
            goto L16
        L3a:
            return r0
        L3b:
            android.os.Bundle r4 = new android.os.Bundle
            r4.<init>()
            return r4
    }

    private com.bykv.vk.openvk.TTInitializer rg(com.bykv.vk.openvk.AdConfig r4, com.bykv.vk.openvk.api.plugin.pp r5) {
            r3 = this;
            com.bykv.vk.openvk.TTInitializer r0 = r3.df
            if (r0 != 0) goto L41
            monitor-enter(r3)
            com.bykv.vk.openvk.TTInitializer r0 = r3.df     // Catch: java.lang.Throwable -> L3e
            if (r0 != 0) goto L3c
            com.bykv.vk.openvk.api.plugin.pt.rg(r4)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r0 = "TTPluginManager"
            java.lang.String r1 = "Create initializer"
            com.bykv.vk.openvk.api.rg.df(r0, r1)     // Catch: java.lang.Throwable -> L3e
            com.bykv.vk.openvk.TTInitializer r0 = df(r4, r5)     // Catch: java.lang.Throwable -> L3e
            r3.df = r0     // Catch: java.lang.Throwable -> L3e
            r5.rg()     // Catch: java.lang.Throwable -> L3e
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3e
            r0.<init>()     // Catch: java.lang.Throwable -> L3e
            r1 = 20
            r5.rg(r0, r1)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r5 = "zeus"
            android.content.Context r1 = com.bykv.vk.openvk.TTAppContextHolder.getContext()     // Catch: org.json.JSONException -> L37 java.lang.Throwable -> L3e
            com.bykv.vk.openvk.api.plugin.c r1 = com.bykv.vk.openvk.api.plugin.c.rg(r1)     // Catch: org.json.JSONException -> L37 java.lang.Throwable -> L3e
            org.json.JSONObject r1 = r1.df()     // Catch: org.json.JSONException -> L37 java.lang.Throwable -> L3e
            r0.put(r5, r1)     // Catch: org.json.JSONException -> L37 java.lang.Throwable -> L3e
        L37:
            java.lang.String r5 = "plugin"
            r4.setExtra(r5, r0)     // Catch: java.lang.Throwable -> L3e
        L3c:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L3e
            goto L41
        L3e:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L3e
            throw r4
        L41:
            com.bykv.vk.openvk.TTInitializer r4 = r3.df
            return r4
    }

    static com.bykv.vk.openvk.TTInitializer rg(com.bykv.vk.openvk.api.plugin.fw r0, com.bykv.vk.openvk.AdConfig r1, com.bykv.vk.openvk.api.plugin.pp r2) {
            com.bykv.vk.openvk.TTInitializer r0 = r0.rg(r1, r2)
            return r0
    }

    private void rg(android.content.Context r9, com.bykv.vk.openvk.AdConfig r10, com.bykv.vk.openvk.TTVfSdk.InitCallback r11, com.bykv.vk.openvk.api.plugin.pp r12) {
            r8 = this;
            java.util.concurrent.ScheduledExecutorService r0 = com.bykv.vk.openvk.api.plugin.fw.rg
            com.bykv.vk.openvk.api.plugin.fw$1 r7 = new com.bykv.vk.openvk.api.plugin.fw$1
            r1 = r7
            r2 = r8
            r3 = r12
            r4 = r10
            r5 = r9
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r0.execute(r7)
            return
    }

    public static void rg(java.lang.String r1, android.os.Bundle r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Ld
            if (r2 == 0) goto Ld
            java.util.Map<java.lang.String, android.os.Bundle> r0 = com.bykv.vk.openvk.api.plugin.fw.q
            r0.put(r1, r2)
        Ld:
            return
    }

    @Override
    public com.bykv.vk.openvk.TTVfManager getAdManager() {
            r1 = this;
            com.bykv.vk.openvk.api.plugin.rg r0 = com.bykv.vk.openvk.api.plugin.rg.rg
            return r0
    }

    @Override
    public void init(android.content.Context r3, com.bykv.vk.openvk.AdConfig r4, com.bykv.vk.openvk.TTVfSdk.InitCallback r5) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto Le
            r3 = 4201(0x1069, float:5.887E-42)
            java.lang.String r4 = "Only support >= 5.0"
            r5.fail(r3, r4)
            return
        Le:
            com.bykv.vk.openvk.api.plugin.c r0 = com.bykv.vk.openvk.api.plugin.c.rg(r3)
            r0.rg()
            com.bykv.vk.openvk.TTInitializer r0 = r2.df
            if (r0 == 0) goto L24
            com.bykv.vk.openvk.TTInitializer r0 = r2.df
            com.bykv.vk.openvk.api.plugin.fw$rg r1 = new com.bykv.vk.openvk.api.plugin.fw$rg
            r1.<init>(r5)
            r0.init(r3, r4, r1)
            goto L32
        L24:
            com.bykv.vk.openvk.api.plugin.fw$rg r0 = new com.bykv.vk.openvk.api.plugin.fw$rg
            r0.<init>(r5)
            java.lang.String r5 = "duration"
            com.bykv.vk.openvk.api.plugin.pp r5 = com.bykv.vk.openvk.api.plugin.pp.rg(r5)
            r2.rg(r3, r4, r0, r5)
        L32:
            return
    }

    @Override
    public boolean isInitSuccess() {
            r1 = this;
            com.bykv.vk.openvk.TTInitializer r0 = r1.df
            if (r0 == 0) goto Lb
            com.bykv.vk.openvk.TTInitializer r0 = r1.df
            boolean r0 = r0.isInitSuccess()
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }
}
