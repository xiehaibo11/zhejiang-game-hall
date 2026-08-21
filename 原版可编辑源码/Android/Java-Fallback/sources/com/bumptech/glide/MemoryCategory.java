package com.bumptech.glide;

public enum MemoryCategory extends java.lang.Enum<com.bumptech.glide.MemoryCategory> {
    private static final com.bumptech.glide.MemoryCategory[] $VALUES = null;
    public static final com.bumptech.glide.MemoryCategory HIGH = null;
    public static final com.bumptech.glide.MemoryCategory LOW = null;
    public static final com.bumptech.glide.MemoryCategory NORMAL = null;
    private float multiplier;

    static {
            com.bumptech.glide.MemoryCategory r0 = new com.bumptech.glide.MemoryCategory
            java.lang.String r1 = "LOW"
            r2 = 0
            r3 = 1056964608(0x3f000000, float:0.5)
            r0.<init>(r1, r2, r3)
            com.bumptech.glide.MemoryCategory.LOW = r0
            com.bumptech.glide.MemoryCategory r0 = new com.bumptech.glide.MemoryCategory
            java.lang.String r1 = "NORMAL"
            r3 = 1
            r4 = 1065353216(0x3f800000, float:1.0)
            r0.<init>(r1, r3, r4)
            com.bumptech.glide.MemoryCategory.NORMAL = r0
            com.bumptech.glide.MemoryCategory r0 = new com.bumptech.glide.MemoryCategory
            java.lang.String r1 = "HIGH"
            r4 = 2
            r5 = 1069547520(0x3fc00000, float:1.5)
            r0.<init>(r1, r4, r5)
            com.bumptech.glide.MemoryCategory.HIGH = r0
            r1 = 3
            com.bumptech.glide.MemoryCategory[] r1 = new com.bumptech.glide.MemoryCategory[r1]
            com.bumptech.glide.MemoryCategory r5 = com.bumptech.glide.MemoryCategory.LOW
            r1[r2] = r5
            com.bumptech.glide.MemoryCategory r2 = com.bumptech.glide.MemoryCategory.NORMAL
            r1[r3] = r2
            r1[r4] = r0
            com.bumptech.glide.MemoryCategory.$VALUES = r1
            return
    }

    MemoryCategory(java.lang.String r1, int r2, float r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.multiplier = r3
            return
    }

    public static com.bumptech.glide.MemoryCategory valueOf(java.lang.String r1) {
            java.lang.Class<com.bumptech.glide.MemoryCategory> r0 = com.bumptech.glide.MemoryCategory.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.bumptech.glide.MemoryCategory r1 = (com.bumptech.glide.MemoryCategory) r1
            return r1
    }

    public static com.bumptech.glide.MemoryCategory[] values() {
            com.bumptech.glide.MemoryCategory[] r0 = com.bumptech.glide.MemoryCategory.$VALUES
            java.lang.Object r0 = r0.clone()
            com.bumptech.glide.MemoryCategory[] r0 = (com.bumptech.glide.MemoryCategory[]) r0
            return r0
    }

    public float getMultiplier() {
            r1 = this;
            float r0 = r1.multiplier
            return r0
    }
}
