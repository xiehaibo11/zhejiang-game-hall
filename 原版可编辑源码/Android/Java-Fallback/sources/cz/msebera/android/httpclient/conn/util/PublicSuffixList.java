package cz.msebera.android.httpclient.conn.util;

@cz.msebera.android.httpclient.annotation.Immutable
public final class PublicSuffixList {
    private final java.util.List<java.lang.String> exceptions;
    private final java.util.List<java.lang.String> rules;

    public PublicSuffixList(java.util.List<java.lang.String> r2, java.util.List<java.lang.String> r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Domain suffix rules"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.List r2 = (java.util.List) r2
            java.util.List r2 = java.util.Collections.unmodifiableList(r2)
            r1.rules = r2
            java.lang.String r2 = "Domain suffix exceptions"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r3, r2)
            java.util.List r2 = (java.util.List) r2
            java.util.List r2 = java.util.Collections.unmodifiableList(r2)
            r1.exceptions = r2
            return
    }

    public java.util.List<java.lang.String> getExceptions() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.exceptions
            return r0
    }

    public java.util.List<java.lang.String> getRules() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.rules
            return r0
    }
}
