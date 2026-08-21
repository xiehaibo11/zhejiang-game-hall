package com.kwad.sdk.core.imageloader.core.assist;

public enum LoadedFrom extends java.lang.Enum<com.kwad.sdk.core.imageloader.core.assist.LoadedFrom> {
    private static final com.kwad.sdk.core.imageloader.core.assist.LoadedFrom[] $VALUES = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.LoadedFrom DISC_CACHE = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.LoadedFrom MEMORY_CACHE = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.LoadedFrom NETWORK = null;

    static {
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r0 = new com.kwad.sdk.core.imageloader.core.assist.LoadedFrom
            r1 = 0
            java.lang.String r2 = "NETWORK"
            r0.<init>(r2, r1)
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.NETWORK = r0
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r0 = new com.kwad.sdk.core.imageloader.core.assist.LoadedFrom
            r2 = 1
            java.lang.String r3 = "DISC_CACHE"
            r0.<init>(r3, r2)
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.DISC_CACHE = r0
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r0 = new com.kwad.sdk.core.imageloader.core.assist.LoadedFrom
            r3 = 2
            java.lang.String r4 = "MEMORY_CACHE"
            r0.<init>(r4, r3)
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.MEMORY_CACHE = r0
            r4 = 3
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom[] r4 = new com.kwad.sdk.core.imageloader.core.assist.LoadedFrom[r4]
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r5 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.NETWORK
            r4[r1] = r5
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r1 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.DISC_CACHE
            r4[r2] = r1
            r4[r3] = r0
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.$VALUES = r4
            return
    }

    LoadedFrom(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.kwad.sdk.core.imageloader.core.assist.LoadedFrom valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.sdk.core.imageloader.core.assist.LoadedFrom> r0 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r1 = (com.kwad.sdk.core.imageloader.core.assist.LoadedFrom) r1
            return r1
    }

    public static com.kwad.sdk.core.imageloader.core.assist.LoadedFrom[] values() {
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom[] r0 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom[] r0 = (com.kwad.sdk.core.imageloader.core.assist.LoadedFrom[]) r0
            return r0
    }
}
