package com.heytap.mcssdk.d;

public class a extends com.heytap.mcssdk.d.c {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.heytap.msp.push.mode.BaseMode a(android.content.Context r1, int r2, android.content.Intent r3) {
            r0 = this;
            r1 = 4105(0x1009, float:5.752E-42)
            if (r1 != r2) goto L9
            com.heytap.msp.push.mode.BaseMode r1 = r0.a(r3, r2)
            return r1
        L9:
            r1 = 0
            return r1
    }

    @Override
    protected com.heytap.msp.push.mode.BaseMode a(android.content.Intent r2, int r3) {
            r1 = this;
            com.heytap.mcssdk.c.b r3 = new com.heytap.mcssdk.c.b     // Catch: java.lang.Exception -> L74
            r3.<init>()     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = "command"
            java.lang.String r0 = r2.getStringExtra(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = com.heytap.mcssdk.utils.b.d(r0)     // Catch: java.lang.Exception -> L74
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L74
            r3.a(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = "code"
            java.lang.String r0 = r2.getStringExtra(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = com.heytap.mcssdk.utils.b.d(r0)     // Catch: java.lang.Exception -> L74
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L74
            r3.b(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = "content"
            java.lang.String r0 = r2.getStringExtra(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = com.heytap.mcssdk.utils.b.d(r0)     // Catch: java.lang.Exception -> L74
            r3.e(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = "appKey"
            java.lang.String r0 = r2.getStringExtra(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = com.heytap.mcssdk.utils.b.d(r0)     // Catch: java.lang.Exception -> L74
            r3.a(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = "appSecret"
            java.lang.String r0 = r2.getStringExtra(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = com.heytap.mcssdk.utils.b.d(r0)     // Catch: java.lang.Exception -> L74
            r3.b(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = "appPackage"
            java.lang.String r2 = r2.getStringExtra(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r2 = com.heytap.mcssdk.utils.b.d(r2)     // Catch: java.lang.Exception -> L74
            r3.f(r2)     // Catch: java.lang.Exception -> L74
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L74
            r2.<init>()     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = "OnHandleIntent-message:"
            r2.append(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> L74
            r2.append(r0)     // Catch: java.lang.Exception -> L74
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L74
            com.heytap.mcssdk.utils.d.b(r2)     // Catch: java.lang.Exception -> L74
            return r3
        L74:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "OnHandleIntent--"
            r3.append(r0)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.heytap.mcssdk.utils.d.b(r2)
            r2 = 0
            return r2
    }
}
