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

class fn {
    private Context a;
    private fs a;
    private InputStream a;
    private volatile boolean a;
    private byte[] a;
    private ByteBuffer a = ByteBuffer.allocate(2048);
    private ByteBuffer b = ByteBuffer.allocate(4);
    private Adler32 a = new Adler32();
    private fq a = new fq();

    fn(InputStream inputStream, fs fsVar, Context context) {
        this.a = new BufferedInputStream(inputStream);
        this.a = fsVar;
        this.a = context;
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x00be  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00cf  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private ByteBuffer a() throws IOException {
        ByteBuffer byteBufferAllocate;
        int i;
        this.a.clear();
        a(this.a, 8);
        short s = this.a.getShort(0);
        short s2 = this.a.getShort(2);
        if (s != -15618 || s2 != 5) {
            throw new IOException("Malformed Input");
        }
        int i2 = this.a.getInt(4);
        int iPosition = this.a.position();
        if (i2 > 32768) {
            throw new IOException("Blob size too large");
        }
        if (i2 + 4 <= this.a.remaining()) {
            if (this.a.capacity() > 4096 && i2 < 2048) {
                byteBufferAllocate = ByteBuffer.allocate(2048);
                byteBufferAllocate.put(this.a.array(), 0, this.a.arrayOffset() + this.a.position());
            }
            a(this.a, i2);
            this.b.clear();
            a(this.b, 4);
            this.b.position(0);
            i = this.b.getInt();
            this.a.reset();
            this.a.update(this.a.array(), 0, this.a.position());
            if (i != ((int) this.a.getValue())) {
                byte[] bArr = this.a;
                if (bArr != null) {
                    com.xiaomi.push.service.bp.a(bArr, this.a.array(), true, iPosition, i2);
                }
                return this.a;
            }
            com.xiaomi.channel.commonutils.logger.b.a("CRC = " + ((int) this.a.getValue()) + " and " + i);
            throw new IOException("Corrupted Blob bad CRC");
        }
        byteBufferAllocate = ByteBuffer.allocate(i2 + 2048);
        byteBufferAllocate.put(this.a.array(), 0, this.a.arrayOffset() + this.a.position());
        this.a = byteBufferAllocate;
        a(this.a, i2);
        this.b.clear();
        a(this.b, 4);
        this.b.position(0);
        i = this.b.getInt();
        this.a.reset();
        this.a.update(this.a.array(), 0, this.a.position());
        if (i != ((int) this.a.getValue())) {
        }
    }

    private void a(ByteBuffer byteBuffer, int i) throws IOException {
        int iPosition = byteBuffer.position();
        do {
            int i2 = this.a.read(byteBuffer.array(), iPosition, i);
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
        this.a = false;
        fl flVarA = a();
        if ("CONN".equals(flVarA.a())) {
            dx.f fVarA = dx.f.a(flVarA.a());
            if (fVarA.a()) {
                this.a.a(fVarA.a());
                z = true;
            }
            if (fVarA.c()) {
                dx.b bVarA = fVarA.a();
                fl flVar = new fl();
                flVar.a("SYNC", "CONF");
                flVar.a(bVarA.a(), (String) null);
                this.a.a(flVar);
            }
            com.xiaomi.channel.commonutils.logger.b.a("[Slim] CONN: host = " + fVarA.b());
        }
        if (!z) {
            com.xiaomi.channel.commonutils.logger.b.a("[Slim] Invalid CONN");
            throw new IOException("Invalid Connection");
        }
        this.a = this.a.a();
        while (!this.a) {
            fl flVarA2 = a();
            this.a.c();
            short sA = flVarA2.a();
            if (sA != 1) {
                if (sA != 2) {
                    if (sA != 3) {
                        string = "[Slim] unknow blob type " + ((int) flVarA2.a());
                    } else {
                        try {
                            this.a.b(this.a.a(flVarA2.a(), this.a));
                        } catch (Exception e) {
                            e = e;
                            sb = new StringBuilder();
                            sb.append("[Slim] Parse packet from Blob chid=");
                            sb.append(flVarA2.a());
                            sb.append("; Id=");
                            sb.append(flVarA2.e());
                            sb.append(" failure:");
                            sb.append(e.getMessage());
                            string = sb.toString();
                            com.xiaomi.channel.commonutils.logger.b.a(string);
                        }
                    }
                } else if ("SECMSG".equals(flVarA2.a()) && ((flVarA2.a() == 2 || flVarA2.a() == 3) && TextUtils.isEmpty(flVarA2.b()))) {
                    try {
                        this.a.b(this.a.a(flVarA2.a(com.xiaomi.push.service.bg.a().a(Integer.valueOf(flVarA2.a()).toString(), flVarA2.g()).h), this.a));
                    } catch (Exception e2) {
                        e = e2;
                        sb = new StringBuilder();
                        sb.append("[Slim] Parse packet from Blob chid=");
                        sb.append(flVarA2.a());
                        sb.append("; Id=");
                        sb.append(flVarA2.e());
                        sb.append(" failure:");
                        sb.append(e.getMessage());
                        string = sb.toString();
                        com.xiaomi.channel.commonutils.logger.b.a(string);
                    }
                } else if (flVarA2.a() == 10) {
                    flVarA2.b(10);
                    flVarA2.a.a = w.a(this.a);
                    flVarA2.a.b = bj.e(this.a);
                    flVarA2.a.a = System.currentTimeMillis();
                    com.xiaomi.channel.commonutils.logger.b.c("rcv blob from chid 10");
                }
                com.xiaomi.channel.commonutils.logger.b.a(string);
            }
            this.a.a(flVarA2);
        }
    }

    fl a() throws IOException {
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
            com.xiaomi.channel.commonutils.logger.b.c("[Slim] Read {cmd=" + frVar.a() + ";chid=" + frVar.a() + ";len=" + iPosition + "}");
            return frVar;
        } catch (IOException e2) {
            e = e2;
            if (iPosition == 0) {
                iPosition = this.a.position();
            }
            StringBuilder sb = new StringBuilder();
            sb.append("[Slim] read Blob [");
            byte[] bArrArray = this.a.array();
            if (iPosition > 128) {
                iPosition = 128;
            }
            sb.append(ai.a(bArrArray, 0, iPosition));
            sb.append("] Err:");
            sb.append(e.getMessage());
            com.xiaomi.channel.commonutils.logger.b.a(sb.toString());
            throw e;
        }
    }

    void a() throws IOException {
        try {
            c();
        } catch (IOException e) {
            if (!this.a) {
                throw e;
            }
        }
    }

    void b() {
        this.a = true;
    }
}
