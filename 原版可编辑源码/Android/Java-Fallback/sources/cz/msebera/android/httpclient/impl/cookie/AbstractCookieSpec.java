package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public abstract class AbstractCookieSpec implements cz.msebera.android.httpclient.cookie.CookieSpec {
    private final java.util.Map<java.lang.String, cz.msebera.android.httpclient.cookie.CookieAttributeHandler> attribHandlerMap;

    public AbstractCookieSpec() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 10
            r0.<init>(r1)
            r2.attribHandlerMap = r0
            return
    }

    protected AbstractCookieSpec(java.util.HashMap<java.lang.String, cz.msebera.android.httpclient.cookie.CookieAttributeHandler> r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Attribute handler map"
            cz.msebera.android.httpclient.util.Asserts.notNull(r2, r0)
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>(r2)
            r1.attribHandlerMap = r0
            return
    }

    protected AbstractCookieSpec(cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler... r6) {
            r5 = this;
            r5.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            int r1 = r6.length
            r0.<init>(r1)
            r5.attribHandlerMap = r0
            int r0 = r6.length
            r1 = 0
        Ld:
            if (r1 >= r0) goto L1d
            r2 = r6[r1]
            java.util.Map<java.lang.String, cz.msebera.android.httpclient.cookie.CookieAttributeHandler> r3 = r5.attribHandlerMap
            java.lang.String r4 = r2.getAttributeName()
            r3.put(r4, r2)
            int r1 = r1 + 1
            goto Ld
        L1d:
            return
    }

    protected cz.msebera.android.httpclient.cookie.CookieAttributeHandler findAttribHandler(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, cz.msebera.android.httpclient.cookie.CookieAttributeHandler> r0 = r1.attribHandlerMap
            java.lang.Object r2 = r0.get(r2)
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler r2 = (cz.msebera.android.httpclient.cookie.CookieAttributeHandler) r2
            return r2
    }

    protected cz.msebera.android.httpclient.cookie.CookieAttributeHandler getAttribHandler(java.lang.String r5) {
            r4 = this;
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler r0 = r4.findAttribHandler(r5)
            if (r0 == 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Handler not registered for "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = " attribute"
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            cz.msebera.android.httpclient.util.Asserts.check(r1, r5)
            return r0
    }

    protected java.util.Collection<cz.msebera.android.httpclient.cookie.CookieAttributeHandler> getAttribHandlers() {
            r1 = this;
            java.util.Map<java.lang.String, cz.msebera.android.httpclient.cookie.CookieAttributeHandler> r0 = r1.attribHandlerMap
            java.util.Collection r0 = r0.values()
            return r0
    }

    @java.lang.Deprecated
    public void registerAttribHandler(java.lang.String r2, cz.msebera.android.httpclient.cookie.CookieAttributeHandler r3) {
            r1 = this;
            java.lang.String r0 = "Attribute name"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Attribute handler"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.util.Map<java.lang.String, cz.msebera.android.httpclient.cookie.CookieAttributeHandler> r0 = r1.attribHandlerMap
            r0.put(r2, r3)
            return
    }
}
