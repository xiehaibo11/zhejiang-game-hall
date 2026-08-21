package com.kwad.sdk.core.imageloader.core.assist;

public class FailReason {
    private final java.lang.Throwable cause;
    private final com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType type;

    public enum FailType extends java.lang.Enum<com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType> {
        private static final com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType[] $VALUES = null;
        public static final com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType DECODING_ERROR = null;
        public static final com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType IO_ERROR = null;
        public static final com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType NETWORK_DENIED = null;
        public static final com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType OUT_OF_MEMORY = null;
        public static final com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType UNKNOWN = null;

        static {
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r0 = new com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType
                r1 = 0
                java.lang.String r2 = "IO_ERROR"
                r0.<init>(r2, r1)
                com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.IO_ERROR = r0
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r0 = new com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType
                r2 = 1
                java.lang.String r3 = "DECODING_ERROR"
                r0.<init>(r3, r2)
                com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.DECODING_ERROR = r0
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r0 = new com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType
                r3 = 2
                java.lang.String r4 = "NETWORK_DENIED"
                r0.<init>(r4, r3)
                com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.NETWORK_DENIED = r0
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r0 = new com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType
                r4 = 3
                java.lang.String r5 = "OUT_OF_MEMORY"
                r0.<init>(r5, r4)
                com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.OUT_OF_MEMORY = r0
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r0 = new com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType
                r5 = 4
                java.lang.String r6 = "UNKNOWN"
                r0.<init>(r6, r5)
                com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.UNKNOWN = r0
                r6 = 5
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType[] r6 = new com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType[r6]
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r7 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.IO_ERROR
                r6[r1] = r7
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r1 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.DECODING_ERROR
                r6[r2] = r1
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r1 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.NETWORK_DENIED
                r6[r3] = r1
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r1 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.OUT_OF_MEMORY
                r6[r4] = r1
                r6[r5] = r0
                com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.$VALUES = r6
                return
        }

        FailType(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType> r0 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r1 = (com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType) r1
                return r1
        }

        public static com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType[] values() {
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType[] r0 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType[] r0 = (com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType[]) r0
                return r0
        }
    }

    public FailReason(com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>()
            r0.type = r1
            r0.cause = r2
            return
    }

    public java.lang.Throwable getCause() {
            r1 = this;
            java.lang.Throwable r0 = r1.cause
            return r0
    }

    public com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType getType() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r0 = r1.type
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "FailReason{type="
            r0.<init>(r1)
            com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r1 = r2.type
            r0.append(r1)
            java.lang.String r1 = ", cause="
            r0.append(r1)
            java.lang.Throwable r1 = r2.cause
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
