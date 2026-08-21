package com.huawei.hms.hatool;

public class q0 {
    public static java.lang.String a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L1d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "checkStrParameter() Parameter verification failure! Parameter:"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "hmsSdk"
            com.huawei.hms.hatool.y.f(r2, r1)
            return r4
        L1d:
            boolean r1 = a(r1, r2, r3)
            if (r1 == 0) goto L24
            return r2
        L24:
            return r4
    }

    public static boolean a(java.lang.String r2) {
            java.lang.String r0 = "eventId"
            r1 = 256(0x100, float:3.59E-43)
            boolean r2 = a(r0, r2, r1)
            r2 = r2 ^ 1
            return r2
    }

    public static boolean a(java.lang.String r3, java.lang.String r4, int r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            java.lang.String r2 = "hmsSdk"
            if (r0 == 0) goto L1e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "checkString() Parameter is empty : "
        L10:
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.huawei.hms.hatool.y.f(r2, r3)
            return r1
        L1e:
            int r4 = r4.length()
            if (r4 <= r5) goto L2c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "checkString() Failure of parameter length check! Parameter:"
            goto L10
        L2c:
            r3 = 1
            return r3
    }

    public static boolean a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            java.lang.String r2 = "hmsSdk"
            if (r0 == 0) goto L1e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "checkString() Parameter is null! Parameter:"
        L10:
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.huawei.hms.hatool.y.f(r2, r3)
            return r1
        L1e:
            java.util.regex.Pattern r5 = java.util.regex.Pattern.compile(r5)
            java.util.regex.Matcher r4 = r5.matcher(r4)
            boolean r4 = r4.matches()
            if (r4 == 0) goto L2e
            r3 = 1
            return r3
        L2e:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "checkString() Parameter verification failure! Parameter:"
            goto L10
    }

    public static boolean a(java.util.Map<java.lang.String, java.lang.String> r5) {
            r0 = 0
            java.lang.String r1 = "hmsSdk"
            if (r5 == 0) goto L66
            int r2 = r5.size()
            if (r2 != 0) goto Lc
            goto L66
        Lc:
            int r2 = r5.size()
            r3 = 1
            if (r2 != r3) goto L29
            java.lang.String r2 = "constants"
            java.lang.Object r2 = r5.get(r2)
            if (r2 != 0) goto L23
            java.lang.String r2 = "_constants"
            java.lang.Object r2 = r5.get(r2)
            if (r2 == 0) goto L29
        L23:
            java.lang.String r5 = "checkMap() the key can't be constants or _constants"
        L25:
            com.huawei.hms.hatool.y.f(r1, r5)
            return r0
        L29:
            int r2 = r5.size()
            r4 = 2048(0x800, float:2.87E-42)
            if (r2 > r4) goto L40
            java.lang.String r2 = r5.toString()
            int r2 = r2.length()
            r4 = 204800(0x32000, float:2.86986E-40)
            if (r2 <= r4) goto L3f
            goto L40
        L3f:
            return r3
        L40:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "checkMap Map data is too big! size: "
            r2.append(r3)
            int r3 = r5.size()
            r2.append(r3)
            java.lang.String r3 = " length: "
            r2.append(r3)
            java.lang.String r5 = r5.toString()
            int r5 = r5.length()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            goto L25
        L66:
            java.lang.String r5 = "onEvent() mapValue has not data.so,The data will be empty"
            goto L25
    }
}
