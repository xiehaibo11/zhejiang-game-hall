package com.bumptech.glide;

public enum Priority extends java.lang.Enum<com.bumptech.glide.Priority> {
    private static final com.bumptech.glide.Priority[] $VALUES = null;
    public static final com.bumptech.glide.Priority HIGH = null;
    public static final com.bumptech.glide.Priority IMMEDIATE = null;
    public static final com.bumptech.glide.Priority LOW = null;
    public static final com.bumptech.glide.Priority NORMAL = null;
    public static final com.bumptech.glide.Priority priority = null;

    static {
            com.bumptech.glide.Priority r0 = new com.bumptech.glide.Priority
            java.lang.String r1 = "IMMEDIATE"
            r2 = 0
            r0.<init>(r1, r2)
            com.bumptech.glide.Priority.IMMEDIATE = r0
            com.bumptech.glide.Priority r0 = new com.bumptech.glide.Priority
            java.lang.String r1 = "HIGH"
            r3 = 1
            r0.<init>(r1, r3)
            com.bumptech.glide.Priority.HIGH = r0
            com.bumptech.glide.Priority r0 = new com.bumptech.glide.Priority
            java.lang.String r1 = "NORMAL"
            r4 = 2
            r0.<init>(r1, r4)
            com.bumptech.glide.Priority.NORMAL = r0
            com.bumptech.glide.Priority r0 = new com.bumptech.glide.Priority
            java.lang.String r1 = "LOW"
            r5 = 3
            r0.<init>(r1, r5)
            com.bumptech.glide.Priority.LOW = r0
            com.bumptech.glide.Priority r0 = new com.bumptech.glide.Priority
            java.lang.String r1 = "priority"
            r6 = 4
            r0.<init>(r1, r6)
            com.bumptech.glide.Priority.priority = r0
            r1 = 5
            com.bumptech.glide.Priority[] r1 = new com.bumptech.glide.Priority[r1]
            com.bumptech.glide.Priority r7 = com.bumptech.glide.Priority.IMMEDIATE
            r1[r2] = r7
            com.bumptech.glide.Priority r2 = com.bumptech.glide.Priority.HIGH
            r1[r3] = r2
            com.bumptech.glide.Priority r2 = com.bumptech.glide.Priority.NORMAL
            r1[r4] = r2
            com.bumptech.glide.Priority r2 = com.bumptech.glide.Priority.LOW
            r1[r5] = r2
            r1[r6] = r0
            com.bumptech.glide.Priority.$VALUES = r1
            return
    }

    Priority(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.bumptech.glide.Priority valueOf(java.lang.String r1) {
            java.lang.Class<com.bumptech.glide.Priority> r0 = com.bumptech.glide.Priority.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.bumptech.glide.Priority r1 = (com.bumptech.glide.Priority) r1
            return r1
    }

    public static com.bumptech.glide.Priority[] values() {
            com.bumptech.glide.Priority[] r0 = com.bumptech.glide.Priority.$VALUES
            java.lang.Object r0 = r0.clone()
            com.bumptech.glide.Priority[] r0 = (com.bumptech.glide.Priority[]) r0
            return r0
    }
}
