package android.support.v4.os;

final class LocaleHelper {
    private LocaleHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.util.Locale forLanguageTag(java.lang.String r6) {
            java.lang.String r0 = "-"
            boolean r1 = r6.contains(r0)
            r2 = -1
            r3 = 2
            r4 = 0
            r5 = 1
            if (r1 == 0) goto L37
            java.lang.String[] r0 = r6.split(r0, r2)
            int r1 = r0.length
            if (r1 <= r3) goto L1f
            java.util.Locale r6 = new java.util.Locale
            r1 = r0[r4]
            r2 = r0[r5]
            r0 = r0[r3]
            r6.<init>(r1, r2, r0)
            return r6
        L1f:
            int r1 = r0.length
            if (r1 <= r5) goto L2c
            java.util.Locale r6 = new java.util.Locale
            r1 = r0[r4]
            r0 = r0[r5]
            r6.<init>(r1, r0)
            return r6
        L2c:
            int r1 = r0.length
            if (r1 != r5) goto L6a
            java.util.Locale r6 = new java.util.Locale
            r0 = r0[r4]
            r6.<init>(r0)
            return r6
        L37:
            java.lang.String r0 = "_"
            boolean r1 = r6.contains(r0)
            if (r1 == 0) goto L86
            java.lang.String[] r0 = r6.split(r0, r2)
            int r1 = r0.length
            if (r1 <= r3) goto L52
            java.util.Locale r6 = new java.util.Locale
            r1 = r0[r4]
            r2 = r0[r5]
            r0 = r0[r3]
            r6.<init>(r1, r2, r0)
            return r6
        L52:
            int r1 = r0.length
            if (r1 <= r5) goto L5f
            java.util.Locale r6 = new java.util.Locale
            r1 = r0[r4]
            r0 = r0[r5]
            r6.<init>(r1, r0)
            return r6
        L5f:
            int r1 = r0.length
            if (r1 != r5) goto L6a
            java.util.Locale r6 = new java.util.Locale
            r0 = r0[r4]
            r6.<init>(r0)
            return r6
        L6a:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Can not parse language tag: ["
            r1.append(r2)
            r1.append(r6)
            java.lang.String r6 = "]"
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
        L86:
            java.util.Locale r0 = new java.util.Locale
            r0.<init>(r6)
            return r0
    }

    static java.lang.String toLanguageTag(java.util.Locale r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getLanguage()
            r0.append(r1)
            java.lang.String r1 = r2.getCountry()
            if (r1 == 0) goto L24
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L24
            java.lang.String r1 = "-"
            r0.append(r1)
            java.lang.String r2 = r2.getCountry()
            r0.append(r2)
        L24:
            java.lang.String r2 = r0.toString()
            return r2
    }
}
