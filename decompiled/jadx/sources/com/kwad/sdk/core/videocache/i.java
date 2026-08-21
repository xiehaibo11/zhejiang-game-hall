package com.kwad.sdk.core.videocache;

import com.kwad.sdk.utils.ao;
import java.io.IOException;
import java.net.Proxy;
import java.net.ProxySelector;
import java.net.SocketAddress;
import java.net.URI;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
final class i extends ProxySelector {
    private static final List<Proxy> awJ = Arrays.asList(Proxy.NO_PROXY);
    private final ProxySelector awK;
    private final String awL;
    private final int awM;

    private i(ProxySelector proxySelector, String str, int i) {
        this.awK = (ProxySelector) ao.checkNotNull(proxySelector);
        this.awL = ao.fE(str);
        this.awM = i;
    }

    static void install(String str, int i) {
        ProxySelector.setDefault(new i(ProxySelector.getDefault(), str, i));
    }

    @Override // java.net.ProxySelector
    public final void connectFailed(URI uri, SocketAddress socketAddress, IOException iOException) {
        this.awK.connectFailed(uri, socketAddress, iOException);
    }

    @Override // java.net.ProxySelector
    public final List<Proxy> select(URI uri) {
        return this.awL.equals(uri.getHost()) && this.awM == uri.getPort() ? awJ : this.awK.select(uri);
    }
}
