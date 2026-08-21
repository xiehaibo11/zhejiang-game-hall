package com.alibaba.sdk.android.oss.model;

public enum CannedAccessControlList extends java.lang.Enum<com.alibaba.sdk.android.oss.model.CannedAccessControlList> {
    private static final com.alibaba.sdk.android.oss.model.CannedAccessControlList[] $VALUES = null;
    public static final com.alibaba.sdk.android.oss.model.CannedAccessControlList Default = null;
    public static final com.alibaba.sdk.android.oss.model.CannedAccessControlList Private = null;
    public static final com.alibaba.sdk.android.oss.model.CannedAccessControlList PublicRead = null;
    public static final com.alibaba.sdk.android.oss.model.CannedAccessControlList PublicReadWrite = null;
    private java.lang.String ACLString;

    static {
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r0 = new com.alibaba.sdk.android.oss.model.CannedAccessControlList
            r1 = 0
            java.lang.String r2 = "Private"
            java.lang.String r3 = "private"
            r0.<init>(r2, r1, r3)
            com.alibaba.sdk.android.oss.model.CannedAccessControlList.Private = r0
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r0 = new com.alibaba.sdk.android.oss.model.CannedAccessControlList
            r2 = 1
            java.lang.String r3 = "PublicRead"
            java.lang.String r4 = "public-read"
            r0.<init>(r3, r2, r4)
            com.alibaba.sdk.android.oss.model.CannedAccessControlList.PublicRead = r0
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r0 = new com.alibaba.sdk.android.oss.model.CannedAccessControlList
            r3 = 2
            java.lang.String r4 = "PublicReadWrite"
            java.lang.String r5 = "public-read-write"
            r0.<init>(r4, r3, r5)
            com.alibaba.sdk.android.oss.model.CannedAccessControlList.PublicReadWrite = r0
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r0 = new com.alibaba.sdk.android.oss.model.CannedAccessControlList
            r4 = 3
            java.lang.String r5 = "Default"
            java.lang.String r6 = "default"
            r0.<init>(r5, r4, r6)
            com.alibaba.sdk.android.oss.model.CannedAccessControlList.Default = r0
            r5 = 4
            com.alibaba.sdk.android.oss.model.CannedAccessControlList[] r5 = new com.alibaba.sdk.android.oss.model.CannedAccessControlList[r5]
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r6 = com.alibaba.sdk.android.oss.model.CannedAccessControlList.Private
            r5[r1] = r6
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r1 = com.alibaba.sdk.android.oss.model.CannedAccessControlList.PublicRead
            r5[r2] = r1
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r1 = com.alibaba.sdk.android.oss.model.CannedAccessControlList.PublicReadWrite
            r5[r3] = r1
            r5[r4] = r0
            com.alibaba.sdk.android.oss.model.CannedAccessControlList.$VALUES = r5
            return
    }

    CannedAccessControlList(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.ACLString = r3
            return
    }

    public static com.alibaba.sdk.android.oss.model.CannedAccessControlList parseACL(java.lang.String r5) {
            com.alibaba.sdk.android.oss.model.CannedAccessControlList[] r0 = values()
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L18
            r3 = r0[r2]
            java.lang.String r4 = r3.toString()
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L15
            goto L19
        L15:
            int r2 = r2 + 1
            goto L6
        L18:
            r3 = 0
        L19:
            return r3
    }

    public static com.alibaba.sdk.android.oss.model.CannedAccessControlList valueOf(java.lang.String r1) {
            java.lang.Class<com.alibaba.sdk.android.oss.model.CannedAccessControlList> r0 = com.alibaba.sdk.android.oss.model.CannedAccessControlList.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r1 = (com.alibaba.sdk.android.oss.model.CannedAccessControlList) r1
            return r1
    }

    public static com.alibaba.sdk.android.oss.model.CannedAccessControlList[] values() {
            com.alibaba.sdk.android.oss.model.CannedAccessControlList[] r0 = com.alibaba.sdk.android.oss.model.CannedAccessControlList.$VALUES
            java.lang.Object r0 = r0.clone()
            com.alibaba.sdk.android.oss.model.CannedAccessControlList[] r0 = (com.alibaba.sdk.android.oss.model.CannedAccessControlList[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.ACLString
            return r0
    }
}
