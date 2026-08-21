package com.sigmob.sdk.base.common;

import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.network.c;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.SocketAddress;
import java.net.URI;

/* JADX INFO: loaded from: classes3.dex */
public class w {
    private String b;
    private int c;
    private String d;
    private SocketAddress g;
    private boolean h;
    private String i;
    private String j;
    private String k;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f4870a = -1;
    private ServerSocket e = null;
    private Socket f = null;

    public w(int i) {
        try {
            this.c = i;
            this.d = com.sigmob.sdk.base.network.c.f4916a;
        } catch (Throwable th) {
            SigmobLog.e("MediaPlayerHttpStreamProxy init ", th);
        }
    }

    private void b() {
        this.h = true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c() {
        boolean z;
        Throwable th;
        String str;
        byte[] bArr = new byte[1024];
        try {
            this.e = new ServerSocket(this.c, 1, InetAddress.getByName(this.d));
            this.g = new InetSocketAddress(this.b, this.f4870a);
            while (!this.h) {
                try {
                    if (this.f != null) {
                        this.f.close();
                    }
                } catch (IOException unused) {
                }
                try {
                    this.f = this.e.accept();
                    SigmobLog.e("------------------------------------------------------------------");
                    this.f.setKeepAlive(true);
                    c.b bVar = new c.b(this.b, this.f4870a, this.d, this.c);
                    c.a aVar = new c.a(this.f, this.g);
                    c.b.a aVarA = null;
                    while (true) {
                        int i = this.f.getInputStream().read(bArr);
                        if (i == -1) {
                            break;
                        }
                        byte[] bArrA = bVar.a(bArr, i);
                        if (bArrA != null) {
                            aVarA = bVar.a(bArrA);
                            break;
                        }
                    }
                    aVar.a(bVar.a().getBytes());
                    boolean z2 = false;
                    int iA = 0;
                    while (!z2) {
                        try {
                            str = this.i;
                        } catch (Throwable th2) {
                            z = z2;
                            th = th2;
                        }
                        if (new File(this.j).isFile()) {
                            str = this.j;
                            try {
                                SigmobLog.d("final video path is exist");
                                z2 = true;
                            } catch (Throwable th3) {
                                th = th3;
                                z = true;
                                SigmobLog.e(th.getMessage());
                                z2 = z;
                            }
                        } else if (new File(str).isFile()) {
                            SigmobLog.d("temp video path is exist");
                        } else {
                            SigmobLog.d("can't find invalid video path , sleep 100ms");
                            Thread.sleep(100L);
                        }
                        iA = aVar.a(str, aVarA.b);
                        if (iA > 0) {
                            aVarA.b = (int) (((long) iA) + aVarA.b);
                        }
                    }
                    SigmobLog.e(".........over..........");
                    this.f.close();
                } catch (Exception e) {
                    SigmobLog.e(e.toString());
                    SigmobLog.e(com.sigmob.sdk.base.network.c.a(e));
                }
            }
        } catch (IOException e2) {
            SigmobLog.e("localserver fail", e2);
        }
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [com.sigmob.sdk.base.common.w$1] */
    public void a() {
        new Thread() { // from class: com.sigmob.sdk.base.common.w.1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                w.this.c();
            }
        }.start();
    }

    public String[] a(String str, String str2, String str3) {
        String strReplace;
        this.i = str2;
        this.j = str3;
        String strReplace2 = str.replace("https", "http");
        this.k = strReplace2;
        URI uriCreate = URI.create(strReplace2);
        this.b = uriCreate.getHost();
        if (uriCreate.getPort() != -1) {
            this.f4870a = uriCreate.getPort();
            strReplace = this.k.replace(this.b + Constants.COLON_SEPARATOR + uriCreate.getPort(), this.d + Constants.COLON_SEPARATOR + this.c);
        } else {
            this.f4870a = 80;
            strReplace = this.k.replace(this.b, this.d + Constants.COLON_SEPARATOR + this.c);
        }
        return new String[]{this.k, strReplace};
    }
}
