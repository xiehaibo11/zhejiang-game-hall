package com.xiaomi.push.service.module;

@java.lang.Deprecated
public enum PushChannelRegion extends java.lang.Enum<com.xiaomi.push.service.module.PushChannelRegion> {
    private static final com.xiaomi.push.service.module.PushChannelRegion[] $VALUES = null;
    public static final com.xiaomi.push.service.module.PushChannelRegion China = null;
    public static final com.xiaomi.push.service.module.PushChannelRegion Europe = null;
    public static final com.xiaomi.push.service.module.PushChannelRegion Global = null;
    public static final com.xiaomi.push.service.module.PushChannelRegion India = null;
    public static final com.xiaomi.push.service.module.PushChannelRegion Russia = null;

    static {
            com.xiaomi.push.service.module.PushChannelRegion r0 = new com.xiaomi.push.service.module.PushChannelRegion
            r1 = 0
            java.lang.String r2 = "China"
            r0.<init>(r2, r1)
            com.xiaomi.push.service.module.PushChannelRegion.China = r0
            com.xiaomi.push.service.module.PushChannelRegion r0 = new com.xiaomi.push.service.module.PushChannelRegion
            r2 = 1
            java.lang.String r3 = "Global"
            r0.<init>(r3, r2)
            com.xiaomi.push.service.module.PushChannelRegion.Global = r0
            com.xiaomi.push.service.module.PushChannelRegion r0 = new com.xiaomi.push.service.module.PushChannelRegion
            r3 = 2
            java.lang.String r4 = "Europe"
            r0.<init>(r4, r3)
            com.xiaomi.push.service.module.PushChannelRegion.Europe = r0
            com.xiaomi.push.service.module.PushChannelRegion r0 = new com.xiaomi.push.service.module.PushChannelRegion
            r4 = 3
            java.lang.String r5 = "Russia"
            r0.<init>(r5, r4)
            com.xiaomi.push.service.module.PushChannelRegion.Russia = r0
            com.xiaomi.push.service.module.PushChannelRegion r0 = new com.xiaomi.push.service.module.PushChannelRegion
            r5 = 4
            java.lang.String r6 = "India"
            r0.<init>(r6, r5)
            com.xiaomi.push.service.module.PushChannelRegion.India = r0
            r6 = 5
            com.xiaomi.push.service.module.PushChannelRegion[] r6 = new com.xiaomi.push.service.module.PushChannelRegion[r6]
            com.xiaomi.push.service.module.PushChannelRegion r7 = com.xiaomi.push.service.module.PushChannelRegion.China
            r6[r1] = r7
            com.xiaomi.push.service.module.PushChannelRegion r1 = com.xiaomi.push.service.module.PushChannelRegion.Global
            r6[r2] = r1
            com.xiaomi.push.service.module.PushChannelRegion r1 = com.xiaomi.push.service.module.PushChannelRegion.Europe
            r6[r3] = r1
            com.xiaomi.push.service.module.PushChannelRegion r1 = com.xiaomi.push.service.module.PushChannelRegion.Russia
            r6[r4] = r1
            r6[r5] = r0
            com.xiaomi.push.service.module.PushChannelRegion.$VALUES = r6
            return
    }

    PushChannelRegion(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.xiaomi.push.service.module.PushChannelRegion valueOf(java.lang.String r1) {
            java.lang.Class<com.xiaomi.push.service.module.PushChannelRegion> r0 = com.xiaomi.push.service.module.PushChannelRegion.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.xiaomi.push.service.module.PushChannelRegion r1 = (com.xiaomi.push.service.module.PushChannelRegion) r1
            return r1
    }

    public static com.xiaomi.push.service.module.PushChannelRegion[] values() {
            com.xiaomi.push.service.module.PushChannelRegion[] r0 = com.xiaomi.push.service.module.PushChannelRegion.$VALUES
            java.lang.Object r0 = r0.clone()
            com.xiaomi.push.service.module.PushChannelRegion[] r0 = (com.xiaomi.push.service.module.PushChannelRegion[]) r0
            return r0
    }
}
