package okhttp3.internal.tls;

import java.security.cert.CertificateParsingException;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLSession;
import okhttp3.internal.Util;

public final class OkHostnameVerifier implements HostnameVerifier {
    private static final int ALT_DNS_NAME = 2;
    private static final int ALT_IPA_NAME = 7;
    public static final OkHostnameVerifier INSTANCE = null;

    static {
        INSTANCE = new OkHostnameVerifier();
    }

    private OkHostnameVerifier() {
    }

    @Override
    public boolean verify(String r2, SSLSession r3) {
        return verify(r2, (X509Certificate) r3.getPeerCertificates()[0]);
    L5:
        return false;
    }

    public boolean verify(String r2, X509Certificate r3) {
        if (Util.verifyAsIpAddress(r2) == false) goto L6;
        return verifyIpAddress(r2, r3);
    L6:
        return verifyHostname(r2, r3);
    }

    private boolean verifyIpAddress(String r5, X509Certificate r6) {
        List<String> r62 = getSubjectAltNames(r6, 7);
        int r0 = r62.size();
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L9;
        if (r5.equalsIgnoreCase(r62.get(r2)) == true) goto L6;
        r2 = r2 + 1;
        goto L3
    L6:
        return true;
    L9:
        return false;
    }

    private boolean verifyHostname(String r2, X509Certificate r3) {
        String r22 = r2.toLowerCase(Locale.US);
        Iterator<String> r32 = getSubjectAltNames(r3, 2).iterator();
    L4:
        if (r32.hasNext() == false) goto L9;
        if (verifyHostname(r22, r32.next()) == false) goto L4;
        return true;
    L9:
        return false;
    }

    public static List<String> allSubjectAltNames(X509Certificate r4) {
        List<String> r0 = getSubjectAltNames(r4, 7);
        List<String> r42 = getSubjectAltNames(r4, 2);
        ArrayList r1 = new ArrayList(r0.size() + r42.size());
        r1.addAll(r0);
        r1.addAll(r42);
        return r1;
    }

    private static List<String> getSubjectAltNames(X509Certificate r4, int r5) {
        ArrayList r0 = new ArrayList();
        Collection<List<?>> r42 = r4.getSubjectAlternativeNames();     // Catch: CertificateParsingException -> L25
        if (r42 == null) goto L6;
        Iterator<List<?>> r43 = r42.iterator();     // Catch: CertificateParsingException -> L25
    L9:
        if (r43.hasNext() == false) goto L24;
        List<?> r1 = r43.next();     // Catch: CertificateParsingException -> L25
        if (r1 == null) goto L9;
        if (r1.size() < 2) goto L9;
        Integer r2 = (Integer) r1.get(0);     // Catch: CertificateParsingException -> L25
        if (r2 == null) goto L9;
        if (r2.intValue() != r5) goto L9;
        String r12 = (String) r1.get(1);     // Catch: CertificateParsingException -> L25
        if (r12 == null) goto L9;
        r0.add(r12);     // Catch: CertificateParsingException -> L25
        goto L9
    L24:
        return r0;
    L6:
        return Collections.emptyList();
    L26:
        return Collections.emptyList();
    }

    public boolean verifyHostname(String r8, String r9) {
        if (r8 != null) goto L5;
    L49:
        return false;
    L5:
        if (r8.length() == 0) goto L49;
        if (r8.startsWith(".") == true) goto L49;
        if (r8.endsWith("..") == true) goto L49;
        if (r9 == null) goto L49;
        if (r9.length() == 0) goto L49;
        if (r9.startsWith(".") == true) goto L49;
        if (r9.endsWith("..") == true) goto L49;
        if (r8.endsWith(".") == true) goto L23;
        r8 = r8 + '.';
    L23:
        if (r9.endsWith(".") == true) goto L25;
        r9 = r9 + '.';
    L25:
        String r92 = r9.toLowerCase(Locale.US);
        if (r92.contains("*") == true) goto L30;
        return r8.equals(r92);
    L30:
        if (r92.startsWith("*.") == false) goto L49;
        if (r92.indexOf(42, 1) != (-1)) goto L49;
        if (r8.length() >= r92.length()) goto L38;
        return false;
    L38:
        if ("*.".equals(r92) == false) goto L40;
        return false;
    L40:
        String r93 = r92.substring(1);
        if (r8.endsWith(r93) == true) goto L43;
        return false;
    L43:
        int r1 = r8.length() - r93.length();
        if (r1 > 0) goto L46;
    L48:
        return true;
    L46:
        if (r8.lastIndexOf(46, r1 - 1) == (-1)) goto L48;
        return false;
    }
}
