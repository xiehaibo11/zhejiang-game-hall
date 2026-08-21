package com.kwad.sdk.m;

final class j {
    static android.content.Context at(android.content.Context r0) {
            com.kwad.sdk.api.core.ResContext r0 = (com.kwad.sdk.api.core.ResContext) r0
            android.content.Context r0 = r0.getDelegatedContext()
            return r0
    }

    static boolean au(android.content.Context r0) {
            boolean r0 = r0 instanceof com.kwad.sdk.api.core.ResContext
            return r0
    }

    static android.content.Context do(android.content.Context r2) {
            android.content.Context r2 = unwrapContextIfNeed(r2)
            android.content.Context r2 = r2.getApplicationContext()
            boolean r0 = r2 instanceof android.app.Application
            if (r0 == 0) goto Ld
            return r2
        Ld:
            r0 = 0
        Le:
            r1 = 10
            if (r0 >= r1) goto L28
            android.content.Context r2 = r2.getApplicationContext()
            boolean r1 = r2 instanceof android.app.Application
            if (r1 == 0) goto L1b
            return r2
        L1b:
            boolean r1 = au(r2)
            if (r1 == 0) goto L25
            android.content.Context r2 = at(r2)
        L25:
            int r0 = r0 + 1
            goto Le
        L28:
            return r2
    }

    public static void onDestroy(android.content.Context r0) {
            com.kwad.sdk.api.loader.Wrapper.onDestroy(r0)
            return
    }

    static android.content.Context unwrapContextIfNeed(android.content.Context r5) {
            boolean r0 = au(r5)
            if (r0 == 0) goto La
            android.content.Context r5 = at(r5)
        La:
            boolean r0 = au(r5)
            if (r0 != 0) goto L11
            return r5
        L11:
            r0 = 0
            r1 = 0
        L13:
            r2 = 10
            if (r1 >= r2) goto L62
            if (r0 != 0) goto L54
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            boolean r0 = r0.hasInitFinish()
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "expect normalContext --context:"
            r3.<init>(r4)
            java.lang.Class r4 = r5.getClass()
            java.lang.String r4 = r4.getName()
            r3.append(r4)
            java.lang.String r4 = "--initFinish:"
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            java.lang.Class<com.kwad.sdk.service.a.d> r0 = com.kwad.sdk.service.a.d.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.d r0 = (com.kwad.sdk.service.a.d) r0
            r0.gatherException(r2)
            r0 = r2
        L54:
            android.content.Context r5 = at(r5)
            boolean r2 = au(r5)
            if (r2 != 0) goto L5f
            return r5
        L5f:
            int r1 = r1 + 1
            goto L13
        L62:
            return r5
    }

    static android.content.Context wrapContextIfNeed(android.content.Context r0) {
            android.content.Context r0 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r0)
            return r0
    }
}
