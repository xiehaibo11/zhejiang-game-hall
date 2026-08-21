package com.bianfeng.privategetui;

class YmnGetuiUtils {
    YmnGetuiUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.sdk.Tag[] getTags(java.lang.String r4) {
            java.lang.String r0 = "&"
            java.lang.String[] r4 = r4.split(r0)
            int r0 = r4.length
            com.igexin.sdk.Tag[] r0 = new com.igexin.sdk.Tag[r0]
            r1 = 0
        La:
            int r2 = r4.length
            if (r1 >= r2) goto L1c
            com.igexin.sdk.Tag r2 = new com.igexin.sdk.Tag
            r2.<init>()
            r3 = r4[r1]
            r2.setName(r3)
            r0[r1] = r2
            int r1 = r1 + 1
            goto La
        L1c:
            return r0
    }
}
