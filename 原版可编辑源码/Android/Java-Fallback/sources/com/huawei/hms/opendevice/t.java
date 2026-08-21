package com.huawei.hms.opendevice;

public class t {
    public static boolean a(java.lang.String... r4) {
            int r0 = r4.length
            r1 = 0
            r2 = r1
        L3:
            if (r2 >= r0) goto L11
            r3 = r4[r2]
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto Le
            return r1
        Le:
            int r2 = r2 + 1
            goto L3
        L11:
            r4 = 1
            return r4
    }
}
