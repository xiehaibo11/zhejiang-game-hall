package com.xiaomi.push;

import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.dx;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;

public class fl {
    int a;
    private dx.a a;
    public com.xiaomi.push.service.ao a;
    String a;
    private short a;
    private byte[] b;
    private static String b = gy.a(5) + Constants.ACCEPT_TIME_SEPARATOR_SERVER;
    private static long a = 0;
    private static final byte[] a = new byte[0];

    public fl() {
        this.a = (short) 2;
        this.b = a;
        this.a = null;
        this.a = null;
        this.a = new dx.a();
        this.a = 1;
    }

    fl(dx.a aVar, short s, byte[] bArr) {
        this.a = (short) 2;
        this.b = a;
        this.a = null;
        this.a = null;
        this.a = aVar;
        this.a = s;
        this.b = bArr;
        this.a = 2;
    }

    @Deprecated
    public static fl a(gn gnVar, String str) {
        int i;
        fl flVar = new fl();
        try {
            i = Integer.parseInt(gnVar.k());
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("Blob parse chid err " + e.getMessage());
            i = 1;
        }
        flVar.a(i);
        flVar.a(gnVar.j());
        flVar.c(gnVar.m());
        flVar.b(gnVar.n());
        flVar.a("XMLMSG", (String) null);
        try {
            flVar.a(gnVar.a().getBytes("utf8"), str);
            if (TextUtils.isEmpty(str)) {
                flVar.a((short) 3);
            } else {
                flVar.a((short) 2);
                flVar.a("SECMSG", (String) null);
            }
        } catch (UnsupportedEncodingException e2) {
            com.xiaomi.channel.commonutils.logger.b.a("Blob setPayload err： " + e2.getMessage());
        }
        return flVar;
    }

    static fl a(ByteBuffer byteBuffer) throws IOException {
        try {
            ByteBuffer byteBufferSlice = byteBuffer.slice();
            short s = byteBufferSlice.getShort(0);
            short s2 = byteBufferSlice.getShort(2);
            int i = byteBufferSlice.getInt(4);
            dx.a aVar = new dx.a();
            aVar.a(byteBufferSlice.array(), byteBufferSlice.arrayOffset() + 8, (int) s2);
            byte[] bArr = new byte[i];
            byteBufferSlice.position(s2 + 8);
            byteBufferSlice.get(bArr, 0, i);
            return new fl(aVar, s, bArr);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("read Blob err :" + e.getMessage());
            throw new IOException("Malformed Input");
        }
    }

    public static synchronized String d() {
        StringBuilder sb;
        sb = new StringBuilder();
        sb.append(b);
        long j = a;
        a = 1 + j;
        sb.append(Long.toString(j));
        return sb.toString();
    }

    public int a() {
        return this.a.c();
    }

    public String a() {
        return this.a.c();
    }

    ByteBuffer a(ByteBuffer byteBuffer) {
        if (byteBuffer == null) {
            byteBuffer = ByteBuffer.allocate(c());
        }
        byteBuffer.putShort(this.a);
        byteBuffer.putShort((short) this.a.a());
        byteBuffer.putInt(this.b.length);
        int iPosition = byteBuffer.position();
        this.a.a(byteBuffer.array(), byteBuffer.arrayOffset() + iPosition, this.a.a());
        byteBuffer.position(iPosition + this.a.a());
        byteBuffer.put(this.b);
        return byteBuffer;
    }

    public short a() {
        return this.a;
    }

    public void a(int i) {
        this.a.a(i);
    }

    public void a(long j, String str, String str2) {
        if (j != 0) {
            this.a.a(j);
        }
        if (!TextUtils.isEmpty(str)) {
            this.a.a(str);
        }
        if (TextUtils.isEmpty(str2)) {
            return;
        }
        this.a.b(str2);
    }

    public void a(String str) {
        this.a.e(str);
    }

    public void a(String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("command should not be empty");
        }
        this.a.c(str);
        this.a.a();
        if (TextUtils.isEmpty(str2)) {
            return;
        }
        this.a.d(str2);
    }

    public void a(short s) {
        this.a = s;
    }

    public void a(byte[] bArr, String str) {
        if (TextUtils.isEmpty(str)) {
            this.a.c(0);
            this.b = bArr;
        } else {
            this.a.c(1);
            this.b = com.xiaomi.push.service.bp.a(com.xiaomi.push.service.bp.a(str, e()), bArr);
        }
    }

    public boolean a() {
        return this.a.j();
    }

    public byte[] a() {
        return fm.a(this, this.b);
    }

    public byte[] a(String str) {
        if (this.a.e() == 1) {
            return fm.a(this, com.xiaomi.push.service.bp.a(com.xiaomi.push.service.bp.a(str, e()), this.b));
        }
        if (this.a.e() == 0) {
            return fm.a(this, this.b);
        }
        com.xiaomi.channel.commonutils.logger.b.a("unknow cipher = " + this.a.e());
        return fm.a(this, this.b);
    }

    public int b() {
        return this.a.f();
    }

    public String b() {
        return this.a.d();
    }

    public void b(int i) {
        com.xiaomi.push.service.ao aoVar = new com.xiaomi.push.service.ao();
        this.a = aoVar;
        aoVar.a = i;
    }

    public void b(String str) {
        this.a = str;
    }

    public int c() {
        return this.a.b() + 8 + this.b.length;
    }

    public String c() {
        return this.a.f();
    }

    public void c(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        int iIndexOf = str.indexOf("@");
        try {
            long j = Long.parseLong(str.substring(0, iIndexOf));
            int iIndexOf2 = str.indexOf("/", iIndexOf);
            String strSubstring = str.substring(iIndexOf + 1, iIndexOf2);
            String strSubstring2 = str.substring(iIndexOf2 + 1);
            this.a.a(j);
            this.a.a(strSubstring);
            this.a.b(strSubstring2);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("Blob parse user err " + e.getMessage());
        }
    }

    public String e() {
        String strE = this.a.e();
        if ("ID_NOT_AVAILABLE".equals(strE)) {
            return null;
        }
        if (this.a.g()) {
            return strE;
        }
        String strD = d();
        this.a.e(strD);
        return strD;
    }

    public String f() {
        return this.a;
    }

    public String g() {
        if (!this.a.b()) {
            return null;
        }
        return Long.toString(this.a.a()) + "@" + this.a.a() + "/" + this.a.b();
    }

    public String toString() {
        return "Blob [chid=" + a() + "; Id=" + e() + "; cmd=" + a() + "; type=" + ((int) a()) + "; from=" + g() + " ]";
    }
}
