package com.sigmob.sdk.videocache;

import android.text.TextUtils;
import java.io.BufferedOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.net.Socket;
import java.util.Locale;

class g extends o {
    private static final float a = 0.2f;
    private final j b;
    private final com.sigmob.sdk.videocache.file.b c;
    private d d;

    public g(j jVar, com.sigmob.sdk.videocache.file.b bVar) {
        super(jVar, bVar);
        this.c = bVar;
        this.b = jVar;
    }

    private String a(String str, Object... objArr) {
        return String.format(Locale.US, str, objArr);
    }

    private void a(OutputStream outputStream, long j) throws p, IOException {
        byte[] bArr = new byte[8192];
        while (true) {
            int iA = a(bArr, j, 8192);
            if (iA == -1) {
                outputStream.flush();
                return;
            } else {
                outputStream.write(bArr, 0, iA);
                j += (long) iA;
            }
        }
    }

    private boolean a(f fVar) throws p {
        long jA = this.b.a();
        return (((jA > 0L ? 1 : (jA == 0L ? 0 : -1)) > 0) && fVar.c && ((float) fVar.b) > ((float) this.c.a()) + (((float) jA) * a)) ? false : true;
    }

    private String b(f fVar) throws p, IOException {
        String strC = this.b.c();
        boolean z = !TextUtils.isEmpty(strC);
        long jA = this.c.d() ? this.c.a() : this.b.a();
        boolean z2 = jA >= 0;
        long j = fVar.c ? jA - fVar.b : jA;
        boolean z3 = z2 && fVar.c;
        StringBuilder sb = new StringBuilder();
        sb.append(fVar.c ? "HTTP/1.1 206 PARTIAL CONTENT\n" : "HTTP/1.1 200 OK\n");
        sb.append("Accept-Ranges: bytes\n");
        sb.append(z2 ? a("Content-Length: %d\n", Long.valueOf(j)) : "");
        sb.append(z3 ? a("Content-Range: bytes %d-%d/%d\n", Long.valueOf(fVar.b), Long.valueOf(jA - 1), Long.valueOf(jA)) : "");
        sb.append(z ? a("Content-Type: %s\n", strC) : "");
        sb.append("\n");
        return sb.toString();
    }

    private void b(OutputStream outputStream, long j) throws p, IOException {
        j jVar = new j(this.b);
        try {
            jVar.a((int) j);
            byte[] bArr = new byte[8192];
            while (true) {
                int iA = jVar.a(bArr);
                if (iA == -1) {
                    outputStream.flush();
                    return;
                }
                outputStream.write(bArr, 0, iA);
            }
        } finally {
            jVar.b();
        }
    }

    @Override
    protected void a(int i) {
        d dVar = this.d;
        if (dVar != null) {
            dVar.a(this.c.a, this.b.d(), i);
        }
    }

    public void a(d dVar) {
        this.d = dVar;
    }

    public void a(f fVar, Socket socket) throws p, IOException {
        BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(socket.getOutputStream());
        bufferedOutputStream.write(b(fVar).getBytes("UTF-8"));
        long j = fVar.b;
        if (a(fVar)) {
            a(bufferedOutputStream, j);
        } else {
            b(bufferedOutputStream, j);
        }
    }
}
