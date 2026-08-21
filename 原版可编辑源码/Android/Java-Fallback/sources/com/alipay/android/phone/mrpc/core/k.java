package com.alipay.android.phone.mrpc.core;

public final class k {
    public static final java.util.regex.Pattern a = null;
    public static final java.util.regex.Pattern b = null;

    public static class a {
        public int a;
        public int b;
        public int c;

        public a(int r1, int r2, int r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }
    }

    static {
            java.lang.String r0 = "([0-9]{1,2})[- ]([A-Za-z]{3,9})[- ]([0-9]{2,4})[ ]([0-9]{1,2}:[0-9][0-9]:[0-9][0-9])"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.alipay.android.phone.mrpc.core.k.a = r0
            java.lang.String r0 = "[ ]([A-Za-z]{3,9})[ ]+([0-9]{1,2})[ ]([0-9]{1,2}:[0-9][0-9]:[0-9][0-9])[ ]([0-9]{2,4})"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.alipay.android.phone.mrpc.core.k.b = r0
            return
    }

    public static long a(java.lang.String r14) {
            java.util.regex.Pattern r0 = com.alipay.android.phone.mrpc.core.k.a
            java.util.regex.Matcher r0 = r0.matcher(r14)
            boolean r1 = r0.find()
            r2 = 4
            r3 = 3
            r4 = 2
            r5 = 1
            if (r1 == 0) goto L31
            java.lang.String r14 = r0.group(r5)
            int r14 = b(r14)
            java.lang.String r1 = r0.group(r4)
            int r1 = c(r1)
            java.lang.String r3 = r0.group(r3)
            int r3 = d(r3)
            java.lang.String r0 = r0.group(r2)
            com.alipay.android.phone.mrpc.core.k$a r0 = e(r0)
            goto L61
        L31:
            java.util.regex.Pattern r0 = com.alipay.android.phone.mrpc.core.k.b
            java.util.regex.Matcher r14 = r0.matcher(r14)
            boolean r0 = r14.find()
            if (r0 == 0) goto L84
            java.lang.String r0 = r14.group(r5)
            int r1 = c(r0)
            java.lang.String r0 = r14.group(r4)
            int r0 = b(r0)
            java.lang.String r3 = r14.group(r3)
            com.alipay.android.phone.mrpc.core.k$a r3 = e(r3)
            java.lang.String r14 = r14.group(r2)
            int r14 = d(r14)
            r13 = r3
            r3 = r14
            r14 = r0
            r0 = r13
        L61:
            r2 = 0
            r4 = 2038(0x7f6, float:2.856E-42)
            if (r3 < r4) goto L6b
            r10 = 1
            r11 = 0
            r12 = 2038(0x7f6, float:2.856E-42)
            goto L6e
        L6b:
            r10 = r14
            r11 = r1
            r12 = r3
        L6e:
            android.text.format.Time r14 = new android.text.format.Time
            java.lang.String r1 = "UTC"
            r14.<init>(r1)
            int r7 = r0.c
            int r8 = r0.b
            int r9 = r0.a
            r6 = r14
            r6.set(r7, r8, r9, r10, r11, r12)
            long r0 = r14.toMillis(r2)
            return r0
        L84:
            java.lang.IllegalArgumentException r14 = new java.lang.IllegalArgumentException
            r14.<init>()
            throw r14
    }

    public static int b(java.lang.String r3) {
            int r0 = r3.length()
            r1 = 0
            r2 = 2
            if (r0 != r2) goto L19
            char r0 = r3.charAt(r1)
            int r0 = r0 + (-48)
            int r0 = r0 * 10
            r1 = 1
            char r3 = r3.charAt(r1)
            int r3 = r3 + (-48)
            int r0 = r0 + r3
            return r0
        L19:
            char r3 = r3.charAt(r1)
            int r3 = r3 + (-48)
            return r3
    }

    public static int c(java.lang.String r5) {
            r0 = 0
            char r1 = r5.charAt(r0)
            char r1 = java.lang.Character.toLowerCase(r1)
            r2 = 1
            char r3 = r5.charAt(r2)
            char r3 = java.lang.Character.toLowerCase(r3)
            int r1 = r1 + r3
            r3 = 2
            char r5 = r5.charAt(r3)
            char r5 = java.lang.Character.toLowerCase(r5)
            int r1 = r1 + r5
            int r1 = r1 + (-291)
            r5 = 9
            if (r1 == r5) goto L5d
            r4 = 10
            if (r1 == r4) goto L5c
            r2 = 22
            if (r1 == r2) goto L5b
            r0 = 26
            if (r1 == r0) goto L59
            r0 = 29
            if (r1 == r0) goto L58
            r0 = 32
            if (r1 == r0) goto L56
            r0 = 40
            if (r1 == r0) goto L54
            r0 = 42
            if (r1 == r0) goto L52
            r0 = 48
            if (r1 == r0) goto L51
            switch(r1) {
                case 35: goto L50;
                case 36: goto L4f;
                case 37: goto L4c;
                default: goto L46;
            }
        L46:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            r5.<init>()
            throw r5
        L4c:
            r5 = 8
            return r5
        L4f:
            r5 = 4
        L50:
            return r5
        L51:
            return r4
        L52:
            r5 = 5
            return r5
        L54:
            r5 = 6
            return r5
        L56:
            r5 = 3
            return r5
        L58:
            return r3
        L59:
            r5 = 7
            return r5
        L5b:
            return r0
        L5c:
            return r2
        L5d:
            r5 = 11
            return r5
    }

    public static int d(java.lang.String r6) {
            int r0 = r6.length()
            r1 = 1
            r2 = 0
            r3 = 2
            if (r0 != r3) goto L22
            char r0 = r6.charAt(r2)
            int r0 = r0 + (-48)
            int r0 = r0 * 10
            char r6 = r6.charAt(r1)
            int r6 = r6 + (-48)
            int r0 = r0 + r6
            r6 = 70
            if (r0 < r6) goto L1f
            int r0 = r0 + 1900
            return r0
        L1f:
            int r0 = r0 + 2000
            return r0
        L22:
            int r0 = r6.length()
            r4 = 3
            if (r0 != r4) goto L44
            char r0 = r6.charAt(r2)
            int r0 = r0 + (-48)
            int r0 = r0 * 100
            char r1 = r6.charAt(r1)
            int r1 = r1 + (-48)
            int r1 = r1 * 10
            int r0 = r0 + r1
            char r6 = r6.charAt(r3)
            int r6 = r6 + (-48)
            int r0 = r0 + r6
            int r0 = r0 + 1900
            return r0
        L44:
            int r0 = r6.length()
            r5 = 4
            if (r0 != r5) goto L6d
            char r0 = r6.charAt(r2)
            int r0 = r0 + (-48)
            int r0 = r0 * 1000
            char r1 = r6.charAt(r1)
            int r1 = r1 + (-48)
            int r1 = r1 * 100
            int r0 = r0 + r1
            char r1 = r6.charAt(r3)
            int r1 = r1 + (-48)
            int r1 = r1 * 10
            int r0 = r0 + r1
            char r6 = r6.charAt(r4)
            int r6 = r6 + (-48)
            int r0 = r0 + r6
            return r0
        L6d:
            r6 = 1970(0x7b2, float:2.76E-42)
            return r6
    }

    public static com.alipay.android.phone.mrpc.core.k.a e(java.lang.String r5) {
            r0 = 0
            char r0 = r5.charAt(r0)
            int r0 = r0 + (-48)
            r1 = 1
            char r2 = r5.charAt(r1)
            r3 = 58
            if (r2 == r3) goto L1b
            int r0 = r0 * 10
            r2 = 2
            char r3 = r5.charAt(r1)
            int r3 = r3 + (-48)
            int r0 = r0 + r3
            goto L1c
        L1b:
            r2 = 1
        L1c:
            int r2 = r2 + r1
            int r3 = r2 + 1
            char r2 = r5.charAt(r2)
            int r2 = r2 + (-48)
            int r2 = r2 * 10
            int r4 = r3 + 1
            char r3 = r5.charAt(r3)
            int r3 = r3 + (-48)
            int r2 = r2 + r3
            int r4 = r4 + r1
            int r1 = r4 + 1
            char r3 = r5.charAt(r4)
            int r3 = r3 + (-48)
            int r3 = r3 * 10
            char r5 = r5.charAt(r1)
            int r5 = r5 + (-48)
            int r3 = r3 + r5
            com.alipay.android.phone.mrpc.core.k$a r5 = new com.alipay.android.phone.mrpc.core.k$a
            r5.<init>(r0, r2, r3)
            return r5
    }
}
