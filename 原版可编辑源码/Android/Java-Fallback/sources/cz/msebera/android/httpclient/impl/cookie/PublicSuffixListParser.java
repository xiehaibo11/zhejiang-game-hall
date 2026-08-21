package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class PublicSuffixListParser {
    private final cz.msebera.android.httpclient.impl.cookie.PublicSuffixFilter filter;
    private final cz.msebera.android.httpclient.conn.util.PublicSuffixListParser parser;

    PublicSuffixListParser(cz.msebera.android.httpclient.impl.cookie.PublicSuffixFilter r1) {
            r0 = this;
            r0.<init>()
            r0.filter = r1
            cz.msebera.android.httpclient.conn.util.PublicSuffixListParser r1 = new cz.msebera.android.httpclient.conn.util.PublicSuffixListParser
            r1.<init>()
            r0.parser = r1
            return
    }

    public void parse(java.io.Reader r3) throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.conn.util.PublicSuffixListParser r0 = r2.parser
            cz.msebera.android.httpclient.conn.util.PublicSuffixList r3 = r0.parse(r3)
            cz.msebera.android.httpclient.impl.cookie.PublicSuffixFilter r0 = r2.filter
            java.util.List r1 = r3.getRules()
            r0.setPublicSuffixes(r1)
            cz.msebera.android.httpclient.impl.cookie.PublicSuffixFilter r0 = r2.filter
            java.util.List r3 = r3.getExceptions()
            r0.setExceptions(r3)
            return
    }
}
