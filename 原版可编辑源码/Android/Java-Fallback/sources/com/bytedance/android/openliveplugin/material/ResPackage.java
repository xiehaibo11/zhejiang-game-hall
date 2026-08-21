package com.bytedance.android.openliveplugin.material;

public class ResPackage {
    public java.lang.String resUrl;
    public long statusCode;
    public long version;

    public ResPackage() {
            r0 = this;
            r0.<init>()
            return
    }

    public boolean isLegal() {
            r4 = this;
            long r0 = r4.statusCode
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L12
            java.lang.String r0 = r4.resUrl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }
}
