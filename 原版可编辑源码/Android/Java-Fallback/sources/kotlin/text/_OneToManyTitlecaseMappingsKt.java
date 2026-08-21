package kotlin.text;

@kotlin.Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u000e\n\u0002\u0010\f\n\u0000\u001a\f\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0000¨\u0006\u0003"}, d2 = {"titlecaseImpl", "", "", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class _OneToManyTitlecaseMappingsKt {
    public static final java.lang.String titlecaseImpl(char r3) {
            java.lang.String r0 = java.lang.String.valueOf(r3)
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r0 = r0.toUpperCase(r1)
            java.lang.String r1 = "this as java.lang.String).toUpperCase(Locale.ROOT)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            int r1 = r0.length()
            r2 = 1
            if (r1 <= r2) goto L44
            r1 = 329(0x149, float:4.61E-43)
            if (r3 != r1) goto L1b
            goto L43
        L1b:
            r3 = 0
            char r3 = r0.charAt(r3)
            java.lang.String r0 = r0.substring(r2)
            java.lang.String r1 = "this as java.lang.String).substring(startIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r0 = r0.toLowerCase(r1)
            java.lang.String r1 = "this as java.lang.String).toLowerCase(Locale.ROOT)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
        L43:
            return r0
        L44:
            char r3 = java.lang.Character.toTitleCase(r3)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            return r3
    }
}
