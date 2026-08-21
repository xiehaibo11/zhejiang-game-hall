package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BasicHttpResponse extends cz.msebera.android.httpclient.message.AbstractHttpMessage implements cz.msebera.android.httpclient.HttpResponse {
    private int code;
    private cz.msebera.android.httpclient.HttpEntity entity;
    private java.util.Locale locale;
    private final cz.msebera.android.httpclient.ReasonPhraseCatalog reasonCatalog;
    private java.lang.String reasonPhrase;
    private cz.msebera.android.httpclient.StatusLine statusline;
    private cz.msebera.android.httpclient.ProtocolVersion ver;

    public BasicHttpResponse(cz.msebera.android.httpclient.ProtocolVersion r2, int r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Status code"
            cz.msebera.android.httpclient.util.Args.notNegative(r3, r0)
            r0 = 0
            r1.statusline = r0
            r1.ver = r2
            r1.code = r3
            r1.reasonPhrase = r4
            r1.reasonCatalog = r0
            r1.locale = r0
            return
    }

    public BasicHttpResponse(cz.msebera.android.httpclient.StatusLine r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Status line"
            java.lang.Object r0 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.StatusLine r0 = (cz.msebera.android.httpclient.StatusLine) r0
            r1.statusline = r0
            cz.msebera.android.httpclient.ProtocolVersion r0 = r2.getProtocolVersion()
            r1.ver = r0
            int r0 = r2.getStatusCode()
            r1.code = r0
            java.lang.String r2 = r2.getReasonPhrase()
            r1.reasonPhrase = r2
            r2 = 0
            r1.reasonCatalog = r2
            r1.locale = r2
            return
    }

    public BasicHttpResponse(cz.msebera.android.httpclient.StatusLine r2, cz.msebera.android.httpclient.ReasonPhraseCatalog r3, java.util.Locale r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Status line"
            java.lang.Object r0 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.StatusLine r0 = (cz.msebera.android.httpclient.StatusLine) r0
            r1.statusline = r0
            cz.msebera.android.httpclient.ProtocolVersion r0 = r2.getProtocolVersion()
            r1.ver = r0
            int r0 = r2.getStatusCode()
            r1.code = r0
            java.lang.String r2 = r2.getReasonPhrase()
            r1.reasonPhrase = r2
            r1.reasonCatalog = r3
            r1.locale = r4
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpEntity getEntity() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.entity
            return r0
    }

    @Override
    public java.util.Locale getLocale() {
            r1 = this;
            java.util.Locale r0 = r1.locale
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion() {
            r1 = this;
            cz.msebera.android.httpclient.ProtocolVersion r0 = r1.ver
            return r0
    }

    protected java.lang.String getReason(int r3) {
            r2 = this;
            cz.msebera.android.httpclient.ReasonPhraseCatalog r0 = r2.reasonCatalog
            if (r0 == 0) goto L12
            java.util.Locale r1 = r2.locale
            if (r1 == 0) goto L9
            goto Ld
        L9:
            java.util.Locale r1 = java.util.Locale.getDefault()
        Ld:
            java.lang.String r3 = r0.getReason(r3, r1)
            goto L13
        L12:
            r3 = 0
        L13:
            return r3
    }

    @Override
    public cz.msebera.android.httpclient.StatusLine getStatusLine() {
            r4 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r4.statusline
            if (r0 != 0) goto L1d
            cz.msebera.android.httpclient.message.BasicStatusLine r0 = new cz.msebera.android.httpclient.message.BasicStatusLine
            cz.msebera.android.httpclient.ProtocolVersion r1 = r4.ver
            if (r1 == 0) goto Lb
            goto Ld
        Lb:
            cz.msebera.android.httpclient.HttpVersion r1 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
        Ld:
            int r2 = r4.code
            java.lang.String r3 = r4.reasonPhrase
            if (r3 == 0) goto L14
            goto L18
        L14:
            java.lang.String r3 = r4.getReason(r2)
        L18:
            r0.<init>(r1, r2, r3)
            r4.statusline = r0
        L1d:
            cz.msebera.android.httpclient.StatusLine r0 = r4.statusline
            return r0
    }

    @Override
    public void setEntity(cz.msebera.android.httpclient.HttpEntity r1) {
            r0 = this;
            r0.entity = r1
            return
    }

    @Override
    public void setLocale(java.util.Locale r2) {
            r1 = this;
            java.lang.String r0 = "Locale"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.Locale r2 = (java.util.Locale) r2
            r1.locale = r2
            r2 = 0
            r1.statusline = r2
            return
    }

    @Override
    public void setReasonPhrase(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.statusline = r0
            r1.reasonPhrase = r2
            return
    }

    @Override
    public void setStatusCode(int r2) {
            r1 = this;
            java.lang.String r0 = "Status code"
            cz.msebera.android.httpclient.util.Args.notNegative(r2, r0)
            r0 = 0
            r1.statusline = r0
            r1.code = r2
            r1.reasonPhrase = r0
            return
    }

    @Override
    public void setStatusLine(cz.msebera.android.httpclient.ProtocolVersion r2, int r3) {
            r1 = this;
            java.lang.String r0 = "Status code"
            cz.msebera.android.httpclient.util.Args.notNegative(r3, r0)
            r0 = 0
            r1.statusline = r0
            r1.ver = r2
            r1.code = r3
            r1.reasonPhrase = r0
            return
    }

    @Override
    public void setStatusLine(cz.msebera.android.httpclient.ProtocolVersion r2, int r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = "Status code"
            cz.msebera.android.httpclient.util.Args.notNegative(r3, r0)
            r0 = 0
            r1.statusline = r0
            r1.ver = r2
            r1.code = r3
            r1.reasonPhrase = r4
            return
    }

    @Override
    public void setStatusLine(cz.msebera.android.httpclient.StatusLine r2) {
            r1 = this;
            java.lang.String r0 = "Status line"
            java.lang.Object r0 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.StatusLine r0 = (cz.msebera.android.httpclient.StatusLine) r0
            r1.statusline = r0
            cz.msebera.android.httpclient.ProtocolVersion r0 = r2.getProtocolVersion()
            r1.ver = r0
            int r0 = r2.getStatusCode()
            r1.code = r0
            java.lang.String r2 = r2.getReasonPhrase()
            r1.reasonPhrase = r2
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            cz.msebera.android.httpclient.StatusLine r1 = r3.getStatusLine()
            r0.append(r1)
            r1 = 32
            r0.append(r1)
            cz.msebera.android.httpclient.message.HeaderGroup r2 = r3.headergroup
            r0.append(r2)
            cz.msebera.android.httpclient.HttpEntity r2 = r3.entity
            if (r2 == 0) goto L22
            r0.append(r1)
            cz.msebera.android.httpclient.HttpEntity r1 = r3.entity
            r0.append(r1)
        L22:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
