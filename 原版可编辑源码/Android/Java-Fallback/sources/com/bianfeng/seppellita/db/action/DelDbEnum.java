package com.bianfeng.seppellita.db.action;

public enum DelDbEnum extends java.lang.Enum<com.bianfeng.seppellita.db.action.DelDbEnum> {
    private static final com.bianfeng.seppellita.db.action.DelDbEnum[] $VALUES = null;
    public static final com.bianfeng.seppellita.db.action.DelDbEnum DELED = null;
    public static final com.bianfeng.seppellita.db.action.DelDbEnum NEED_DEL = null;
    public static final com.bianfeng.seppellita.db.action.DelDbEnum NO_NEED_DEL = null;

    static {
            com.bianfeng.seppellita.db.action.DelDbEnum r0 = new com.bianfeng.seppellita.db.action.DelDbEnum
            r1 = 0
            java.lang.String r2 = "NO_NEED_DEL"
            r0.<init>(r2, r1)
            com.bianfeng.seppellita.db.action.DelDbEnum.NO_NEED_DEL = r0
            com.bianfeng.seppellita.db.action.DelDbEnum r0 = new com.bianfeng.seppellita.db.action.DelDbEnum
            r2 = 1
            java.lang.String r3 = "NEED_DEL"
            r0.<init>(r3, r2)
            com.bianfeng.seppellita.db.action.DelDbEnum.NEED_DEL = r0
            com.bianfeng.seppellita.db.action.DelDbEnum r0 = new com.bianfeng.seppellita.db.action.DelDbEnum
            r3 = 2
            java.lang.String r4 = "DELED"
            r0.<init>(r4, r3)
            com.bianfeng.seppellita.db.action.DelDbEnum.DELED = r0
            r4 = 3
            com.bianfeng.seppellita.db.action.DelDbEnum[] r4 = new com.bianfeng.seppellita.db.action.DelDbEnum[r4]
            com.bianfeng.seppellita.db.action.DelDbEnum r5 = com.bianfeng.seppellita.db.action.DelDbEnum.NO_NEED_DEL
            r4[r1] = r5
            com.bianfeng.seppellita.db.action.DelDbEnum r1 = com.bianfeng.seppellita.db.action.DelDbEnum.NEED_DEL
            r4[r2] = r1
            r4[r3] = r0
            com.bianfeng.seppellita.db.action.DelDbEnum.$VALUES = r4
            return
    }

    DelDbEnum(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.bianfeng.seppellita.db.action.DelDbEnum valueOf(java.lang.String r1) {
            java.lang.Class<com.bianfeng.seppellita.db.action.DelDbEnum> r0 = com.bianfeng.seppellita.db.action.DelDbEnum.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.bianfeng.seppellita.db.action.DelDbEnum r1 = (com.bianfeng.seppellita.db.action.DelDbEnum) r1
            return r1
    }

    public static com.bianfeng.seppellita.db.action.DelDbEnum[] values() {
            com.bianfeng.seppellita.db.action.DelDbEnum[] r0 = com.bianfeng.seppellita.db.action.DelDbEnum.$VALUES
            java.lang.Object r0 = r0.clone()
            com.bianfeng.seppellita.db.action.DelDbEnum[] r0 = (com.bianfeng.seppellita.db.action.DelDbEnum[]) r0
            return r0
    }
}
