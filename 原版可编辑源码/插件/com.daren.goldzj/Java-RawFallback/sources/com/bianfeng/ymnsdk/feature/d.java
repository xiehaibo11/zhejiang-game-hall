package com.bianfeng.ymnsdk.feature;

public class d {
    private static com.google.gson.Gson a;

    class a extends com.google.gson.reflect.TypeToken<java.util.Map<java.lang.String, com.bianfeng.ymnsdk.entity.UrlConfig>> {
        a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    class b implements com.bianfeng.ymnsdk.feature.f.a {
        b() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void a(java.lang.String r2) {
                r1 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r2)
                java.lang.String r2 = ""
                r0.append(r2)
                java.lang.String r2 = r0.toString()
                java.lang.String r0 = "YmnSDK"
                android.util.Log.e(r0, r2)
                return
        }
    }

    static {
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.bianfeng.ymnsdk.feature.d.a = r0
            return
    }

    public static <T extends com.bianfeng.ymnsdk.action.ActionSupport> T a(T r1) {
            r0 = 1
            boolean r0 = com.bianfeng.ymnsdk.YmnStrategy.withStrategy(r0)
            if (r0 == 0) goto Lf
            com.bianfeng.ymnsdk.action.ActionAttachment$a r0 = new com.bianfeng.ymnsdk.action.ActionAttachment$a
            r0.<init>()
            r1.setAttachment(r0)
        Lf:
            return r1
    }

    public static <T extends com.bianfeng.ymnsdk.actionv2.ActionSupportV2> T a(T r1) {
            r0 = 1
            boolean r0 = com.bianfeng.ymnsdk.YmnStrategy.withStrategy(r0)
            if (r0 == 0) goto Lf
            com.bianfeng.ymnsdk.action.ActionAttachment$a r0 = new com.bianfeng.ymnsdk.action.ActionAttachment$a
            r0.<init>()
            r1.setAttachment(r0)
        Lf:
            return r1
    }

    public static <T extends com.bianfeng.ymnsdk.actionv2.ActionSupportV3> T a(T r1) {
            r0 = 1
            boolean r0 = com.bianfeng.ymnsdk.YmnStrategy.withStrategy(r0)
            if (r0 == 0) goto Lf
            com.bianfeng.ymnsdk.action.ActionAttachment$a r0 = new com.bianfeng.ymnsdk.action.ActionAttachment$a
            r0.<init>()
            r1.setAttachment(r0)
        Lf:
            return r1
    }

    public static com.bianfeng.ymnsdk.feature.f a(com.bianfeng.ymnsdk.feature.f r1) {
            r0 = 2
            boolean r0 = com.bianfeng.ymnsdk.YmnStrategy.withStrategy(r0)
            if (r0 == 0) goto Lf
            com.bianfeng.ymnsdk.feature.d$b r0 = new com.bianfeng.ymnsdk.feature.d$b
            r0.<init>()
            r1.a(r0)
        Lf:
            return r1
    }

    public static <T> T a(android.content.Context r0, java.lang.String r1, java.lang.Class<T> r2) throws java.lang.Exception {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.ResourceUtil.readPreferences(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L11
            com.google.gson.Gson r1 = com.bianfeng.ymnsdk.feature.d.a
            java.lang.Object r0 = r1.fromJson(r0, r2)
            return r0
        L11:
            java.lang.Object r0 = r2.newInstance()
            return r0
    }

    public static void a(android.content.Context r1) {
            java.lang.String r0 = "ymn_url_local_states"
            com.bianfeng.ymnsdk.util.ResourceUtil.removePreferences(r1, r0)
            java.lang.String r0 = "ymn_url_remote_configs"
            com.bianfeng.ymnsdk.util.ResourceUtil.removePreferences(r1, r0)
            return
    }

    public static void a(android.content.Context r2, com.bianfeng.ymnsdk.entity.UrlConfig r3) {
            java.util.Map r0 = f(r2)     // Catch: java.lang.Exception -> L1f
            java.lang.String r1 = r3.getGid()     // Catch: java.lang.Exception -> L1f
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L1f
            java.lang.String r3 = "ymn_url_remote_configs"
            a(r2, r3, r0)     // Catch: java.lang.Exception -> L1f
            com.bianfeng.ymnsdk.entity.UrlLocalState r3 = e(r2)     // Catch: java.lang.Exception -> L1f
            com.bianfeng.ymnsdk.entity.UrlConfig r0 = b(r2)     // Catch: java.lang.Exception -> L1f
            r3.updateConfig(r0)     // Catch: java.lang.Exception -> L1f
            a(r2, r3)     // Catch: java.lang.Exception -> L1f
            goto L23
        L1f:
            r2 = move-exception
            r2.printStackTrace()
        L23:
            return
    }

    public static void a(android.content.Context r1, com.bianfeng.ymnsdk.entity.UrlLocalState r2) {
            java.lang.String r0 = "ymn_url_local_states"
            a(r1, r0, r2)
            return
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.Object r3) {
            if (r3 == 0) goto Lb
            com.google.gson.Gson r0 = com.bianfeng.ymnsdk.feature.d.a
            java.lang.String r3 = r0.toJson(r3)
            com.bianfeng.ymnsdk.util.ResourceUtil.savePreferences(r1, r2, r3)
        Lb:
            return
    }

    private static com.bianfeng.ymnsdk.entity.UrlConfig b(android.content.Context r4) {
            java.util.Map r4 = f(r4)
            java.util.Collection r4 = r4.values()
            java.util.Iterator r4 = r4.iterator()
            r0 = 0
        Ld:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r4.next()
            com.bianfeng.ymnsdk.entity.UrlConfig r1 = (com.bianfeng.ymnsdk.entity.UrlConfig) r1
            if (r0 == 0) goto L25
            int r2 = r1.getLevel()
            int r3 = r0.getLevel()
            if (r2 <= r3) goto Ld
        L25:
            r0 = r1
            goto Ld
        L27:
            return r0
    }

    public static void c(android.content.Context r0) {
            com.bianfeng.ymnsdk.util.Logger.updateState()
            return
    }

    public static com.bianfeng.ymnsdk.entity.PluginLocalState d(android.content.Context r2) {
            java.lang.String r0 = "ymn_plugin_local_states"
            java.lang.Class<com.bianfeng.ymnsdk.entity.PluginLocalState> r1 = com.bianfeng.ymnsdk.entity.PluginLocalState.class
            java.lang.Object r2 = a(r2, r0, r1)     // Catch: java.lang.Exception -> Lb
            com.bianfeng.ymnsdk.entity.PluginLocalState r2 = (com.bianfeng.ymnsdk.entity.PluginLocalState) r2     // Catch: java.lang.Exception -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
            com.bianfeng.ymnsdk.entity.PluginLocalState r2 = new com.bianfeng.ymnsdk.entity.PluginLocalState
            r2.<init>()
            return r2
    }

    public static com.bianfeng.ymnsdk.entity.UrlLocalState e(android.content.Context r2) {
            java.lang.String r0 = "ymn_url_local_states"
            java.lang.String r0 = com.bianfeng.ymnsdk.util.ResourceUtil.readPreferences(r2, r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1d
            com.bianfeng.ymnsdk.entity.UrlConfig r0 = b(r2)
            if (r0 == 0) goto L1b
            com.bianfeng.ymnsdk.entity.UrlLocalState r1 = new com.bianfeng.ymnsdk.entity.UrlLocalState
            r1.<init>(r0)
            a(r2, r1)
            goto L28
        L1b:
            r1 = 0
            goto L28
        L1d:
            com.google.gson.Gson r2 = com.bianfeng.ymnsdk.feature.d.a
            java.lang.Class<com.bianfeng.ymnsdk.entity.UrlLocalState> r1 = com.bianfeng.ymnsdk.entity.UrlLocalState.class
            java.lang.Object r2 = r2.fromJson(r0, r1)
            r1 = r2
            com.bianfeng.ymnsdk.entity.UrlLocalState r1 = (com.bianfeng.ymnsdk.entity.UrlLocalState) r1
        L28:
            return r1
    }

    public static java.util.Map<java.lang.String, com.bianfeng.ymnsdk.entity.UrlConfig> f(android.content.Context r2) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "ymn_url_remote_configs"
            java.lang.String r2 = com.bianfeng.ymnsdk.util.ResourceUtil.readPreferences(r2, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L23
            com.google.gson.Gson r0 = com.bianfeng.ymnsdk.feature.d.a
            com.bianfeng.ymnsdk.feature.d$a r1 = new com.bianfeng.ymnsdk.feature.d$a
            r1.<init>()
            java.lang.reflect.Type r1 = r1.getType()
            java.lang.Object r2 = r0.fromJson(r2, r1)
            r0 = r2
            java.util.Map r0 = (java.util.Map) r0
        L23:
            return r0
    }
}
