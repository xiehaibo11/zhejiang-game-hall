package com.bykv.vk.openvk.api.plugin;

final class pt {
    private static java.util.concurrent.ScheduledExecutorService df;
    private static volatile boolean pp;
    private static final java.util.List<android.util.Pair<java.lang.String, org.json.JSONObject>> pt = null;
    private static android.content.SharedPreferences q;
    static final java.util.Map<java.lang.String, java.lang.String> rg = null;




    static {
            com.bykv.vk.openvk.api.plugin.fw$df r0 = new com.bykv.vk.openvk.api.plugin.fw$df
            java.lang.String r1 = "tt_pangle_thread_pl_report"
            r0.<init>(r1)
            java.util.concurrent.ScheduledExecutorService r0 = java.util.concurrent.Executors.newSingleThreadScheduledExecutor(r0)
            com.bykv.vk.openvk.api.plugin.pt.df = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.bykv.vk.openvk.api.plugin.pt.pt = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bykv.vk.openvk.api.plugin.pt.rg = r0
            r0 = 0
            com.bykv.vk.openvk.api.plugin.pt.pp = r0
            return
    }

    private static org.json.JSONObject c(java.lang.String r9, org.json.JSONObject r10) {
            java.lang.String r0 = "oaid"
            java.lang.String r1 = "imei"
            java.lang.String r2 = "5.1.1.4"
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.lang.String r4 = "os_api"
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: org.json.JSONException -> L97
            r10.put(r4, r5)     // Catch: org.json.JSONException -> L97
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: org.json.JSONException -> L97
            r5 = 21
            r6 = 1
            if (r4 < r5) goto L1c
            java.lang.String[] r4 = android.os.Build.SUPPORTED_ABIS     // Catch: org.json.JSONException -> L97
            goto L28
        L1c:
            r4 = 2
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: org.json.JSONException -> L97
            r5 = 0
            java.lang.String r7 = android.os.Build.CPU_ABI     // Catch: org.json.JSONException -> L97
            r4[r5] = r7     // Catch: org.json.JSONException -> L97
            java.lang.String r5 = android.os.Build.CPU_ABI2     // Catch: org.json.JSONException -> L97
            r4[r6] = r5     // Catch: org.json.JSONException -> L97
        L28:
            java.lang.String r5 = "support_abi"
            java.lang.String r4 = java.util.Arrays.toString(r4)     // Catch: org.json.JSONException -> L97
            r10.put(r5, r4)     // Catch: org.json.JSONException -> L97
            java.lang.String r4 = "ad_sdk_version"
            r3.put(r4, r2)     // Catch: org.json.JSONException -> L97
            java.lang.String r4 = "com.bykv.vk"
            java.lang.String r4 = com.bykv.vk.openvk.api.plugin.c.rg(r4)     // Catch: org.json.JSONException -> L97
            java.lang.String r5 = "plugin_version"
            boolean r7 = android.text.TextUtils.isEmpty(r4)     // Catch: org.json.JSONException -> L97
            if (r7 == 0) goto L45
            goto L46
        L45:
            r2 = r4
        L46:
            r3.put(r5, r2)     // Catch: org.json.JSONException -> L97
            java.lang.String r2 = "timestamp"
            long r4 = java.lang.System.currentTimeMillis()     // Catch: org.json.JSONException -> L97
            r7 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 / r7
            r3.put(r2, r4)     // Catch: org.json.JSONException -> L97
            java.lang.String r2 = "is_plugin"
            r3.put(r2, r6)     // Catch: org.json.JSONException -> L97
            java.lang.String r2 = "event_extra"
            if (r10 == 0) goto L63
            java.lang.String r10 = r10.toString()     // Catch: org.json.JSONException -> L97
            goto L65
        L63:
            java.lang.String r10 = ""
        L65:
            r3.put(r2, r10)     // Catch: org.json.JSONException -> L97
            java.lang.String r10 = "type"
            r3.put(r10, r9)     // Catch: org.json.JSONException -> L97
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: org.json.JSONException -> L97
            r9.<init>()     // Catch: org.json.JSONException -> L97
            java.lang.String r10 = "model"
            java.lang.String r2 = android.os.Build.MODEL     // Catch: org.json.JSONException -> L97
            r9.put(r10, r2)     // Catch: org.json.JSONException -> L97
            java.lang.String r10 = "vendor"
            java.lang.String r2 = android.os.Build.MANUFACTURER     // Catch: org.json.JSONException -> L97
            r9.put(r10, r2)     // Catch: org.json.JSONException -> L97
            java.util.Map<java.lang.String, java.lang.String> r10 = com.bykv.vk.openvk.api.plugin.pt.rg     // Catch: org.json.JSONException -> L97
            java.lang.Object r10 = r10.get(r1)     // Catch: org.json.JSONException -> L97
            r9.put(r1, r10)     // Catch: org.json.JSONException -> L97
            java.util.Map<java.lang.String, java.lang.String> r10 = com.bykv.vk.openvk.api.plugin.pt.rg     // Catch: org.json.JSONException -> L97
            java.lang.Object r10 = r10.get(r0)     // Catch: org.json.JSONException -> L97
            r9.put(r0, r10)     // Catch: org.json.JSONException -> L97
            java.lang.String r10 = "device_info"
            r3.put(r10, r9)     // Catch: org.json.JSONException -> L97
        L97:
            return r3
    }

    public static final void df(int r2, java.lang.String r3, long r4) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "duration"
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: org.json.JSONException -> L1d
            r0.putOpt(r1, r4)     // Catch: org.json.JSONException -> L1d
            java.lang.String r4 = "code"
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: org.json.JSONException -> L1d
            r0.putOpt(r4, r2)     // Catch: org.json.JSONException -> L1d
            java.lang.String r2 = "message"
            r0.putOpt(r2, r3)     // Catch: org.json.JSONException -> L1d
            goto L21
        L1d:
            r2 = move-exception
            r2.printStackTrace()
        L21:
            java.lang.String r2 = "plugin_load_failed"
            df(r2, r0)
            return
    }

    public static void df(java.lang.String r2, org.json.JSONObject r3) {
            boolean r0 = com.bykv.vk.openvk.api.plugin.pt.pp
            if (r0 != 0) goto Le
            java.util.concurrent.ScheduledExecutorService r0 = com.bykv.vk.openvk.api.plugin.pt.df
            com.bykv.vk.openvk.api.plugin.pt$1 r1 = new com.bykv.vk.openvk.api.plugin.pt$1
            r1.<init>(r2, r3)
            r0.execute(r1)
        Le:
            return
    }

    static void df(java.util.List r0) {
            q(r0)
            return
    }

    private static void pp(java.lang.String r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L3
            return
        L3:
            com.bykv.vk.openvk.TTVfManager r0 = com.bykv.vk.openvk.TTVfSdk.getVfManager()
            if (r0 == 0) goto L28
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            r2 = 1
            java.lang.String r3 = "action"
            r1.putInt(r3, r2)
            java.lang.String r2 = "event_name"
            r1.putString(r2, r4)
            java.lang.String r4 = r5.toString()
            java.lang.String r5 = "event_extra"
            r1.putString(r5, r4)
            java.lang.Class<android.os.Bundle> r4 = android.os.Bundle.class
            r0.getExtra(r4, r1)
            goto L2b
        L28:
            df(r4, r5)
        L2b:
            return
    }

    static org.json.JSONObject pt(java.lang.String r0, org.json.JSONObject r1) {
            org.json.JSONObject r0 = c(r0, r1)
            return r0
    }

    public static void q(java.lang.String r2, org.json.JSONObject r3) {
            java.util.List<android.util.Pair<java.lang.String, org.json.JSONObject>> r0 = com.bykv.vk.openvk.api.plugin.pt.pt
            android.util.Pair r1 = new android.util.Pair
            r1.<init>(r2, r3)
            r0.add(r1)
            return
    }

    private static void q(java.util.List<org.json.JSONObject> r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "api-access.pangolin-sdk-toutiao.com"
            android.content.SharedPreferences r1 = com.bykv.vk.openvk.api.plugin.pt.q
            if (r1 == 0) goto Lf
            java.lang.String r2 = "url_alog"
            java.lang.String r0 = r1.getString(r2, r0)
        Lf:
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            r0 = 1
            java.lang.String r2 = "/api/ad/union/sdk/stats/batch/"
            r1[r0] = r2
            java.lang.String r2 = "https://%s%s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.util.List<android.util.Pair<java.lang.String, org.json.JSONObject>> r3 = com.bykv.vk.openvk.api.plugin.pt.pt     // Catch: org.json.JSONException -> L5c
            int r3 = r3.size()     // Catch: org.json.JSONException -> L5c
            if (r3 <= 0) goto L52
            java.util.List<android.util.Pair<java.lang.String, org.json.JSONObject>> r3 = com.bykv.vk.openvk.api.plugin.pt.pt     // Catch: org.json.JSONException -> L5c
            java.util.Iterator r3 = r3.iterator()     // Catch: org.json.JSONException -> L5c
        L33:
            boolean r4 = r3.hasNext()     // Catch: org.json.JSONException -> L5c
            if (r4 == 0) goto L52
            java.lang.Object r4 = r3.next()     // Catch: org.json.JSONException -> L5c
            android.util.Pair r4 = (android.util.Pair) r4     // Catch: org.json.JSONException -> L5c
            java.lang.Object r5 = r4.first     // Catch: org.json.JSONException -> L5c
            java.lang.String r5 = (java.lang.String) r5     // Catch: org.json.JSONException -> L5c
            java.lang.Object r4 = r4.second     // Catch: org.json.JSONException -> L5c
            org.json.JSONObject r4 = (org.json.JSONObject) r4     // Catch: org.json.JSONException -> L5c
            org.json.JSONObject r4 = c(r5, r4)     // Catch: org.json.JSONException -> L5c
            r6.add(r4)     // Catch: org.json.JSONException -> L5c
            r3.remove()     // Catch: org.json.JSONException -> L5c
            goto L33
        L52:
            java.lang.String r3 = "stats_list"
            org.json.JSONArray r4 = new org.json.JSONArray     // Catch: org.json.JSONException -> L5c
            r4.<init>(r6)     // Catch: org.json.JSONException -> L5c
            r2.put(r3, r4)     // Catch: org.json.JSONException -> L5c
        L5c:
            org.json.JSONObject r6 = com.bykv.vk.openvk.api.plugin.df.df.rg(r2)
            com.bykv.vk.openvk.api.plugin.rg.q r2 = com.bykv.vk.openvk.api.plugin.rg.q.rg()
            java.lang.String r6 = r6.toString()
            byte[] r6 = r6.getBytes()
            r2.rg(r0, r1, r6)
            return
    }

    public static void rg() {
            boolean r0 = com.bykv.vk.openvk.api.plugin.pt.pp
            if (r0 != 0) goto Lc
            r0 = 1
            com.bykv.vk.openvk.api.plugin.pt.pp = r0     // Catch: java.lang.Throwable -> Lc
            java.util.concurrent.ScheduledExecutorService r0 = com.bykv.vk.openvk.api.plugin.pt.df     // Catch: java.lang.Throwable -> Lc
            r0.shutdown()     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    public static final void rg(int r2, java.lang.String r3, long r4) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "duration"
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: org.json.JSONException -> L1d
            r0.putOpt(r1, r4)     // Catch: org.json.JSONException -> L1d
            java.lang.String r4 = "code"
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: org.json.JSONException -> L1d
            r0.putOpt(r4, r2)     // Catch: org.json.JSONException -> L1d
            java.lang.String r2 = "message"
            r0.putOpt(r2, r3)     // Catch: org.json.JSONException -> L1d
            goto L21
        L1d:
            r2 = move-exception
            r2.printStackTrace()
        L21:
            java.lang.String r2 = "plugin_load_failed"
            pp(r2, r0)
            return
    }

    public static void rg(android.content.Context r2) {
            java.lang.String r0 = "tt_sdk_settings_other"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            com.bykv.vk.openvk.api.plugin.pt.q = r2
            return
    }

    public static void rg(android.os.Bundle r2) {
            boolean r0 = com.bykv.vk.openvk.api.plugin.pt.pp
            if (r0 != 0) goto Le
            java.util.concurrent.ScheduledExecutorService r0 = com.bykv.vk.openvk.api.plugin.pt.df
            com.bykv.vk.openvk.api.plugin.pt$3 r1 = new com.bykv.vk.openvk.api.plugin.pt$3
            r1.<init>(r2)
            r0.execute(r1)
        Le:
            return
    }

    public static void rg(com.bykv.vk.openvk.AdConfig r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.util.Map<java.lang.String, java.lang.String> r0 = com.bykv.vk.openvk.api.plugin.pt.rg
            java.lang.String r1 = r3.getAppId()
            java.lang.String r2 = "appid"
            r0.put(r2, r1)
            java.lang.String r0 = "plugin_update_conf"
            java.lang.Object r1 = r3.getExtra(r0)
            boolean r2 = r1 instanceof java.lang.Integer
            if (r2 == 0) goto L28
            java.lang.Integer r1 = (java.lang.Integer) r1
            java.lang.String r1 = r1.toString()
            java.util.Map<java.lang.String, java.lang.String> r2 = com.bykv.vk.openvk.api.plugin.pt.rg
            if (r1 == 0) goto L23
            goto L25
        L23:
            java.lang.String r1 = "2"
        L25:
            r2.put(r0, r1)
        L28:
            com.bykv.vk.openvk.TTCustomController r3 = r3.getCustomController()
            if (r3 == 0) goto L44
            java.util.Map<java.lang.String, java.lang.String> r0 = com.bykv.vk.openvk.api.plugin.pt.rg     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = "oaid"
            java.lang.String r2 = r3.getDevOaid()     // Catch: java.lang.Exception -> L44
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L44
            java.util.Map<java.lang.String, java.lang.String> r0 = com.bykv.vk.openvk.api.plugin.pt.rg     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = "imei"
            java.lang.String r3 = r3.getDevImei()     // Catch: java.lang.Exception -> L44
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L44
        L44:
            return
    }

    public static void rg(java.lang.String r2, org.json.JSONObject r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "zeus_"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            pp(r2, r3)
            return
    }

    public static void rg(java.util.List<org.json.JSONObject> r2) {
            boolean r0 = com.bykv.vk.openvk.api.plugin.pt.pp
            if (r0 != 0) goto L1f
            if (r2 == 0) goto L15
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L15
            java.util.List<android.util.Pair<java.lang.String, org.json.JSONObject>> r0 = com.bykv.vk.openvk.api.plugin.pt.pt
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L15
            return
        L15:
            java.util.concurrent.ScheduledExecutorService r0 = com.bykv.vk.openvk.api.plugin.pt.df
            com.bykv.vk.openvk.api.plugin.pt$2 r1 = new com.bykv.vk.openvk.api.plugin.pt$2
            r1.<init>(r2)
            r0.execute(r1)
        L1f:
            return
    }
}
