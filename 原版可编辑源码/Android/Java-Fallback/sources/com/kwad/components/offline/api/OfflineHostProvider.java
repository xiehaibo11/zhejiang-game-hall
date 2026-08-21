package com.kwad.components.offline.api;

public class OfflineHostProvider {
    private android.content.Context mContext;
    private com.kwad.components.offline.api.core.IOfflineHostApi mOfflineHostApi;

    static class 1 {
    }

    static final class Holder {
        private static final com.kwad.components.offline.api.OfflineHostProvider sInstance = null;

        static {
                com.kwad.components.offline.api.OfflineHostProvider r0 = new com.kwad.components.offline.api.OfflineHostProvider
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.offline.api.OfflineHostProvider.Holder.sInstance = r0
                return
        }

        private Holder() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.kwad.components.offline.api.OfflineHostProvider access$100() {
                com.kwad.components.offline.api.OfflineHostProvider r0 = com.kwad.components.offline.api.OfflineHostProvider.Holder.sInstance
                return r0
        }
    }

    private OfflineHostProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    OfflineHostProvider(com.kwad.components.offline.api.OfflineHostProvider.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.offline.api.OfflineHostProvider get() {
            com.kwad.components.offline.api.OfflineHostProvider r0 = com.kwad.components.offline.api.OfflineHostProvider.Holder.access$100()
            return r0
    }

    public static com.kwad.components.offline.api.core.IOfflineHostApi getApi() {
            com.kwad.components.offline.api.OfflineHostProvider r0 = get()
            com.kwad.components.offline.api.core.IOfflineHostApi r0 = r0.mOfflineHostApi
            return r0
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.mContext
            return r0
    }

    public void init(android.content.Context r1, com.kwad.components.offline.api.core.IOfflineHostApi r2) {
            r0 = this;
            r0.mContext = r1
            r0.mOfflineHostApi = r2
            return
    }
}
