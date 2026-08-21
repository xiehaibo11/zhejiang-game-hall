package com.kwad.sdk.c;

public final class a {
    public static void init(android.content.Context r1) {
            java.lang.Boolean r0 = com.kwad.framework.a.a.HL
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto L9
            return
        L9:
            com.kwad.sdk.c.b r0 = new com.kwad.sdk.c.b     // Catch: java.lang.Throwable -> L12
            r0.<init>()     // Catch: java.lang.Throwable -> L12
            com.kuaishou.weapon.p0.WeaponHI.init(r1, r0)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
            return
    }
}
