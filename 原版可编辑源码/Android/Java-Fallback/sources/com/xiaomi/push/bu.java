package com.xiaomi.push;

final class bu implements java.io.FilenameFilter {
    bu() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean accept(java.io.File r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L14
            java.lang.String r1 = r2.toLowerCase()
            java.lang.String r2 = ".lock"
            boolean r1 = r1.endsWith(r2)
            if (r1 != 0) goto L14
            r1 = 1
            return r1
        L14:
            r1 = 0
            return r1
    }
}
