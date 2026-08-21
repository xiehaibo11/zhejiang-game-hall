package com.kwad.sdk.core;

public final class a {
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.kwad.sdk.core.download.DownloadParams> akb;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.kwad.sdk.core.response.model.AdTemplate> akc;

    static final class a {
        private static final com.kwad.sdk.core.a akd = null;

        static {
                com.kwad.sdk.core.a r0 = new com.kwad.sdk.core.a
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.core.a.a.akd = r0
                return
        }

        static com.kwad.sdk.core.a yU() {
                com.kwad.sdk.core.a r0 = com.kwad.sdk.core.a.a.akd
                return r0
        }
    }

    private a() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.akb = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.akc = r0
            return
    }

    a(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.core.a yT() {
            com.kwad.sdk.core.a r0 = com.kwad.sdk.core.a.a.yU()
            return r0
    }

    public final void a(java.lang.String r4, com.kwad.sdk.core.download.DownloadParams r5) {
            r3 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto Lf
            return
        Lf:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.kwad.sdk.core.download.DownloadParams> r0 = r3.akb
            r0.put(r4, r5)
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r1 = 0
            java.lang.String r2 = "ksadsdk_notification_download_complete"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            org.json.JSONObject r5 = r5.toJson()
            java.lang.String r5 = r5.toString()
            android.content.SharedPreferences$Editor r4 = r0.putString(r4, r5)
            r4.apply()
            return
    }

    public final void c(java.lang.String r4, com.kwad.sdk.core.response.model.AdTemplate r5) {
            r3 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto Lf
            return
        Lf:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.kwad.sdk.core.response.model.AdTemplate> r0 = r3.akc
            r0.put(r4, r5)
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r1 = 0
            java.lang.String r2 = "ksadsdk_notification_download_complete"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            org.json.JSONObject r5 = r5.toJson()
            java.lang.String r5 = r5.toString()
            android.content.SharedPreferences$Editor r4 = r0.putString(r4, r5)
            r4.apply()
            return
    }

    public final com.kwad.sdk.core.download.DownloadParams cp(java.lang.String r5) {
            r4 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r1 = 0
            if (r0 != 0) goto L10
            return r1
        L10:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.kwad.sdk.core.download.DownloadParams> r0 = r4.akb
            java.lang.Object r0 = r0.get(r5)
            com.kwad.sdk.core.download.DownloadParams r0 = (com.kwad.sdk.core.download.DownloadParams) r0
            if (r0 == 0) goto L1b
            return r0
        L1b:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r2 = 0
            java.lang.String r3 = "ksadsdk_notification_download_complete"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r3, r2)
            java.lang.String r2 = ""
            java.lang.String r5 = r0.getString(r5, r2)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L4c
            com.kwad.sdk.core.download.DownloadParams r0 = new com.kwad.sdk.core.download.DownloadParams
            r0.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L48
            r2.<init>(r5)     // Catch: org.json.JSONException -> L48
            r0.parseJson(r2)     // Catch: org.json.JSONException -> L48
            return r0
        L48:
            r5 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r5)
        L4c:
            return r1
    }

    public final void cq(java.lang.String r4) {
            r3 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto Lf
            return
        Lf:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.kwad.sdk.core.download.DownloadParams> r0 = r3.akb
            r0.remove(r4)
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r1 = 0
            java.lang.String r2 = "ksadsdk_notification_download_complete"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r4 = r0.remove(r4)
            r4.apply()
            return
    }

    public final com.kwad.sdk.core.response.model.AdTemplate cr(java.lang.String r5) {
            r4 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r1 = 0
            if (r0 != 0) goto L10
            return r1
        L10:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.kwad.sdk.core.response.model.AdTemplate> r0 = r4.akc
            java.lang.Object r0 = r0.get(r5)
            com.kwad.sdk.core.response.model.AdTemplate r0 = (com.kwad.sdk.core.response.model.AdTemplate) r0
            if (r0 == 0) goto L1b
            return r0
        L1b:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r2 = 0
            java.lang.String r3 = "ksadsdk_notification_download_complete"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r3, r2)
            java.lang.String r2 = ""
            java.lang.String r5 = r0.getString(r5, r2)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L4c
            com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate
            r0.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L48
            r2.<init>(r5)     // Catch: org.json.JSONException -> L48
            r0.parseJson(r2)     // Catch: org.json.JSONException -> L48
            return r0
        L48:
            r5 = move-exception
            r5.printStackTrace()
        L4c:
            return r1
    }

    public final void cs(java.lang.String r4) {
            r3 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto Lf
            return
        Lf:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.kwad.sdk.core.response.model.AdTemplate> r0 = r3.akc
            r0.remove(r4)
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r1 = 0
            java.lang.String r2 = "ksadsdk_notification_download_complete"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r4 = r0.remove(r4)
            r4.apply()
            return
    }
}
