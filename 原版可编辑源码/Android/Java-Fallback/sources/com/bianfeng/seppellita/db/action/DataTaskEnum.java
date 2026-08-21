package com.bianfeng.seppellita.db.action;

public enum DataTaskEnum extends java.lang.Enum<com.bianfeng.seppellita.db.action.DataTaskEnum> {
    private static final com.bianfeng.seppellita.db.action.DataTaskEnum[] $VALUES = null;
    public static final com.bianfeng.seppellita.db.action.DataTaskEnum DEL = null;
    public static final com.bianfeng.seppellita.db.action.DataTaskEnum DELBEFOREONEMOUTH = null;
    public static final com.bianfeng.seppellita.db.action.DataTaskEnum INSERT = null;
    public static final com.bianfeng.seppellita.db.action.DataTaskEnum SELECT = null;

    static {
            com.bianfeng.seppellita.db.action.DataTaskEnum r0 = new com.bianfeng.seppellita.db.action.DataTaskEnum
            r1 = 0
            java.lang.String r2 = "INSERT"
            r0.<init>(r2, r1)
            com.bianfeng.seppellita.db.action.DataTaskEnum.INSERT = r0
            com.bianfeng.seppellita.db.action.DataTaskEnum r0 = new com.bianfeng.seppellita.db.action.DataTaskEnum
            r2 = 1
            java.lang.String r3 = "DEL"
            r0.<init>(r3, r2)
            com.bianfeng.seppellita.db.action.DataTaskEnum.DEL = r0
            com.bianfeng.seppellita.db.action.DataTaskEnum r0 = new com.bianfeng.seppellita.db.action.DataTaskEnum
            r3 = 2
            java.lang.String r4 = "SELECT"
            r0.<init>(r4, r3)
            com.bianfeng.seppellita.db.action.DataTaskEnum.SELECT = r0
            com.bianfeng.seppellita.db.action.DataTaskEnum r0 = new com.bianfeng.seppellita.db.action.DataTaskEnum
            r4 = 3
            java.lang.String r5 = "DELBEFOREONEMOUTH"
            r0.<init>(r5, r4)
            com.bianfeng.seppellita.db.action.DataTaskEnum.DELBEFOREONEMOUTH = r0
            r5 = 4
            com.bianfeng.seppellita.db.action.DataTaskEnum[] r5 = new com.bianfeng.seppellita.db.action.DataTaskEnum[r5]
            com.bianfeng.seppellita.db.action.DataTaskEnum r6 = com.bianfeng.seppellita.db.action.DataTaskEnum.INSERT
            r5[r1] = r6
            com.bianfeng.seppellita.db.action.DataTaskEnum r1 = com.bianfeng.seppellita.db.action.DataTaskEnum.DEL
            r5[r2] = r1
            com.bianfeng.seppellita.db.action.DataTaskEnum r1 = com.bianfeng.seppellita.db.action.DataTaskEnum.SELECT
            r5[r3] = r1
            r5[r4] = r0
            com.bianfeng.seppellita.db.action.DataTaskEnum.$VALUES = r5
            return
    }

    DataTaskEnum(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.bianfeng.seppellita.db.action.DataTaskEnum valueOf(java.lang.String r1) {
            java.lang.Class<com.bianfeng.seppellita.db.action.DataTaskEnum> r0 = com.bianfeng.seppellita.db.action.DataTaskEnum.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.bianfeng.seppellita.db.action.DataTaskEnum r1 = (com.bianfeng.seppellita.db.action.DataTaskEnum) r1
            return r1
    }

    public static com.bianfeng.seppellita.db.action.DataTaskEnum[] values() {
            com.bianfeng.seppellita.db.action.DataTaskEnum[] r0 = com.bianfeng.seppellita.db.action.DataTaskEnum.$VALUES
            java.lang.Object r0 = r0.clone()
            com.bianfeng.seppellita.db.action.DataTaskEnum[] r0 = (com.bianfeng.seppellita.db.action.DataTaskEnum[]) r0
            return r0
    }
}
