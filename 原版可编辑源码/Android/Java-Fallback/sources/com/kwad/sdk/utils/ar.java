package com.kwad.sdk.utils;

public final class ar {
    public static int ar(android.content.Context r2, java.lang.String r3) {
            android.content.res.Resources r0 = ct(r2)
            if (r0 != 0) goto La
            android.content.res.Resources r0 = r2.getResources()
        La:
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r1 = "drawable"
            int r2 = r0.getIdentifier(r3, r1, r2)
            return r2
    }

    public static android.content.res.Resources ct(android.content.Context r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()
            android.content.res.Resources r0 = r0.getResources()
            return r0
    }
}
