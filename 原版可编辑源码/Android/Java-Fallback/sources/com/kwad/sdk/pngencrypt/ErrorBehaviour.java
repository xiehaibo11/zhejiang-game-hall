package com.kwad.sdk.pngencrypt;

public enum ErrorBehaviour extends java.lang.Enum<com.kwad.sdk.pngencrypt.ErrorBehaviour> {
    private static final com.kwad.sdk.pngencrypt.ErrorBehaviour[] $VALUES = null;
    public static final com.kwad.sdk.pngencrypt.ErrorBehaviour LENIENT1_CRC = null;
    public static final com.kwad.sdk.pngencrypt.ErrorBehaviour LENIENT2_ANCILLARY = null;
    public static final com.kwad.sdk.pngencrypt.ErrorBehaviour STRICT = null;
    public static final com.kwad.sdk.pngencrypt.ErrorBehaviour SUPER_LENIENT = null;
    final int c;

    static {
            com.kwad.sdk.pngencrypt.ErrorBehaviour r0 = new com.kwad.sdk.pngencrypt.ErrorBehaviour
            r1 = 0
            java.lang.String r2 = "STRICT"
            r0.<init>(r2, r1, r1)
            com.kwad.sdk.pngencrypt.ErrorBehaviour.STRICT = r0
            com.kwad.sdk.pngencrypt.ErrorBehaviour r0 = new com.kwad.sdk.pngencrypt.ErrorBehaviour
            r2 = 1
            java.lang.String r3 = "LENIENT1_CRC"
            r0.<init>(r3, r2, r2)
            com.kwad.sdk.pngencrypt.ErrorBehaviour.LENIENT1_CRC = r0
            com.kwad.sdk.pngencrypt.ErrorBehaviour r0 = new com.kwad.sdk.pngencrypt.ErrorBehaviour
            r3 = 2
            r4 = 3
            java.lang.String r5 = "LENIENT2_ANCILLARY"
            r0.<init>(r5, r3, r4)
            com.kwad.sdk.pngencrypt.ErrorBehaviour.LENIENT2_ANCILLARY = r0
            com.kwad.sdk.pngencrypt.ErrorBehaviour r0 = new com.kwad.sdk.pngencrypt.ErrorBehaviour
            java.lang.String r5 = "SUPER_LENIENT"
            r6 = 5
            r0.<init>(r5, r4, r6)
            com.kwad.sdk.pngencrypt.ErrorBehaviour.SUPER_LENIENT = r0
            r5 = 4
            com.kwad.sdk.pngencrypt.ErrorBehaviour[] r5 = new com.kwad.sdk.pngencrypt.ErrorBehaviour[r5]
            com.kwad.sdk.pngencrypt.ErrorBehaviour r6 = com.kwad.sdk.pngencrypt.ErrorBehaviour.STRICT
            r5[r1] = r6
            com.kwad.sdk.pngencrypt.ErrorBehaviour r1 = com.kwad.sdk.pngencrypt.ErrorBehaviour.LENIENT1_CRC
            r5[r2] = r1
            com.kwad.sdk.pngencrypt.ErrorBehaviour r1 = com.kwad.sdk.pngencrypt.ErrorBehaviour.LENIENT2_ANCILLARY
            r5[r3] = r1
            r5[r4] = r0
            com.kwad.sdk.pngencrypt.ErrorBehaviour.$VALUES = r5
            return
    }

    ErrorBehaviour(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.c = r3
            return
    }

    public static com.kwad.sdk.pngencrypt.ErrorBehaviour valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.sdk.pngencrypt.ErrorBehaviour> r0 = com.kwad.sdk.pngencrypt.ErrorBehaviour.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.sdk.pngencrypt.ErrorBehaviour r1 = (com.kwad.sdk.pngencrypt.ErrorBehaviour) r1
            return r1
    }

    public static com.kwad.sdk.pngencrypt.ErrorBehaviour[] values() {
            com.kwad.sdk.pngencrypt.ErrorBehaviour[] r0 = com.kwad.sdk.pngencrypt.ErrorBehaviour.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.sdk.pngencrypt.ErrorBehaviour[] r0 = (com.kwad.sdk.pngencrypt.ErrorBehaviour[]) r0
            return r0
    }
}
