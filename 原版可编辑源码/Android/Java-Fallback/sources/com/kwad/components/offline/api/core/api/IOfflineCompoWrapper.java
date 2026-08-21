package com.kwad.components.offline.api.core.api;

public abstract class IOfflineCompoWrapper {
    protected java.lang.String mOfflinePackageName;

    public IOfflineCompoWrapper(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.mOfflinePackageName = r1
            return
    }

    @java.lang.Deprecated
    public abstract android.content.Context unwrapContextIfNeed(android.content.Context r1);

    public abstract android.content.Context wrapContextIfNeed(android.content.Context r1);

    public abstract android.app.Application wrapGetApplication(android.content.Context r1);

    public abstract android.view.LayoutInflater wrapInflaterIfNeed(android.view.LayoutInflater r1);
}
