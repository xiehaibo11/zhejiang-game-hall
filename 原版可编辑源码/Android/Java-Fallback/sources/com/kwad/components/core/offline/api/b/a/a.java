package com.kwad.components.core.offline.api.b.a;

public final class a {
    private static final java.util.Map<java.lang.Integer, com.kwad.sdk.core.response.model.AdTemplate> Lp = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.components.core.offline.api.b.a.a.Lp = r0
            return
    }

    public static void a(int r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
            java.util.Map<java.lang.Integer, com.kwad.sdk.core.response.model.AdTemplate> r0 = com.kwad.components.core.offline.api.b.a.a.Lp
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.put(r1, r2)
            return
    }

    public static com.kwad.sdk.core.response.model.AdTemplate au(int r1) {
            java.util.Map<java.lang.Integer, com.kwad.sdk.core.response.model.AdTemplate> r0 = com.kwad.components.core.offline.api.b.a.a.Lp
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r1 = r0.get(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = (com.kwad.sdk.core.response.model.AdTemplate) r1
            return r1
    }

    public static void av(int r1) {
            java.util.Map<java.lang.Integer, com.kwad.sdk.core.response.model.AdTemplate> r0 = com.kwad.components.core.offline.api.b.a.a.Lp
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.remove(r1)
            return
    }
}
