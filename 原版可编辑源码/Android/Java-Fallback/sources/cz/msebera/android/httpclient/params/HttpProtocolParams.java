package cz.msebera.android.httpclient.params;

@java.lang.Deprecated
public final class HttpProtocolParams implements cz.msebera.android.httpclient.params.CoreProtocolPNames {
    private HttpProtocolParams() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getContentCharset(cz.msebera.android.httpclient.params.HttpParams r1) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.protocol.content-charset"
            java.lang.Object r1 = r1.getParameter(r0)
            java.lang.String r1 = (java.lang.String) r1
            if (r1 != 0) goto L15
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.protocol.HTTP.DEF_CONTENT_CHARSET
            java.lang.String r1 = r1.name()
        L15:
            return r1
    }

    public static java.lang.String getHttpElementCharset(cz.msebera.android.httpclient.params.HttpParams r1) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.protocol.element-charset"
            java.lang.Object r1 = r1.getParameter(r0)
            java.lang.String r1 = (java.lang.String) r1
            if (r1 != 0) goto L15
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.protocol.HTTP.DEF_PROTOCOL_CHARSET
            java.lang.String r1 = r1.name()
        L15:
            return r1
    }

    public static java.nio.charset.CodingErrorAction getMalformedInputAction(cz.msebera.android.httpclient.params.HttpParams r1) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.malformed.input.action"
            java.lang.Object r1 = r1.getParameter(r0)
            if (r1 != 0) goto L10
            java.nio.charset.CodingErrorAction r1 = java.nio.charset.CodingErrorAction.REPORT
            return r1
        L10:
            java.nio.charset.CodingErrorAction r1 = (java.nio.charset.CodingErrorAction) r1
            return r1
    }

    public static java.nio.charset.CodingErrorAction getUnmappableInputAction(cz.msebera.android.httpclient.params.HttpParams r1) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.unmappable.input.action"
            java.lang.Object r1 = r1.getParameter(r0)
            if (r1 != 0) goto L10
            java.nio.charset.CodingErrorAction r1 = java.nio.charset.CodingErrorAction.REPORT
            return r1
        L10:
            java.nio.charset.CodingErrorAction r1 = (java.nio.charset.CodingErrorAction) r1
            return r1
    }

    public static java.lang.String getUserAgent(cz.msebera.android.httpclient.params.HttpParams r1) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.useragent"
            java.lang.Object r1 = r1.getParameter(r0)
            java.lang.String r1 = (java.lang.String) r1
            return r1
    }

    public static cz.msebera.android.httpclient.ProtocolVersion getVersion(cz.msebera.android.httpclient.params.HttpParams r1) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.protocol.version"
            java.lang.Object r1 = r1.getParameter(r0)
            if (r1 != 0) goto L10
            cz.msebera.android.httpclient.HttpVersion r1 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            return r1
        L10:
            cz.msebera.android.httpclient.ProtocolVersion r1 = (cz.msebera.android.httpclient.ProtocolVersion) r1
            return r1
    }

    public static void setContentCharset(cz.msebera.android.httpclient.params.HttpParams r1, java.lang.String r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.protocol.content-charset"
            r1.setParameter(r0, r2)
            return
    }

    public static void setHttpElementCharset(cz.msebera.android.httpclient.params.HttpParams r1, java.lang.String r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.protocol.element-charset"
            r1.setParameter(r0, r2)
            return
    }

    public static void setMalformedInputAction(cz.msebera.android.httpclient.params.HttpParams r1, java.nio.charset.CodingErrorAction r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.malformed.input.action"
            r1.setParameter(r0, r2)
            return
    }

    public static void setUnmappableInputAction(cz.msebera.android.httpclient.params.HttpParams r1, java.nio.charset.CodingErrorAction r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.unmappable.input.action"
            r1.setParameter(r0, r2)
            return
    }

    public static void setUseExpectContinue(cz.msebera.android.httpclient.params.HttpParams r1, boolean r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.protocol.expect-continue"
            r1.setBooleanParameter(r0, r2)
            return
    }

    public static void setUserAgent(cz.msebera.android.httpclient.params.HttpParams r1, java.lang.String r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.useragent"
            r1.setParameter(r0, r2)
            return
    }

    public static void setVersion(cz.msebera.android.httpclient.params.HttpParams r1, cz.msebera.android.httpclient.ProtocolVersion r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.protocol.version"
            r1.setParameter(r0, r2)
            return
    }

    public static boolean useExpectContinue(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.protocol.expect-continue"
            r1 = 0
            boolean r2 = r2.getBooleanParameter(r0, r1)
            return r2
    }
}
