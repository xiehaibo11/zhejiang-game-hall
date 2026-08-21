package com.ss.android.socialbase.downloader.impls;

public class DefaultIdGenerator implements com.ss.android.socialbase.downloader.downloader.IDownloadIdGenerator {
    public DefaultIdGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int generate(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 != 0) goto L2c
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Le
            goto L2c
        Le:
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r0[r1] = r3
            r3 = 1
            r0[r3] = r4
            java.lang.String r3 = "%s_%s"
            java.lang.String r3 = java.lang.String.format(r3, r0)
            java.lang.String r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.md5Hex(r3)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L27
            return r1
        L27:
            int r3 = r3.hashCode()
            return r3
        L2c:
            return r1
    }
}
