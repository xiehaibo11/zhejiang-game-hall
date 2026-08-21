package org.cocos2dx.okhttp3;

import java.io.IOException;
import java.security.Principal;
import java.security.cert.Certificate;
import java.security.cert.X509Certificate;
import java.util.Collections;
import java.util.List;
import javax.annotation.Nullable;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSession;
import org.cocos2dx.okhttp3.internal.Util;

public final class Handshake {
    private final CipherSuite cipherSuite;
    private final List<Certificate> localCertificates;
    private final List<Certificate> peerCertificates;
    private final TlsVersion tlsVersion;

    private Handshake(TlsVersion r1, CipherSuite r2, List<Certificate> r3, List<Certificate> r4) {
        this.tlsVersion = r1;
        this.cipherSuite = r2;
        this.peerCertificates = r3;
        this.localCertificates = r4;
    }

    public static Handshake get(SSLSession r4) throws IOException {
        String r0 = r4.getCipherSuite();
        if (r0 == null) goto L30;
        if ("SSL_NULL_WITH_NULL_NULL".equals(r0) == true) goto L28;
        CipherSuite r02 = CipherSuite.forJavaName(r0);
        String r1 = r4.getProtocol();
        if (r1 == null) goto L26;
        if ("NONE".equals(r1) == true) goto L24;
        TlsVersion r12 = TlsVersion.forJavaName(r1);
        Certificate[] r2 = r4.getPeerCertificates();     // Catch: SSLPeerUnverifiedException -> L13
    L14:
        if (r2 == null) goto L16;
        List r22 = Util.immutableList(r2);
    L17:
        Certificate[] r42 = r4.getLocalCertificates();
        if (r42 == null) goto L20;
        List r43 = Util.immutableList(r42);
    L22:
        return new Handshake(r12, r02, r22, r43);
    L20:
        r43 = Collections.emptyList();
        goto L22
    L16:
        r22 = Collections.emptyList();
    L13:
        r2 = null;
        goto L14
    L24:
        throw new IOException("tlsVersion == NONE");
    L26:
        throw new IllegalStateException("tlsVersion == null");
    L28:
        throw new IOException("cipherSuite == SSL_NULL_WITH_NULL_NULL");
    L30:
        throw new IllegalStateException("cipherSuite == null");
    }

    public static Handshake get(TlsVersion r1, CipherSuite r2, List<Certificate> r3, List<Certificate> r4) {
        if (r1 == null) goto L9;
        if (r2 == null) goto L7;
        return new Handshake(r1, r2, Util.immutableList(r3), Util.immutableList(r4));
    L7:
        throw new NullPointerException("cipherSuite == null");
    L9:
        throw new NullPointerException("tlsVersion == null");
    }

    public TlsVersion tlsVersion() {
        return this.tlsVersion;
    }

    public CipherSuite cipherSuite() {
        return this.cipherSuite;
    }

    public List<Certificate> peerCertificates() {
        return this.peerCertificates;
    }

    @Nullable
    public Principal peerPrincipal() {
        if (this.peerCertificates.isEmpty() == false) goto L7;
        return null;
    L7:
        return ((X509Certificate) this.peerCertificates.get(0)).getSubjectX500Principal();
    }

    public List<Certificate> localCertificates() {
        return this.localCertificates;
    }

    @Nullable
    public Principal localPrincipal() {
        if (this.localCertificates.isEmpty() == false) goto L7;
        return null;
    L7:
        return ((X509Certificate) this.localCertificates.get(0)).getSubjectX500Principal();
    }

    public boolean equals(@Nullable Object r4) {
        if ((r4 instanceof Handshake) == true) goto L5;
        return false;
    L5:
        Handshake r42 = (Handshake) r4;
        if (this.tlsVersion.equals(r42.tlsVersion) == true) goto L8;
        return false;
    L8:
        if (this.cipherSuite.equals(r42.cipherSuite) == true) goto L10;
        return false;
    L10:
        if (this.peerCertificates.equals(r42.peerCertificates) == true) goto L12;
        return false;
    L12:
        if (this.localCertificates.equals(r42.localCertificates) == false) goto L18;
        return true;
    L18:
        return false;
    }

    public int hashCode() {
        return ((((((527 + this.tlsVersion.hashCode()) * 31) + this.cipherSuite.hashCode()) * 31) + this.peerCertificates.hashCode()) * 31) + this.localCertificates.hashCode();
    }
}
