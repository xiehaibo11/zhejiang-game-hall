package com.kwad.sdk.core.videocache;

import android.text.TextUtils;
import java.io.BufferedOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.net.Socket;
import java.util.Locale;

final class e extends j {
    private final h awq;
    private final com.kwad.sdk.core.videocache.a.b awr;
    private b aws;

    public e(h hVar, com.kwad.sdk.core.videocache.a.b bVar) {
        super(hVar, bVar);
        this.awr = bVar;
        this.awq = hVar;
    }

    private void a(OutputStream outputStream, long j) throws IOException {
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

    private boolean a(d dVar) {
        long length = this.awq.length();
        return (((length > 0L ? 1 : (length == 0L ? 0 : -1)) > 0) && dVar.awp && ((float) dVar.awo) > ((float) this.awr.DB()) + (((float) length) * 0.2f)) ? false : true;
    }

    private String b(d dVar) {
        String strDK = this.awq.DK();
        boolean z = !TextUtils.isEmpty(strDK);
        long jDB = this.awr.isCompleted() ? this.awr.DB() : this.awq.length();
        boolean z2 = jDB >= 0;
        long j = dVar.awp ? jDB - dVar.awo : jDB;
        boolean z3 = z2 && dVar.awp;
        StringBuilder sb = new StringBuilder();
        sb.append(dVar.awp ? "HTTP/1.1 206 PARTIAL CONTENT\n" : "HTTP/1.1 200 OK\n");
        sb.append("Accept-Ranges: bytes\n");
        sb.append(z2 ? format("Content-Length: %d\n", Long.valueOf(j)) : "");
        sb.append(z3 ? format("Content-Range: bytes %d-%d/%d\n", Long.valueOf(dVar.awo), Long.valueOf(jDB - 1), Long.valueOf(jDB)) : "");
        sb.append(z ? format("Content-Type: %s\n", strDK) : "");
        sb.append("\n");
        return sb.toString();
    }

    private void b(OutputStream outputStream, long j) {
        h hVar = new h(this.awq);
        try {
            hVar.ai((int) j);
            byte[] bArr = new byte[8192];
            while (true) {
                int i = hVar.read(bArr);
                if (i == -1) {
                    outputStream.flush();
                    return;
                }
                outputStream.write(bArr, 0, i);
            }
        } finally {
            hVar.close();
        }
    }

    private static String format(String str, Object... objArr) {
        return String.format(Locale.US, str, objArr);
    }

    public final void a(b bVar) {
        this.aws = bVar;
    }

    public final void a(d dVar, Socket socket) throws IOException {
        BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(socket.getOutputStream());
        bufferedOutputStream.write(b(dVar).getBytes("UTF-8"));
        long j = dVar.awo;
        if (a(dVar)) {
            a(bufferedOutputStream, j);
        } else {
            b(bufferedOutputStream, j);
        }
    }

    @Override
    protected final void cz(int i) {
        b bVar = this.aws;
        if (bVar != null) {
            bVar.a(this.awr.file, i);
        }
    }
}
