package com.kwad.components.core.playable;

public enum PlayableSource extends java.lang.Enum<com.kwad.components.core.playable.PlayableSource> {
    private static final com.kwad.components.core.playable.PlayableSource[] $VALUES = null;
    public static final com.kwad.components.core.playable.PlayableSource ACTIONBAR_CLICK = null;
    public static final com.kwad.components.core.playable.PlayableSource ENDCARD_CLICK = null;
    public static final com.kwad.components.core.playable.PlayableSource PENDANT_AUTO = null;
    public static final com.kwad.components.core.playable.PlayableSource PENDANT_CLICK_AUTO = null;
    public static final com.kwad.components.core.playable.PlayableSource PENDANT_CLICK_NOT_AUTO = null;
    public static final com.kwad.components.core.playable.PlayableSource PLAY_FINISHED_NORMAL = null;
    public static final com.kwad.components.core.playable.PlayableSource UNKNOWN_TRYPLAY_ENTRY_SOURCE = null;
    private int code;

    static {
            com.kwad.components.core.playable.PlayableSource r0 = new com.kwad.components.core.playable.PlayableSource
            r1 = 0
            java.lang.String r2 = "UNKNOWN_TRYPLAY_ENTRY_SOURCE"
            r0.<init>(r2, r1, r1)
            com.kwad.components.core.playable.PlayableSource.UNKNOWN_TRYPLAY_ENTRY_SOURCE = r0
            com.kwad.components.core.playable.PlayableSource r0 = new com.kwad.components.core.playable.PlayableSource
            r2 = 1
            java.lang.String r3 = "PLAY_FINISHED_NORMAL"
            r0.<init>(r3, r2, r2)
            com.kwad.components.core.playable.PlayableSource.PLAY_FINISHED_NORMAL = r0
            com.kwad.components.core.playable.PlayableSource r0 = new com.kwad.components.core.playable.PlayableSource
            r3 = 2
            java.lang.String r4 = "PENDANT_CLICK_NOT_AUTO"
            r0.<init>(r4, r3, r3)
            com.kwad.components.core.playable.PlayableSource.PENDANT_CLICK_NOT_AUTO = r0
            com.kwad.components.core.playable.PlayableSource r0 = new com.kwad.components.core.playable.PlayableSource
            r4 = 3
            java.lang.String r5 = "PENDANT_CLICK_AUTO"
            r0.<init>(r5, r4, r4)
            com.kwad.components.core.playable.PlayableSource.PENDANT_CLICK_AUTO = r0
            com.kwad.components.core.playable.PlayableSource r0 = new com.kwad.components.core.playable.PlayableSource
            r5 = 4
            java.lang.String r6 = "PENDANT_AUTO"
            r0.<init>(r6, r5, r5)
            com.kwad.components.core.playable.PlayableSource.PENDANT_AUTO = r0
            com.kwad.components.core.playable.PlayableSource r0 = new com.kwad.components.core.playable.PlayableSource
            r6 = 5
            java.lang.String r7 = "ACTIONBAR_CLICK"
            r0.<init>(r7, r6, r6)
            com.kwad.components.core.playable.PlayableSource.ACTIONBAR_CLICK = r0
            com.kwad.components.core.playable.PlayableSource r0 = new com.kwad.components.core.playable.PlayableSource
            r7 = 6
            java.lang.String r8 = "ENDCARD_CLICK"
            r0.<init>(r8, r7, r7)
            com.kwad.components.core.playable.PlayableSource.ENDCARD_CLICK = r0
            r8 = 7
            com.kwad.components.core.playable.PlayableSource[] r8 = new com.kwad.components.core.playable.PlayableSource[r8]
            com.kwad.components.core.playable.PlayableSource r9 = com.kwad.components.core.playable.PlayableSource.UNKNOWN_TRYPLAY_ENTRY_SOURCE
            r8[r1] = r9
            com.kwad.components.core.playable.PlayableSource r1 = com.kwad.components.core.playable.PlayableSource.PLAY_FINISHED_NORMAL
            r8[r2] = r1
            com.kwad.components.core.playable.PlayableSource r1 = com.kwad.components.core.playable.PlayableSource.PENDANT_CLICK_NOT_AUTO
            r8[r3] = r1
            com.kwad.components.core.playable.PlayableSource r1 = com.kwad.components.core.playable.PlayableSource.PENDANT_CLICK_AUTO
            r8[r4] = r1
            com.kwad.components.core.playable.PlayableSource r1 = com.kwad.components.core.playable.PlayableSource.PENDANT_AUTO
            r8[r5] = r1
            com.kwad.components.core.playable.PlayableSource r1 = com.kwad.components.core.playable.PlayableSource.ACTIONBAR_CLICK
            r8[r6] = r1
            r8[r7] = r0
            com.kwad.components.core.playable.PlayableSource.$VALUES = r8
            return
    }

    PlayableSource(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.code = r3
            return
    }

    public static com.kwad.components.core.playable.PlayableSource valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.components.core.playable.PlayableSource> r0 = com.kwad.components.core.playable.PlayableSource.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.components.core.playable.PlayableSource r1 = (com.kwad.components.core.playable.PlayableSource) r1
            return r1
    }

    public static com.kwad.components.core.playable.PlayableSource[] values() {
            com.kwad.components.core.playable.PlayableSource[] r0 = com.kwad.components.core.playable.PlayableSource.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.components.core.playable.PlayableSource[] r0 = (com.kwad.components.core.playable.PlayableSource[]) r0
            return r0
    }

    public final int getCode() {
            r1 = this;
            int r0 = r1.code
            return r0
    }
}
