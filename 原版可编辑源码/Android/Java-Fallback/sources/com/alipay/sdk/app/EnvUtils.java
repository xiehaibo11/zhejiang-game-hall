package com.alipay.sdk.app;

public class EnvUtils {
    public static com.alipay.sdk.app.EnvUtils.EnvEnum mEnv;

    public enum EnvEnum extends java.lang.Enum<com.alipay.sdk.app.EnvUtils.EnvEnum> {
        public static final com.alipay.sdk.app.EnvUtils.EnvEnum[] $VALUES = null;
        public static final com.alipay.sdk.app.EnvUtils.EnvEnum ONLINE = null;
        public static final com.alipay.sdk.app.EnvUtils.EnvEnum PRE_SANDBOX = null;
        public static final com.alipay.sdk.app.EnvUtils.EnvEnum SANDBOX = null;

        static {
                com.alipay.sdk.app.EnvUtils$EnvEnum r0 = new com.alipay.sdk.app.EnvUtils$EnvEnum
                r1 = 0
                java.lang.String r2 = "ONLINE"
                r0.<init>(r2, r1)
                com.alipay.sdk.app.EnvUtils.EnvEnum.ONLINE = r0
                com.alipay.sdk.app.EnvUtils$EnvEnum r0 = new com.alipay.sdk.app.EnvUtils$EnvEnum
                r2 = 1
                java.lang.String r3 = "PRE_SANDBOX"
                r0.<init>(r3, r2)
                com.alipay.sdk.app.EnvUtils.EnvEnum.PRE_SANDBOX = r0
                com.alipay.sdk.app.EnvUtils$EnvEnum r0 = new com.alipay.sdk.app.EnvUtils$EnvEnum
                r3 = 2
                java.lang.String r4 = "SANDBOX"
                r0.<init>(r4, r3)
                com.alipay.sdk.app.EnvUtils.EnvEnum.SANDBOX = r0
                r4 = 3
                com.alipay.sdk.app.EnvUtils$EnvEnum[] r4 = new com.alipay.sdk.app.EnvUtils.EnvEnum[r4]
                com.alipay.sdk.app.EnvUtils$EnvEnum r5 = com.alipay.sdk.app.EnvUtils.EnvEnum.ONLINE
                r4[r1] = r5
                com.alipay.sdk.app.EnvUtils$EnvEnum r1 = com.alipay.sdk.app.EnvUtils.EnvEnum.PRE_SANDBOX
                r4[r2] = r1
                r4[r3] = r0
                com.alipay.sdk.app.EnvUtils.EnvEnum.$VALUES = r4
                return
        }

        EnvEnum(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.alipay.sdk.app.EnvUtils.EnvEnum valueOf(java.lang.String r1) {
                java.lang.Class<com.alipay.sdk.app.EnvUtils$EnvEnum> r0 = com.alipay.sdk.app.EnvUtils.EnvEnum.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.alipay.sdk.app.EnvUtils$EnvEnum r1 = (com.alipay.sdk.app.EnvUtils.EnvEnum) r1
                return r1
        }

        public static com.alipay.sdk.app.EnvUtils.EnvEnum[] values() {
                com.alipay.sdk.app.EnvUtils$EnvEnum[] r0 = com.alipay.sdk.app.EnvUtils.EnvEnum.$VALUES
                java.lang.Object r0 = r0.clone()
                com.alipay.sdk.app.EnvUtils$EnvEnum[] r0 = (com.alipay.sdk.app.EnvUtils.EnvEnum[]) r0
                return r0
        }
    }

    static {
            com.alipay.sdk.app.EnvUtils$EnvEnum r0 = com.alipay.sdk.app.EnvUtils.EnvEnum.ONLINE
            com.alipay.sdk.app.EnvUtils.mEnv = r0
            return
    }

    public EnvUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.sdk.app.EnvUtils.EnvEnum geEnv() {
            com.alipay.sdk.app.EnvUtils$EnvEnum r0 = com.alipay.sdk.app.EnvUtils.mEnv
            return r0
    }

    public static boolean isNewSanBox() {
            com.alipay.sdk.app.EnvUtils$EnvEnum r0 = com.alipay.sdk.app.EnvUtils.mEnv
            com.alipay.sdk.app.EnvUtils$EnvEnum r1 = com.alipay.sdk.app.EnvUtils.EnvEnum.SANDBOX
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean isPreSandBox() {
            com.alipay.sdk.app.EnvUtils$EnvEnum r0 = com.alipay.sdk.app.EnvUtils.mEnv
            com.alipay.sdk.app.EnvUtils$EnvEnum r1 = com.alipay.sdk.app.EnvUtils.EnvEnum.PRE_SANDBOX
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean isSandBox() {
            boolean r0 = isPreSandBox()
            if (r0 != 0) goto Lf
            boolean r0 = isNewSanBox()
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    public static void setEnv(com.alipay.sdk.app.EnvUtils.EnvEnum r0) {
            com.alipay.sdk.app.EnvUtils.mEnv = r0
            return
    }
}
