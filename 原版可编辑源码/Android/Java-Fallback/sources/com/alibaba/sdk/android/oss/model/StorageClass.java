package com.alibaba.sdk.android.oss.model;

public enum StorageClass extends java.lang.Enum<com.alibaba.sdk.android.oss.model.StorageClass> {
    private static final com.alibaba.sdk.android.oss.model.StorageClass[] $VALUES = null;
    public static final com.alibaba.sdk.android.oss.model.StorageClass Archive = null;
    public static final com.alibaba.sdk.android.oss.model.StorageClass IA = null;
    public static final com.alibaba.sdk.android.oss.model.StorageClass Standard = null;
    public static final com.alibaba.sdk.android.oss.model.StorageClass Unknown = null;
    private java.lang.String storageClassString;

    static {
            com.alibaba.sdk.android.oss.model.StorageClass r0 = new com.alibaba.sdk.android.oss.model.StorageClass
            r1 = 0
            java.lang.String r2 = "Standard"
            r0.<init>(r2, r1, r2)
            com.alibaba.sdk.android.oss.model.StorageClass.Standard = r0
            com.alibaba.sdk.android.oss.model.StorageClass r0 = new com.alibaba.sdk.android.oss.model.StorageClass
            r2 = 1
            java.lang.String r3 = "IA"
            r0.<init>(r3, r2, r3)
            com.alibaba.sdk.android.oss.model.StorageClass.IA = r0
            com.alibaba.sdk.android.oss.model.StorageClass r0 = new com.alibaba.sdk.android.oss.model.StorageClass
            r3 = 2
            java.lang.String r4 = "Archive"
            r0.<init>(r4, r3, r4)
            com.alibaba.sdk.android.oss.model.StorageClass.Archive = r0
            com.alibaba.sdk.android.oss.model.StorageClass r0 = new com.alibaba.sdk.android.oss.model.StorageClass
            r4 = 3
            java.lang.String r5 = "Unknown"
            r0.<init>(r5, r4, r5)
            com.alibaba.sdk.android.oss.model.StorageClass.Unknown = r0
            r5 = 4
            com.alibaba.sdk.android.oss.model.StorageClass[] r5 = new com.alibaba.sdk.android.oss.model.StorageClass[r5]
            com.alibaba.sdk.android.oss.model.StorageClass r6 = com.alibaba.sdk.android.oss.model.StorageClass.Standard
            r5[r1] = r6
            com.alibaba.sdk.android.oss.model.StorageClass r1 = com.alibaba.sdk.android.oss.model.StorageClass.IA
            r5[r2] = r1
            com.alibaba.sdk.android.oss.model.StorageClass r1 = com.alibaba.sdk.android.oss.model.StorageClass.Archive
            r5[r3] = r1
            r5[r4] = r0
            com.alibaba.sdk.android.oss.model.StorageClass.$VALUES = r5
            return
    }

    StorageClass(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.storageClassString = r3
            return
    }

    public static com.alibaba.sdk.android.oss.model.StorageClass parse(java.lang.String r5) {
            com.alibaba.sdk.android.oss.model.StorageClass[] r0 = values()
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L18
            r3 = r0[r2]
            java.lang.String r4 = r3.toString()
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L15
            return r3
        L15:
            int r2 = r2 + 1
            goto L6
        L18:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unable to parse "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            goto L30
        L2f:
            throw r0
        L30:
            goto L2f
    }

    public static com.alibaba.sdk.android.oss.model.StorageClass valueOf(java.lang.String r1) {
            java.lang.Class<com.alibaba.sdk.android.oss.model.StorageClass> r0 = com.alibaba.sdk.android.oss.model.StorageClass.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.alibaba.sdk.android.oss.model.StorageClass r1 = (com.alibaba.sdk.android.oss.model.StorageClass) r1
            return r1
    }

    public static com.alibaba.sdk.android.oss.model.StorageClass[] values() {
            com.alibaba.sdk.android.oss.model.StorageClass[] r0 = com.alibaba.sdk.android.oss.model.StorageClass.$VALUES
            java.lang.Object r0 = r0.clone()
            com.alibaba.sdk.android.oss.model.StorageClass[] r0 = (com.alibaba.sdk.android.oss.model.StorageClass[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.storageClassString
            return r0
    }
}
