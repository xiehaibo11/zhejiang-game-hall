package com.tkay.expressad.exoplayer.h;

import java.util.Arrays;
import java.util.Random;

/* JADX INFO: loaded from: classes3.dex */
public interface aa {
    int a();

    int a(int i);

    aa a(int i, int i2);

    int b();

    int b(int i);

    int c();

    aa c(int i);

    aa d();

    public static class a implements aa {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Random f6624a;
        private final int[] b;
        private final int[] c;

        public a() {
            this(0, new Random());
        }

        private a(int i, long j) {
            this(i, new Random(j));
        }

        private a(int i, Random random) {
            this(a(i, random), random);
        }

        private a(int[] iArr, Random random) {
            this.b = iArr;
            this.f6624a = random;
            this.c = new int[iArr.length];
            for (int i = 0; i < iArr.length; i++) {
                this.c[iArr[i]] = i;
            }
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final int a() {
            return this.b.length;
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final int a(int i) {
            int i2 = this.c[i] + 1;
            int[] iArr = this.b;
            if (i2 < iArr.length) {
                return iArr[i2];
            }
            return -1;
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final int b(int i) {
            int i2 = this.c[i] - 1;
            if (i2 >= 0) {
                return this.b[i2];
            }
            return -1;
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final int b() {
            int[] iArr = this.b;
            if (iArr.length > 0) {
                return iArr[iArr.length - 1];
            }
            return -1;
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final int c() {
            int[] iArr = this.b;
            if (iArr.length > 0) {
                return iArr[0];
            }
            return -1;
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final aa a(int i, int i2) {
            int[] iArr = new int[i2];
            int[] iArr2 = new int[i2];
            int i3 = 0;
            while (i3 < i2) {
                iArr[i3] = this.f6624a.nextInt(this.b.length + 1);
                int i4 = i3 + 1;
                int iNextInt = this.f6624a.nextInt(i4);
                iArr2[i3] = iArr2[iNextInt];
                iArr2[iNextInt] = i3 + i;
                i3 = i4;
            }
            Arrays.sort(iArr);
            int[] iArr3 = new int[this.b.length + i2];
            int i5 = 0;
            int i6 = 0;
            for (int i7 = 0; i7 < this.b.length + i2; i7++) {
                if (i5 < i2 && i6 == iArr[i5]) {
                    iArr3[i7] = iArr2[i5];
                    i5++;
                } else {
                    int i8 = i6 + 1;
                    iArr3[i7] = this.b[i6];
                    if (iArr3[i7] >= i) {
                        iArr3[i7] = iArr3[i7] + i2;
                    }
                    i6 = i8;
                }
            }
            return new a(iArr3, new Random(this.f6624a.nextLong()));
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final aa c(int i) {
            int[] iArr = new int[this.b.length - 1];
            int i2 = 0;
            boolean z = false;
            while (true) {
                int[] iArr2 = this.b;
                if (i2 < iArr2.length) {
                    if (iArr2[i2] == i) {
                        z = true;
                    } else {
                        int i3 = z ? i2 - 1 : i2;
                        int[] iArr3 = this.b;
                        iArr[i3] = iArr3[i2] > i ? iArr3[i2] - 1 : iArr3[i2];
                    }
                    i2++;
                } else {
                    return new a(iArr, new Random(this.f6624a.nextLong()));
                }
            }
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final aa d() {
            return new a(0, new Random(this.f6624a.nextLong()));
        }

        private static int[] a(int i, Random random) {
            int[] iArr = new int[i];
            int i2 = 0;
            while (i2 < i) {
                int i3 = i2 + 1;
                int iNextInt = random.nextInt(i3);
                iArr[i2] = iArr[iNextInt];
                iArr[iNextInt] = i2;
                i2 = i3;
            }
            return iArr;
        }
    }

    public static final class b implements aa {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f6625a;

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final int b(int i) {
            int i2 = i - 1;
            if (i2 >= 0) {
                return i2;
            }
            return -1;
        }

        public b(int i) {
            this.f6625a = i;
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final int a() {
            return this.f6625a;
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final int a(int i) {
            int i2 = i + 1;
            if (i2 < this.f6625a) {
                return i2;
            }
            return -1;
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final int b() {
            int i = this.f6625a;
            if (i > 0) {
                return i - 1;
            }
            return -1;
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final int c() {
            return this.f6625a > 0 ? 0 : -1;
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final aa a(int i, int i2) {
            return new b(this.f6625a + i2);
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final aa c(int i) {
            return new b(this.f6625a - 1);
        }

        @Override // com.tkay.expressad.exoplayer.h.aa
        public final aa d() {
            return new b(0);
        }
    }
}
