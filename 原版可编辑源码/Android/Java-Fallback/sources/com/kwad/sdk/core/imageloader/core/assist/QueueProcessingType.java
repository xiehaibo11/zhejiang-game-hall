package com.kwad.sdk.core.imageloader.core.assist;

public enum QueueProcessingType extends java.lang.Enum<com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType> {
    private static final com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType[] $VALUES = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType FIFO = null;
    public static final com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType LIFO = null;

    static {
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r0 = new com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType
            r1 = 0
            java.lang.String r2 = "FIFO"
            r0.<init>(r2, r1)
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType.FIFO = r0
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r0 = new com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType
            r2 = 1
            java.lang.String r3 = "LIFO"
            r0.<init>(r3, r2)
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType.LIFO = r0
            r3 = 2
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType[] r3 = new com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType[r3]
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r4 = com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType.FIFO
            r3[r1] = r4
            r3[r2] = r0
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType.$VALUES = r3
            return
    }

    QueueProcessingType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType> r0 = com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r1 = (com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType) r1
            return r1
    }

    public static com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType[] values() {
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType[] r0 = com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType[] r0 = (com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType[]) r0
            return r0
    }
}
