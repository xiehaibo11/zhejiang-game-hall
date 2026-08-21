package org.cocos2dx.okhttp3.internal.proxy;

import java.io.IOException;
import java.net.Proxy;
import java.net.ProxySelector;
import java.net.SocketAddress;
import java.net.URI;
import java.util.Collections;
import java.util.List;

public class NullProxySelector extends ProxySelector {
    @Override
    public void connectFailed(URI r1, SocketAddress r2, IOException r3) {
    }

    public NullProxySelector() {
    }

    @Override
    public List<Proxy> select(URI r2) {
        if (r2 == null) goto L6;
        return Collections.singletonList(Proxy.NO_PROXY);
    L6:
        throw new IllegalArgumentException("uri must not be null");
    }
}
