package com.kwad.sdk.core.imageloader.core.assist;

public enum ImageScaleType extends java.lang.Enum<com.kwad.sdk.core.imageloader.core.assist.ImageScaleType> {
    private static final com.kwad.sdk.core.imageloader.core.assist.ImageScaleType[] $VALUES = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.ImageScaleType EXACTLY = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.ImageScaleType EXACTLY_STRETCHED = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.ImageScaleType IN_SAMPLE_INT = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.ImageScaleType IN_SAMPLE_POWER_OF_2 = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.ImageScaleType NONE = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.ImageScaleType NONE_SAFE = null;

    static {
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = new com.kwad.sdk.core.imageloader.core.assist.ImageScaleType
            r1 = 0
            java.lang.String r2 = "NONE"
            r0.<init>(r2, r1)
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.NONE = r0
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = new com.kwad.sdk.core.imageloader.core.assist.ImageScaleType
            r2 = 1
            java.lang.String r3 = "NONE_SAFE"
            r0.<init>(r3, r2)
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.NONE_SAFE = r0
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = new com.kwad.sdk.core.imageloader.core.assist.ImageScaleType
            r3 = 2
            java.lang.String r4 = "IN_SAMPLE_POWER_OF_2"
            r0.<init>(r4, r3)
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.IN_SAMPLE_POWER_OF_2 = r0
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = new com.kwad.sdk.core.imageloader.core.assist.ImageScaleType
            r4 = 3
            java.lang.String r5 = "IN_SAMPLE_INT"
            r0.<init>(r5, r4)
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.IN_SAMPLE_INT = r0
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = new com.kwad.sdk.core.imageloader.core.assist.ImageScaleType
            r5 = 4
            java.lang.String r6 = "EXACTLY"
            r0.<init>(r6, r5)
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.EXACTLY = r0
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = new com.kwad.sdk.core.imageloader.core.assist.ImageScaleType
            r6 = 5
            java.lang.String r7 = "EXACTLY_STRETCHED"
            r0.<init>(r7, r6)
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.EXACTLY_STRETCHED = r0
            r7 = 6
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType[] r7 = new com.kwad.sdk.core.imageloader.core.assist.ImageScaleType[r7]
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r8 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.NONE
            r7[r1] = r8
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r1 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.NONE_SAFE
            r7[r2] = r1
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r1 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.IN_SAMPLE_POWER_OF_2
            r7[r3] = r1
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r1 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.IN_SAMPLE_INT
            r7[r4] = r1
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r1 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.EXACTLY
            r7[r5] = r1
            r7[r6] = r0
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.$VALUES = r7
            return
    }

    ImageScaleType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.kwad.sdk.core.imageloader.core.assist.ImageScaleType valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.sdk.core.imageloader.core.assist.ImageScaleType> r0 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r1 = (com.kwad.sdk.core.imageloader.core.assist.ImageScaleType) r1
            return r1
    }

    public static com.kwad.sdk.core.imageloader.core.assist.ImageScaleType[] values() {
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType[] r0 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType[] r0 = (com.kwad.sdk.core.imageloader.core.assist.ImageScaleType[]) r0
            return r0
    }
}
