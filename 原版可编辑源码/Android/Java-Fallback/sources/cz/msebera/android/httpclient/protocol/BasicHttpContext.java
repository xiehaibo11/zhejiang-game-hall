package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class BasicHttpContext implements cz.msebera.android.httpclient.protocol.HttpContext {
    private final java.util.Map<java.lang.String, java.lang.Object> map;
    private final cz.msebera.android.httpclient.protocol.HttpContext parentContext;

    public BasicHttpContext() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public BasicHttpContext(cz.msebera.android.httpclient.protocol.HttpContext r2) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.map = r0
            r1.parentContext = r2
            return
    }

    public void clear() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.map
            r0.clear()
            return
    }

    @Override
    public java.lang.Object getAttribute(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "Id"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.map
            java.lang.Object r0 = r0.get(r3)
            if (r0 != 0) goto L15
            cz.msebera.android.httpclient.protocol.HttpContext r1 = r2.parentContext
            if (r1 == 0) goto L15
            java.lang.Object r0 = r1.getAttribute(r3)
        L15:
            return r0
    }

    @Override
    public java.lang.Object removeAttribute(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "Id"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.map
            java.lang.Object r2 = r0.remove(r2)
            return r2
    }

    @Override
    public void setAttribute(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            java.lang.String r0 = "Id"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            if (r3 == 0) goto Ld
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.map
            r0.put(r2, r3)
            goto L12
        Ld:
            java.util.Map<java.lang.String, java.lang.Object> r3 = r1.map
            r3.remove(r2)
        L12:
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.map
            java.lang.String r0 = r0.toString()
            return r0
    }
}
