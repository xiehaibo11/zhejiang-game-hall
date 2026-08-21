package okhttp3.internal.tls;

import java.security.cert.X509Certificate;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import javax.security.auth.x500.X500Principal;

public final class BasicTrustRootIndex implements TrustRootIndex {
    private final Map<X500Principal, Set<X509Certificate>> subjectToCaCerts;

    public BasicTrustRootIndex(X509Certificate... r7) {
        this.subjectToCaCerts = new LinkedHashMap();
        int r0 = r7.length;
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L8;
        X509Certificate r2 = r7[r1];
        X500Principal r3 = r2.getSubjectX500Principal();
        Set<X509Certificate> r4 = this.subjectToCaCerts.get(r3);
        if (r4 != null) goto L7;
        r4 = new LinkedHashSet(1);
        this.subjectToCaCerts.put(r3, r4);
    L7:
        r4.add(r2);
        r1 = r1 + 1;
        goto L3
    }

    @Override
    public X509Certificate findByIssuerAndSignature(X509Certificate r5) {
        X500Principal r0 = r5.getIssuerX500Principal();
        Set<X509Certificate> r02 = this.subjectToCaCerts.get(r0);
        if (r02 != null) goto L5;
        return null;
    L5:
        Iterator<X509Certificate> r03 = r02.iterator();
    L7:
        if (r03.hasNext() == false) goto L11;
        X509Certificate r2 = r03.next();
        r5.verify(r2.getPublicKey());     // Catch: Exception -> L12
        return r2;
    L11:
        return null;
    }

    public boolean equals(Object r3) {
        if (r3 != this) goto L6;
        return true;
    L6:
        if ((r3 instanceof BasicTrustRootIndex) == true) goto L8;
    L10:
        return false;
    L8:
        if (((BasicTrustRootIndex) r3).subjectToCaCerts.equals(this.subjectToCaCerts) == false) goto L10;
        return true;
    }

    public int hashCode() {
        return this.subjectToCaCerts.hashCode();
    }
}
