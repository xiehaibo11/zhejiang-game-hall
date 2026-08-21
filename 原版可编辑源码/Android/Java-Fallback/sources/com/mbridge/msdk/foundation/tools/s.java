package com.mbridge.msdk.foundation.tools;

public final class s {
    public static int a(android.content.Context r5, java.lang.String r6, java.lang.String r7) {
            java.lang.String r0 = "ResourceUtil"
            r1 = -1
            java.lang.String r2 = ""
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Le
            java.lang.String r2 = r3.d()     // Catch: java.lang.Exception -> Le
            goto L22
        Le:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            r3.<init>()     // Catch: java.lang.Exception -> L41
            java.lang.String r4 = "MBSDKContext.getInstance() is null resName:"
            r3.append(r4)     // Catch: java.lang.Exception -> L41
            r3.append(r6)     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L41
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)     // Catch: java.lang.Exception -> L41
        L22:
            boolean r3 = com.mbridge.msdk.foundation.tools.ai.a(r2)     // Catch: java.lang.Exception -> L41
            if (r3 == 0) goto L2e
            if (r5 == 0) goto L2e
            java.lang.String r2 = r5.getPackageName()     // Catch: java.lang.Exception -> L41
        L2e:
            boolean r3 = com.mbridge.msdk.foundation.tools.ai.a(r2)     // Catch: java.lang.Exception -> L41
            if (r3 == 0) goto L35
            return r1
        L35:
            if (r5 == 0) goto L40
            android.content.res.Resources r5 = r5.getResources()     // Catch: java.lang.Exception -> L41
            int r5 = r5.getIdentifier(r6, r7, r2)     // Catch: java.lang.Exception -> L41
            return r5
        L40:
            return r1
        L41:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "Resource not found resName:"
            r5.append(r7)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            return r1
    }

    public static android.content.res.Resources a(android.content.Context r3) {
            r0 = 0
            if (r3 == 0) goto L23
            android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Exception -> L8
            return r3
        L8:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Resource error:"
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "ResourceUtil"
            com.mbridge.msdk.foundation.tools.z.d(r1, r3)
        L23:
            return r0
    }
}
