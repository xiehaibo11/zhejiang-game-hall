package com.kwad.components.ad.reward;

public enum LoadStrategy extends java.lang.Enum<com.kwad.components.ad.reward.LoadStrategy> {
    private static final com.kwad.components.ad.reward.LoadStrategy[] $VALUES = null;
    public static final com.kwad.components.ad.reward.LoadStrategy FULL_TK = null;
    public static final com.kwad.components.ad.reward.LoadStrategy MULTI = null;

    static {
            com.kwad.components.ad.reward.LoadStrategy r0 = new com.kwad.components.ad.reward.LoadStrategy
            r1 = 0
            java.lang.String r2 = "FULL_TK"
            r0.<init>(r2, r1)
            com.kwad.components.ad.reward.LoadStrategy.FULL_TK = r0
            com.kwad.components.ad.reward.LoadStrategy r0 = new com.kwad.components.ad.reward.LoadStrategy
            r2 = 1
            java.lang.String r3 = "MULTI"
            r0.<init>(r3, r2)
            com.kwad.components.ad.reward.LoadStrategy.MULTI = r0
            r3 = 2
            com.kwad.components.ad.reward.LoadStrategy[] r3 = new com.kwad.components.ad.reward.LoadStrategy[r3]
            com.kwad.components.ad.reward.LoadStrategy r4 = com.kwad.components.ad.reward.LoadStrategy.FULL_TK
            r3[r1] = r4
            r3[r2] = r0
            com.kwad.components.ad.reward.LoadStrategy.$VALUES = r3
            return
    }

    LoadStrategy(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.kwad.components.ad.reward.LoadStrategy valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.components.ad.reward.LoadStrategy> r0 = com.kwad.components.ad.reward.LoadStrategy.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.components.ad.reward.LoadStrategy r1 = (com.kwad.components.ad.reward.LoadStrategy) r1
            return r1
    }

    public static com.kwad.components.ad.reward.LoadStrategy[] values() {
            com.kwad.components.ad.reward.LoadStrategy[] r0 = com.kwad.components.ad.reward.LoadStrategy.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.components.ad.reward.LoadStrategy[] r0 = (com.kwad.components.ad.reward.LoadStrategy[]) r0
            return r0
    }
}
