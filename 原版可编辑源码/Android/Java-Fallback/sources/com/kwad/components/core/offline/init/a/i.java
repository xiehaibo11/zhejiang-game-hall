package com.kwad.components.core.offline.init.a;

public final class i extends com.kwad.components.offline.api.core.api.IOfflineCompoWrapper {
    public i(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final android.content.Context unwrapContextIfNeed(android.content.Context r1) {
            r0 = this;
            android.content.Context r1 = com.kwad.library.b.c.a.unwrapContextIfNeed(r1)
            return r1
    }

    @Override
    public final android.content.Context wrapContextIfNeed(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = r1.mOfflinePackageName
            android.content.Context r2 = com.kwad.library.b.c.a.g(r2, r0)
            return r2
    }

    @Override
    public final android.app.Application wrapGetApplication(android.content.Context r1) {
            r0 = this;
            android.app.Application r1 = com.kwad.sdk.m.l.KT()
            return r1
    }

    @Override
    public final android.view.LayoutInflater wrapInflaterIfNeed(android.view.LayoutInflater r2) {
            r1 = this;
            java.lang.String r0 = r1.mOfflinePackageName
            android.view.LayoutInflater r2 = com.kwad.library.b.c.a.a(r2, r0)
            return r2
    }
}
