package com.huawei.secure.android.common.anonymization;

public class Anonymizer {
    private static final java.lang.String a = "Anonymizer";

    static {
            return
    }

    public Anonymizer() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String maskAccountId(java.lang.String r4) {
            if (r4 == 0) goto L27
            int r0 = r4.length()
            if (r0 > 0) goto L9
            goto L27
        L9:
            int r0 = r4.length()
            r1 = 1
            if (r0 > r1) goto L13
            java.lang.String r4 = "*"
            return r4
        L13:
            int r0 = r4.length()
            r2 = 8
            r3 = 0
            if (r0 >= r2) goto L21
            java.lang.String r4 = maskCommonString(r4, r3, r1)
            return r4
        L21:
            r0 = 4
            java.lang.String r4 = maskCommonString(r4, r3, r0)
            return r4
        L27:
            java.lang.String r4 = ""
            return r4
    }

    public static java.lang.String maskBankAccount(java.lang.String r3) {
            if (r3 == 0) goto L33
            int r0 = r3.length()
            if (r0 > 0) goto L9
            goto L33
        L9:
            int r0 = r3.length()
            r1 = 2
            if (r0 > r1) goto L17
            r0 = 42
            java.lang.String r3 = com.huawei.secure.android.common.anonymization.a.a(r3, r0)
            return r3
        L17:
            int r0 = r3.length()
            r1 = 11
            r2 = 4
            if (r0 < r1) goto L2d
            int r0 = r3.length()
            r1 = 20
            if (r0 >= r1) goto L2d
            java.lang.String r3 = maskCommonString(r3, r2, r2)
            return r3
        L2d:
            r0 = 6
            java.lang.String r3 = maskCommonString(r3, r0, r2)
            return r3
        L33:
            java.lang.String r3 = ""
            return r3
    }

    public static java.lang.String maskBirthday(java.lang.String r5) {
            java.lang.String r0 = ""
            if (r5 == 0) goto L3b
            int r1 = r5.length()
            if (r1 > 0) goto Lb
            goto L3b
        Lb:
            int r1 = r5.length()
            r2 = 4
            if (r1 > r2) goto L19
            r0 = 42
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r5, r0)
            return r5
        L19:
            java.lang.String[] r5 = com.huawei.secure.android.common.anonymization.a.a(r5, r2)
            r1 = 2
            java.lang.String[] r1 = new java.lang.String[r1]
            r2 = 0
            java.lang.String r3 = com.huawei.secure.android.common.anonymization.a.a(r5, r2)
            r1[r2] = r3
            r2 = 1
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r5, r2)
            java.lang.String r3 = "0123456789"
            java.lang.String r4 = "*"
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r5, r3, r4)
            r1[r2] = r5
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r0, r1)
            return r5
        L3b:
            return r0
    }

    public static java.lang.String maskCommonString(java.lang.String r5, int r6, int r7) {
            java.lang.String r0 = ""
            if (r5 == 0) goto L4e
            int r1 = r5.length()
            if (r1 > 0) goto Lb
            goto L4e
        Lb:
            r1 = 0
            if (r6 >= 0) goto Lf
            r6 = r1
        Lf:
            if (r7 >= 0) goto L12
            r7 = r1
        L12:
            int r2 = r5.length()
            int r3 = r6 + r7
            r4 = 1
            if (r2 > r3) goto L23
            int r6 = r5.length()
            int r6 = r6 - r4
            r7 = r6
            r6 = r4
            goto L29
        L23:
            int r2 = r5.length()
            int r7 = r2 - r7
        L29:
            java.lang.String[] r5 = com.huawei.secure.android.common.anonymization.a.a(r5, r6, r7)
            r6 = 3
            java.lang.String[] r6 = new java.lang.String[r6]
            java.lang.String r7 = com.huawei.secure.android.common.anonymization.a.a(r5, r1)
            r6[r1] = r7
            java.lang.String r7 = com.huawei.secure.android.common.anonymization.a.a(r5, r4)
            r1 = 42
            java.lang.String r7 = com.huawei.secure.android.common.anonymization.a.a(r7, r1)
            r6[r4] = r7
            r7 = 2
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r5, r7)
            r6[r7] = r5
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r0, r6)
            return r5
        L4e:
            return r0
    }

    public static java.lang.String maskEmail(java.lang.String r8) {
            java.lang.String r0 = ""
            if (r8 == 0) goto L71
            int r1 = r8.length()
            if (r1 > 0) goto Lb
            goto L71
        Lb:
            int r1 = r8.length()
            r2 = 1
            if (r1 > r2) goto L15
            java.lang.String r8 = "*"
            return r8
        L15:
            r1 = 64
            int r1 = r8.indexOf(r1)
            r3 = 2
            r4 = 42
            r5 = 0
            if (r1 >= 0) goto L3c
            java.lang.String[] r8 = com.huawei.secure.android.common.anonymization.a.a(r8, r2)
            java.lang.String[] r1 = new java.lang.String[r3]
            java.lang.String r3 = com.huawei.secure.android.common.anonymization.a.a(r8, r5)
            r1[r5] = r3
            java.lang.String r8 = com.huawei.secure.android.common.anonymization.a.a(r8, r2)
            java.lang.String r8 = com.huawei.secure.android.common.anonymization.a.a(r8, r4)
            r1[r2] = r8
            java.lang.String r8 = com.huawei.secure.android.common.anonymization.a.a(r0, r1)
            return r8
        L3c:
            r6 = 46
            int r6 = r8.lastIndexOf(r6)
            int r7 = r1 + 1
            java.lang.String[] r8 = com.huawei.secure.android.common.anonymization.a.a(r8, r1, r7, r6)
            r1 = 4
            java.lang.String[] r1 = new java.lang.String[r1]
            java.lang.String r6 = com.huawei.secure.android.common.anonymization.a.a(r8, r5)
            java.lang.String r6 = com.huawei.secure.android.common.anonymization.a.a(r6, r4)
            r1[r5] = r6
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r8, r2)
            r1[r2] = r5
            java.lang.String r2 = com.huawei.secure.android.common.anonymization.a.a(r8, r3)
            java.lang.String r2 = com.huawei.secure.android.common.anonymization.a.a(r2, r4)
            r1[r3] = r2
            r2 = 3
            java.lang.String r8 = com.huawei.secure.android.common.anonymization.a.a(r8, r2)
            r1[r2] = r8
            java.lang.String r8 = com.huawei.secure.android.common.anonymization.a.a(r0, r1)
            return r8
        L71:
            return r0
    }

    public static java.lang.String maskId(java.lang.String r2) {
            if (r2 == 0) goto L15
            int r0 = r2.length()
            if (r0 > 0) goto L9
            goto L15
        L9:
            int r0 = r2.length()
            int r0 = r0 + (-12)
            r1 = 0
            java.lang.String r2 = maskCommonString(r2, r0, r1)
            return r2
        L15:
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.String maskImeiImsi(java.lang.String r2) {
            if (r2 == 0) goto L15
            int r0 = r2.length()
            if (r0 > 0) goto L9
            goto L15
        L9:
            int r0 = r2.length()
            int r0 = r0 + (-4)
            r1 = 0
            java.lang.String r2 = maskCommonString(r2, r0, r1)
            return r2
        L15:
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.String maskIpV4(java.lang.String r6) {
            java.lang.String r0 = ""
            if (r6 == 0) goto L39
            int r1 = r6.length()
            if (r1 > 0) goto Lb
            goto L39
        Lb:
            r1 = 46
            int r1 = r6.lastIndexOf(r1)
            r2 = 42
            if (r1 >= 0) goto L1a
            java.lang.String r6 = com.huawei.secure.android.common.anonymization.a.a(r6, r2)
            return r6
        L1a:
            r3 = 1
            int r1 = r1 + r3
            java.lang.String[] r6 = com.huawei.secure.android.common.anonymization.a.a(r6, r1)
            r1 = 2
            java.lang.String[] r1 = new java.lang.String[r1]
            r4 = 0
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r6, r4)
            r1[r4] = r5
            java.lang.String r6 = com.huawei.secure.android.common.anonymization.a.a(r6, r3)
            java.lang.String r6 = com.huawei.secure.android.common.anonymization.a.a(r6, r2)
            r1[r3] = r6
            java.lang.String r6 = com.huawei.secure.android.common.anonymization.a.a(r0, r1)
            return r6
        L39:
            return r0
    }

    public static java.lang.String maskIpV6(java.lang.String r8) {
            java.lang.String r0 = ""
            if (r8 == 0) goto L65
            int r1 = r8.length()
            if (r1 > 0) goto Lb
            goto L65
        Lb:
            r1 = 58
            java.lang.String[] r2 = com.huawei.secure.android.common.anonymization.a.b(r8, r1)
            int r3 = r2.length
            r4 = 42
            r5 = 1
            if (r3 > r5) goto L1c
            java.lang.String r8 = com.huawei.secure.android.common.anonymization.a.a(r8, r4)
            return r8
        L1c:
            int r3 = r2.length
            r6 = 8
            r7 = 2
            if (r3 == r6) goto L47
            int r1 = r8.indexOf(r1)
            int r1 = r1 + r5
            java.lang.String[] r8 = com.huawei.secure.android.common.anonymization.a.a(r8, r1)
            java.lang.String[] r1 = new java.lang.String[r7]
            r2 = 0
            java.lang.String r3 = com.huawei.secure.android.common.anonymization.a.a(r8, r2)
            r1[r2] = r3
            java.lang.String r8 = com.huawei.secure.android.common.anonymization.a.a(r8, r5)
            java.lang.String r2 = "0123456789ABCDEFabcdef"
            java.lang.String r3 = "*"
            java.lang.String r8 = com.huawei.secure.android.common.anonymization.a.a(r8, r2, r3)
            r1[r5] = r8
            java.lang.String r8 = com.huawei.secure.android.common.anonymization.a.a(r0, r1)
            return r8
        L47:
            r8 = r2[r7]
            java.lang.String r8 = maskLower8Bit(r8)
            r2[r7] = r8
            r8 = 3
        L50:
            int r0 = r2.length
            if (r8 >= r0) goto L5e
            r0 = r2[r8]
            java.lang.String r0 = com.huawei.secure.android.common.anonymization.a.a(r0, r4)
            r2[r8] = r0
            int r8 = r8 + 1
            goto L50
        L5e:
            java.lang.String r8 = ":"
            java.lang.String r8 = com.huawei.secure.android.common.anonymization.a.a(r8, r2)
            return r8
        L65:
            return r0
    }

    public static java.lang.String maskLower8Bit(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = ""
            if (r0 == 0) goto L10
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.Anonymizer.a
            java.lang.String r0 = "maskLower8Bit: s is null"
            android.util.Log.e(r5, r0)
            return r1
        L10:
            int r0 = r5.length()
            r2 = 42
            r3 = 2
            if (r0 > r3) goto L1e
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r5, r2)
            return r5
        L1e:
            int r0 = r5.length()
            int r0 = r0 - r3
            java.lang.String[] r5 = com.huawei.secure.android.common.anonymization.a.a(r5, r0)
            java.lang.String[] r0 = new java.lang.String[r3]
            r3 = 0
            java.lang.String r4 = com.huawei.secure.android.common.anonymization.a.a(r5, r3)
            r0[r3] = r4
            r3 = 1
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r5, r3)
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r5, r2)
            r0[r3] = r5
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r1, r0)
            return r5
    }

    public static java.lang.String maskMac(java.lang.String r6) {
            java.lang.String r0 = ""
            if (r6 == 0) goto L3a
            int r1 = r6.length()
            if (r1 > 0) goto Lb
            goto L3a
        Lb:
            r1 = 45
            r2 = 2
            int r1 = com.huawei.secure.android.common.anonymization.a.a(r6, r1, r2)
            java.lang.String r3 = "*"
            java.lang.String r4 = "0123456789ABCDEFabcdef"
            if (r1 >= 0) goto L1d
            java.lang.String r6 = com.huawei.secure.android.common.anonymization.a.a(r6, r4, r3)
            return r6
        L1d:
            java.lang.String[] r6 = com.huawei.secure.android.common.anonymization.a.a(r6, r1)
            java.lang.String[] r1 = new java.lang.String[r2]
            r2 = 0
            java.lang.String r5 = com.huawei.secure.android.common.anonymization.a.a(r6, r2)
            r1[r2] = r5
            r2 = 1
            java.lang.String r6 = com.huawei.secure.android.common.anonymization.a.a(r6, r2)
            java.lang.String r6 = com.huawei.secure.android.common.anonymization.a.a(r6, r4, r3)
            r1[r2] = r6
            java.lang.String r6 = com.huawei.secure.android.common.anonymization.a.a(r0, r1)
            return r6
        L3a:
            return r0
    }

    public static java.lang.String maskName(java.lang.String r2) {
            if (r2 == 0) goto L19
            int r0 = r2.length()
            if (r0 > 0) goto L9
            goto L19
        L9:
            int r0 = r2.length()
            r1 = 1
            if (r0 > r1) goto L13
            java.lang.String r2 = "*"
            return r2
        L13:
            r0 = 0
            java.lang.String r2 = maskCommonString(r2, r1, r0)
            return r2
        L19:
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.String maskPhone(java.lang.String r3) {
            if (r3 == 0) goto L33
            int r0 = r3.length()
            if (r0 > 0) goto L9
            goto L33
        L9:
            int r0 = r3.length()
            r1 = 2
            if (r0 > r1) goto L17
            r0 = 42
            java.lang.String r3 = com.huawei.secure.android.common.anonymization.a.a(r3, r0)
            return r3
        L17:
            int r0 = r3.length()
            r2 = 8
            if (r0 < r2) goto L2c
            int r0 = r3.length()
            r2 = 11
            if (r0 >= r2) goto L2c
            java.lang.String r3 = maskCommonString(r3, r1, r1)
            return r3
        L2c:
            r0 = 3
            r1 = 4
            java.lang.String r3 = maskCommonString(r3, r0, r1)
            return r3
        L33:
            java.lang.String r3 = ""
            return r3
    }
}
