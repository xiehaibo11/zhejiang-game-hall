package com.kwad.sdk.api.core;

public class SpeedLimitApiHolder {
    private static volatile com.kwad.sdk.api.core.SpeedLimitApi instance;

    public SpeedLimitApiHolder() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.api.core.SpeedLimitApi getInstance() {
            com.kwad.sdk.api.core.SpeedLimitApi r0 = com.kwad.sdk.api.core.SpeedLimitApiHolder.instance
            if (r0 != 0) goto L1e
            java.lang.Class<com.kwad.sdk.api.core.SpeedLimitApiHolder> r0 = com.kwad.sdk.api.core.SpeedLimitApiHolder.class
            monitor-enter(r0)
            com.kwad.sdk.api.core.SpeedLimitApi r1 = com.kwad.sdk.api.core.SpeedLimitApiHolder.instance     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L19
            com.kwad.sdk.api.loader.Loader r1 = com.kwad.sdk.api.loader.Loader.get()     // Catch: java.lang.Throwable -> L1b
            java.lang.Class<com.kwad.sdk.api.core.SpeedLimitApi> r2 = com.kwad.sdk.api.core.SpeedLimitApi.class
            java.lang.Object r1 = r1.newInstance(r2)     // Catch: java.lang.Throwable -> L1b
            com.kwad.sdk.api.core.SpeedLimitApi r1 = (com.kwad.sdk.api.core.SpeedLimitApi) r1     // Catch: java.lang.Throwable -> L1b
            com.kwad.sdk.api.core.SpeedLimitApiHolder.instance = r1     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            goto L1e
        L1b:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r1
        L1e:
            com.kwad.sdk.api.core.SpeedLimitApi r0 = com.kwad.sdk.api.core.SpeedLimitApiHolder.instance
            return r0
    }
}
