package com.huawei.hms.common.size;

public class Size {
    private final int height;
    private final int width;

    public Size(int r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.width = r1
            r0.height = r2
            return
    }

    public static com.huawei.hms.common.size.Size parseSize(java.lang.String r3) {
            java.lang.String r0 = "x"
            int r0 = r3.indexOf(r0)     // Catch: java.lang.Exception -> L27
            if (r0 >= 0) goto Le
            java.lang.String r0 = "*"
            int r0 = r3.indexOf(r0)     // Catch: java.lang.Exception -> L27
        Le:
            com.huawei.hms.common.size.Size r1 = new com.huawei.hms.common.size.Size     // Catch: java.lang.Exception -> L27
            r2 = 0
            java.lang.String r2 = r3.substring(r2, r0)     // Catch: java.lang.Exception -> L27
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L27
            int r0 = r0 + 1
            java.lang.String r3 = r3.substring(r0)     // Catch: java.lang.Exception -> L27
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> L27
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L27
            return r1
        L27:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Size parses failed"
            r3.<init>(r0)
            throw r3
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            r1 = 1
            if (r4 != r5) goto L8
            return r1
        L8:
            boolean r2 = r5 instanceof com.huawei.hms.common.size.Size
            if (r2 == 0) goto L1b
            com.huawei.hms.common.size.Size r5 = (com.huawei.hms.common.size.Size) r5
            int r2 = r4.width
            int r3 = r5.width
            if (r2 != r3) goto L1b
            int r2 = r4.height
            int r5 = r5.height
            if (r2 != r5) goto L1b
            r0 = r1
        L1b:
            return r0
    }

    public final int getHeight() {
            r1 = this;
            int r0 = r1.height
            return r0
    }

    public final int getWidth() {
            r1 = this;
            int r0 = r1.width
            return r0
    }

    public final java.lang.String toString() {
            r4 = this;
            int r0 = r4.width
            int r1 = r4.height
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Width is "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = " Height is "
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
            return r0
    }
}
