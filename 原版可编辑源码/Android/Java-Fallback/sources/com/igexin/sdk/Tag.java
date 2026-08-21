package com.igexin.sdk;

public class Tag implements java.io.Serializable {
    private java.lang.String a;

    public Tag() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean a(java.lang.String r6) {
            r5 = this;
            int r0 = r6.length()
            r1 = 1
            int r0 = r0 - r1
            r2 = 0
            r3 = r2
        L8:
            if (r0 < 0) goto L51
            char r3 = r6.charAt(r0)
            r4 = 19968(0x4e00, float:2.7981E-41)
            if (r3 < r4) goto L17
            r4 = 40869(0x9fa5, float:5.727E-41)
            if (r3 <= r4) goto L4a
        L17:
            r4 = 65
            if (r3 < r4) goto L1f
            r4 = 90
            if (r3 <= r4) goto L4a
        L1f:
            r4 = 97
            if (r3 < r4) goto L27
            r4 = 122(0x7a, float:1.71E-43)
            if (r3 <= r4) goto L4a
        L27:
            r4 = 48
            if (r3 < r4) goto L2f
            r4 = 57
            if (r3 <= r4) goto L4a
        L2f:
            r4 = 43
            if (r3 == r4) goto L4a
            r4 = 45
            if (r3 == r4) goto L4a
            r4 = 42
            if (r3 == r4) goto L4a
            r4 = 95
            if (r3 == r4) goto L4a
            r4 = 32
            if (r3 == r4) goto L4a
            r4 = 58
            if (r3 != r4) goto L48
            goto L4a
        L48:
            r3 = r2
            goto L4b
        L4a:
            r3 = r1
        L4b:
            if (r3 != 0) goto L4e
            goto L51
        L4e:
            int r0 = r0 + (-1)
            goto L8
        L51:
            return r3
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public boolean isValidTagValue(java.lang.String r1) {
            r0 = this;
            boolean r1 = r0.a(r1)
            return r1
    }

    public com.igexin.sdk.Tag setName(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return r0
    }
}
