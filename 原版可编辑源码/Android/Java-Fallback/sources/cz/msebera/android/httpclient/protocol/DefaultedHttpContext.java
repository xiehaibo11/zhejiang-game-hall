package cz.msebera.android.httpclient.protocol;

@java.lang.Deprecated
public final class DefaultedHttpContext implements cz.msebera.android.httpclient.protocol.HttpContext {
    private final cz.msebera.android.httpclient.protocol.HttpContext defaults;
    private final cz.msebera.android.httpclient.protocol.HttpContext local;

    public DefaultedHttpContext(cz.msebera.android.httpclient.protocol.HttpContext r2, cz.msebera.android.httpclient.protocol.HttpContext r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "HTTP context"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.protocol.HttpContext r2 = (cz.msebera.android.httpclient.protocol.HttpContext) r2
            r1.local = r2
            r1.defaults = r3
            return
    }

    @Override
    public java.lang.Object getAttribute(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r1.local
            java.lang.Object r0 = r0.getAttribute(r2)
            if (r0 != 0) goto Lf
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r1.defaults
            java.lang.Object r2 = r0.getAttribute(r2)
            return r2
        Lf:
            return r0
    }

    public cz.msebera.android.httpclient.protocol.HttpContext getDefaults() {
            r1 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r1.defaults
            return r0
    }

    @Override
    public java.lang.Object removeAttribute(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r1.local
            java.lang.Object r2 = r0.removeAttribute(r2)
            return r2
    }

    @Override
    public void setAttribute(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r1.local
            r0.setAttribute(r2, r3)
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[local: "
            r0.append(r1)
            cz.msebera.android.httpclient.protocol.HttpContext r1 = r2.local
            r0.append(r1)
            java.lang.String r1 = "defaults: "
            r0.append(r1)
            cz.msebera.android.httpclient.protocol.HttpContext r1 = r2.defaults
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
