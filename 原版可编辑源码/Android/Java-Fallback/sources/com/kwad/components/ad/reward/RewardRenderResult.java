package com.kwad.components.ad.reward;

public enum RewardRenderResult extends java.lang.Enum<com.kwad.components.ad.reward.RewardRenderResult> {
    private static final com.kwad.components.ad.reward.RewardRenderResult[] $VALUES = null;
    public static final com.kwad.components.ad.reward.RewardRenderResult DEFAULT = null;
    public static final com.kwad.components.ad.reward.RewardRenderResult FULLSCREEN_TK = null;
    public static final com.kwad.components.ad.reward.RewardRenderResult LIVE_TK = null;
    public static final com.kwad.components.ad.reward.RewardRenderResult NEO_TK = null;
    public static final com.kwad.components.ad.reward.RewardRenderResult TK_IMAGE = null;

    static {
            com.kwad.components.ad.reward.RewardRenderResult r0 = new com.kwad.components.ad.reward.RewardRenderResult
            r1 = 0
            java.lang.String r2 = "DEFAULT"
            r0.<init>(r2, r1)
            com.kwad.components.ad.reward.RewardRenderResult.DEFAULT = r0
            com.kwad.components.ad.reward.RewardRenderResult r0 = new com.kwad.components.ad.reward.RewardRenderResult
            r2 = 1
            java.lang.String r3 = "NEO_TK"
            r0.<init>(r3, r2)
            com.kwad.components.ad.reward.RewardRenderResult.NEO_TK = r0
            com.kwad.components.ad.reward.RewardRenderResult r0 = new com.kwad.components.ad.reward.RewardRenderResult
            r3 = 2
            java.lang.String r4 = "LIVE_TK"
            r0.<init>(r4, r3)
            com.kwad.components.ad.reward.RewardRenderResult.LIVE_TK = r0
            com.kwad.components.ad.reward.RewardRenderResult r0 = new com.kwad.components.ad.reward.RewardRenderResult
            r4 = 3
            java.lang.String r5 = "FULLSCREEN_TK"
            r0.<init>(r5, r4)
            com.kwad.components.ad.reward.RewardRenderResult.FULLSCREEN_TK = r0
            com.kwad.components.ad.reward.RewardRenderResult r0 = new com.kwad.components.ad.reward.RewardRenderResult
            r5 = 4
            java.lang.String r6 = "TK_IMAGE"
            r0.<init>(r6, r5)
            com.kwad.components.ad.reward.RewardRenderResult.TK_IMAGE = r0
            r6 = 5
            com.kwad.components.ad.reward.RewardRenderResult[] r6 = new com.kwad.components.ad.reward.RewardRenderResult[r6]
            com.kwad.components.ad.reward.RewardRenderResult r7 = com.kwad.components.ad.reward.RewardRenderResult.DEFAULT
            r6[r1] = r7
            com.kwad.components.ad.reward.RewardRenderResult r1 = com.kwad.components.ad.reward.RewardRenderResult.NEO_TK
            r6[r2] = r1
            com.kwad.components.ad.reward.RewardRenderResult r1 = com.kwad.components.ad.reward.RewardRenderResult.LIVE_TK
            r6[r3] = r1
            com.kwad.components.ad.reward.RewardRenderResult r1 = com.kwad.components.ad.reward.RewardRenderResult.FULLSCREEN_TK
            r6[r4] = r1
            r6[r5] = r0
            com.kwad.components.ad.reward.RewardRenderResult.$VALUES = r6
            return
    }

    RewardRenderResult(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.kwad.components.ad.reward.RewardRenderResult valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.components.ad.reward.RewardRenderResult> r0 = com.kwad.components.ad.reward.RewardRenderResult.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.components.ad.reward.RewardRenderResult r1 = (com.kwad.components.ad.reward.RewardRenderResult) r1
            return r1
    }

    public static com.kwad.components.ad.reward.RewardRenderResult[] values() {
            com.kwad.components.ad.reward.RewardRenderResult[] r0 = com.kwad.components.ad.reward.RewardRenderResult.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.components.ad.reward.RewardRenderResult[] r0 = (com.kwad.components.ad.reward.RewardRenderResult[]) r0
            return r0
    }
}
