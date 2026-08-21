package com.xiaomi.push;

import com.xiaomi.push.jb;
import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;

public class jl extends jb {
    private static int b = 10000;
    private static int c = 10000;
    private static int d = 10000;
    private static int e = 10485760;
    private static int f = 104857600;

    public class a extends jb.a {
        public a() {
            super(false, true);
        }

        public a(boolean z, boolean z2, int i) {
            super(z, z2, i);
        }

        @Override
        public jf a(jp jpVar) {
            jl jlVar = new jl(jpVar, this.a, this.b);
            if (this.a != 0) {
                jlVar.b(this.a);
            }
            return jlVar;
        }
    }

    public jl(jp jpVar, boolean z, boolean z2) {
        super(jpVar, z, z2);
    }

    @Override
    public jd a() throws jg {
        byte bA = a();
        int iA = a();
        if (iA <= c) {
            return new jd(bA, iA);
        }
        throw new jg(3, "Thrift list size " + iA + " out of range!");
    }

    @Override
    public je a() throws jg {
        byte bA = a();
        byte bA2 = a();
        int iA = a();
        if (iA <= b) {
            return new je(bA, bA2, iA);
        }
        throw new jg(3, "Thrift map size " + iA + " out of range!");
    }

    @Override
    public jj a() throws jg {
        byte bA = a();
        int iA = a();
        if (iA <= d) {
            return new jj(bA, iA);
        }
        throw new jg(3, "Thrift set size " + iA + " out of range!");
    }

    @Override
    public String a() throws iz {
        int iA = a();
        if (iA > e) {
            throw new jg(3, "Thrift string size " + iA + " out of range!");
        }
        if (this.a.b() < iA) {
            return a(iA);
        }
        try {
            String str = new String(this.a.a(), this.a.a(), iA, "UTF-8");
            this.a.a(iA);
            return str;
        } catch (UnsupportedEncodingException unused) {
            throw new iz("JVM DOES NOT SUPPORT UTF-8");
        }
    }

    @Override
    public ByteBuffer a() throws jg, jq {
        int iA = a();
        if (iA > f) {
            throw new jg(3, "Thrift binary size " + iA + " out of range!");
        }
        c(iA);
        if (this.a.b() >= iA) {
            ByteBuffer byteBufferWrap = ByteBuffer.wrap(this.a.a(), this.a.a(), iA);
            this.a.a(iA);
            return byteBufferWrap;
        }
        byte[] bArr = new byte[iA];
        this.a.b(bArr, 0, iA);
        return ByteBuffer.wrap(bArr);
    }
}
