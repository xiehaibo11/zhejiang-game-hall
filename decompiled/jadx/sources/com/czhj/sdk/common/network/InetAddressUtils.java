package com.czhj.sdk.common.network;

import java.net.InetAddress;
import java.net.UnknownHostException;

/* JADX INFO: loaded from: classes.dex */
class InetAddressUtils {
    private InetAddressUtils() {
    }

    public static InetAddress getInetAddressByName(String str) throws UnknownHostException {
        return InetAddress.getByName(str);
    }
}
