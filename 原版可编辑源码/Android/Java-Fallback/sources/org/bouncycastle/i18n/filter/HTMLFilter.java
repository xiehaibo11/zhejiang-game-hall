package org.bouncycastle.i18n.filter;

public class HTMLFilter implements org.bouncycastle.i18n.filter.Filter {
    public HTMLFilter() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String doFilter(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>(r4)
            r4 = 0
        L6:
            int r1 = r0.length()
            if (r4 >= r1) goto L73
            char r1 = r0.charAt(r4)
            r2 = 34
            if (r1 == r2) goto L69
            r2 = 35
            if (r1 == r2) goto L64
            r2 = 43
            if (r1 == r2) goto L5f
            r2 = 45
            if (r1 == r2) goto L5a
            r2 = 62
            if (r1 == r2) goto L55
            r2 = 59
            if (r1 == r2) goto L50
            r2 = 60
            if (r1 == r2) goto L4b
            switch(r1) {
                case 37: goto L46;
                case 38: goto L41;
                case 39: goto L3c;
                case 40: goto L37;
                case 41: goto L32;
                default: goto L2f;
            }
        L2f:
            int r4 = r4 + (-3)
            goto L70
        L32:
            int r1 = r4 + 1
            java.lang.String r2 = "&#41"
            goto L6d
        L37:
            int r1 = r4 + 1
            java.lang.String r2 = "&#40"
            goto L6d
        L3c:
            int r1 = r4 + 1
            java.lang.String r2 = "&#39"
            goto L6d
        L41:
            int r1 = r4 + 1
            java.lang.String r2 = "&#38"
            goto L6d
        L46:
            int r1 = r4 + 1
            java.lang.String r2 = "&#37"
            goto L6d
        L4b:
            int r1 = r4 + 1
            java.lang.String r2 = "&#60"
            goto L6d
        L50:
            int r1 = r4 + 1
            java.lang.String r2 = "&#59"
            goto L6d
        L55:
            int r1 = r4 + 1
            java.lang.String r2 = "&#62"
            goto L6d
        L5a:
            int r1 = r4 + 1
            java.lang.String r2 = "&#45"
            goto L6d
        L5f:
            int r1 = r4 + 1
            java.lang.String r2 = "&#43"
            goto L6d
        L64:
            int r1 = r4 + 1
            java.lang.String r2 = "&#35"
            goto L6d
        L69:
            int r1 = r4 + 1
            java.lang.String r2 = "&#34"
        L6d:
            r0.replace(r4, r1, r2)
        L70:
            int r4 = r4 + 4
            goto L6
        L73:
            java.lang.String r4 = r0.toString()
            return r4
    }

    @Override
    public java.lang.String doFilterUrl(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r0.doFilter(r1)
            return r1
    }
}
