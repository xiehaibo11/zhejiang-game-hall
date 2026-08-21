package com.bykv.vk.openvk;

public enum TTAdLoadType extends java.lang.Enum<com.bykv.vk.openvk.TTAdLoadType> {
    public static final com.bykv.vk.openvk.TTAdLoadType LOAD = null;
    public static final com.bykv.vk.openvk.TTAdLoadType PRELOAD = null;
    public static final com.bykv.vk.openvk.TTAdLoadType UNKNOWN = null;
    private static final com.bykv.vk.openvk.TTAdLoadType[] rg = null;

    static {
            com.bykv.vk.openvk.TTAdLoadType r0 = new com.bykv.vk.openvk.TTAdLoadType
            r1 = 0
            java.lang.String r2 = "UNKNOWN"
            r0.<init>(r2, r1)
            com.bykv.vk.openvk.TTAdLoadType.UNKNOWN = r0
            com.bykv.vk.openvk.TTAdLoadType r0 = new com.bykv.vk.openvk.TTAdLoadType
            r2 = 1
            java.lang.String r3 = "PRELOAD"
            r0.<init>(r3, r2)
            com.bykv.vk.openvk.TTAdLoadType.PRELOAD = r0
            com.bykv.vk.openvk.TTAdLoadType r0 = new com.bykv.vk.openvk.TTAdLoadType
            r3 = 2
            java.lang.String r4 = "LOAD"
            r0.<init>(r4, r3)
            com.bykv.vk.openvk.TTAdLoadType.LOAD = r0
            r4 = 3
            com.bykv.vk.openvk.TTAdLoadType[] r4 = new com.bykv.vk.openvk.TTAdLoadType[r4]
            com.bykv.vk.openvk.TTAdLoadType r5 = com.bykv.vk.openvk.TTAdLoadType.UNKNOWN
            r4[r1] = r5
            com.bykv.vk.openvk.TTAdLoadType r1 = com.bykv.vk.openvk.TTAdLoadType.PRELOAD
            r4[r2] = r1
            r4[r3] = r0
            com.bykv.vk.openvk.TTAdLoadType.rg = r4
            return
    }

    TTAdLoadType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.bykv.vk.openvk.TTAdLoadType valueOf(java.lang.String r1) {
            java.lang.Class<com.bykv.vk.openvk.TTAdLoadType> r0 = com.bykv.vk.openvk.TTAdLoadType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.bykv.vk.openvk.TTAdLoadType r1 = (com.bykv.vk.openvk.TTAdLoadType) r1
            return r1
    }

    public static com.bykv.vk.openvk.TTAdLoadType[] values() {
            com.bykv.vk.openvk.TTAdLoadType[] r0 = com.bykv.vk.openvk.TTAdLoadType.rg
            java.lang.Object r0 = r0.clone()
            com.bykv.vk.openvk.TTAdLoadType[] r0 = (com.bykv.vk.openvk.TTAdLoadType[]) r0
            return r0
    }
}
