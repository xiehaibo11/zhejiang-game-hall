package cz.msebera.android.httpclient.util;

public class Asserts {
    public Asserts() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void check(boolean r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r1)
            throw r0
    }

    public static void check(boolean r2, java.lang.String r3, java.lang.Object r4) {
            if (r2 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r3 = java.lang.String.format(r3, r0)
            r2.<init>(r3)
            throw r2
    }

    public static void check(boolean r0, java.lang.String r1, java.lang.Object... r2) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = java.lang.String.format(r1, r2)
            r0.<init>(r1)
            throw r0
    }

    public static void notBlank(java.lang.CharSequence r1, java.lang.String r2) {
            boolean r1 = cz.msebera.android.httpclient.util.TextUtils.isBlank(r1)
            if (r1 != 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " is blank"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }

    public static void notEmpty(java.lang.CharSequence r1, java.lang.String r2) {
            boolean r1 = cz.msebera.android.httpclient.util.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " is empty"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }

    public static void notNull(java.lang.Object r1, java.lang.String r2) {
            if (r1 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " is null"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }
}
