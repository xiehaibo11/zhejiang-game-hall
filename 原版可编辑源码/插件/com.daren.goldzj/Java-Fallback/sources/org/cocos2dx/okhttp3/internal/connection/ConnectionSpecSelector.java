package org.cocos2dx.okhttp3.internal.connection;

import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.ProtocolException;
import java.net.UnknownServiceException;
import java.security.cert.CertificateException;
import java.util.Arrays;
import java.util.List;
import javax.net.ssl.SSLException;
import javax.net.ssl.SSLHandshakeException;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLProtocolException;
import javax.net.ssl.SSLSocket;
import org.cocos2dx.okhttp3.ConnectionSpec;
import org.cocos2dx.okhttp3.internal.Internal;

public final class ConnectionSpecSelector {
    private final List<ConnectionSpec> connectionSpecs;
    private boolean isFallback;
    private boolean isFallbackPossible;
    private int nextModeIndex;

    public ConnectionSpecSelector(List<ConnectionSpec> r2) {
        this.nextModeIndex = 0;
        this.connectionSpecs = r2;
    }

    public ConnectionSpec configureSecureSocket(SSLSocket r5) throws IOException {
        int r0 = this.nextModeIndex;
        int r1 = this.connectionSpecs.size();
    L3:
        if (r0 >= r1) goto L8;
        ConnectionSpec r2 = this.connectionSpecs.get(r0);
        if (r2.isCompatible(r5) == true) goto L6;
        r0 = r0 + 1;
        goto L3
    L6:
        this.nextModeIndex = r0 + 1;
    L9:
        if (r2 == null) goto L13;
        this.isFallbackPossible = isFallbackPossible(r5);
        Internal.instance.apply(r2, r5, this.isFallback);
        return r2;
    L13:
        throw new UnknownServiceException("Unable to find acceptable protocols. isFallback=" + this.isFallback + ", modes=" + this.connectionSpecs + ", supported protocols=" + Arrays.toString(r5.getEnabledProtocols()));
    L8:
        r2 = null;
        goto L9
    }

    public boolean connectionFailed(IOException r5) {
        this.isFallback = true;
        if (this.isFallbackPossible == true) goto L6;
        return false;
    L6:
        if ((r5 instanceof ProtocolException) == false) goto L9;
        return false;
    L9:
        if ((r5 instanceof InterruptedIOException) == false) goto L11;
        return false;
    L11:
        boolean r1 = r5 instanceof SSLHandshakeException;
        if (r1 == false) goto L17;
        if ((r5.getCause() instanceof CertificateException) == false) goto L17;
        return false;
    L17:
        if ((r5 instanceof SSLPeerUnverifiedException) == false) goto L19;
        return false;
    L19:
        if (r1 == false) goto L21;
        return true;
    L21:
        if ((r5 instanceof SSLProtocolException) == false) goto L23;
        return true;
    L23:
        if ((r5 instanceof SSLException) == true) goto L29;
        return false;
    L29:
        return true;
    }

    private boolean isFallbackPossible(SSLSocket r3) {
        int r0 = this.nextModeIndex;
    L4:
        if (r0 >= this.connectionSpecs.size()) goto L10;
        if (this.connectionSpecs.get(r0).isCompatible(r3) == true) goto L7;
        r0 = r0 + 1;
        goto L4
    L7:
        return true;
    L10:
        return false;
    }
}
