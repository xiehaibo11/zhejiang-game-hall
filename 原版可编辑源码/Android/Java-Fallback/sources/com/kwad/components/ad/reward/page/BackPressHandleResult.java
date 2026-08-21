package com.kwad.components.ad.reward.page;

public enum BackPressHandleResult extends java.lang.Enum<com.kwad.components.ad.reward.page.BackPressHandleResult> {
    private static final com.kwad.components.ad.reward.page.BackPressHandleResult[] $VALUES = null;
    public static final com.kwad.components.ad.reward.page.BackPressHandleResult HANDLED = null;
    public static final com.kwad.components.ad.reward.page.BackPressHandleResult HANDLED_CLOSE = null;
    public static final com.kwad.components.ad.reward.page.BackPressHandleResult NOT_HANDLED = null;
    private int value;

    static {
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = new com.kwad.components.ad.reward.page.BackPressHandleResult
            r1 = 0
            r2 = 1
            java.lang.String r3 = "NOT_HANDLED"
            r0.<init>(r3, r1, r2)
            com.kwad.components.ad.reward.page.BackPressHandleResult.NOT_HANDLED = r0
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = new com.kwad.components.ad.reward.page.BackPressHandleResult
            r3 = 2
            java.lang.String r4 = "HANDLED"
            r0.<init>(r4, r2, r3)
            com.kwad.components.ad.reward.page.BackPressHandleResult.HANDLED = r0
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = new com.kwad.components.ad.reward.page.BackPressHandleResult
            r4 = 3
            java.lang.String r5 = "HANDLED_CLOSE"
            r0.<init>(r5, r3, r4)
            com.kwad.components.ad.reward.page.BackPressHandleResult.HANDLED_CLOSE = r0
            com.kwad.components.ad.reward.page.BackPressHandleResult[] r4 = new com.kwad.components.ad.reward.page.BackPressHandleResult[r4]
            com.kwad.components.ad.reward.page.BackPressHandleResult r5 = com.kwad.components.ad.reward.page.BackPressHandleResult.NOT_HANDLED
            r4[r1] = r5
            com.kwad.components.ad.reward.page.BackPressHandleResult r1 = com.kwad.components.ad.reward.page.BackPressHandleResult.HANDLED
            r4[r2] = r1
            r4[r3] = r0
            com.kwad.components.ad.reward.page.BackPressHandleResult.$VALUES = r4
            return
    }

    BackPressHandleResult(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.value = r3
            return
    }

    public static com.kwad.components.ad.reward.page.BackPressHandleResult valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.components.ad.reward.page.BackPressHandleResult> r0 = com.kwad.components.ad.reward.page.BackPressHandleResult.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.components.ad.reward.page.BackPressHandleResult r1 = (com.kwad.components.ad.reward.page.BackPressHandleResult) r1
            return r1
    }

    public static com.kwad.components.ad.reward.page.BackPressHandleResult[] values() {
            com.kwad.components.ad.reward.page.BackPressHandleResult[] r0 = com.kwad.components.ad.reward.page.BackPressHandleResult.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.components.ad.reward.page.BackPressHandleResult[] r0 = (com.kwad.components.ad.reward.page.BackPressHandleResult[]) r0
            return r0
    }
}
