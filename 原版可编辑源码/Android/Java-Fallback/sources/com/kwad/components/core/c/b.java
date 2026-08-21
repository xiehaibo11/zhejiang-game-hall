package com.kwad.components.core.c;

public final class b {
    private static void af(java.lang.String r1) {
            boolean r0 = mi()
            if (r0 != 0) goto L7
            return
        L7:
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            if (r0 == 0) goto L22
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            if (r0 == 0) goto L22
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            com.kwad.sdk.utils.v.L(r0, r1)
        L22:
            return
    }

    public static void b(com.kwad.components.core.c.e r2) {
            int r2 = r2.mq()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "使用缓存策略: "
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            af(r2)
            return
    }

    public static boolean mi() {
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.sdk.components.DevelopMangerComponents r0 = (com.kwad.sdk.components.DevelopMangerComponents) r0
            r1 = 0
            return r1
    }
}
