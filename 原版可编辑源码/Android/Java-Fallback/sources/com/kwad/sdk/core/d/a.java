package com.kwad.sdk.core.d;

public class a {
    public static java.text.SimpleDateFormat Ld;
    private static volatile com.kwad.sdk.core.d.a aoB;

    static {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd"
            r0.<init>(r1)
            com.kwad.sdk.core.d.a.Ld = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.core.d.a AW() {
            com.kwad.sdk.core.d.a r0 = com.kwad.sdk.core.d.a.aoB
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.core.d.a> r0 = com.kwad.sdk.core.d.a.class
            monitor-enter(r0)
            com.kwad.sdk.core.d.a r1 = com.kwad.sdk.core.d.a.aoB     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.core.d.a r1 = new com.kwad.sdk.core.d.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.core.d.a.aoB = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.sdk.core.d.a r0 = com.kwad.sdk.core.d.a.aoB
            return r0
    }

    public static boolean AX() {
            r0 = 15
            java.util.List r0 = bY(r0)
            int r1 = r0.size()
            r2 = 1
            if (r1 != 0) goto Le
            return r2
        Le:
            r3 = -1
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
            r5 = r1
        L16:
            boolean r6 = r0.hasNext()
            if (r6 == 0) goto L2e
            java.lang.Object r6 = r0.next()
            com.kwad.sdk.core.request.model.f r6 = (com.kwad.sdk.core.request.model.f) r6
            int r7 = r6.count
            int r5 = r5 + r7
            long r7 = r6.auw
            int r7 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r7 <= 0) goto L16
            long r3 = r6.auw
            goto L16
        L2e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r6 = "onBind localCountCheck: allCount: "
            r0.<init>(r6)
            r0.append(r5)
            java.lang.String r6 = ", lastShowTime: "
            r0.append(r6)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r6 = "AdCounter"
            com.kwad.sdk.core.e.c.d(r6, r0)
            int r0 = AZ()
            if (r5 <= r0) goto L50
            return r1
        L50:
            long r5 = java.lang.System.currentTimeMillis()
            long r7 = Ba()
            r9 = 1000(0x3e8, double:4.94E-321)
            long r7 = r7 * r9
            long r3 = r3 + r7
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L61
            return r1
        L61:
            return r2
    }

    public static java.util.List<com.kwad.sdk.core.request.model.f> AY() {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto L10
            r0 = 0
            return r0
        L10:
            java.lang.String r0 = "ksadsdk_local_ad_task_info_adstyle_data"
            java.lang.String r0 = getString(r0)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Exception -> L39
            r2.<init>(r0)     // Catch: java.lang.Exception -> L39
            int r0 = r2.length()     // Catch: java.lang.Exception -> L39
            r3 = 0
        L25:
            if (r3 >= r0) goto L39
            org.json.JSONObject r4 = r2.getJSONObject(r3)     // Catch: java.lang.Exception -> L39
            com.kwad.sdk.core.request.model.f r5 = new com.kwad.sdk.core.request.model.f     // Catch: java.lang.Exception -> L39
            r5.<init>()     // Catch: java.lang.Exception -> L39
            r5.parseJson(r4)     // Catch: java.lang.Exception -> L39
            r1.add(r5)     // Catch: java.lang.Exception -> L39
            int r3 = r3 + 1
            goto L25
        L39:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r1 = r1.iterator()
        L42:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L58
            java.lang.Object r2 = r1.next()
            com.kwad.sdk.core.request.model.f r2 = (com.kwad.sdk.core.request.model.f) r2
            boolean r3 = a(r2)
            if (r3 == 0) goto L42
            r0.add(r2)
            goto L42
        L58:
            return r0
    }

    private static int AZ() {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r1 = 30
            if (r0 != 0) goto L11
            return r1
        L11:
            r2 = 0
            java.lang.String r3 = "ksadsdk_local_ad_task_info"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r3, r2)
            java.lang.String r2 = "reward_aggregation_max_per_day"
            int r0 = r0.getInt(r2, r1)
            return r0
    }

    private static long Ba() {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r1 = 1200(0x4b0, double:5.93E-321)
            if (r0 != 0) goto L11
            return r1
        L11:
            r3 = 0
            java.lang.String r4 = "ksadsdk_local_ad_task_info"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r4, r3)
            java.lang.String r3 = "reward_aggregation_min_interval"
            long r0 = r0.getLong(r3, r1)
            return r0
    }

    private static void I(java.lang.String r3, java.lang.String r4) {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto Lf
            return
        Lf:
            r1 = 0
            java.lang.String r2 = "ksadsdk_local_ad_task_info"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r3 = r0.putString(r3, r4)
            r3.apply()
            return
    }

    private static boolean a(com.kwad.sdk.core.request.model.f r4) {
            long r0 = r4.auw
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto La
            r4 = 0
            return r4
        La:
            java.text.SimpleDateFormat r4 = com.kwad.sdk.core.d.a.Ld
            java.util.Date r2 = new java.util.Date
            r2.<init>(r0)
            java.lang.String r4 = r4.format(r2)
            java.text.SimpleDateFormat r0 = com.kwad.sdk.core.d.a.Ld
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            java.lang.String r0 = r0.format(r1)
            boolean r4 = r4.equals(r0)
            return r4
    }

    public static void ar(com.kwad.sdk.core.response.model.AdTemplate r1) {
            boolean r0 = r1.watched
            if (r0 == 0) goto Lc
            java.lang.String r1 = "AdCounter"
            java.lang.String r0 = "startWatchAd this ad has been watched."
            com.kwad.sdk.core.e.c.d(r1, r0)
            return
        Lc:
            as(r1)
            return
    }

    private static void as(com.kwad.sdk.core.response.model.AdTemplate r10) {
            int r2 = com.kwad.sdk.core.response.b.d.co(r10)
            int r1 = com.kwad.sdk.core.response.b.d.ca(r10)
            java.util.List r6 = AY()
            r7 = 1
            if (r6 == 0) goto L52
            int r0 = r6.size()
            if (r0 != 0) goto L16
            goto L52
        L16:
            r0 = 0
            java.util.Iterator r3 = r6.iterator()
        L1b:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L44
            java.lang.Object r4 = r3.next()
            com.kwad.sdk.core.request.model.f r4 = (com.kwad.sdk.core.request.model.f) r4
            int r5 = r4.adStyle
            if (r5 != r1) goto L1b
            int r5 = r4.taskType
            if (r5 != r2) goto L1b
            int r0 = r4.count
            int r0 = r0 + r7
            r4.count = r0
            boolean r0 = a(r4)
            if (r0 != 0) goto L43
            r4.count = r7
            long r8 = java.lang.System.currentTimeMillis()
            r4.ag(r8)
        L43:
            r0 = r7
        L44:
            if (r0 != 0) goto L65
            com.kwad.sdk.core.request.model.f r8 = new com.kwad.sdk.core.request.model.f
            r3 = 1
            long r4 = java.lang.System.currentTimeMillis()
            r0 = r8
            r0.<init>(r1, r2, r3, r4)
            goto L62
        L52:
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            com.kwad.sdk.core.request.model.f r8 = new com.kwad.sdk.core.request.model.f
            r3 = 1
            long r4 = java.lang.System.currentTimeMillis()
            r0 = r8
            r0.<init>(r1, r2, r3, r4)
        L62:
            r6.add(r8)
        L65:
            org.json.JSONArray r0 = com.kwad.sdk.utils.t.I(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ksadsdk_local_ad_task_info_adstyle_data"
            I(r1, r0)
            r10.watched = r7
            return
    }

    private static java.util.List<com.kwad.sdk.core.request.model.f> bY(int r4) {
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            java.util.List r0 = AY()
            if (r0 == 0) goto L2c
            int r1 = r0.size()
            if (r1 != 0) goto L12
            goto L2c
        L12:
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.core.request.model.f r1 = (com.kwad.sdk.core.request.model.f) r1
            r2 = 15
            int r3 = r1.adStyle
            if (r2 != r3) goto L16
            r4.add(r1)
            goto L16
        L2c:
            return r4
    }

    public static void f(int r3, long r4) {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto Lf
            return
        Lf:
            r1 = 0
            java.lang.String r2 = "ksadsdk_local_ad_task_info"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "reward_aggregation_max_per_day"
            android.content.SharedPreferences$Editor r3 = r0.putInt(r1, r3)
            java.lang.String r0 = "reward_aggregation_min_interval"
            android.content.SharedPreferences$Editor r3 = r3.putLong(r0, r4)
            r3.apply()
            return
    }

    private static java.lang.String getString(java.lang.String r4) {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r1 = 0
            if (r0 != 0) goto L10
            return r1
        L10:
            r2 = 0
            java.lang.String r3 = "ksadsdk_local_ad_task_info"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r3, r2)
            java.lang.String r4 = r0.getString(r4, r1)
            return r4
    }
}
