package com.alibaba.sdk.android.oss.model;

public enum ObjectPermission extends java.lang.Enum<com.alibaba.sdk.android.oss.model.ObjectPermission> {
    private static final com.alibaba.sdk.android.oss.model.ObjectPermission[] $VALUES = null;
    public static final com.alibaba.sdk.android.oss.model.ObjectPermission Default = null;
    public static final com.alibaba.sdk.android.oss.model.ObjectPermission Private = null;
    public static final com.alibaba.sdk.android.oss.model.ObjectPermission PublicRead = null;
    public static final com.alibaba.sdk.android.oss.model.ObjectPermission PublicReadWrite = null;
    public static final com.alibaba.sdk.android.oss.model.ObjectPermission Unknown = null;
    private java.lang.String permissionString;

    static {
            com.alibaba.sdk.android.oss.model.ObjectPermission r0 = new com.alibaba.sdk.android.oss.model.ObjectPermission
            r1 = 0
            java.lang.String r2 = "Private"
            java.lang.String r3 = "private"
            r0.<init>(r2, r1, r3)
            com.alibaba.sdk.android.oss.model.ObjectPermission.Private = r0
            com.alibaba.sdk.android.oss.model.ObjectPermission r0 = new com.alibaba.sdk.android.oss.model.ObjectPermission
            r2 = 1
            java.lang.String r3 = "PublicRead"
            java.lang.String r4 = "public-read"
            r0.<init>(r3, r2, r4)
            com.alibaba.sdk.android.oss.model.ObjectPermission.PublicRead = r0
            com.alibaba.sdk.android.oss.model.ObjectPermission r0 = new com.alibaba.sdk.android.oss.model.ObjectPermission
            r3 = 2
            java.lang.String r4 = "PublicReadWrite"
            java.lang.String r5 = "public-read-write"
            r0.<init>(r4, r3, r5)
            com.alibaba.sdk.android.oss.model.ObjectPermission.PublicReadWrite = r0
            com.alibaba.sdk.android.oss.model.ObjectPermission r0 = new com.alibaba.sdk.android.oss.model.ObjectPermission
            r4 = 3
            java.lang.String r5 = "Default"
            java.lang.String r6 = "default"
            r0.<init>(r5, r4, r6)
            com.alibaba.sdk.android.oss.model.ObjectPermission.Default = r0
            com.alibaba.sdk.android.oss.model.ObjectPermission r0 = new com.alibaba.sdk.android.oss.model.ObjectPermission
            r5 = 4
            java.lang.String r6 = "Unknown"
            java.lang.String r7 = ""
            r0.<init>(r6, r5, r7)
            com.alibaba.sdk.android.oss.model.ObjectPermission.Unknown = r0
            r6 = 5
            com.alibaba.sdk.android.oss.model.ObjectPermission[] r6 = new com.alibaba.sdk.android.oss.model.ObjectPermission[r6]
            com.alibaba.sdk.android.oss.model.ObjectPermission r7 = com.alibaba.sdk.android.oss.model.ObjectPermission.Private
            r6[r1] = r7
            com.alibaba.sdk.android.oss.model.ObjectPermission r1 = com.alibaba.sdk.android.oss.model.ObjectPermission.PublicRead
            r6[r2] = r1
            com.alibaba.sdk.android.oss.model.ObjectPermission r1 = com.alibaba.sdk.android.oss.model.ObjectPermission.PublicReadWrite
            r6[r3] = r1
            com.alibaba.sdk.android.oss.model.ObjectPermission r1 = com.alibaba.sdk.android.oss.model.ObjectPermission.Default
            r6[r4] = r1
            r6[r5] = r0
            com.alibaba.sdk.android.oss.model.ObjectPermission.$VALUES = r6
            return
    }

    ObjectPermission(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.permissionString = r3
            return
    }

    public static com.alibaba.sdk.android.oss.model.ObjectPermission parsePermission(java.lang.String r5) {
            r0 = 4
            com.alibaba.sdk.android.oss.model.ObjectPermission[] r1 = new com.alibaba.sdk.android.oss.model.ObjectPermission[r0]
            com.alibaba.sdk.android.oss.model.ObjectPermission r2 = com.alibaba.sdk.android.oss.model.ObjectPermission.Private
            r3 = 0
            r1[r3] = r2
            com.alibaba.sdk.android.oss.model.ObjectPermission r2 = com.alibaba.sdk.android.oss.model.ObjectPermission.PublicRead
            r4 = 1
            r1[r4] = r2
            com.alibaba.sdk.android.oss.model.ObjectPermission r2 = com.alibaba.sdk.android.oss.model.ObjectPermission.PublicReadWrite
            r4 = 2
            r1[r4] = r2
            com.alibaba.sdk.android.oss.model.ObjectPermission r2 = com.alibaba.sdk.android.oss.model.ObjectPermission.Default
            r4 = 3
            r1[r4] = r2
        L17:
            if (r3 >= r0) goto L27
            r2 = r1[r3]
            java.lang.String r4 = r2.permissionString
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L24
            return r2
        L24:
            int r3 = r3 + 1
            goto L17
        L27:
            com.alibaba.sdk.android.oss.model.ObjectPermission r5 = com.alibaba.sdk.android.oss.model.ObjectPermission.Unknown
            return r5
    }

    public static com.alibaba.sdk.android.oss.model.ObjectPermission valueOf(java.lang.String r1) {
            java.lang.Class<com.alibaba.sdk.android.oss.model.ObjectPermission> r0 = com.alibaba.sdk.android.oss.model.ObjectPermission.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.alibaba.sdk.android.oss.model.ObjectPermission r1 = (com.alibaba.sdk.android.oss.model.ObjectPermission) r1
            return r1
    }

    public static com.alibaba.sdk.android.oss.model.ObjectPermission[] values() {
            com.alibaba.sdk.android.oss.model.ObjectPermission[] r0 = com.alibaba.sdk.android.oss.model.ObjectPermission.$VALUES
            java.lang.Object r0 = r0.clone()
            com.alibaba.sdk.android.oss.model.ObjectPermission[] r0 = (com.alibaba.sdk.android.oss.model.ObjectPermission[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.permissionString
            return r0
    }
}
