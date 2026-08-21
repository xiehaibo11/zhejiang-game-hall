package com.bumptech.glide.load;

public enum DecodeFormat extends java.lang.Enum<com.bumptech.glide.load.DecodeFormat> {
    private static final com.bumptech.glide.load.DecodeFormat[] $VALUES = null;

    @java.lang.Deprecated
    public static final com.bumptech.glide.load.DecodeFormat ALWAYS_ARGB_8888 = null;
    public static final com.bumptech.glide.load.DecodeFormat DEFAULT = null;
    public static final com.bumptech.glide.load.DecodeFormat PREFER_ARGB_8888 = null;
    public static final com.bumptech.glide.load.DecodeFormat PREFER_RGB_565 = null;

    static {
            com.bumptech.glide.load.DecodeFormat r0 = new com.bumptech.glide.load.DecodeFormat
            java.lang.String r1 = "ALWAYS_ARGB_8888"
            r2 = 0
            r0.<init>(r1, r2)
            com.bumptech.glide.load.DecodeFormat.ALWAYS_ARGB_8888 = r0
            com.bumptech.glide.load.DecodeFormat r0 = new com.bumptech.glide.load.DecodeFormat
            java.lang.String r1 = "PREFER_ARGB_8888"
            r3 = 1
            r0.<init>(r1, r3)
            com.bumptech.glide.load.DecodeFormat.PREFER_ARGB_8888 = r0
            com.bumptech.glide.load.DecodeFormat r0 = new com.bumptech.glide.load.DecodeFormat
            java.lang.String r1 = "PREFER_RGB_565"
            r4 = 2
            r0.<init>(r1, r4)
            com.bumptech.glide.load.DecodeFormat.PREFER_RGB_565 = r0
            r1 = 3
            com.bumptech.glide.load.DecodeFormat[] r1 = new com.bumptech.glide.load.DecodeFormat[r1]
            com.bumptech.glide.load.DecodeFormat r5 = com.bumptech.glide.load.DecodeFormat.ALWAYS_ARGB_8888
            r1[r2] = r5
            com.bumptech.glide.load.DecodeFormat r2 = com.bumptech.glide.load.DecodeFormat.PREFER_ARGB_8888
            r1[r3] = r2
            r1[r4] = r0
            com.bumptech.glide.load.DecodeFormat.$VALUES = r1
            com.bumptech.glide.load.DecodeFormat.DEFAULT = r0
            return
    }

    DecodeFormat(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.bumptech.glide.load.DecodeFormat valueOf(java.lang.String r1) {
            java.lang.Class<com.bumptech.glide.load.DecodeFormat> r0 = com.bumptech.glide.load.DecodeFormat.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.bumptech.glide.load.DecodeFormat r1 = (com.bumptech.glide.load.DecodeFormat) r1
            return r1
    }

    public static com.bumptech.glide.load.DecodeFormat[] values() {
            com.bumptech.glide.load.DecodeFormat[] r0 = com.bumptech.glide.load.DecodeFormat.$VALUES
            java.lang.Object r0 = r0.clone()
            com.bumptech.glide.load.DecodeFormat[] r0 = (com.bumptech.glide.load.DecodeFormat[]) r0
            return r0
    }
}
