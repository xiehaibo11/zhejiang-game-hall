package com.meizu.cloud.pushsdk.notification.model.styleenum;

public enum InnerStyleLayout extends java.lang.Enum<com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout> {
    private static final com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout[] $VALUES = null;
    public static final com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout EXPANDABLE_PIC = null;
    public static final com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout EXPANDABLE_STANDARD = null;
    public static final com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout EXPANDABLE_TEXT = null;
    public static final com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout EXPANDABLE_VIDEO = null;
    private final int code;

    static {
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r0 = new com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout
            r1 = 0
            java.lang.String r2 = "EXPANDABLE_STANDARD"
            r0.<init>(r2, r1, r1)
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_STANDARD = r0
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r0 = new com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout
            r2 = 1
            java.lang.String r3 = "EXPANDABLE_TEXT"
            r0.<init>(r3, r2, r2)
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_TEXT = r0
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r0 = new com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout
            r3 = 2
            java.lang.String r4 = "EXPANDABLE_PIC"
            r0.<init>(r4, r3, r3)
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_PIC = r0
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r0 = new com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout
            r4 = 3
            java.lang.String r5 = "EXPANDABLE_VIDEO"
            r0.<init>(r5, r4, r4)
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_VIDEO = r0
            r5 = 4
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout[] r5 = new com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout[r5]
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r6 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_STANDARD
            r5[r1] = r6
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r1 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_TEXT
            r5[r2] = r1
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r1 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.EXPANDABLE_PIC
            r5[r3] = r1
            r5[r4] = r0
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.$VALUES = r5
            return
    }

    InnerStyleLayout(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.code = r3
            return
    }

    public static com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout valueOf(java.lang.String r1) {
            java.lang.Class<com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout> r0 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout r1 = (com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout) r1
            return r1
    }

    public static com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout[] values() {
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout[] r0 = com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout.$VALUES
            java.lang.Object r0 = r0.clone()
            com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout[] r0 = (com.meizu.cloud.pushsdk.notification.model.styleenum.InnerStyleLayout[]) r0
            return r0
    }

    public int getCode() {
            r1 = this;
            int r0 = r1.code
            return r0
    }
}
