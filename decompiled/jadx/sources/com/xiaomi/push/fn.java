package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.push.dx;
import java.io.BufferedInputStream;
import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.util.zip.Adler32;

/* JADX INFO: loaded from: classes4.dex */
class fn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f8161a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private fs f391a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private InputStream f392a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private volatile boolean f395a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private byte[] f396a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ByteBuffer f393a = ByteBuffer.allocate(2048);
    private ByteBuffer b = ByteBuffer.allocate(4);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Adler32 f394a = new Adler32();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private fq f390a = new fq();

    fn(InputStream inputStream, fs fsVar, Context context) {
        this.f392a = new BufferedInputStream(inputStream);
        this.f391a = fsVar;
        this.f8161a = context;
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x00be  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00cf  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.nio.ByteBuffer a() throws java.io.IOException {
        /*
            Method dump skipped, instruction units count: 266
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.fn.a():java.nio.ByteBuffer");
    }

    private void a(ByteBuffer byteBuffer, int i) throws IOException {
        int iPosition = byteBuffer.position();
        do {
            int i2 = this.f392a.read(byteBuffer.array(), iPosition, i);
            if (i2 == -1) {
                throw new EOFException();
            }
            i -= i2;
            iPosition += i2;
        } while (i > 0);
        byteBuffer.position(iPosition);
    }

    private void c() throws IOException {
        String string;
        StringBuilder sb;
        boolean z = false;
        this.f395a = false;
        fl flVarM352a = m352a();
        if ("CONN".equals(flVarM352a.m344a())) {
            dx.f fVarA = dx.f.a(flVarM352a.m348a());
            if (fVarA.m283a()) {
                this.f391a.a(fVarA.m282a());
                z = true;
            }
            if (fVarA.c()) {
                dx.b bVarM281a = fVarA.m281a();
                fl flVar = new fl();
                flVar.a("SYNC", "CONF");
                flVar.a(bVarM281a.a(), (String) null);
                this.f391a.a(flVar);
            }
            com.xiaomi.channel.commonutils.logger.b.m43a("[Slim] CONN: host = " + fVarA.m284b());
        }
        if (!z) {
            com.xiaomi.channel.commonutils.logger.b.m43a("[Slim] Invalid CONN");
            throw new IOException("Invalid Connection");
        }
        this.f396a = this.f391a.m359a();
        while (!this.f395a) {
            fl flVarM352a2 = m352a();
            this.f391a.c();
            short sM346a = flVarM352a2.m346a();
            if (sM346a != 1) {
                if (sM346a != 2) {
                    if (sM346a != 3) {
                        string = "[Slim] unknow blob type " + ((int) flVarM352a2.m346a());
                    } else {
                        try {
                            this.f391a.b(this.f390a.a(flVarM352a2.m348a(), this.f391a));
                        } catch (Exception e) {
                            e = e;
                            sb = new StringBuilder();
                            sb.append("[Slim] Parse packet from Blob chid=");
                            sb.append(flVarM352a2.a());
                            sb.append("; Id=");
                            sb.append(flVarM352a2.e());
                            sb.append(" failure:");
                            sb.append(e.getMessage());
                            string = sb.toString();
                            com.xiaomi.channel.commonutils.logger.b.m43a(string);
                        }
                    }
                } else if ("SECMSG".equals(flVarM352a2.m344a()) && ((flVarM352a2.a() == 2 || flVarM352a2.a() == 3) && TextUtils.isEmpty(flVarM352a2.m350b()))) {
                    try {
                        this.f391a.b(this.f390a.a(flVarM352a2.m349a(com.xiaomi.push.service.bg.a().a(Integer.valueOf(flVarM352a2.a()).toString(), flVarM352a2.g()).h), this.f391a));
                    } catch (Exception e2) {
                        e = e2;
                        sb = new StringBuilder();
                        sb.append("[Slim] Parse packet from Blob chid=");
                        sb.append(flVarM352a2.a());
                        sb.append("; Id=");
                        sb.append(flVarM352a2.e());
                        sb.append(" failure:");
                        sb.append(e.getMessage());
                        string = sb.toString();
                        com.xiaomi.channel.commonutils.logger.b.m43a(string);
                    }
                } else if (flVarM352a2.a() == 10) {
                    flVarM352a2.b(10);
                    flVarM352a2.f386a.f915a = w.a(this.f8161a);
                    flVarM352a2.f386a.f917b = bj.e(this.f8161a);
                    flVarM352a2.f386a.f914a = System.currentTimeMillis();
                    com.xiaomi.channel.commonutils.logger.b.c("rcv blob from chid 10");
                }
                com.xiaomi.channel.commonutils.logger.b.m43a(string);
            }
            this.f391a.a(flVarM352a2);
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    fl m352a() throws IOException {
        int iPosition;
        ByteBuffer byteBufferA;
        try {
            byteBufferA = a();
            iPosition = byteBufferA.position();
        } catch (IOException e) {
            e = e;
            iPosition = 0;
        }
        try {
            byteBufferA.flip();
            byteBufferA.position(8);
            fl frVar = iPosition == 8 ? new fr() : fl.a(byteBufferA.slice());
            com.xiaomi.channel.commonutils.logger.b.c("[Slim] Read {cmd=" + frVar.m344a() + ";chid=" + frVar.a() + ";len=" + iPosition + "}");
            return frVar;
        } catch (IOException e2) {
            e = e2;
            if (iPosition == 0) {
                iPosition = this.f393a.position();
            }
            StringBuilder sb = new StringBuilder();
            sb.append("[Slim] read Blob [");
            byte[] bArrArray = this.f393a.array();
            if (iPosition > 128) {
                iPosition = 128;
            }
            sb.append(ai.a(bArrArray, 0, iPosition));
            sb.append("] Err:");
            sb.append(e.getMessage());
            com.xiaomi.channel.commonutils.logger.b.m43a(sb.toString());
            throw e;
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    void m353a() throws IOException {
        try {
            c();
        } catch (IOException e) {
            if (!this.f395a) {
                throw e;
            }
        }
    }

    void b() {
        this.f395a = true;
    }
}
