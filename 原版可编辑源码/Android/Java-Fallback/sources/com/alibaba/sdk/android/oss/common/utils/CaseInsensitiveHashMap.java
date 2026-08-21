package com.alibaba.sdk.android.oss.common.utils;

public class CaseInsensitiveHashMap<k, v> extends java.util.HashMap<k, v> {
    public CaseInsensitiveHashMap() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public v get(java.lang.Object r2) {
            r1 = this;
            if (r2 == 0) goto L1f
            boolean r0 = r1.containsKey(r2)
            if (r0 != 0) goto L1f
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto L1f
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = r2.toLowerCase()
            boolean r0 = r1.containsKey(r2)
            if (r0 == 0) goto L1d
            java.lang.Object r2 = r1.get(r2)
            return r2
        L1d:
            r2 = 0
            return r2
        L1f:
            java.lang.Object r2 = super.get(r2)
            return r2
    }
}
