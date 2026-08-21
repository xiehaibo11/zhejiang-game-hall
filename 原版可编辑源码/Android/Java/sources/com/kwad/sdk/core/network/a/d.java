package com.kwad.sdk.core.network.a;

import android.text.TextUtils;
import java.net.InetAddress;
import java.util.Arrays;
import java.util.List;
import okhttp3.Dns;

public final class d implements Dns {
    private static final Dns SYSTEM = Dns.SYSTEM;

    @Override
    public final List<InetAddress> lookup(String str) {
        String strEV = com.kwad.sdk.ip.direct.a.eV(str);
        if (TextUtils.isEmpty(strEV)) {
            com.kwad.sdk.core.e.c.d("IpDirect_OkHttpDns", "Dns.SYSTEM.lookup(hostname):" + Dns.SYSTEM.lookup(str));
        } else {
            List<InetAddress> listAsList = Arrays.asList(InetAddress.getAllByName(strEV));
            if (listAsList != null && !listAsList.isEmpty()) {
                com.kwad.sdk.core.e.c.d("IpDirect_OkHttpDns", "inetAddresses:" + listAsList);
                return listAsList;
            }
        }
        return SYSTEM.lookup(str);
    }
}
