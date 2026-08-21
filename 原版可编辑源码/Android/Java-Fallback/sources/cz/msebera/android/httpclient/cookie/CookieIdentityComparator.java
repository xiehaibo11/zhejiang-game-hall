package cz.msebera.android.httpclient.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class CookieIdentityComparator implements java.io.Serializable, java.util.Comparator<cz.msebera.android.httpclient.cookie.Cookie> {
    private static final long serialVersionUID = 4466565437490631532L;

    public CookieIdentityComparator() {
            r0 = this;
            r0.<init>()
            return
    }

    public int compare(cz.msebera.android.httpclient.cookie.Cookie r7, cz.msebera.android.httpclient.cookie.Cookie r8) {
            r6 = this;
            java.lang.String r0 = r7.getName()
            java.lang.String r1 = r8.getName()
            int r0 = r0.compareTo(r1)
            if (r0 != 0) goto L54
            java.lang.String r0 = r7.getDomain()
            java.lang.String r1 = ".local"
            java.lang.String r2 = ""
            r3 = -1
            r4 = 46
            if (r0 != 0) goto L1d
            r0 = r2
            goto L32
        L1d:
            int r5 = r0.indexOf(r4)
            if (r5 != r3) goto L32
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r0)
            r5.append(r1)
            java.lang.String r0 = r5.toString()
        L32:
            java.lang.String r5 = r8.getDomain()
            if (r5 != 0) goto L39
            goto L50
        L39:
            int r2 = r5.indexOf(r4)
            if (r2 != r3) goto L4f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            goto L50
        L4f:
            r2 = r5
        L50:
            int r0 = r0.compareToIgnoreCase(r2)
        L54:
            if (r0 != 0) goto L6a
            java.lang.String r7 = r7.getPath()
            java.lang.String r0 = "/"
            if (r7 != 0) goto L5f
            r7 = r0
        L5f:
            java.lang.String r8 = r8.getPath()
            if (r8 != 0) goto L66
            r8 = r0
        L66:
            int r0 = r7.compareTo(r8)
        L6a:
            return r0
    }

    @Override
    public int compare(cz.msebera.android.httpclient.cookie.Cookie r1, cz.msebera.android.httpclient.cookie.Cookie r2) {
            r0 = this;
            cz.msebera.android.httpclient.cookie.Cookie r1 = (cz.msebera.android.httpclient.cookie.Cookie) r1
            cz.msebera.android.httpclient.cookie.Cookie r2 = (cz.msebera.android.httpclient.cookie.Cookie) r2
            int r1 = r0.compare(r1, r2)
            return r1
    }
}
