package com.xiaomi.push;

import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.dx;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes4.dex */
public class fl {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    int f384a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private dx.a f385a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public com.xiaomi.push.service.ao f386a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    String f387a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private short f388a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private byte[] f389b;
    private static String b = gy.a(5) + Constants.ACCEPT_TIME_SEPARATOR_SERVER;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static long f8159a = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final byte[] f383a = new byte[0];

    public fl() {
        this.f388a = (short) 2;
        this.f389b = f383a;
        this.f387a = null;
        this.f386a = null;
        this.f385a = new dx.a();
        this.f384a = 1;
    }

    fl(dx.a aVar, short s, byte[] bArr) {
        this.f388a = (short) 2;
        this.f389b = f383a;
        this.f387a = null;
        this.f386a = null;
        this.f385a = aVar;
        this.f388a = s;
        this.f389b = bArr;
        this.f384a = 2;
    }

    @Deprecated
    public static fl a(gn gnVar, String str) {
        int i;
        fl flVar = new fl();
        try {
            i = Integer.parseInt(gnVar.k());
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("Blob parse chid err " + e.getMessage());
            i = 1;
        }
        flVar.a(i);
        flVar.a(gnVar.j());
        flVar.c(gnVar.m());
        flVar.b(gnVar.n());
        flVar.a("XMLMSG", (String) null);
        try {
            flVar.a(gnVar.mo382a().getBytes("utf8"), str);
            if (TextUtils.isEmpty(str)) {
                flVar.a((short) 3);
            } else {
                flVar.a((short) 2);
                flVar.a("SECMSG", (String) null);
            }
        } catch (UnsupportedEncodingException e2) {
            com.xiaomi.channel.commonutils.logger.b.m43a("Blob setPayload err： " + e2.getMessage());
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
            com.xiaomi.channel.commonutils.logger.b.m43a("read Blob err :" + e.getMessage());
            throw new IOException("Malformed Input");
        }
    }

    public static synchronized String d() {
        StringBuilder sb;
        sb = new StringBuilder();
        sb.append(b);
        long j = f8159a;
        f8159a = 1 + j;
        sb.append(Long.toString(j));
        return sb.toString();
    }

    public int a() {
        return this.f385a.c();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m344a() {
        return this.f385a.m243c();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    ByteBuffer mo345a(ByteBuffer byteBuffer) {
        if (byteBuffer == null) {
            byteBuffer = ByteBuffer.allocate(c());
        }
        byteBuffer.putShort(this.f388a);
        byteBuffer.putShort((short) this.f385a.a());
        byteBuffer.putInt(this.f389b.length);
        int iPosition = byteBuffer.position();
        this.f385a.a(byteBuffer.array(), byteBuffer.arrayOffset() + iPosition, this.f385a.a());
        byteBuffer.position(iPosition + this.f385a.a());
        byteBuffer.put(this.f389b);
        return byteBuffer;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public short m346a() {
        return this.f388a;
    }

    public void a(int i) {
        this.f385a.a(i);
    }

    public void a(long j, String str, String str2) {
        if (j != 0) {
            this.f385a.a(j);
        }
        if (!TextUtils.isEmpty(str)) {
            this.f385a.a(str);
        }
        if (TextUtils.isEmpty(str2)) {
            return;
        }
        this.f385a.b(str2);
    }

    public void a(String str) {
        this.f385a.e(str);
    }

    public void a(String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("command should not be empty");
        }
        this.f385a.c(str);
        this.f385a.m238a();
        if (TextUtils.isEmpty(str2)) {
            return;
        }
        this.f385a.d(str2);
    }

    public void a(short s) {
        this.f388a = s;
    }

    public void a(byte[] bArr, String str) {
        if (TextUtils.isEmpty(str)) {
            this.f385a.c(0);
            this.f389b = bArr;
        } else {
            this.f385a.c(1);
            this.f389b = com.xiaomi.push.service.bp.a(com.xiaomi.push.service.bp.a(str, e()), bArr);
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m347a() {
        return this.f385a.j();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public byte[] m348a() {
        return fm.a(this, this.f389b);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public byte[] m349a(String str) {
        if (this.f385a.e() == 1) {
            return fm.a(this, com.xiaomi.push.service.bp.a(com.xiaomi.push.service.bp.a(str, e()), this.f389b));
        }
        if (this.f385a.e() == 0) {
            return fm.a(this, this.f389b);
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("unknow cipher = " + this.f385a.e());
        return fm.a(this, this.f389b);
    }

    public int b() {
        return this.f385a.f();
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public String m350b() {
        return this.f385a.m245d();
    }

    public void b(int i) {
        com.xiaomi.push.service.ao aoVar = new com.xiaomi.push.service.ao();
        this.f386a = aoVar;
        aoVar.f8311a = i;
    }

    public void b(String str) {
        this.f387a = str;
    }

    public int c() {
        return this.f385a.b() + 8 + this.f389b.length;
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public String m351c() {
        return this.f385a.m249f();
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
            this.f385a.a(j);
            this.f385a.a(strSubstring);
            this.f385a.b(strSubstring2);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("Blob parse user err " + e.getMessage());
        }
    }

    public String e() {
        String strM247e = this.f385a.m247e();
        if ("ID_NOT_AVAILABLE".equals(strM247e)) {
            return null;
        }
        if (this.f385a.g()) {
            return strM247e;
        }
        String strD = d();
        this.f385a.e(strD);
        return strD;
    }

    public String f() {
        return this.f387a;
    }

    public String g() {
        if (!this.f385a.m242b()) {
            return null;
        }
        return Long.toString(this.f385a.m237a()) + "@" + this.f385a.m239a() + "/" + this.f385a.m241b();
    }

    public String toString() {
        return "Blob [chid=" + a() + "; Id=" + e() + "; cmd=" + m344a() + "; type=" + ((int) m346a()) + "; from=" + g() + " ]";
    }
}
