package com.xiaomi.mipush.sdk;

class x {
    int a;
    java.lang.String a;

    public x() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            java.lang.String r0 = ""
            r1.a = r0
            return
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            if (r2 == 0) goto L1c
            boolean r0 = r2 instanceof com.xiaomi.mipush.sdk.x
            if (r0 == 0) goto L1c
            com.xiaomi.mipush.sdk.x r2 = (com.xiaomi.mipush.sdk.x) r2
            java.lang.String r0 = r2.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1c
            java.lang.String r2 = r2.a
            java.lang.String r0 = r1.a
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L1c
            r2 = 1
            return r2
        L1c:
            r2 = 0
            return r2
    }
}
