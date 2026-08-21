package cz.msebera.android.httpclient.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class CookiePriorityComparator implements java.util.Comparator<cz.msebera.android.httpclient.cookie.Cookie> {
    public static final cz.msebera.android.httpclient.cookie.CookiePriorityComparator INSTANCE = null;

    static {
            cz.msebera.android.httpclient.cookie.CookiePriorityComparator r0 = new cz.msebera.android.httpclient.cookie.CookiePriorityComparator
            r0.<init>()
            cz.msebera.android.httpclient.cookie.CookiePriorityComparator.INSTANCE = r0
            return
    }

    public CookiePriorityComparator() {
            r0 = this;
            r0.<init>()
            return
    }

    private int getPathLength(cz.msebera.android.httpclient.cookie.Cookie r1) {
            r0 = this;
            java.lang.String r1 = r1.getPath()
            if (r1 == 0) goto Lb
            int r1 = r1.length()
            goto Lc
        Lb:
            r1 = 1
        Lc:
            return r1
    }

    public int compare(cz.msebera.android.httpclient.cookie.Cookie r3, cz.msebera.android.httpclient.cookie.Cookie r4) {
            r2 = this;
            int r0 = r2.getPathLength(r3)
            int r1 = r2.getPathLength(r4)
            int r1 = r1 - r0
            if (r1 != 0) goto L2e
            boolean r0 = r3 instanceof cz.msebera.android.httpclient.impl.cookie.BasicClientCookie
            if (r0 == 0) goto L2e
            boolean r0 = r4 instanceof cz.msebera.android.httpclient.impl.cookie.BasicClientCookie
            if (r0 == 0) goto L2e
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r3 = (cz.msebera.android.httpclient.impl.cookie.BasicClientCookie) r3
            java.util.Date r3 = r3.getCreationDate()
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r4 = (cz.msebera.android.httpclient.impl.cookie.BasicClientCookie) r4
            java.util.Date r4 = r4.getCreationDate()
            if (r3 == 0) goto L2e
            if (r4 == 0) goto L2e
            long r0 = r3.getTime()
            long r3 = r4.getTime()
            long r0 = r0 - r3
            int r3 = (int) r0
            return r3
        L2e:
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
