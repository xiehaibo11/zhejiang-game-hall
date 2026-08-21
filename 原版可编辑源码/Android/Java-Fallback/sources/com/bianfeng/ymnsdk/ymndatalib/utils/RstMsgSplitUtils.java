package com.bianfeng.ymnsdk.ymndatalib.utils;

public class RstMsgSplitUtils {
    public RstMsgSplitUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String[] split(java.lang.String r8) {
            r0 = 2
            java.lang.String[] r0 = new java.lang.String[r0]
            boolean r1 = android.text.TextUtils.isEmpty(r8)
            java.lang.String r2 = "0"
            r3 = 0
            java.lang.String r4 = ""
            r5 = 1
            if (r1 == 0) goto L14
            r0[r3] = r2
            r0[r5] = r4
            return r0
        L14:
            java.lang.String r1 = "\\|"
            boolean r6 = r8.contains(r1)
            if (r6 != 0) goto L31
            r0[r3] = r2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r8)
            r1.append(r4)
            java.lang.String r8 = r1.toString()
            r0[r5] = r8
            return r0
        L31:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String[] r8 = r8.split(r1)
            int r1 = r8.length
            int r1 = r1 - r5
            r6 = 0
        L3d:
            if (r1 < 0) goto L54
            r7 = r8[r1]     // Catch: java.lang.Exception -> L46
            int r6 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Exception -> L46
            goto L51
        L46:
            r7 = move-exception
            java.lang.String r7 = "|"
            r2.append(r7)
            r7 = r8[r1]
            r2.append(r7)
        L51:
            int r1 = r1 + (-1)
            goto L3d
        L54:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r6)
            r8.append(r4)
            java.lang.String r8 = r8.toString()
            r0[r3] = r8
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7b
            r8.<init>()     // Catch: java.lang.Exception -> L7b
            java.lang.String r1 = r2.substring(r5)     // Catch: java.lang.Exception -> L7b
            r8.append(r1)     // Catch: java.lang.Exception -> L7b
            r8.append(r4)     // Catch: java.lang.Exception -> L7b
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L7b
            r0[r5] = r8     // Catch: java.lang.Exception -> L7b
            goto L91
        L7b:
            r8 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = r2.toString()
            r8.append(r1)
            r8.append(r4)
            java.lang.String r8 = r8.toString()
            r0[r5] = r8
        L91:
            return r0
    }
}
