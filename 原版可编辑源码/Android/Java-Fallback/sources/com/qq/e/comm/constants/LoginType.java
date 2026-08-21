package com.qq.e.comm.constants;

public enum LoginType extends java.lang.Enum<com.qq.e.comm.constants.LoginType> {
    public static final com.qq.e.comm.constants.LoginType QQ = null;
    public static final com.qq.e.comm.constants.LoginType Unknow = null;
    public static final com.qq.e.comm.constants.LoginType WeiXin = null;
    private static final com.qq.e.comm.constants.LoginType[] b = null;
    private int a;

    static {
            com.qq.e.comm.constants.LoginType r0 = new com.qq.e.comm.constants.LoginType
            r1 = 0
            java.lang.String r2 = "Unknow"
            r0.<init>(r2, r1, r1)
            com.qq.e.comm.constants.LoginType.Unknow = r0
            com.qq.e.comm.constants.LoginType r0 = new com.qq.e.comm.constants.LoginType
            r2 = 1
            java.lang.String r3 = "WeiXin"
            r0.<init>(r3, r2, r2)
            com.qq.e.comm.constants.LoginType.WeiXin = r0
            com.qq.e.comm.constants.LoginType r0 = new com.qq.e.comm.constants.LoginType
            r3 = 2
            java.lang.String r4 = "QQ"
            r0.<init>(r4, r3, r3)
            com.qq.e.comm.constants.LoginType.QQ = r0
            r4 = 3
            com.qq.e.comm.constants.LoginType[] r4 = new com.qq.e.comm.constants.LoginType[r4]
            com.qq.e.comm.constants.LoginType r5 = com.qq.e.comm.constants.LoginType.Unknow
            r4[r1] = r5
            com.qq.e.comm.constants.LoginType r1 = com.qq.e.comm.constants.LoginType.WeiXin
            r4[r2] = r1
            r4[r3] = r0
            com.qq.e.comm.constants.LoginType.b = r4
            return
    }

    LoginType(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            r0.ordinal()
            return
    }

    public static com.qq.e.comm.constants.LoginType valueOf(java.lang.String r1) {
            java.lang.Class<com.qq.e.comm.constants.LoginType> r0 = com.qq.e.comm.constants.LoginType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.qq.e.comm.constants.LoginType r1 = (com.qq.e.comm.constants.LoginType) r1
            return r1
    }

    public static com.qq.e.comm.constants.LoginType[] values() {
            com.qq.e.comm.constants.LoginType[] r0 = com.qq.e.comm.constants.LoginType.b
            java.lang.Object r0 = r0.clone()
            com.qq.e.comm.constants.LoginType[] r0 = (com.qq.e.comm.constants.LoginType[]) r0
            return r0
    }

    public int getValue() {
            r1 = this;
            int r0 = r1.a
            return r0
    }
}
