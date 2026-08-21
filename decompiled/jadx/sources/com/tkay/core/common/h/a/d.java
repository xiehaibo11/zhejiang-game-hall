package com.tkay.core.common.h.a;

import com.ss.android.download.api.constant.BaseConstants;
import com.tkay.core.common.b.m;
import com.tkay.core.common.h.a.c;
import com.tkay.core.common.l.h;
import com.xiaomi.mipush.sdk.Constants;
import java.io.OutputStream;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.net.SocketException;

/* JADX INFO: loaded from: classes3.dex */
public final class d {
    private static d g;
    private String h;
    private int i;
    private Socket j;
    private final int c = 0;
    private final int d = 7;
    private final int e = 1;
    private final String f = getClass().getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    byte[] f6189a = null;
    byte[] b = new byte[1];

    private d() {
    }

    protected static synchronized d a() {
        if (g == null) {
            g = new d();
        }
        return g;
    }

    private void b() {
        synchronized (this) {
            if (this.j == null) {
                Socket socket = new Socket();
                this.j = socket;
                socket.setSoTimeout(BaseConstants.Time.MINUTE);
            }
            com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(m.a().f()).b(m.a().o());
            if (aVarB != null) {
                this.h = aVarB.v();
                this.i = aVarB.w();
                this.j.connect(new InetSocketAddress(this.h, this.i), 30000);
            }
        }
    }

    private void c() {
        synchronized (this) {
            try {
                if (this.j != null) {
                    this.j.close();
                    this.j = null;
                }
            } catch (Exception unused) {
            }
        }
    }

    private boolean d() {
        Socket socket = this.j;
        return (socket == null || !socket.isConnected() || this.j.isClosed()) ? false : true;
    }

    /* JADX INFO: renamed from: com.tkay.core.common.h.a.d$1, reason: invalid class name */
    final class AnonymousClass1 extends com.tkay.core.common.l.b.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ c f6190a;
        final /* synthetic */ c.a b;

        AnonymousClass1(c cVar, c.a aVar) {
            this.f6190a = cVar;
            this.b = aVar;
        }

        @Override // com.tkay.core.common.l.b.b
        public final void a() {
            try {
                try {
                    d.this.a(this.f6190a);
                    int iE = d.this.e();
                    if (iE == 1) {
                        if (this.b != null) {
                            this.b.a(this.f6190a);
                            return;
                        }
                        return;
                    }
                    throw new Exception("Response Error Code:".concat(String.valueOf(iE)));
                } catch (SocketException unused) {
                    d.b(d.this);
                    d.this.a(this.f6190a);
                    int iE2 = d.this.e();
                    if (iE2 == 1) {
                        if (this.b != null) {
                            this.b.a(this.f6190a);
                            return;
                        }
                        return;
                    }
                    throw new Exception("Response Error Code:".concat(String.valueOf(iE2)));
                }
            } catch (Throwable th) {
                this.f6190a.a("", th.getMessage() + Constants.ACCEPT_TIME_SEPARATOR_SP + h.a(th.getStackTrace()), d.this.h, d.this.i);
                c.a aVar = this.b;
                if (aVar != null) {
                    aVar.a(th);
                }
            }
        }
    }

    private void a(c cVar, c.a aVar) {
        com.tkay.core.common.l.b.a.a().a((com.tkay.core.common.l.b.b) new AnonymousClass1(cVar, aVar), 4);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized int e() {
        byte b;
        if (this.j.getInputStream().read(this.b, 0, 1) == -1) {
            throw new SocketException("Socket.InputStream read length = -1!");
        }
        b = this.b[0];
        this.b[0] = 0;
        return b;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a(c cVar) {
        if (!((this.j == null || !this.j.isConnected() || this.j.isClosed()) ? false : true)) {
            synchronized (this) {
                if (this.j == null) {
                    Socket socket = new Socket();
                    this.j = socket;
                    socket.setSoTimeout(BaseConstants.Time.MINUTE);
                }
                com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(m.a().f()).b(m.a().o());
                if (aVarB != null) {
                    this.h = aVarB.v();
                    this.i = aVarB.w();
                    this.j.connect(new InetSocketAddress(this.h, this.i), 30000);
                }
            }
        }
        byte[] bArrE = cVar.e();
        if (bArrE != null) {
            int length = bArrE.length;
            if (bArrE.length == 0) {
                return;
            }
            int i = length + 7;
            if (this.f6189a == null || this.f6189a.length < i) {
                this.f6189a = new byte[i];
            }
            this.f6189a[0] = 0;
            this.f6189a[1] = 3;
            this.f6189a[2] = (byte) cVar.c();
            this.f6189a[3] = (byte) ((length >>> 24) & 255);
            this.f6189a[4] = (byte) ((length >>> 16) & 255);
            this.f6189a[5] = (byte) ((length >>> 8) & 255);
            this.f6189a[6] = (byte) ((length >>> 0) & 255);
            System.arraycopy(bArrE, 0, this.f6189a, 7, bArrE.length);
            OutputStream outputStream = this.j.getOutputStream();
            outputStream.write(this.f6189a, 0, i);
            outputStream.flush();
        }
    }

    static /* synthetic */ void b(d dVar) {
        synchronized (dVar) {
            try {
                if (dVar.j != null) {
                    dVar.j.close();
                    dVar.j = null;
                }
            } catch (Exception unused) {
            }
        }
    }
}
