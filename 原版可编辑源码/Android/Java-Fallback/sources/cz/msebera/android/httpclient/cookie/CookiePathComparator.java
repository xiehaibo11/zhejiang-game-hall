package cz.msebera.android.httpclient.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class CookiePathComparator implements java.io.Serializable, java.util.Comparator<cz.msebera.android.httpclient.cookie.Cookie> {
    public static final cz.msebera.android.httpclient.cookie.CookiePathComparator INSTANCE = null;
    private static final long serialVersionUID = 7523645369616405818L;

    static {
            cz.msebera.android.httpclient.cookie.CookiePathComparator r0 = new cz.msebera.android.httpclient.cookie.CookiePathComparator
            r0.<init>()
            cz.msebera.android.httpclient.cookie.CookiePathComparator.INSTANCE = r0
            return
    }

    public CookiePathComparator() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String normalizePath(cz.msebera.android.httpclient.cookie.Cookie r2) {
            r1 = this;
            java.lang.String r2 = r2.getPath()
            java.lang.String r0 = "/"
            if (r2 != 0) goto L9
            r2 = r0
        L9:
            boolean r0 = r2.endsWith(r0)
            if (r0 != 0) goto L20
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r2 = 47
            r0.append(r2)
            java.lang.String r2 = r0.toString()
        L20:
            return r2
    }

    public int compare(cz.msebera.android.httpclient.cookie.Cookie r3, cz.msebera.android.httpclient.cookie.Cookie r4) {
            r2 = this;
            java.lang.String r3 = r2.normalizePath(r3)
            java.lang.String r4 = r2.normalizePath(r4)
            boolean r0 = r3.equals(r4)
            r1 = 0
            if (r0 == 0) goto L10
            return r1
        L10:
            boolean r0 = r3.startsWith(r4)
            if (r0 == 0) goto L18
            r3 = -1
            return r3
        L18:
            boolean r3 = r4.startsWith(r3)
            if (r3 == 0) goto L20
            r3 = 1
            return r3
        L20:
            return r1
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
