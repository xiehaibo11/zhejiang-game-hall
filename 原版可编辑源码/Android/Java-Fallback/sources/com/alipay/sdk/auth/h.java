package com.alipay.sdk.auth;

final class h implements java.lang.Runnable {
    final android.app.Activity a;
    final java.lang.StringBuilder b;
    final com.alipay.sdk.auth.APAuthInfo c;

    h(android.app.Activity r1, java.lang.StringBuilder r2, com.alipay.sdk.auth.APAuthInfo r3) {
            r0 = this;
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r6 = this;
            com.alipay.sdk.packet.impl.a r0 = new com.alipay.sdk.packet.impl.a     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r0.<init>()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r1 = 0
            android.app.Activity r2 = r6.a     // Catch: java.lang.Throwable -> L13
            java.lang.StringBuilder r3 = r6.b     // Catch: java.lang.Throwable -> L13
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L13
            com.alipay.sdk.packet.b r0 = r0.a(r2, r3)     // Catch: java.lang.Throwable -> L13
            goto L1a
        L13:
            r0 = move-exception
            java.lang.String r2 = "msp"
            com.alipay.sdk.util.c.a(r2, r0)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r0 = r1
        L1a:
            com.alipay.sdk.widget.a r2 = com.alipay.sdk.auth.g.a()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            if (r2 == 0) goto L2a
            com.alipay.sdk.widget.a r2 = com.alipay.sdk.auth.g.a()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r2.c()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.auth.g.a(r1)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
        L2a:
            java.lang.String r1 = "?resultCode=202"
            if (r0 != 0) goto L5d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r0.<init>()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.auth.APAuthInfo r2 = r6.c     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.String r2 = r2.getRedirectUri()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r0.append(r2)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r0.append(r1)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.auth.g.a(r0)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            android.app.Activity r0 = r6.a     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.String r1 = com.alipay.sdk.auth.g.b()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.auth.g.a(r0, r1)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.widget.a r0 = com.alipay.sdk.auth.g.a()
            if (r0 == 0) goto L5c
            com.alipay.sdk.widget.a r0 = com.alipay.sdk.auth.g.a()
            r0.c()
        L5c:
            return
        L5d:
            org.json.JSONObject r0 = r0.c()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.String r2 = "form"
            org.json.JSONObject r0 = r0.optJSONObject(r2)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.String r2 = "onload"
            org.json.JSONObject r0 = r0.optJSONObject(r2)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.util.List r0 = com.alipay.sdk.protocol.b.a(r0)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r2 = 0
            r3 = 0
        L73:
            int r4 = r0.size()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            if (r3 >= r4) goto L9a
            java.lang.Object r4 = r0.get(r3)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.protocol.b r4 = (com.alipay.sdk.protocol.b) r4     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.protocol.a r4 = r4.b()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.protocol.a r5 = com.alipay.sdk.protocol.a.b     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            if (r4 != r5) goto L97
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.protocol.b r0 = (com.alipay.sdk.protocol.b) r0     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.String[] r0 = r0.c()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r0 = r0[r2]     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.auth.g.a(r0)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            goto L9a
        L97:
            int r3 = r3 + 1
            goto L73
        L9a:
            java.lang.String r0 = com.alipay.sdk.auth.g.b()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            if (r0 == 0) goto Ld3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r0.<init>()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.auth.APAuthInfo r2 = r6.c     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.String r2 = r2.getRedirectUri()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r0.append(r2)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r0.append(r1)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.auth.g.a(r0)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            android.app.Activity r0 = r6.a     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.String r1 = com.alipay.sdk.auth.g.b()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.auth.g.a(r0, r1)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.widget.a r0 = com.alipay.sdk.auth.g.a()
            if (r0 == 0) goto Ld2
            com.alipay.sdk.widget.a r0 = com.alipay.sdk.auth.g.a()
            r0.c()
        Ld2:
            return
        Ld3:
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            android.app.Activity r1 = r6.a     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.Class<com.alipay.sdk.auth.AuthActivity> r2 = com.alipay.sdk.auth.AuthActivity.class
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.String r1 = "params"
            java.lang.String r2 = com.alipay.sdk.auth.g.b()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r0.putExtra(r1, r2)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.String r1 = "redirectUri"
            com.alipay.sdk.auth.APAuthInfo r2 = r6.c     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            java.lang.String r2 = r2.getRedirectUri()     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r0.putExtra(r1, r2)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            android.app.Activity r1 = r6.a     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            r1.startActivity(r0)     // Catch: java.lang.Throwable -> Lfc java.lang.Exception -> L10b
            com.alipay.sdk.widget.a r0 = com.alipay.sdk.auth.g.a()
            if (r0 == 0) goto L119
            goto L112
        Lfc:
            r0 = move-exception
            com.alipay.sdk.widget.a r1 = com.alipay.sdk.auth.g.a()
            if (r1 == 0) goto L10a
            com.alipay.sdk.widget.a r1 = com.alipay.sdk.auth.g.a()
            r1.c()
        L10a:
            throw r0
        L10b:
            com.alipay.sdk.widget.a r0 = com.alipay.sdk.auth.g.a()
            if (r0 == 0) goto L119
        L112:
            com.alipay.sdk.widget.a r0 = com.alipay.sdk.auth.g.a()
            r0.c()
        L119:
            return
    }
}
