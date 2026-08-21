package org.cocos2dx.okhttp3.internal.tls;

import java.security.GeneralSecurityException;
import java.security.cert.Certificate;
import java.security.cert.X509Certificate;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import javax.net.ssl.SSLPeerUnverifiedException;

public final class BasicCertificateChainCleaner extends CertificateChainCleaner {
    private static final int MAX_SIGNERS = 9;
    private final TrustRootIndex trustRootIndex;

    public BasicCertificateChainCleaner(TrustRootIndex r1) {
        this.trustRootIndex = r1;
    }

    @Override
    public List<Certificate> clean(List<Certificate> r7, String r8) throws SSLPeerUnverifiedException {
        ArrayDeque r82 = new ArrayDeque(r7);
        ArrayList r72 = new ArrayList();
        r72.add(r82.removeFirst());
        int r0 = 0;
        boolean r1 = false;
    L4:
        if (r0 >= 9) goto L28;
        X509Certificate r2 = (X509Certificate) r72.get(r72.size() - 1);
        X509Certificate r4 = this.trustRootIndex.findByIssuerAndSignature(r2);
        if (r4 != null) goto L8;
        Iterator r3 = r82.iterator();
    L18:
        if (r3.hasNext() == false) goto L23;
        X509Certificate r42 = (X509Certificate) r3.next();
        if (verifySignature(r2, r42) == false) goto L18;
        r3.remove();
        r72.add(r42);
    L22:
        r0 = r0 + 1;
        goto L4
    L23:
        if (r1 == false) goto L26;
        return r72;
    L26:
        throw new SSLPeerUnverifiedException("Failed to find a trusted cert that signed " + r2);
    L8:
        if (r72.size() <= 1) goto L10;
    L11:
        r72.add(r4);
    L13:
        if (verifySignature(r4, r4) == true) goto L14;
        r1 = true;
        goto L22
    L14:
        return r72;
    L10:
        if (r2.equals(r4) == true) goto L13;
    L28:
        throw new SSLPeerUnverifiedException("Certificate chain too long: " + r72);
    }

    private boolean verifySignature(X509Certificate r3, X509Certificate r4) {
        if (r3.getIssuerDN().equals(r4.getSubjectDN()) == true) goto L9;
        return false;
    L9:
        r3.verify(r4.getPublicKey());     // Catch: GeneralSecurityException -> L8
        return true;
    L8:
        return false;
    }

    public int hashCode() {
        return this.trustRootIndex.hashCode();
    }

    public boolean equals(Object r3) {
        if (r3 != this) goto L6;
        return true;
    L6:
        if ((r3 instanceof BasicCertificateChainCleaner) == true) goto L8;
    L10:
        return false;
    L8:
        if (((BasicCertificateChainCleaner) r3).trustRootIndex.equals(this.trustRootIndex) == false) goto L10;
        return true;
    }
}
