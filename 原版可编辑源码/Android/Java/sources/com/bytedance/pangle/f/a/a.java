package com.bytedance.pangle.f.a;

import java.io.IOException;
import java.io.InputStream;

final class a {
    int a;
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
            if (bVar.a != null) {
                try {
                    bVar.a.close();
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
    */
    public final int b() throws IOException {
        int i;
        int i2;
        try {
            if (this.b == null) {
                throw new IOException("Parser is not opened.");
            }
            if (this.k == null) {
                this.b.b(524291);
                this.b.b();
                b bVar = this.b;
                bVar.b(1835009);
                int iA = bVar.a();
                int iA2 = bVar.a();
                int iA3 = bVar.a();
                bVar.a();
                int iA4 = bVar.a();
                int iA5 = bVar.a();
                f fVar = new f();
                fVar.a = bVar.a(iA2);
                if (iA3 != 0) {
                    bVar.a(iA3);
                }
                int i3 = (iA5 == 0 ? iA : iA5) - iA4;
                if (i3 % 4 == 0) {
                    fVar.b = bVar.a(i3 / 4);
                    if (iA5 != 0) {
                        int i4 = iA - iA5;
                        if (i4 % 4 == 0) {
                            bVar.a(i4 / 4);
                        } else {
                            throw new IOException();
                        }
                    }
                    this.k = fVar;
                    this.l.a();
                    this.j = true;
                } else {
                    throw new IOException();
                }
            }
            if (this.a != this.e) {
                int i5 = this.a;
                c();
                while (true) {
                    int i6 = 0;
                    if (this.i) {
                        this.i = false;
                        c cVar = this.l;
                        if (cVar.b != 0) {
                            int i7 = cVar.b - 1;
                            int i8 = cVar.a[i7] * 2;
                            if ((i7 - 1) - i8 != 0) {
                                cVar.b -= i8 + 2;
                                cVar.c--;
                            }
                        }
                    }
                    if (i5 == this.g && this.l.c == 1) {
                        c cVar2 = this.l;
                        if (cVar2.b != 0) {
                            i6 = cVar2.a[cVar2.b - 1];
                        }
                        if (i6 == 0) {
                            this.a = this.e;
                            break;
                        }
                    } else {
                        int iA6 = i5 == this.d ? 1048834 : this.b.a();
                        if (iA6 == 524672) {
                            int iA7 = this.b.a();
                            if (iA7 < 8 || iA7 % 4 != 0) {
                                break;
                            }
                            this.b.a((iA7 / 4) - 2);
                        } else {
                            if (iA6 < 1048832 || iA6 > 1048836) {
                                break;
                            }
                            if (iA6 == 1048834 && i5 == -1) {
                                this.a = this.d;
                                break;
                            }
                            this.b.b();
                            this.b.a();
                            this.b.b();
                            if (iA6 != 1048832 && iA6 != 1048833) {
                                if (iA6 != 1048834) {
                                    if (iA6 == 1048835) {
                                        this.b.a();
                                        this.b.a();
                                        this.a = this.g;
                                        this.i = true;
                                        break;
                                    }
                                    if (iA6 == 1048836) {
                                        this.b.a();
                                        this.b.b();
                                        this.b.b();
                                        this.a = this.h;
                                        break;
                                    }
                                } else {
                                    this.b.a();
                                    this.b.a();
                                    this.b.b();
                                    int iA8 = this.b.a() & 65535;
                                    this.b.a();
                                    this.c = this.b.a(iA8 * 5);
                                    for (int i9 = 3; i9 < this.c.length; i9 += 5) {
                                        int[] iArr = this.c;
                                        iArr[i9] = iArr[i9] >>> 24;
                                    }
                                    this.l.a();
                                    this.a = this.f;
                                }
                            } else if (iA6 == 1048832) {
                                int iA9 = this.b.a();
                                int iA10 = this.b.a();
                                c cVar3 = this.l;
                                if (cVar3.c == 0) {
                                    cVar3.a();
                                }
                                cVar3.b();
                                int i10 = cVar3.b - 1;
                                int i11 = cVar3.a[i10];
                                int i12 = (i10 - 1) - (i11 * 2);
                                int i13 = i11 + 1;
                                cVar3.a[i12] = i13;
                                cVar3.a[i10] = iA9;
                                cVar3.a[i10 + 1] = iA10;
                                cVar3.a[i10 + 2] = i13;
                                cVar3.b += 2;
                            } else {
                                this.b.b();
                                this.b.b();
                                c cVar4 = this.l;
                                if (cVar4.b != 0 && (i2 = cVar4.a[(i = cVar4.b - 1)]) != 0) {
                                    int i14 = i2 - 1;
                                    int i15 = i - 2;
                                    cVar4.a[i15] = i14;
                                    cVar4.a[i15 - ((i14 * 2) + 1)] = i14;
                                    cVar4.b -= 2;
                                }
                            }
                        }
                    }
                }
            }
            return this.a;
        } catch (IOException e) {
            a();
            throw e;
        }
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
        if (this.a != 2) {
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
        this.a = -1;
    }
}
