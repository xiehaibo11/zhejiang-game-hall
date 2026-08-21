package org.bouncycastle.i18n.filter;

public class SQLFilter implements org.bouncycastle.i18n.filter.Filter {
    public SQLFilter() {
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
            if (r4 >= r1) goto L68
            char r1 = r0.charAt(r4)
            r2 = 10
            if (r1 == r2) goto L5d
            r2 = 13
            if (r1 == r2) goto L58
            r2 = 34
            if (r1 == r2) goto L53
            r2 = 39
            if (r1 == r2) goto L4e
            r2 = 45
            if (r1 == r2) goto L49
            r2 = 47
            if (r1 == r2) goto L44
            r2 = 59
            if (r1 == r2) goto L3f
            r2 = 61
            if (r1 == r2) goto L3a
            r2 = 92
            if (r1 == r2) goto L35
            goto L65
        L35:
            int r1 = r4 + 1
            java.lang.String r2 = "\\\\"
            goto L61
        L3a:
            int r1 = r4 + 1
            java.lang.String r2 = "\\="
            goto L61
        L3f:
            int r1 = r4 + 1
            java.lang.String r2 = "\\;"
            goto L61
        L44:
            int r1 = r4 + 1
            java.lang.String r2 = "\\/"
            goto L61
        L49:
            int r1 = r4 + 1
            java.lang.String r2 = "\\-"
            goto L61
        L4e:
            int r1 = r4 + 1
            java.lang.String r2 = "\\'"
            goto L61
        L53:
            int r1 = r4 + 1
            java.lang.String r2 = "\\\""
            goto L61
        L58:
            int r1 = r4 + 1
            java.lang.String r2 = "\\r"
            goto L61
        L5d:
            int r1 = r4 + 1
            java.lang.String r2 = "\\n"
        L61:
            r0.replace(r4, r1, r2)
            r4 = r1
        L65:
            int r4 = r4 + 1
            goto L6
        L68:
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
