package android.support.v4.text;

public final class TextUtilsCompat {
    private static final java.lang.String ARAB_SCRIPT_SUBTAG = "Arab";
    private static final java.lang.String HEBR_SCRIPT_SUBTAG = "Hebr";
    private static final java.util.Locale ROOT = null;

    static {
            java.util.Locale r0 = new java.util.Locale
            java.lang.String r1 = ""
            r0.<init>(r1, r1)
            android.support.v4.text.TextUtilsCompat.ROOT = r0
            return
    }

    private TextUtilsCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int getLayoutDirectionFromFirstChar(java.util.Locale r3) {
            java.lang.String r3 = r3.getDisplayName(r3)
            r0 = 0
            char r3 = r3.charAt(r0)
            byte r3 = java.lang.Character.getDirectionality(r3)
            r1 = 1
            if (r3 == r1) goto L14
            r2 = 2
            if (r3 == r2) goto L14
            return r0
        L14:
            return r1
    }

    public static int getLayoutDirectionFromLocale(java.util.Locale r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            int r2 = android.text.TextUtils.getLayoutDirectionFromLocale(r2)
            return r2
        Lb:
            if (r2 == 0) goto L32
            java.util.Locale r0 = android.support.v4.text.TextUtilsCompat.ROOT
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L32
            java.lang.String r0 = android.support.v4.text.ICUCompat.maximizeAndGetScript(r2)
            if (r0 != 0) goto L20
            int r2 = getLayoutDirectionFromFirstChar(r2)
            return r2
        L20:
            java.lang.String r2 = "Arab"
            boolean r2 = r0.equalsIgnoreCase(r2)
            if (r2 != 0) goto L30
            java.lang.String r2 = "Hebr"
            boolean r2 = r0.equalsIgnoreCase(r2)
            if (r2 == 0) goto L32
        L30:
            r2 = 1
            return r2
        L32:
            r2 = 0
            return r2
    }

    public static java.lang.String htmlEncode(java.lang.String r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto Lb
            java.lang.String r4 = android.text.TextUtils.htmlEncode(r4)
            return r4
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        L11:
            int r2 = r4.length()
            if (r1 >= r2) goto L53
            char r2 = r4.charAt(r1)
            r3 = 34
            if (r2 == r3) goto L4b
            r3 = 60
            if (r2 == r3) goto L45
            r3 = 62
            if (r2 == r3) goto L3f
            r3 = 38
            if (r2 == r3) goto L39
            r3 = 39
            if (r2 == r3) goto L33
            r0.append(r2)
            goto L50
        L33:
            java.lang.String r2 = "&#39;"
            r0.append(r2)
            goto L50
        L39:
            java.lang.String r2 = "&amp;"
            r0.append(r2)
            goto L50
        L3f:
            java.lang.String r2 = "&gt;"
            r0.append(r2)
            goto L50
        L45:
            java.lang.String r2 = "&lt;"
            r0.append(r2)
            goto L50
        L4b:
            java.lang.String r2 = "&quot;"
            r0.append(r2)
        L50:
            int r1 = r1 + 1
            goto L11
        L53:
            java.lang.String r4 = r0.toString()
            return r4
    }
}
