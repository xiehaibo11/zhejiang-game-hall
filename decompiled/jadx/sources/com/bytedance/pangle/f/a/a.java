package com.bytedance.pangle.f.a;

import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: classes.dex */
final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f1526a;
    b b;
    int[] c;
    private boolean i;
    private f k;
    private boolean j = false;
    private final c l = new c();
    int d = 0;
    int e = 1;
    int f = 2;
    int g = 3;
    int h = 4;

    public a() {
        c();
    }

    public final void a() {
        if (this.j) {
            this.j = false;
            b bVar = this.b;
            if (bVar.f1527a != null) {
                try {
                    bVar.f1527a.close();
                } catch (IOException unused) {
                }
                bVar.a((InputStream) null);
            }
            this.k = null;
            this.b = null;
            c cVar = this.l;
            cVar.b = 0;
            cVar.c = 0;
            c();
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:56:0x0110, code lost:
    
        throw new java.io.IOException("Invalid resource ids size (" + r2 + ").");
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x023c, code lost:
    
        throw new java.io.IOException("Invalid chunk type (" + r2 + ").");
     */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00cc A[Catch: IOException -> 0x0248, TryCatch #0 {IOException -> 0x0248, blocks: (B:2:0x0000, B:4:0x0004, B:6:0x0009, B:8:0x0042, B:12:0x004a, B:14:0x004f, B:16:0x0059, B:18:0x005e, B:19:0x0064, B:20:0x0069, B:21:0x006a, B:22:0x0074, B:23:0x0079, B:24:0x007a, B:26:0x0080, B:27:0x0085, B:29:0x008a, B:31:0x0092, B:33:0x00a0, B:34:0x00ac, B:36:0x00b0, B:38:0x00b6, B:43:0x00c6, B:41:0x00bd, B:44:0x00cc, B:50:0x00e2, B:52:0x00ec, B:54:0x00f0, B:55:0x00fa, B:56:0x0110, B:64:0x0120, B:65:0x0126, B:71:0x0140, B:72:0x0169, B:74:0x016e, B:75:0x0179, B:78:0x0189, B:80:0x019d, B:82:0x01b4, B:84:0x01c6, B:85:0x01c9, B:86:0x01f5, B:88:0x0205, B:90:0x020e, B:91:0x0226, B:92:0x023c, B:47:0x00d5, B:93:0x023d, B:95:0x0240, B:96:0x0247), top: B:100:0x0000 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final int b() throws java.io.IOException {
        /*
            Method dump skipped, instruction units count: 589
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.bytedance.pangle.f.a.a.b():int");
    }

    public final String a(int i) {
        int i2 = this.c[e(i) + 1];
        return i2 == -1 ? "" : this.k.a(i2);
    }

    public final int b(int i) {
        return this.c[e(i) + 3];
    }

    public final int c(int i) {
        return this.c[e(i) + 4];
    }

    public final String d(int i) {
        int iE = e(i);
        int[] iArr = this.c;
        if (iArr[iE + 3] != 3) {
            return "";
        }
        return this.k.a(iArr[iE + 2]);
    }

    private int e(int i) {
        if (this.f1526a != 2) {
            throw new IndexOutOfBoundsException("Current event is not START_TAG.");
        }
        int i2 = i * 5;
        if (i2 < this.c.length) {
            return i2;
        }
        throw new IndexOutOfBoundsException("Invalid attribute index (" + i + ").");
    }

    private void c() {
        this.c = null;
        this.f1526a = -1;
    }
}
