package com.bianfeng.addpermission.common;

public class ConstantsUtils {
    public ConstantsUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.ArrayList<java.lang.String> toPermissionList(java.lang.String r6) {
            java.lang.String r0 = ";"
            java.lang.String[] r6 = r6.split(r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.bianfeng.addpermission.common.Constants r1 = new com.bianfeng.addpermission.common.Constants
            r1.<init>()
            java.util.ArrayList r1 = r1.getPermissionStr()
            int r2 = r6.length
            r3 = 0
        L16:
            if (r3 >= r2) goto L3c
            r4 = r6[r3]
            boolean r5 = r4.isEmpty()
            if (r5 == 0) goto L21
            goto L39
        L21:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            int r4 = r4.intValue()
            java.lang.Object r4 = r1.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 == 0) goto L36
            goto L39
        L36:
            r0.add(r4)
        L39:
            int r3 = r3 + 1
            goto L16
        L3c:
            return r0
    }
}
