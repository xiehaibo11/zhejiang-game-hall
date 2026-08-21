package com.bytedance.pangle.res.a;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;

public final class b {
    g c;
    private final h i;
    private final byte[] j;
    private int[] l;
    private boolean n;
    private int o;
    private int[] p;
    private int q;
    HashMap<Integer, Integer> a = new HashMap<>();
    boolean b = false;
    private boolean k = false;
    private final a m = new a();
    int d = 0;
    int e = 1;
    int f = 2;
    int g = 3;
    int h = 4;

    public b(byte[] bArr, h hVar) {
        this.i = hVar;
        this.j = bArr;
        c();
    }

    public final void a() {
        if (this.k) {
            this.k = false;
            this.c = null;
            this.l = null;
            a aVar = this.m;
            aVar.b = 0;
            aVar.c = 0;
            c();
        }
    }

    public final int b() throws IOException {
        if (this.c == null) {
            throw new RuntimeException("Parser is not opened.");
        }
        try {
            d();
            return this.o;
        } catch (IOException e) {
            a();
            throw e;
        }
    }

    static final class a {
        int[] a = new int[32];
        int b;
        int c;

        public final void a() {
            b();
            int i = this.b;
            int[] iArr = this.a;
            iArr[i] = 0;
            iArr[i + 1] = 0;
            this.b = i + 2;
            this.c++;
        }

        final void b() {
            int[] iArr = this.a;
            int length = iArr.length;
            int i = this.b;
            int i2 = length - i;
            if (i2 > 2) {
                return;
            }
            int[] iArr2 = new int[(iArr.length + i2) * 2];
            System.arraycopy(iArr, 0, iArr2, 0, i);
            this.a = iArr2;
        }
    }

    private void c() {
        this.o = -1;
        this.p = null;
        this.q = -1;
    }

    /* JADX WARN: Code restructure failed: missing block: B:113:0x02a9, code lost:
    
        throw new java.io.IOException("Invalid chunk type (" + r6 + ").");
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:0x012e, code lost:
    
        throw new java.io.IOException("Invalid resource ids size (" + r6 + ").");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void d() throws IOException {
        int i;
        int i2;
        int[] iArr;
        int i3 = 3;
        if (!this.k) {
            int i4 = this.c.readInt();
            if (i4 != 524291 && i4 != 524289) {
                throw new IOException(String.format("Expected: 0x%08x or 0x%08x, got: 0x%08x", 524291, 524289, Integer.valueOf(i4)));
            }
            this.c.skipBytes(4);
            l.a(this.c);
            this.m.a();
            this.k = true;
        }
        int i5 = this.o;
        if (i5 == this.e) {
            return;
        }
        c();
        while (true) {
            if (this.n) {
                this.n = false;
                a aVar = this.m;
                if (aVar.b != 0) {
                    int i6 = aVar.b - 1;
                    int i7 = aVar.a[i6] * 2;
                    if ((i6 - 1) - i7 != 0) {
                        aVar.b -= i7 + 2;
                        aVar.c--;
                    }
                }
            }
            if (i5 == this.g && this.m.c == 1) {
                a aVar2 = this.m;
                if ((aVar2.b == 0 ? 0 : aVar2.a[aVar2.b - 1]) == 0) {
                    this.o = this.e;
                    return;
                }
            }
            int i8 = i5 == this.d ? 1048834 : this.c.readInt();
            if (i8 == 524672) {
                this.a.clear();
                int i9 = this.c.readInt();
                if (i9 < 8 || i9 % 4 != 0) {
                    break;
                }
                int iA = k.a(this.c);
                this.l = this.c.a((i9 / 4) - 2);
                ArrayList arrayList = new ArrayList();
                int i10 = 0;
                while (true) {
                    int[] iArr2 = this.l;
                    if (i10 >= iArr2.length) {
                        break;
                    }
                    int iA2 = k.a(this.j, iArr2[i10], (i10 * 4) + iA, this.i);
                    if (iA2 >= 2130706432) {
                        this.a.put(Integer.valueOf(i10), Integer.valueOf(iA2));
                        arrayList.add(Integer.valueOf(iA2));
                    }
                    i10++;
                }
                ArrayList arrayList2 = new ArrayList(arrayList);
                Collections.sort(arrayList2);
                if (!arrayList.equals(arrayList2)) {
                    this.b = true;
                }
            } else {
                if (i8 < 1048832 || i8 > 1048836) {
                    break;
                }
                if (i8 == 1048834 && i5 == -1) {
                    this.o = this.d;
                    return;
                }
                this.c.skipBytes(4);
                this.c.readInt();
                this.c.skipBytes(4);
                if (i8 != 1048832 && i8 != 1048833) {
                    if (i8 == 1048834) {
                        this.c.readInt();
                        this.c.readInt();
                        this.c.skipBytes(4);
                        int i11 = this.c.readInt() & 65535;
                        int i12 = this.c.readInt();
                        this.q = i12;
                        this.q = (65535 & i12) - 1;
                        int iA3 = k.a(this.c);
                        int i13 = i11 * 5;
                        this.p = this.c.a(i13);
                        while (true) {
                            iArr = this.p;
                            if (i3 >= iArr.length) {
                                break;
                            }
                            iArr[i3] = iArr[i3] >>> 24;
                            i3 += 5;
                        }
                        if (iArr.length != i13) {
                            throw new RuntimeException();
                        }
                        boolean z = false;
                        for (int i14 = 0; i14 < i11; i14++) {
                            int i15 = i14 * 5;
                            if (this.a.containsKey(Integer.valueOf(this.p[i15 + 1]))) {
                                z = true;
                            }
                            int i16 = this.p[i15 + 3];
                            if (i16 == 1 || i16 == 2) {
                                int i17 = i15 + 4;
                                k.a(this.j, this.p[i17], (i17 * 4) + iA3, this.i);
                            }
                        }
                        if (z && this.b) {
                            k.a(iA3, this.j, this.p, i11, this.a);
                        }
                        this.m.a();
                        this.o = this.f;
                        return;
                    }
                    if (i8 == 1048835) {
                        this.c.readInt();
                        this.c.readInt();
                        this.o = this.g;
                        this.n = true;
                        return;
                    }
                    if (i8 == 1048836) {
                        this.c.readInt();
                        this.c.skipBytes(4);
                        this.c.skipBytes(4);
                        this.o = this.h;
                        return;
                    }
                } else if (i8 == 1048832) {
                    int i18 = this.c.readInt();
                    int i19 = this.c.readInt();
                    a aVar3 = this.m;
                    if (aVar3.c == 0) {
                        aVar3.a();
                    }
                    aVar3.b();
                    int i20 = aVar3.b - 1;
                    int i21 = aVar3.a[i20];
                    int i22 = (i20 - 1) - (i21 * 2);
                    int i23 = i21 + 1;
                    aVar3.a[i22] = i23;
                    aVar3.a[i20] = i18;
                    aVar3.a[i20 + 1] = i19;
                    aVar3.a[i20 + 2] = i23;
                    aVar3.b += 2;
                } else {
                    this.c.skipBytes(4);
                    this.c.skipBytes(4);
                    a aVar4 = this.m;
                    if (aVar4.b != 0 && (i2 = aVar4.a[(i = aVar4.b - 1)]) != 0) {
                        int i24 = i2 - 1;
                        int i25 = i - 2;
                        aVar4.a[i25] = i24;
                        aVar4.a[i25 - ((i24 * 2) + 1)] = i24;
                        aVar4.b -= 2;
                    }
                }
            }
        }
    }
}
