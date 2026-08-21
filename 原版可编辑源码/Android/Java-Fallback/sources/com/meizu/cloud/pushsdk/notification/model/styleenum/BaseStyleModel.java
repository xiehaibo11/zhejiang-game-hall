package com.meizu.cloud.pushsdk.notification.model.styleenum;

public enum BaseStyleModel extends java.lang.Enum<com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel> {
    private static final com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel[] $VALUES = null;
    public static final com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel ANDROID = null;
    public static final com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel FLYME = null;
    public static final com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel PURE_PICTURE = null;
    private final int code;

    static {
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel r0 = new com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel
            r1 = 0
            java.lang.String r2 = "FLYME"
            r0.<init>(r2, r1, r1)
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel.FLYME = r0
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel r0 = new com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel
            r2 = 1
            java.lang.String r3 = "PURE_PICTURE"
            r0.<init>(r3, r2, r2)
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel.PURE_PICTURE = r0
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel r0 = new com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel
            r3 = 2
            java.lang.String r4 = "ANDROID"
            r0.<init>(r4, r3, r3)
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel.ANDROID = r0
            r4 = 3
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel[] r4 = new com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel[r4]
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel r5 = com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel.FLYME
            r4[r1] = r5
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel r1 = com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel.PURE_PICTURE
            r4[r2] = r1
            r4[r3] = r0
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel.$VALUES = r4
            return
    }

    BaseStyleModel(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.code = r3
            return
    }

    public static com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel valueOf(java.lang.String r1) {
            java.lang.Class<com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel> r0 = com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel r1 = (com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel) r1
            return r1
    }

    public static com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel[] values() {
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel[] r0 = com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel.$VALUES
            java.lang.Object r0 = r0.clone()
            com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel[] r0 = (com.meizu.cloud.pushsdk.notification.model.styleenum.BaseStyleModel[]) r0
            return r0
    }

    public int getCode() {
            r1 = this;
            int r0 = r1.code
            return r0
    }
}
