package com.huawei.hms.utils;

public class StringUtil {
    public StringUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String addByteForNum(java.lang.String r2, int r3, char r4) {
            int r0 = r2.length()
            if (r0 != r3) goto L7
            return r2
        L7:
            if (r0 <= r3) goto Lf
            int r0 = r0 - r3
            java.lang.String r2 = r2.substring(r0)
            return r2
        Lf:
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
        L14:
            if (r0 >= r3) goto L1c
            r1.append(r4)
            int r0 = r0 + 1
            goto L14
        L1c:
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            return r2
    }

    public static boolean checkVersion(java.lang.String r1) {
            java.lang.String r0 = "(^([0-9]{1,2}\\.){2}[0-9]{1,2}$)|(^([0-9]{1,2}\\.){3}[0-9]{1,3}$)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            java.util.regex.Matcher r1 = r0.matcher(r1)
            boolean r1 = r1.find()
            return r1
    }

    public static int convertVersion2Integer(java.lang.String r4) {
            boolean r0 = checkVersion(r4)
            r1 = 0
            if (r0 == 0) goto L3e
            java.lang.String r0 = "\\."
            java.lang.String[] r4 = r4.split(r0)
            int r0 = r4.length
            r2 = 3
            if (r0 >= r2) goto L12
            return r1
        L12:
            r0 = r4[r1]
            int r0 = java.lang.Integer.parseInt(r0)
            r1 = 10000000(0x989680, float:1.4012985E-38)
            int r0 = r0 * r1
            r1 = 1
            r1 = r4[r1]
            int r1 = java.lang.Integer.parseInt(r1)
            r3 = 100000(0x186a0, float:1.4013E-40)
            int r1 = r1 * r3
            int r0 = r0 + r1
            r1 = 2
            r1 = r4[r1]
            int r1 = java.lang.Integer.parseInt(r1)
            int r1 = r1 * 1000
            int r0 = r0 + r1
            int r1 = r4.length
            r3 = 4
            if (r1 != r3) goto L3d
            r4 = r4[r2]
            int r4 = java.lang.Integer.parseInt(r4)
            int r0 = r0 + r4
        L3d:
            return r0
        L3e:
            return r1
    }

    public static java.lang.String objDesc(java.lang.Object r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = "null"
            goto L29
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            r1 = 64
            r0.append(r1)
            int r2 = r2.hashCode()
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
        L29:
            return r2
    }
}
