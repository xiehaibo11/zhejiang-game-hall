package com.tkay.expressad.exoplayer.i;

import android.content.Context;
import android.graphics.Point;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.SparseArray;
import android.util.SparseBooleanArray;
import com.tkay.expressad.exoplayer.h.ae;
import com.tkay.expressad.exoplayer.h.af;
import com.tkay.expressad.exoplayer.i.a;
import com.tkay.expressad.exoplayer.i.f;
import com.tkay.expressad.exoplayer.m;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: classes3.dex */
public final class c extends com.tkay.expressad.exoplayer.i.e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final float f6691a = 0.98f;
    private static final int[] b = new int[0];
    private static final int c = 1000;
    private final f.a d;
    private final AtomicReference<C0453c> e;

    static /* synthetic */ int a(int i, int i2) {
        if (i > i2) {
            return 1;
        }
        return i2 > i ? -1 : 0;
    }

    protected static boolean a(int i, boolean z) {
        int i2 = i & 7;
        if (i2 != 4) {
            return z && i2 == 3;
        }
        return true;
    }

    private static int b(int i, int i2) {
        if (i == -1) {
            return i2 == -1 ? 0 : -1;
        }
        if (i2 == -1) {
            return 1;
        }
        return i - i2;
    }

    private static int c(int i, int i2) {
        if (i > i2) {
            return 1;
        }
        return i2 > i ? -1 : 0;
    }

    public static final class d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final SparseArray<Map<af, e>> f6695a;
        private final SparseBooleanArray b;
        private String c;
        private String d;
        private boolean e;
        private int f;
        private boolean g;
        private boolean h;
        private boolean i;
        private int j;
        private int k;
        private int l;
        private boolean m;
        private boolean n;
        private int o;
        private int p;
        private boolean q;
        private int r;

        /* synthetic */ d(C0453c c0453c, byte b) {
            this(c0453c);
        }

        public d() {
            this(C0453c.f6694a);
        }

        private d(C0453c c0453c) {
            this.f6695a = a((SparseArray<Map<af, e>>) c0453c.r);
            this.b = c0453c.s.clone();
            this.c = c0453c.b;
            this.d = c0453c.c;
            this.e = c0453c.d;
            this.f = c0453c.e;
            this.g = c0453c.m;
            this.h = c0453c.n;
            this.i = c0453c.o;
            this.j = c0453c.f;
            this.k = c0453c.g;
            this.l = c0453c.h;
            this.m = c0453c.i;
            this.n = c0453c.p;
            this.o = c0453c.j;
            this.p = c0453c.k;
            this.q = c0453c.l;
            this.r = c0453c.q;
        }

        private d a(String str) {
            this.c = str;
            return this;
        }

        private d b(String str) {
            this.d = str;
            return this;
        }

        private d a(boolean z) {
            this.e = z;
            return this;
        }

        private d c(int i) {
            this.f = i;
            return this;
        }

        private d b(boolean z) {
            this.g = z;
            return this;
        }

        private d c(boolean z) {
            this.h = z;
            return this;
        }

        private d d(boolean z) {
            this.i = z;
            return this;
        }

        private d c() {
            return a(1279, 719);
        }

        private d d() {
            return a(Integer.MAX_VALUE, Integer.MAX_VALUE);
        }

        private d a(int i, int i2) {
            this.j = i;
            this.k = i2;
            return this;
        }

        private d d(int i) {
            this.l = i;
            return this;
        }

        private d e(boolean z) {
            this.m = z;
            return this;
        }

        private d f(boolean z) {
            this.n = z;
            return this;
        }

        private d a(Context context, boolean z) {
            Point pointA = com.tkay.expressad.exoplayer.k.af.a(context);
            return a(pointA.x, pointA.y, z);
        }

        private d e() {
            return a(Integer.MAX_VALUE, Integer.MAX_VALUE, true);
        }

        private d a(int i, int i2, boolean z) {
            this.o = i;
            this.p = i2;
            this.q = z;
            return this;
        }

        public final d a(int i, boolean z) {
            if (this.b.get(i) == z) {
                return this;
            }
            if (z) {
                this.b.put(i, true);
            } else {
                this.b.delete(i);
            }
            return this;
        }

        public final d a(int i, af afVar, e eVar) {
            Map<af, e> map = this.f6695a.get(i);
            if (map == null) {
                map = new HashMap<>();
                this.f6695a.put(i, map);
            }
            if (map.containsKey(afVar) && com.tkay.expressad.exoplayer.k.af.a(map.get(afVar), eVar)) {
                return this;
            }
            map.put(afVar, eVar);
            return this;
        }

        public final d a(int i, af afVar) {
            Map<af, e> map = this.f6695a.get(i);
            if (map != null && map.containsKey(afVar)) {
                map.remove(afVar);
                if (map.isEmpty()) {
                    this.f6695a.remove(i);
                }
            }
            return this;
        }

        public final d a(int i) {
            Map<af, e> map = this.f6695a.get(i);
            if (map != null && !map.isEmpty()) {
                this.f6695a.remove(i);
            }
            return this;
        }

        public final d a() {
            if (this.f6695a.size() == 0) {
                return this;
            }
            this.f6695a.clear();
            return this;
        }

        public final d b(int i) {
            if (this.r != i) {
                this.r = i;
            }
            return this;
        }

        public final C0453c b() {
            return new C0453c(this.f6695a, this.b, this.c, this.d, this.e, this.f, this.g, this.h, this.i, this.j, this.k, this.l, this.m, this.n, this.o, this.p, this.q, this.r);
        }

        private static SparseArray<Map<af, e>> a(SparseArray<Map<af, e>> sparseArray) {
            SparseArray<Map<af, e>> sparseArray2 = new SparseArray<>();
            for (int i = 0; i < sparseArray.size(); i++) {
                sparseArray2.put(sparseArray.keyAt(i), new HashMap(sparseArray.valueAt(i)));
            }
            return sparseArray2;
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.exoplayer.i.c$c, reason: collision with other inner class name */
    public static final class C0453c implements Parcelable {
        public final String b;
        public final String c;
        public final boolean d;
        public final int e;
        public final int f;
        public final int g;
        public final int h;
        public final boolean i;
        public final int j;
        public final int k;
        public final boolean l;
        public final boolean m;
        public final boolean n;
        public final boolean o;
        public final boolean p;
        public final int q;
        private final SparseArray<Map<af, e>> r;
        private final SparseBooleanArray s;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final C0453c f6694a = new C0453c();
        public static final Parcelable.Creator<C0453c> CREATOR = new Parcelable.Creator<C0453c>() { // from class: com.tkay.expressad.exoplayer.i.c.c.1
            private static C0453c a(Parcel parcel) {
                return new C0453c(parcel);
            }

            private static C0453c[] a(int i) {
                return new C0453c[i];
            }

            @Override // android.os.Parcelable.Creator
            public final /* bridge */ /* synthetic */ C0453c[] newArray(int i) {
                return new C0453c[i];
            }

            @Override // android.os.Parcelable.Creator
            public final /* synthetic */ C0453c createFromParcel(Parcel parcel) {
                return new C0453c(parcel);
            }
        };

        @Override // android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        private C0453c() {
            this(new SparseArray(), new SparseBooleanArray(), null, null, false, 0, false, false, true, Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MAX_VALUE, true, true, Integer.MAX_VALUE, Integer.MAX_VALUE, true, 0);
        }

        C0453c(SparseArray<Map<af, e>> sparseArray, SparseBooleanArray sparseBooleanArray, String str, String str2, boolean z, int i, boolean z2, boolean z3, boolean z4, int i2, int i3, int i4, boolean z5, boolean z6, int i5, int i6, boolean z7, int i7) {
            this.r = sparseArray;
            this.s = sparseBooleanArray;
            this.b = com.tkay.expressad.exoplayer.k.af.b(str);
            this.c = com.tkay.expressad.exoplayer.k.af.b(str2);
            this.d = z;
            this.e = i;
            this.m = z2;
            this.n = z3;
            this.o = z4;
            this.f = i2;
            this.g = i3;
            this.h = i4;
            this.i = z5;
            this.p = z6;
            this.j = i5;
            this.k = i6;
            this.l = z7;
            this.q = i7;
        }

        C0453c(Parcel parcel) {
            this.r = a(parcel);
            this.s = parcel.readSparseBooleanArray();
            this.b = parcel.readString();
            this.c = parcel.readString();
            this.d = com.tkay.expressad.exoplayer.k.af.a(parcel);
            this.e = parcel.readInt();
            this.m = com.tkay.expressad.exoplayer.k.af.a(parcel);
            this.n = com.tkay.expressad.exoplayer.k.af.a(parcel);
            this.o = com.tkay.expressad.exoplayer.k.af.a(parcel);
            this.f = parcel.readInt();
            this.g = parcel.readInt();
            this.h = parcel.readInt();
            this.i = com.tkay.expressad.exoplayer.k.af.a(parcel);
            this.p = com.tkay.expressad.exoplayer.k.af.a(parcel);
            this.j = parcel.readInt();
            this.k = parcel.readInt();
            this.l = com.tkay.expressad.exoplayer.k.af.a(parcel);
            this.q = parcel.readInt();
        }

        public final boolean a(int i) {
            return this.s.get(i);
        }

        public final boolean a(int i, af afVar) {
            Map<af, e> map = this.r.get(i);
            return map != null && map.containsKey(afVar);
        }

        public final e b(int i, af afVar) {
            Map<af, e> map = this.r.get(i);
            if (map != null) {
                return map.get(afVar);
            }
            return null;
        }

        private d a() {
            return new d(this, (byte) 0);
        }

        /* JADX WARN: Removed duplicated region for block: B:53:0x00a1  */
        /* JADX WARN: Removed duplicated region for block: B:74:0x0109 A[LOOP:0: B:57:0x00b2->B:74:0x0109, LOOP_END] */
        /* JADX WARN: Removed duplicated region for block: B:77:0x010f A[RETURN] */
        /* JADX WARN: Removed duplicated region for block: B:79:0x00af A[SYNTHETIC] */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final boolean equals(java.lang.Object r11) {
            /*
                Method dump skipped, instruction units count: 273
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.i.c.C0453c.equals(java.lang.Object):boolean");
        }

        public final int hashCode() {
            int i = (((((((((((((((((((((((((((this.d ? 1 : 0) * 31) + this.e) * 31) + (this.m ? 1 : 0)) * 31) + (this.n ? 1 : 0)) * 31) + (this.o ? 1 : 0)) * 31) + this.f) * 31) + this.g) * 31) + (this.i ? 1 : 0)) * 31) + (this.p ? 1 : 0)) * 31) + (this.l ? 1 : 0)) * 31) + this.j) * 31) + this.k) * 31) + this.h) * 31) + this.q) * 31;
            String str = this.b;
            int iHashCode = (i + (str == null ? 0 : str.hashCode())) * 31;
            String str2 = this.c;
            return iHashCode + (str2 != null ? str2.hashCode() : 0);
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i) {
            SparseArray<Map<af, e>> sparseArray = this.r;
            int size = sparseArray.size();
            parcel.writeInt(size);
            for (int i2 = 0; i2 < size; i2++) {
                int iKeyAt = sparseArray.keyAt(i2);
                Map<af, e> mapValueAt = sparseArray.valueAt(i2);
                int size2 = mapValueAt.size();
                parcel.writeInt(iKeyAt);
                parcel.writeInt(size2);
                for (Map.Entry<af, e> entry : mapValueAt.entrySet()) {
                    parcel.writeParcelable(entry.getKey(), 0);
                    parcel.writeParcelable(entry.getValue(), 0);
                }
            }
            parcel.writeSparseBooleanArray(this.s);
            parcel.writeString(this.b);
            parcel.writeString(this.c);
            com.tkay.expressad.exoplayer.k.af.a(parcel, this.d);
            parcel.writeInt(this.e);
            com.tkay.expressad.exoplayer.k.af.a(parcel, this.m);
            com.tkay.expressad.exoplayer.k.af.a(parcel, this.n);
            com.tkay.expressad.exoplayer.k.af.a(parcel, this.o);
            parcel.writeInt(this.f);
            parcel.writeInt(this.g);
            parcel.writeInt(this.h);
            com.tkay.expressad.exoplayer.k.af.a(parcel, this.i);
            com.tkay.expressad.exoplayer.k.af.a(parcel, this.p);
            parcel.writeInt(this.j);
            parcel.writeInt(this.k);
            com.tkay.expressad.exoplayer.k.af.a(parcel, this.l);
            parcel.writeInt(this.q);
        }

        private static SparseArray<Map<af, e>> a(Parcel parcel) {
            int i = parcel.readInt();
            SparseArray<Map<af, e>> sparseArray = new SparseArray<>(i);
            for (int i2 = 0; i2 < i; i2++) {
                int i3 = parcel.readInt();
                int i4 = parcel.readInt();
                HashMap map = new HashMap(i4);
                for (int i5 = 0; i5 < i4; i5++) {
                    map.put((af) parcel.readParcelable(af.class.getClassLoader()), (e) parcel.readParcelable(e.class.getClassLoader()));
                }
                sparseArray.put(i3, map);
            }
            return sparseArray;
        }

        private static void a(Parcel parcel, SparseArray<Map<af, e>> sparseArray) {
            int size = sparseArray.size();
            parcel.writeInt(size);
            for (int i = 0; i < size; i++) {
                int iKeyAt = sparseArray.keyAt(i);
                Map<af, e> mapValueAt = sparseArray.valueAt(i);
                int size2 = mapValueAt.size();
                parcel.writeInt(iKeyAt);
                parcel.writeInt(size2);
                for (Map.Entry<af, e> entry : mapValueAt.entrySet()) {
                    parcel.writeParcelable(entry.getKey(), 0);
                    parcel.writeParcelable(entry.getValue(), 0);
                }
            }
        }

        private static boolean a(SparseBooleanArray sparseBooleanArray, SparseBooleanArray sparseBooleanArray2) {
            int size = sparseBooleanArray.size();
            if (sparseBooleanArray2.size() != size) {
                return false;
            }
            for (int i = 0; i < size; i++) {
                if (sparseBooleanArray2.indexOfKey(sparseBooleanArray.keyAt(i)) < 0) {
                    return false;
                }
            }
            return true;
        }

        /* JADX WARN: Removed duplicated region for block: B:23:0x0064 A[LOOP:0: B:6:0x000d->B:23:0x0064, LOOP_END] */
        /* JADX WARN: Removed duplicated region for block: B:28:0x0067 A[EDGE_INSN: B:28:0x0067->B:24:0x0067 BREAK  A[LOOP:0: B:6:0x000d->B:23:0x0064], SYNTHETIC] */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        private static boolean a(android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e>> r9, android.util.SparseArray<java.util.Map<com.tkay.expressad.exoplayer.h.af, com.tkay.expressad.exoplayer.i.c.e>> r10) {
            /*
                int r0 = r9.size()
                int r1 = r10.size()
                r2 = 0
                if (r1 == r0) goto Lc
                return r2
            Lc:
                r1 = r2
            Ld:
                r3 = 1
                if (r1 >= r0) goto L68
                int r4 = r9.keyAt(r1)
                int r4 = r10.indexOfKey(r4)
                if (r4 < 0) goto L67
                java.lang.Object r5 = r9.valueAt(r1)
                java.util.Map r5 = (java.util.Map) r5
                java.lang.Object r4 = r10.valueAt(r4)
                java.util.Map r4 = (java.util.Map) r4
                int r6 = r5.size()
                int r7 = r4.size()
                if (r7 == r6) goto L32
            L30:
                r3 = r2
                goto L61
            L32:
                java.util.Set r5 = r5.entrySet()
                java.util.Iterator r5 = r5.iterator()
            L3a:
                boolean r6 = r5.hasNext()
                if (r6 == 0) goto L61
                java.lang.Object r6 = r5.next()
                java.util.Map$Entry r6 = (java.util.Map.Entry) r6
                java.lang.Object r7 = r6.getKey()
                com.tkay.expressad.exoplayer.h.af r7 = (com.tkay.expressad.exoplayer.h.af) r7
                boolean r8 = r4.containsKey(r7)
                if (r8 == 0) goto L30
                java.lang.Object r6 = r6.getValue()
                java.lang.Object r7 = r4.get(r7)
                boolean r6 = com.tkay.expressad.exoplayer.k.af.a(r6, r7)
                if (r6 != 0) goto L3a
                goto L30
            L61:
                if (r3 != 0) goto L64
                goto L67
            L64:
                int r1 = r1 + 1
                goto Ld
            L67:
                return r2
            L68:
                return r3
            */
            throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.i.c.C0453c.a(android.util.SparseArray, android.util.SparseArray):boolean");
        }

        private static boolean a(Map<af, e> map, Map<af, e> map2) {
            if (map2.size() != map.size()) {
                return false;
            }
            for (Map.Entry<af, e> entry : map.entrySet()) {
                af key = entry.getKey();
                if (!map2.containsKey(key) || !com.tkay.expressad.exoplayer.k.af.a(entry.getValue(), map2.get(key))) {
                    return false;
                }
            }
            return true;
        }
    }

    public static final class e implements Parcelable {
        public static final Parcelable.Creator<e> CREATOR = new Parcelable.Creator<e>() { // from class: com.tkay.expressad.exoplayer.i.c.e.1
            private static e a(Parcel parcel) {
                return new e(parcel);
            }

            private static e[] a(int i) {
                return new e[i];
            }

            @Override // android.os.Parcelable.Creator
            public final /* bridge */ /* synthetic */ e[] newArray(int i) {
                return new e[i];
            }

            @Override // android.os.Parcelable.Creator
            public final /* synthetic */ e createFromParcel(Parcel parcel) {
                return new e(parcel);
            }
        };

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f6696a;
        public final int[] b;
        public final int c;

        @Override // android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        private e(int i, int... iArr) {
            this.f6696a = i;
            int[] iArrCopyOf = Arrays.copyOf(iArr, iArr.length);
            this.b = iArrCopyOf;
            this.c = iArr.length;
            Arrays.sort(iArrCopyOf);
        }

        e(Parcel parcel) {
            this.f6696a = parcel.readInt();
            int i = parcel.readByte();
            this.c = i;
            int[] iArr = new int[i];
            this.b = iArr;
            parcel.readIntArray(iArr);
        }

        private boolean a(int i) {
            for (int i2 : this.b) {
                if (i2 == i) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            return (this.f6696a * 31) + Arrays.hashCode(this.b);
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                e eVar = (e) obj;
                if (this.f6696a == eVar.f6696a && Arrays.equals(this.b, eVar.b)) {
                    return true;
                }
            }
            return false;
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i) {
            parcel.writeInt(this.f6696a);
            parcel.writeInt(this.b.length);
            parcel.writeIntArray(this.b);
        }
    }

    public c() {
        this((f.a) null);
    }

    private c(com.tkay.expressad.exoplayer.j.d dVar) {
        this(new a.C0452a(dVar));
    }

    private c(f.a aVar) {
        this.d = aVar;
        this.e = new AtomicReference<>(C0453c.f6694a);
    }

    private void a(C0453c c0453c) {
        com.tkay.expressad.exoplayer.k.a.a(c0453c);
        if (this.e.getAndSet(c0453c).equals(c0453c)) {
            return;
        }
        b();
    }

    private void a(d dVar) {
        C0453c c0453cB = dVar.b();
        com.tkay.expressad.exoplayer.k.a.a(c0453cB);
        if (this.e.getAndSet(c0453cB).equals(c0453cB)) {
            return;
        }
        b();
    }

    private C0453c c() {
        return this.e.get();
    }

    private d d() {
        return new d(c(), (byte) 0);
    }

    @Deprecated
    private void b(int i, boolean z) {
        a(d().a(i, z));
    }

    @Deprecated
    private boolean a(int i) {
        return c().a(i);
    }

    @Deprecated
    private void a(int i, af afVar, e eVar) {
        a(d().a(i, afVar, eVar));
    }

    @Deprecated
    private boolean a(int i, af afVar) {
        return c().a(i, afVar);
    }

    @Deprecated
    private e b(int i, af afVar) {
        return c().b(i, afVar);
    }

    @Deprecated
    private void c(int i, af afVar) {
        a(d().a(i, afVar));
    }

    @Deprecated
    private void b(int i) {
        a(d().a(i));
    }

    @Deprecated
    private void e() {
        a(d().a());
    }

    @Deprecated
    private void c(int i) {
        a(d().b(i));
    }

    /* JADX WARN: Removed duplicated region for block: B:53:0x0120  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x012a  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x012c  */
    @Override // com.tkay.expressad.exoplayer.i.e
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected final android.util.Pair<com.tkay.expressad.exoplayer.aa[], com.tkay.expressad.exoplayer.i.f[]> a(com.tkay.expressad.exoplayer.i.e.a r33, int[][][] r34, int[] r35) {
        /*
            Method dump skipped, instruction units count: 607
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.i.c.a(com.tkay.expressad.exoplayer.i.e$a, int[][][], int[]):android.util.Pair");
    }

    /* JADX WARN: Removed duplicated region for block: B:100:0x00e8 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:51:0x00f4 A[LOOP:1: B:22:0x003f->B:51:0x00f4, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0112  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x011c  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x011e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private com.tkay.expressad.exoplayer.i.f[] a(com.tkay.expressad.exoplayer.i.e.a r32, int[][][] r33, int[] r34, com.tkay.expressad.exoplayer.i.c.C0453c r35) {
        /*
            Method dump skipped, instruction units count: 434
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.i.c.a(com.tkay.expressad.exoplayer.i.e$a, int[][][], int[], com.tkay.expressad.exoplayer.i.c$c):com.tkay.expressad.exoplayer.i.f[]");
    }

    /* JADX WARN: Removed duplicated region for block: B:46:0x00ff A[LOOP:0: B:16:0x0022->B:46:0x00ff, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:52:0x00f1 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static com.tkay.expressad.exoplayer.i.f a(com.tkay.expressad.exoplayer.h.af r25, int[][] r26, int r27, com.tkay.expressad.exoplayer.i.c.C0453c r28, com.tkay.expressad.exoplayer.i.f.a r29) {
        /*
            Method dump skipped, instruction units count: 267
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.i.c.a(com.tkay.expressad.exoplayer.h.af, int[][], int, com.tkay.expressad.exoplayer.i.c$c, com.tkay.expressad.exoplayer.i.f$a):com.tkay.expressad.exoplayer.i.f");
    }

    private static f b(af afVar, int[][] iArr, int i, C0453c c0453c, f.a aVar) {
        List<Integer> list;
        int i2;
        int i3;
        int i4;
        String str;
        int[] iArrA;
        int i5;
        int i6;
        HashSet hashSet;
        List<Integer> list2;
        int i7;
        int i8;
        int i9;
        int i10 = c0453c.o ? 24 : 16;
        boolean z = c0453c.n && (i & i10) != 0;
        for (int i11 = 0; i11 < afVar.b; i11++) {
            ae aeVarA = afVar.a(i11);
            int[] iArr2 = iArr[i11];
            int i12 = c0453c.f;
            int i13 = c0453c.g;
            int i14 = c0453c.h;
            int i15 = c0453c.j;
            int i16 = c0453c.k;
            boolean z2 = c0453c.l;
            if (aeVarA.f6632a < 2) {
                iArrA = b;
            } else {
                List<Integer> listA = a(aeVarA, i15, i16, z2);
                if (listA.size() < 2) {
                    iArrA = b;
                } else {
                    if (z) {
                        list = listA;
                        i2 = i14;
                        i3 = i13;
                        i4 = i12;
                        str = null;
                    } else {
                        HashSet hashSet2 = new HashSet();
                        String str2 = null;
                        int iA = 0;
                        int i17 = 0;
                        while (i17 < listA.size()) {
                            String str3 = aeVarA.a(listA.get(i17).intValue()).h;
                            if (hashSet2.add(str3)) {
                                i5 = iA;
                                i6 = i17;
                                hashSet = hashSet2;
                                list2 = listA;
                                i7 = i14;
                                i8 = i13;
                                i9 = i12;
                                iA = a(aeVarA, iArr2, i10, str3, i12, i13, i7, list2);
                                if (iA > i5) {
                                    str2 = str3;
                                }
                                i17 = i6 + 1;
                                hashSet2 = hashSet;
                                listA = list2;
                                i14 = i7;
                                i13 = i8;
                                i12 = i9;
                            } else {
                                i5 = iA;
                                i6 = i17;
                                hashSet = hashSet2;
                                list2 = listA;
                                i7 = i14;
                                i8 = i13;
                                i9 = i12;
                            }
                            iA = i5;
                            i17 = i6 + 1;
                            hashSet2 = hashSet;
                            listA = list2;
                            i14 = i7;
                            i13 = i8;
                            i12 = i9;
                        }
                        list = listA;
                        i2 = i14;
                        i3 = i13;
                        i4 = i12;
                        str = str2;
                    }
                    b(aeVarA, iArr2, i10, str, i4, i3, i2, list);
                    iArrA = list.size() < 2 ? b : com.tkay.expressad.exoplayer.k.af.a(list);
                }
            }
            if (iArrA.length > 0) {
                return ((f.a) com.tkay.expressad.exoplayer.k.a.a(aVar)).a(aeVarA, iArrA);
            }
        }
        return null;
    }

    private static int[] a(ae aeVar, int[] iArr, boolean z, int i, int i2, int i3, int i4, int i5, int i6, boolean z2) {
        String str;
        int iA;
        if (aeVar.f6632a < 2) {
            return b;
        }
        List<Integer> listA = a(aeVar, i5, i6, z2);
        if (listA.size() < 2) {
            return b;
        }
        if (z) {
            str = null;
        } else {
            HashSet hashSet = new HashSet();
            String str2 = null;
            int i7 = 0;
            for (int i8 = 0; i8 < listA.size(); i8++) {
                String str3 = aeVar.a(listA.get(i8).intValue()).h;
                if (hashSet.add(str3) && (iA = a(aeVar, iArr, i, str3, i2, i3, i4, listA)) > i7) {
                    i7 = iA;
                    str2 = str3;
                }
            }
            str = str2;
        }
        b(aeVar, iArr, i, str, i2, i3, i4, listA);
        return listA.size() < 2 ? b : com.tkay.expressad.exoplayer.k.af.a(listA);
    }

    private static int a(ae aeVar, int[] iArr, int i, String str, int i2, int i3, int i4, List<Integer> list) {
        int i5 = 0;
        for (int i6 = 0; i6 < list.size(); i6++) {
            int iIntValue = list.get(i6).intValue();
            if (a(aeVar.a(iIntValue), str, iArr[iIntValue], i, i2, i3, i4)) {
                i5++;
            }
        }
        return i5;
    }

    private static void b(ae aeVar, int[] iArr, int i, String str, int i2, int i3, int i4, List<Integer> list) {
        for (int size = list.size() - 1; size >= 0; size--) {
            int iIntValue = list.get(size).intValue();
            if (!a(aeVar.a(iIntValue), str, iArr[iIntValue], i, i2, i3, i4)) {
                list.remove(size);
            }
        }
    }

    private static boolean a(m mVar, String str, int i, int i2, int i3, int i4, int i5) {
        return a(i, false) && (i & i2) != 0 && (str == null || com.tkay.expressad.exoplayer.k.af.a((Object) mVar.h, (Object) str)) && ((mVar.m == -1 || mVar.m <= i3) && ((mVar.n == -1 || mVar.n <= i4) && (mVar.d == -1 || mVar.d <= i5)));
    }

    /* JADX WARN: Removed duplicated region for block: B:44:0x008d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static com.tkay.expressad.exoplayer.i.f a(com.tkay.expressad.exoplayer.h.af r18, int[][] r19, com.tkay.expressad.exoplayer.i.c.C0453c r20) {
        /*
            Method dump skipped, instruction units count: 210
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.i.c.a(com.tkay.expressad.exoplayer.h.af, int[][], com.tkay.expressad.exoplayer.i.c$c):com.tkay.expressad.exoplayer.i.f");
    }

    private static f a(af afVar, int[][] iArr, C0453c c0453c, f.a aVar) {
        int[] iArr2;
        int iA;
        int i = -1;
        int i2 = -1;
        b bVar = null;
        for (int i3 = 0; i3 < afVar.b; i3++) {
            ae aeVarA = afVar.a(i3);
            int[] iArr3 = iArr[i3];
            for (int i4 = 0; i4 < aeVarA.f6632a; i4++) {
                if (a(iArr3[i4], c0453c.p)) {
                    b bVar2 = new b(aeVarA.a(i4), c0453c, iArr3[i4]);
                    if (bVar == null || bVar2.compareTo(bVar) > 0) {
                        i = i3;
                        i2 = i4;
                        bVar = bVar2;
                    }
                }
            }
        }
        if (i == -1) {
            return null;
        }
        ae aeVarA2 = afVar.a(i);
        if (!c0453c.m && aVar != null) {
            int[] iArr4 = iArr[i];
            boolean z = c0453c.n;
            HashSet hashSet = new HashSet();
            a aVar2 = null;
            int i5 = 0;
            for (int i6 = 0; i6 < aeVarA2.f6632a; i6++) {
                m mVarA = aeVarA2.a(i6);
                a aVar3 = new a(mVarA.u, mVarA.v, z ? null : mVarA.h);
                if (hashSet.add(aVar3) && (iA = a(aeVarA2, iArr4, aVar3)) > i5) {
                    i5 = iA;
                    aVar2 = aVar3;
                }
            }
            if (i5 > 1) {
                iArr2 = new int[i5];
                int i7 = 0;
                for (int i8 = 0; i8 < aeVarA2.f6632a; i8++) {
                    if (a(aeVarA2.a(i8), iArr4[i8], (a) com.tkay.expressad.exoplayer.k.a.a(aVar2))) {
                        iArr2[i7] = i8;
                        i7++;
                    }
                }
            } else {
                iArr2 = b;
            }
            if (iArr2.length > 0) {
                return aVar.a(aeVarA2, iArr2);
            }
        }
        return new com.tkay.expressad.exoplayer.i.d(aeVarA2, i2);
    }

    private static int[] a(ae aeVar, int[] iArr, boolean z) {
        int iA;
        HashSet hashSet = new HashSet();
        a aVar = null;
        int i = 0;
        for (int i2 = 0; i2 < aeVar.f6632a; i2++) {
            m mVarA = aeVar.a(i2);
            a aVar2 = new a(mVarA.u, mVarA.v, z ? null : mVarA.h);
            if (hashSet.add(aVar2) && (iA = a(aeVar, iArr, aVar2)) > i) {
                i = iA;
                aVar = aVar2;
            }
        }
        if (i > 1) {
            int[] iArr2 = new int[i];
            int i3 = 0;
            for (int i4 = 0; i4 < aeVar.f6632a; i4++) {
                if (a(aeVar.a(i4), iArr[i4], (a) com.tkay.expressad.exoplayer.k.a.a(aVar))) {
                    iArr2[i3] = i4;
                    i3++;
                }
            }
            return iArr2;
        }
        return b;
    }

    private static int a(ae aeVar, int[] iArr, a aVar) {
        int i = 0;
        for (int i2 = 0; i2 < aeVar.f6632a; i2++) {
            if (a(aeVar.a(i2), iArr[i2], aVar)) {
                i++;
            }
        }
        return i;
    }

    private static boolean a(m mVar, int i, a aVar) {
        return a(i, false) && mVar.u == aVar.f6692a && mVar.v == aVar.b && (aVar.c == null || TextUtils.equals(aVar.c, mVar.h));
    }

    /* JADX WARN: Removed duplicated region for block: B:38:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x0084  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0088  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x008b A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static com.tkay.expressad.exoplayer.i.f b(com.tkay.expressad.exoplayer.h.af r16, int[][] r17, com.tkay.expressad.exoplayer.i.c.C0453c r18) {
        /*
            r0 = r16
            r1 = r18
            r2 = 0
            r3 = 0
            r5 = r2
            r4 = r3
            r6 = r4
            r7 = r6
        La:
            int r8 = r0.b
            if (r4 >= r8) goto L92
            com.tkay.expressad.exoplayer.h.ae r8 = r0.a(r4)
            r9 = r17[r4]
            r10 = r3
        L15:
            int r11 = r8.f6632a
            if (r10 >= r11) goto L8e
            r11 = r9[r10]
            boolean r12 = r1.p
            boolean r11 = a(r11, r12)
            if (r11 == 0) goto L8b
            com.tkay.expressad.exoplayer.m r11 = r8.a(r10)
            int r12 = r11.z
            int r13 = r1.e
            int r13 = ~r13
            r12 = r12 & r13
            r13 = r12 & 1
            if (r13 == 0) goto L33
            r13 = 1
            goto L34
        L33:
            r13 = r3
        L34:
            r12 = r12 & 2
            if (r12 == 0) goto L3a
            r12 = 1
            goto L3b
        L3a:
            r12 = r3
        L3b:
            java.lang.String r15 = r1.c
            boolean r15 = a(r11, r15)
            if (r15 != 0) goto L70
            boolean r14 = r1.d
            if (r14 == 0) goto L5e
            java.lang.String r14 = r11.A
            boolean r14 = android.text.TextUtils.isEmpty(r14)
            if (r14 != 0) goto L5a
            java.lang.String r14 = "und"
            boolean r14 = a(r11, r14)
            if (r14 == 0) goto L58
            goto L5a
        L58:
            r14 = r3
            goto L5b
        L5a:
            r14 = 1
        L5b:
            if (r14 == 0) goto L5e
            goto L70
        L5e:
            if (r13 == 0) goto L62
            r14 = 3
            goto L7c
        L62:
            if (r12 == 0) goto L8b
            java.lang.String r12 = r1.b
            boolean r11 = a(r11, r12)
            if (r11 == 0) goto L6e
            r14 = 2
            goto L7c
        L6e:
            r14 = 1
            goto L7c
        L70:
            if (r13 == 0) goto L75
            r11 = 8
            goto L7a
        L75:
            if (r12 != 0) goto L79
            r11 = 6
            goto L7a
        L79:
            r11 = 4
        L7a:
            int r14 = r11 + r15
        L7c:
            r11 = r9[r10]
            boolean r11 = a(r11, r3)
            if (r11 == 0) goto L86
            int r14 = r14 + 1000
        L86:
            if (r14 <= r7) goto L8b
            r5 = r8
            r6 = r10
            r7 = r14
        L8b:
            int r10 = r10 + 1
            goto L15
        L8e:
            int r4 = r4 + 1
            goto La
        L92:
            if (r5 != 0) goto L95
            return r2
        L95:
            com.tkay.expressad.exoplayer.i.d r0 = new com.tkay.expressad.exoplayer.i.d
            r0.<init>(r5, r6)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.i.c.b(com.tkay.expressad.exoplayer.h.af, int[][], com.tkay.expressad.exoplayer.i.c$c):com.tkay.expressad.exoplayer.i.f");
    }

    private static f c(af afVar, int[][] iArr, C0453c c0453c) {
        ae aeVar = null;
        int i = 0;
        int i2 = 0;
        for (int i3 = 0; i3 < afVar.b; i3++) {
            ae aeVarA = afVar.a(i3);
            int[] iArr2 = iArr[i3];
            for (int i4 = 0; i4 < aeVarA.f6632a; i4++) {
                if (a(iArr2[i4], c0453c.p)) {
                    int i5 = (aeVarA.a(i4).z & 1) != 0 ? 2 : 1;
                    if (a(iArr2[i4], false)) {
                        i5 += 1000;
                    }
                    if (i5 > i2) {
                        aeVar = aeVarA;
                        i = i4;
                        i2 = i5;
                    }
                }
            }
        }
        if (aeVar == null) {
            return null;
        }
        return new com.tkay.expressad.exoplayer.i.d(aeVar, i);
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x004c  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x0058 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static void a(com.tkay.expressad.exoplayer.i.e.a r15, int[][][] r16, com.tkay.expressad.exoplayer.aa[] r17, com.tkay.expressad.exoplayer.i.f[] r18, int r19) {
        /*
            r0 = r15
            r1 = r19
            if (r1 != 0) goto L6
            return
        L6:
            r2 = -1
            r3 = 0
            r5 = r2
            r6 = r5
            r4 = r3
        Lb:
            int r7 = r15.a()
            r8 = 1
            if (r4 >= r7) goto L5b
            int r7 = r15.a(r4)
            r9 = r18[r4]
            if (r7 == r8) goto L1d
            r10 = 2
            if (r7 != r10) goto L58
        L1d:
            if (r9 == 0) goto L58
            r10 = r16[r4]
            com.tkay.expressad.exoplayer.h.af r11 = r15.b(r4)
            if (r9 != 0) goto L29
        L27:
            r9 = r3
            goto L4a
        L29:
            com.tkay.expressad.exoplayer.h.ae r12 = r9.f()
            int r11 = r11.a(r12)
            r12 = r3
        L32:
            int r13 = r9.g()
            if (r12 >= r13) goto L49
            r13 = r10[r11]
            int r14 = r9.b(r12)
            r13 = r13[r14]
            r14 = 32
            r13 = r13 & r14
            if (r13 == r14) goto L46
            goto L27
        L46:
            int r12 = r12 + 1
            goto L32
        L49:
            r9 = r8
        L4a:
            if (r9 == 0) goto L58
            if (r7 != r8) goto L53
            if (r6 == r2) goto L51
            goto L55
        L51:
            r6 = r4
            goto L58
        L53:
            if (r5 == r2) goto L57
        L55:
            r0 = r3
            goto L5c
        L57:
            r5 = r4
        L58:
            int r4 = r4 + 1
            goto Lb
        L5b:
            r0 = r8
        L5c:
            if (r6 == r2) goto L61
            if (r5 == r2) goto L61
            r3 = r8
        L61:
            r0 = r0 & r3
            if (r0 == 0) goto L6d
            com.tkay.expressad.exoplayer.aa r0 = new com.tkay.expressad.exoplayer.aa
            r0.<init>(r1)
            r17[r6] = r0
            r17[r5] = r0
        L6d:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.i.c.a(com.tkay.expressad.exoplayer.i.e$a, int[][][], com.tkay.expressad.exoplayer.aa[], com.tkay.expressad.exoplayer.i.f[], int):void");
    }

    private static boolean a(int[][] iArr, af afVar, f fVar) {
        if (fVar == null) {
            return false;
        }
        int iA = afVar.a(fVar.f());
        for (int i = 0; i < fVar.g(); i++) {
            if ((iArr[iA][fVar.b(i)] & 32) != 32) {
                return false;
            }
        }
        return true;
    }

    private static boolean a(m mVar) {
        return TextUtils.isEmpty(mVar.A) || a(mVar, "und");
    }

    protected static boolean a(m mVar, String str) {
        return str != null && TextUtils.equals(str, com.tkay.expressad.exoplayer.k.af.b(mVar.A));
    }

    private static List<Integer> a(ae aeVar, int i, int i2, boolean z) {
        ArrayList arrayList = new ArrayList(aeVar.f6632a);
        for (int i3 = 0; i3 < aeVar.f6632a; i3++) {
            arrayList.add(Integer.valueOf(i3));
        }
        if (i != Integer.MAX_VALUE && i2 != Integer.MAX_VALUE) {
            int i4 = Integer.MAX_VALUE;
            for (int i5 = 0; i5 < aeVar.f6632a; i5++) {
                m mVarA = aeVar.a(i5);
                if (mVarA.m > 0 && mVarA.n > 0) {
                    Point pointA = a(z, i, i2, mVarA.m, mVarA.n);
                    int i6 = mVarA.m * mVarA.n;
                    if (mVarA.m >= ((int) (pointA.x * f6691a)) && mVarA.n >= ((int) (pointA.y * f6691a)) && i6 < i4) {
                        i4 = i6;
                    }
                }
            }
            if (i4 != Integer.MAX_VALUE) {
                for (int size = arrayList.size() - 1; size >= 0; size--) {
                    int iA = aeVar.a(((Integer) arrayList.get(size)).intValue()).a();
                    if (iA == -1 || iA > i4) {
                        arrayList.remove(size);
                    }
                }
            }
        }
        return arrayList;
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0010  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static android.graphics.Point a(boolean r3, int r4, int r5, int r6, int r7) {
        /*
            if (r3 == 0) goto L10
            r3 = 1
            r0 = 0
            if (r6 <= r7) goto L8
            r1 = r3
            goto L9
        L8:
            r1 = r0
        L9:
            if (r4 <= r5) goto Lc
            goto Ld
        Lc:
            r3 = r0
        Ld:
            if (r1 == r3) goto L10
            goto L13
        L10:
            r2 = r5
            r5 = r4
            r4 = r2
        L13:
            int r3 = r6 * r4
            int r0 = r7 * r5
            if (r3 < r0) goto L23
            android.graphics.Point r3 = new android.graphics.Point
            int r4 = com.tkay.expressad.exoplayer.k.af.a(r0, r6)
            r3.<init>(r5, r4)
            return r3
        L23:
            android.graphics.Point r5 = new android.graphics.Point
            int r3 = com.tkay.expressad.exoplayer.k.af.a(r3, r7)
            r5.<init>(r3, r4)
            return r5
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.i.c.a(boolean, int, int, int, int):android.graphics.Point");
    }

    private static final class b implements Comparable<b> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final C0453c f6693a;
        private final int b;
        private final int c;
        private final int d;
        private final int e;
        private final int f;
        private final int g;

        public b(m mVar, C0453c c0453c, int i) {
            this.f6693a = c0453c;
            this.b = c.a(i, false) ? 1 : 0;
            this.c = c.a(mVar, c0453c.b) ? 1 : 0;
            this.d = (mVar.z & 1) != 0 ? 1 : 0;
            this.e = mVar.u;
            this.f = mVar.v;
            this.g = mVar.d;
        }

        @Override // java.lang.Comparable
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public final int compareTo(b bVar) {
            int iA;
            int i = this.b;
            int i2 = bVar.b;
            if (i != i2) {
                return c.a(i, i2);
            }
            int i3 = this.c;
            int i4 = bVar.c;
            if (i3 != i4) {
                return c.a(i3, i4);
            }
            int i5 = this.d;
            int i6 = bVar.d;
            if (i5 != i6) {
                return c.a(i5, i6);
            }
            if (this.f6693a.m) {
                return c.a(bVar.g, this.g);
            }
            int i7 = this.b != 1 ? -1 : 1;
            int i8 = this.e;
            int i9 = bVar.e;
            if (i8 != i9) {
                iA = c.a(i8, i9);
            } else {
                int i10 = this.f;
                int i11 = bVar.f;
                if (i10 != i11) {
                    iA = c.a(i10, i11);
                } else {
                    iA = c.a(this.g, bVar.g);
                }
            }
            return i7 * iA;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                b bVar = (b) obj;
                if (this.b == bVar.b && this.c == bVar.c && this.d == bVar.d && this.e == bVar.e && this.f == bVar.f && this.g == bVar.g) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            return (((((((((this.b * 31) + this.c) * 31) + this.d) * 31) + this.e) * 31) + this.f) * 31) + this.g;
        }
    }

    private static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f6692a;
        public final int b;
        public final String c;

        public a(int i, int i2, String str) {
            this.f6692a = i;
            this.b = i2;
            this.c = str;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                a aVar = (a) obj;
                if (this.f6692a == aVar.f6692a && this.b == aVar.b && TextUtils.equals(this.c, aVar.c)) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            int i = ((this.f6692a * 31) + this.b) * 31;
            String str = this.c;
            return i + (str != null ? str.hashCode() : 0);
        }
    }
}
