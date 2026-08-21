package com.kwad.components.core.webview.jshandler;

public final class a implements com.kwad.sdk.core.webview.c.a {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public boolean Tu;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final org.json.JSONObject toJson() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                boolean r1 = r3.Tu
                java.lang.String r2 = "isInstalled"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public java.lang.String packageName;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean aF(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.getContext()
            boolean r1 = com.kwad.sdk.utils.ak.ak(r0, r1)
            return r1
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            com.kwad.components.core.webview.jshandler.a$b r0 = new com.kwad.components.core.webview.jshandler.a$b
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ld
            r1.<init>(r3)     // Catch: java.lang.Exception -> Ld
            r0.parseJson(r1)     // Catch: java.lang.Exception -> Ld
        Ld:
            com.kwad.components.core.webview.jshandler.a$a r3 = new com.kwad.components.core.webview.jshandler.a$a
            r3.<init>()
            java.lang.String r0 = r0.packageName
            boolean r0 = aF(r0)
            r3.Tu = r0
            r4.a(r3)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "isAppInstalled"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
