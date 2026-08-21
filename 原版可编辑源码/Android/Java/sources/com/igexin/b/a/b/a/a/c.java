package com.igexin.b.a.b.a.a;

import android.text.TextUtils;
import com.igexin.push.config.SDKUrlConfig;
import com.xiaomi.mipush.sdk.Constants;
import java.net.InetSocketAddress;
import java.net.Socket;

public final class c extends a {
    private com.igexin.b.a.b.a.a.a.d i;
    private Socket j;

    public c(com.igexin.b.a.b.a.a.a.d dVar) {
        super(-2037, null, null);
        this.i = dVar;
    }

    @Override
    public void b() throws Exception {
        super.b();
        com.igexin.push.c.i.a().d().a();
        String cmAddress = SDKUrlConfig.getCmAddress();
        try {
            String[] strArrA = com.igexin.b.a.b.f.a(cmAddress);
            String str = strArrA[1];
            int i = Integer.parseInt(strArrA[2]);
            com.igexin.b.a.c.b.a("GS-C|start connect :  " + cmAddress + " *********", new Object[0]);
            com.igexin.b.a.b.a.a.a.d dVar = this.i;
            if (dVar != null) {
                dVar.a(cmAddress);
            }
            Socket socket = new Socket();
            this.j = socket;
            try {
                socket.connect(new InetSocketAddress(str, i), 10000);
                com.igexin.b.a.c.b.a("GS-C|connected :  " + cmAddress + " #########", new Object[0]);
                com.igexin.b.a.c.b.a("GS-C|local-" + this.j.getLocalAddress() + Constants.COLON_SEPARATOR + this.j.getLocalPort(), new Object[0]);
                if (this.f != b.c) {
                    this.f = b.a;
                }
            } catch (Exception e) {
                if (this.f != b.c) {
                    this.f = b.b;
                    this.g = e.toString();
                }
            }
            this.e = true;
        } catch (Exception e2) {
            com.igexin.b.a.c.b.a("GS-C|ips invalid, " + e2.toString(), new Object[0]);
            throw e2;
        }
    }

    @Override
    public final int b_() {
        return -2037;
    }

    @Override
    public void f() {
        Socket socket;
        super.f();
        com.igexin.b.a.c.b.a("GS-C|sc dispose", new Object[0]);
        if (this.i != null) {
            if (this.f == b.c) {
                this.i.a(this);
            } else if (this.f == b.b) {
                if (!TextUtils.isEmpty(this.g)) {
                    this.i.a(new Exception(this.g));
                }
            } else if (this.f == b.a && (socket = this.j) != null) {
                this.i.a(socket);
            }
        }
        this.i = null;
    }

    public void j() {
        this.f = b.c;
    }
}
