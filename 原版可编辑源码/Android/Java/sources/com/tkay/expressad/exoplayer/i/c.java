package com.tkay.expressad.exoplayer.i;

import android.content.Context;
import android.graphics.Point;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.Pair;
import android.util.SparseArray;
import android.util.SparseBooleanArray;
import com.tkay.expressad.exoplayer.aa;
import com.tkay.expressad.exoplayer.h.ae;
import com.tkay.expressad.exoplayer.h.af;
import com.tkay.expressad.exoplayer.i.a;
import com.tkay.expressad.exoplayer.i.e;
import com.tkay.expressad.exoplayer.i.f;
import com.tkay.expressad.exoplayer.m;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicReference;

public final class c extends com.tkay.expressad.exoplayer.i.e {
    private static final float a = 0.98f;
    private static final int[] b = new int[0];
    private static final int c = 1000;
    private final f.a d;
    private final AtomicReference<c> e;

    static int a(int i, int i2) {
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
        private final SparseArray<Map<af, e>> a;
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

        d(c cVar, byte b) {
            this(cVar);
        }

        public d() {
            this(c.a);
        }

        private d(c cVar) {
            this.a = a((SparseArray<Map<af, e>>) cVar.r);
            this.b = cVar.s.clone();
            this.c = cVar.b;
            this.d = cVar.c;
            this.e = cVar.d;
            this.f = cVar.e;
            this.g = cVar.m;
            this.h = cVar.n;
            this.i = cVar.o;
            this.j = cVar.f;
            this.k = cVar.g;
            this.l = cVar.h;
            this.m = cVar.i;
            this.n = cVar.p;
            this.o = cVar.j;
            this.p = cVar.k;
            this.q = cVar.l;
            this.r = cVar.q;
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
            Map<af, e> map = this.a.get(i);
            if (map == null) {
                map = new HashMap<>();
                this.a.put(i, map);
            }
            if (map.containsKey(afVar) && com.tkay.expressad.exoplayer.k.af.a(map.get(afVar), eVar)) {
                return this;
            }
            map.put(afVar, eVar);
            return this;
        }

        public final d a(int i, af afVar) {
            Map<af, e> map = this.a.get(i);
            if (map != null && map.containsKey(afVar)) {
                map.remove(afVar);
                if (map.isEmpty()) {
                    this.a.remove(i);
                }
            }
            return this;
        }

        public final d a(int i) {
            Map<af, e> map = this.a.get(i);
            if (map != null && !map.isEmpty()) {
                this.a.remove(i);
            }
            return this;
        }

        public final d a() {
            if (this.a.size() == 0) {
                return this;
            }
            this.a.clear();
            return this;
        }

        public final d b(int i) {
            if (this.r != i) {
                this.r = i;
            }
            return this;
        }

        public final c b() {
            return new c(this.a, this.b, this.c, this.d, this.e, this.f, this.g, this.h, this.i, this.j, this.k, this.l, this.m, this.n, this.o, this.p, this.q, this.r);
        }

        private static SparseArray<Map<af, e>> a(SparseArray<Map<af, e>> sparseArray) {
            SparseArray<Map<af, e>> sparseArray2 = new SparseArray<>();
            for (int i = 0; i < sparseArray.size(); i++) {
                sparseArray2.put(sparseArray.keyAt(i), new HashMap(sparseArray.valueAt(i)));
            }
            return sparseArray2;
        }
    }

    public static final class c implements Parcelable {
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
        public static final c a = new c();
        public static final Parcelable.Creator<c> CREATOR = new Parcelable.Creator<c>() {
            private static c a(Parcel parcel) {
                return new c(parcel);
            }

            private static c[] a(int i) {
                return new c[i];
            }

            @Override
            public final c[] newArray(int i) {
                return new c[i];
            }

            @Override
            public final c createFromParcel(Parcel parcel) {
                return new c(parcel);
            }
        };

        @Override
        public final int describeContents() {
            return 0;
        }

        private c() {
            this(new SparseArray(), new SparseBooleanArray(), null, null, false, 0, false, false, true, Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MAX_VALUE, true, true, Integer.MAX_VALUE, Integer.MAX_VALUE, true, 0);
        }

        c(SparseArray<Map<af, e>> sparseArray, SparseBooleanArray sparseBooleanArray, String str, String str2, boolean z, int i, boolean z2, boolean z3, boolean z4, int i2, int i3, int i4, boolean z5, boolean z6, int i5, int i6, boolean z7, int i7) {
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

        c(Parcel parcel) {
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
        */
        public final boolean equals(Object obj) {
            boolean z;
            boolean z2;
            boolean z3;
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                c cVar = (c) obj;
                if (this.d == cVar.d && this.e == cVar.e && this.m == cVar.m && this.n == cVar.n && this.o == cVar.o && this.f == cVar.f && this.g == cVar.g && this.i == cVar.i && this.p == cVar.p && this.l == cVar.l && this.j == cVar.j && this.k == cVar.k && this.h == cVar.h && this.q == cVar.q && TextUtils.equals(this.b, cVar.b) && TextUtils.equals(this.c, cVar.c)) {
                    SparseBooleanArray sparseBooleanArray = this.s;
                    SparseBooleanArray sparseBooleanArray2 = cVar.s;
                    int size = sparseBooleanArray.size();
                    if (sparseBooleanArray2.size() != size) {
                        z = false;
                        if (z) {
                            SparseArray<Map<af, e>> sparseArray = this.r;
                            SparseArray<Map<af, e>> sparseArray2 = cVar.r;
                            int size2 = sparseArray.size();
                            if (sparseArray2.size() != size2) {
                                z2 = false;
                                if (!z2) {
                                    return true;
                                }
                            } else {
                                for (int i = 0; i < size2; i++) {
                                    int iIndexOfKey = sparseArray2.indexOfKey(sparseArray.keyAt(i));
                                    if (iIndexOfKey >= 0) {
                                        Map<af, e> mapValueAt = sparseArray.valueAt(i);
                                        Map<af, e> mapValueAt2 = sparseArray2.valueAt(iIndexOfKey);
                                        if (mapValueAt2.size() != mapValueAt.size()) {
                                            z3 = false;
                                            if (!z3) {
                                            }
                                        } else {
                                            for (Map.Entry<af, e> entry : mapValueAt.entrySet()) {
                                                af key = entry.getKey();
                                                if (!mapValueAt2.containsKey(key) || !com.tkay.expressad.exoplayer.k.af.a(entry.getValue(), mapValueAt2.get(key))) {
                                                    z3 = false;
                                                    break;
                                                }
                                            }
                                            z3 = true;
                                            if (!z3) {
                                            }
                                        }
                                    }
                                    z2 = false;
                                    break;
                                }
                                z2 = true;
                                if (!z2) {
                                }
                            }
                        }
                    } else {
                        for (int i2 = 0; i2 < size; i2++) {
                            if (sparseBooleanArray2.indexOfKey(sparseBooleanArray.keyAt(i2)) < 0) {
                                z = false;
                                break;
                            }
                        }
                        z = true;
                        if (z) {
                        }
                    }
                }
            }
            return false;
        }

        public final int hashCode() {
            int i = (((((((((((((((((((((((((((this.d ? 1 : 0) * 31) + this.e) * 31) + (this.m ? 1 : 0)) * 31) + (this.n ? 1 : 0)) * 31) + (this.o ? 1 : 0)) * 31) + this.f) * 31) + this.g) * 31) + (this.i ? 1 : 0)) * 31) + (this.p ? 1 : 0)) * 31) + (this.l ? 1 : 0)) * 31) + this.j) * 31) + this.k) * 31) + this.h) * 31) + this.q) * 31;
            String str = this.b;
            int iHashCode = (i + (str == null ? 0 : str.hashCode())) * 31;
            String str2 = this.c;
            return iHashCode + (str2 != null ? str2.hashCode() : 0);
        }

        @Override
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
        */
        private static boolean a(SparseArray<Map<af, e>> sparseArray, SparseArray<Map<af, e>> sparseArray2) {
            int size = sparseArray.size();
            if (sparseArray2.size() != size) {
                return false;
            }
            int i = 0;
            while (true) {
                boolean z = true;
                if (i >= size) {
                    return true;
                }
                int iIndexOfKey = sparseArray2.indexOfKey(sparseArray.keyAt(i));
                if (iIndexOfKey < 0) {
                    break;
                }
                Map<af, e> mapValueAt = sparseArray.valueAt(i);
                Map<af, e> mapValueAt2 = sparseArray2.valueAt(iIndexOfKey);
                if (mapValueAt2.size() != mapValueAt.size()) {
                    z = false;
                    if (z) {
                        break;
                    }
                    i++;
                } else {
                    for (Map.Entry<af, e> entry : mapValueAt.entrySet()) {
                        af key = entry.getKey();
                        if (!mapValueAt2.containsKey(key) || !com.tkay.expressad.exoplayer.k.af.a(entry.getValue(), mapValueAt2.get(key))) {
                            z = false;
                            break;
                        }
                    }
                    if (z) {
                    }
                }
            }
            return false;
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
        public static final Parcelable.Creator<e> CREATOR = new Parcelable.Creator<e>() {
            private static e a(Parcel parcel) {
                return new e(parcel);
            }

            private static e[] a(int i) {
                return new e[i];
            }

            @Override
            public final e[] newArray(int i) {
                return new e[i];
            }

            @Override
            public final e createFromParcel(Parcel parcel) {
                return new e(parcel);
            }
        };
        public final int a;
        public final int[] b;
        public final int c;

        @Override
        public final int describeContents() {
            return 0;
        }

        private e(int i, int... iArr) {
            this.a = i;
            int[] iArrCopyOf = Arrays.copyOf(iArr, iArr.length);
            this.b = iArrCopyOf;
            this.c = iArr.length;
            Arrays.sort(iArrCopyOf);
        }

        e(Parcel parcel) {
            this.a = parcel.readInt();
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
            return (this.a * 31) + Arrays.hashCode(this.b);
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                e eVar = (e) obj;
                if (this.a == eVar.a && Arrays.equals(this.b, eVar.b)) {
                    return true;
                }
            }
            return false;
        }

        @Override
        public final void writeToParcel(Parcel parcel, int i) {
            parcel.writeInt(this.a);
            parcel.writeInt(this.b.length);
            parcel.writeIntArray(this.b);
        }
    }

    public c() {
        this((f.a) null);
    }

    private c(com.tkay.expressad.exoplayer.j.d dVar) {
        this(new a.a(dVar));
    }

    private c(f.a aVar) {
        this.d = aVar;
        this.e = new AtomicReference<>(c.a);
    }

    private void a(c cVar) {
        com.tkay.expressad.exoplayer.k.a.a(cVar);
        if (this.e.getAndSet(cVar).equals(cVar)) {
            return;
        }
        b();
    }

    private void a(d dVar) {
        c cVarB = dVar.b();
        com.tkay.expressad.exoplayer.k.a.a(cVarB);
        if (this.e.getAndSet(cVarB).equals(cVarB)) {
            return;
        }
        b();
    }

    private c c() {
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
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected final Pair<aa[], f[]> a(e.a aVar, int[][][] iArr, int[] iArr2) {
        e.a aVar2;
        int i;
        int i2;
        f[] fVarArr;
        int i3;
        boolean z;
        int i4;
        f fVarA;
        String str;
        int[] iArrA;
        HashSet hashSet;
        c cVar = this;
        e.a aVar3 = aVar;
        int[][][] iArr3 = iArr;
        c cVar2 = cVar.e.get();
        int iA = aVar.a();
        int iA2 = aVar.a();
        f[] fVarArr2 = new f[iA2];
        int i5 = 0;
        boolean z2 = false;
        boolean z3 = false;
        while (i5 < iA2) {
            if (2 == aVar3.a(i5)) {
                if (z2) {
                    i = iA;
                    i2 = iA2;
                    fVarArr = fVarArr2;
                    z = z3;
                    aVar2 = aVar;
                    i3 = i5;
                } else {
                    af afVarB = aVar3.b(i5);
                    int[][] iArr4 = iArr3[i5];
                    int i6 = iArr2[i5];
                    f.a aVar4 = cVar.d;
                    if (cVar2.m || aVar4 == null) {
                        i = iA;
                        i2 = iA2;
                        fVarArr = fVarArr2;
                        i4 = i5;
                        z = z3;
                        fVarA = null;
                        if (fVarA == null) {
                            fVarA = a(afVarB, iArr4, cVar2);
                        }
                        fVarArr[i4] = fVarA;
                        z2 = fVarArr[i4] == null;
                        i3 = i4;
                        aVar2 = aVar;
                    } else {
                        int i7 = cVar2.o ? 24 : 16;
                        boolean z4 = cVar2.n && (i6 & i7) != 0;
                        int i8 = 0;
                        while (i8 < afVarB.b) {
                            ae aeVarA = afVarB.a(i8);
                            int[] iArr5 = iArr4[i8];
                            i = iA;
                            int i9 = cVar2.f;
                            int i10 = cVar2.g;
                            int i11 = cVar2.h;
                            i2 = iA2;
                            int i12 = cVar2.j;
                            z = z3;
                            int i13 = cVar2.k;
                            boolean z5 = cVar2.l;
                            fVarArr = fVarArr2;
                            i4 = i5;
                            if (aeVarA.a < 2) {
                                iArrA = b;
                            } else {
                                List<Integer> listA = a(aeVarA, i12, i13, z5);
                                if (listA.size() < 2) {
                                    iArrA = b;
                                } else {
                                    if (z4) {
                                        str = null;
                                    } else {
                                        HashSet hashSet2 = new HashSet();
                                        int i14 = 0;
                                        int i15 = 0;
                                        String str2 = null;
                                        while (i14 < listA.size()) {
                                            String str3 = aeVarA.a(listA.get(i14).intValue()).h;
                                            if (hashSet2.add(str3)) {
                                                hashSet = hashSet2;
                                                int iA3 = a(aeVarA, iArr5, i7, str3, i9, i10, i11, listA);
                                                if (iA3 > i15) {
                                                    i15 = iA3;
                                                    str2 = str3;
                                                }
                                            } else {
                                                hashSet = hashSet2;
                                            }
                                            i14++;
                                            hashSet2 = hashSet;
                                        }
                                        str = str2;
                                    }
                                    b(aeVarA, iArr5, i7, str, i9, i10, i11, listA);
                                    iArrA = listA.size() < 2 ? b : com.tkay.expressad.exoplayer.k.af.a(listA);
                                }
                            }
                            if (iArrA.length > 0) {
                                fVarA = ((f.a) com.tkay.expressad.exoplayer.k.a.a(aVar4)).a(aeVarA, iArrA);
                                break;
                            }
                            i8++;
                            iA = i;
                            iA2 = i2;
                            z3 = z;
                            fVarArr2 = fVarArr;
                            i5 = i4;
                        }
                        i = iA;
                        i2 = iA2;
                        fVarArr = fVarArr2;
                        i4 = i5;
                        z = z3;
                        fVarA = null;
                        if (fVarA == null) {
                        }
                        fVarArr[i4] = fVarA;
                        z2 = fVarArr[i4] == null;
                        i3 = i4;
                        aVar2 = aVar;
                    }
                }
                z3 = z | (aVar2.b(i3).b > 0);
            } else {
                aVar2 = aVar3;
                i = iA;
                i2 = iA2;
                fVarArr = fVarArr2;
                i3 = i5;
            }
            i5 = i3 + 1;
            iArr3 = iArr;
            aVar3 = aVar2;
            iA = i;
            iA2 = i2;
            fVarArr2 = fVarArr;
            cVar = this;
        }
        e.a aVar5 = aVar3;
        int i16 = iA;
        f[] fVarArr3 = fVarArr2;
        boolean z6 = z3;
        int i17 = iA2;
        boolean z7 = false;
        boolean z8 = false;
        for (int i18 = 0; i18 < i17; i18++) {
            int iA4 = aVar5.a(i18);
            if (iA4 == 1) {
                if (!z7) {
                    fVarArr3[i18] = a(aVar5.b(i18), iArr[i18], cVar2, z6 ? null : this.d);
                    z7 = fVarArr3[i18] != null;
                }
            } else if (iA4 != 2) {
                if (iA4 != 3) {
                    fVarArr3[i18] = c(aVar5.b(i18), iArr[i18], cVar2);
                } else if (!z8) {
                    fVarArr3[i18] = b(aVar5.b(i18), iArr[i18], cVar2);
                    z8 = fVarArr3[i18] != null;
                }
            }
        }
        for (int i19 = 0; i19 < i16; i19++) {
            if (cVar2.a(i19)) {
                fVarArr3[i19] = null;
            } else {
                af afVarB2 = aVar5.b(i19);
                if (cVar2.a(i19, afVarB2)) {
                    e eVarB = cVar2.b(i19, afVarB2);
                    if (eVarB == null) {
                        fVarArr3[i19] = null;
                    } else if (eVarB.c == 1) {
                        fVarArr3[i19] = new com.tkay.expressad.exoplayer.i.d(afVarB2.a(eVarB.a), eVarB.b[0]);
                    } else {
                        fVarArr3[i19] = ((f.a) com.tkay.expressad.exoplayer.k.a.a(this.d)).a(afVarB2.a(eVarB.a), eVarB.b);
                    }
                }
            }
        }
        aa[] aaVarArr = new aa[i16];
        for (int i20 = 0; i20 < i16; i20++) {
            aaVarArr[i20] = !cVar2.a(i20) && (aVar5.a(i20) == 5 || fVarArr3[i20] != null) ? aa.a : null;
        }
        a(aVar5, iArr, aaVarArr, fVarArr3, cVar2.q);
        return Pair.create(aaVarArr, fVarArr3);
    }

    /* JADX WARN: Removed duplicated region for block: B:100:0x00e8 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:51:0x00f4 A[LOOP:1: B:22:0x003f->B:51:0x00f4, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0112  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x011c  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x011e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private f[] a(e.a aVar, int[][][] iArr, int[] iArr2, c cVar) {
        e.a aVar2;
        int i;
        f[] fVarArr;
        int i2;
        boolean z;
        int i3;
        f fVarA;
        boolean z2;
        String str;
        int[] iArrA;
        HashSet hashSet;
        c cVar2 = this;
        e.a aVar3 = aVar;
        int iA = aVar.a();
        f[] fVarArr2 = new f[iA];
        int i4 = 0;
        boolean z3 = false;
        boolean z4 = false;
        while (i4 < iA) {
            if (2 == aVar3.a(i4)) {
                if (z3) {
                    i = iA;
                    fVarArr = fVarArr2;
                    z = z4;
                    aVar2 = aVar;
                    i2 = i4;
                } else {
                    af afVarB = aVar3.b(i4);
                    int[][] iArr3 = iArr[i4];
                    int i5 = iArr2[i4];
                    f.a aVar4 = cVar2.d;
                    if (cVar.m || aVar4 == null) {
                        i = iA;
                        fVarArr = fVarArr2;
                        i3 = i4;
                        z = z4;
                        fVarA = null;
                        if (fVarA == null) {
                            fVarA = a(afVarB, iArr3, cVar);
                        }
                        fVarArr[i3] = fVarA;
                        z3 = fVarArr[i3] == null;
                        i2 = i3;
                        aVar2 = aVar;
                    } else {
                        int i6 = cVar.o ? 24 : 16;
                        boolean z5 = cVar.n && (i5 & i6) != 0;
                        int i7 = 0;
                        while (i7 < afVarB.b) {
                            ae aeVarA = afVarB.a(i7);
                            int[] iArr4 = iArr3[i7];
                            int i8 = cVar.f;
                            int i9 = cVar.g;
                            int i10 = cVar.h;
                            i = iA;
                            int i11 = cVar.j;
                            z = z4;
                            int i12 = cVar.k;
                            boolean z6 = cVar.l;
                            fVarArr = fVarArr2;
                            i3 = i4;
                            if (aeVarA.a < 2) {
                                iArrA = b;
                            } else {
                                List<Integer> listA = a(aeVarA, i11, i12, z6);
                                if (listA.size() < 2) {
                                    iArrA = b;
                                } else {
                                    if (z5) {
                                        z2 = z5;
                                        str = null;
                                    } else {
                                        HashSet hashSet2 = new HashSet();
                                        z2 = z5;
                                        int i13 = 0;
                                        String str2 = null;
                                        int i14 = 0;
                                        while (i13 < listA.size()) {
                                            String str3 = aeVarA.a(listA.get(i13).intValue()).h;
                                            if (hashSet2.add(str3)) {
                                                hashSet = hashSet2;
                                                int iA2 = a(aeVarA, iArr4, i6, str3, i8, i9, i10, listA);
                                                if (iA2 > i14) {
                                                    i14 = iA2;
                                                    str2 = str3;
                                                }
                                            } else {
                                                hashSet = hashSet2;
                                            }
                                            i13++;
                                            hashSet2 = hashSet;
                                        }
                                        str = str2;
                                    }
                                    b(aeVarA, iArr4, i6, str, i8, i9, i10, listA);
                                    iArrA = listA.size() < 2 ? b : com.tkay.expressad.exoplayer.k.af.a(listA);
                                    if (iArrA.length <= 0) {
                                        fVarA = ((f.a) com.tkay.expressad.exoplayer.k.a.a(aVar4)).a(aeVarA, iArrA);
                                        break;
                                    }
                                    i7++;
                                    iA = i;
                                    z4 = z;
                                    fVarArr2 = fVarArr;
                                    i4 = i3;
                                    z5 = z2;
                                }
                            }
                            z2 = z5;
                            if (iArrA.length <= 0) {
                            }
                        }
                        i = iA;
                        fVarArr = fVarArr2;
                        i3 = i4;
                        z = z4;
                        fVarA = null;
                        if (fVarA == null) {
                        }
                        fVarArr[i3] = fVarA;
                        z3 = fVarArr[i3] == null;
                        i2 = i3;
                        aVar2 = aVar;
                    }
                }
                z4 = z | (aVar2.b(i2).b > 0);
            } else {
                aVar2 = aVar3;
                i = iA;
                fVarArr = fVarArr2;
                i2 = i4;
            }
            i4 = i2 + 1;
            aVar3 = aVar2;
            iA = i;
            fVarArr2 = fVarArr;
            cVar2 = this;
        }
        e.a aVar5 = aVar3;
        f[] fVarArr3 = fVarArr2;
        boolean z7 = z4;
        int i15 = iA;
        boolean z8 = false;
        boolean z9 = false;
        for (int i16 = 0; i16 < i15; i16++) {
            int iA3 = aVar5.a(i16);
            if (iA3 == 1) {
                if (!z8) {
                    fVarArr3[i16] = a(aVar5.b(i16), iArr[i16], cVar, z7 ? null : this.d);
                    z8 = fVarArr3[i16] != null;
                }
            } else if (iA3 != 2) {
                if (iA3 != 3) {
                    fVarArr3[i16] = c(aVar5.b(i16), iArr[i16], cVar);
                } else if (!z9) {
                    fVarArr3[i16] = b(aVar5.b(i16), iArr[i16], cVar);
                    z9 = fVarArr3[i16] != null;
                }
            }
        }
        return fVarArr3;
    }

    /* JADX WARN: Removed duplicated region for block: B:46:0x00ff A[LOOP:0: B:16:0x0022->B:46:0x00ff, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:52:0x00f1 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static f a(af afVar, int[][] iArr, int i, c cVar, f.a aVar) {
        f fVarA;
        List<Integer> list;
        int i2;
        int i3;
        int i4;
        ae aeVar;
        String str;
        int[] iArrA;
        int i5;
        HashSet hashSet;
        List<Integer> list2;
        int i6;
        int i7;
        int i8;
        ae aeVar2;
        if (cVar.m || aVar == null) {
            fVarA = null;
        } else {
            int i9 = cVar.o ? 24 : 16;
            boolean z = cVar.n && (i & i9) != 0;
            for (int i10 = 0; i10 < afVar.b; i10++) {
                ae aeVarA = afVar.a(i10);
                int[] iArr2 = iArr[i10];
                int i11 = cVar.f;
                int i12 = cVar.g;
                int i13 = cVar.h;
                int i14 = cVar.j;
                int i15 = cVar.k;
                boolean z2 = cVar.l;
                if (aeVarA.a < 2) {
                    iArrA = b;
                } else {
                    List<Integer> listA = a(aeVarA, i14, i15, z2);
                    if (listA.size() < 2) {
                        iArrA = b;
                    } else {
                        if (z) {
                            list = listA;
                            i2 = i13;
                            i3 = i12;
                            i4 = i11;
                            aeVar = aeVarA;
                            str = null;
                        } else {
                            HashSet hashSet2 = new HashSet();
                            int iA = 0;
                            int i16 = 0;
                            String str2 = null;
                            while (i16 < listA.size()) {
                                String str3 = aeVarA.a(listA.get(i16).intValue()).h;
                                int i17 = iA;
                                if (hashSet2.add(str3)) {
                                    i5 = i16;
                                    hashSet = hashSet2;
                                    list2 = listA;
                                    i6 = i13;
                                    i7 = i12;
                                    i8 = i11;
                                    aeVar2 = aeVarA;
                                    iA = a(aeVarA, iArr2, i9, str3, i11, i12, i6, list2);
                                    if (iA > i17) {
                                        str2 = str3;
                                    }
                                    i16 = i5 + 1;
                                    hashSet2 = hashSet;
                                    listA = list2;
                                    i13 = i6;
                                    i12 = i7;
                                    i11 = i8;
                                    aeVarA = aeVar2;
                                } else {
                                    i5 = i16;
                                    hashSet = hashSet2;
                                    list2 = listA;
                                    i6 = i13;
                                    i7 = i12;
                                    i8 = i11;
                                    aeVar2 = aeVarA;
                                }
                                iA = i17;
                                i16 = i5 + 1;
                                hashSet2 = hashSet;
                                listA = list2;
                                i13 = i6;
                                i12 = i7;
                                i11 = i8;
                                aeVarA = aeVar2;
                            }
                            list = listA;
                            i2 = i13;
                            i3 = i12;
                            i4 = i11;
                            aeVar = aeVarA;
                            str = str2;
                        }
                        b(aeVar, iArr2, i9, str, i4, i3, i2, list);
                        iArrA = list.size() < 2 ? b : com.tkay.expressad.exoplayer.k.af.a(list);
                        if (iArrA.length <= 0) {
                            fVarA = ((f.a) com.tkay.expressad.exoplayer.k.a.a(aVar)).a(aeVar, iArrA);
                            break;
                        }
                    }
                }
                aeVar = aeVarA;
                if (iArrA.length <= 0) {
                }
            }
            fVarA = null;
        }
        return fVarA == null ? a(afVar, iArr, cVar) : fVarA;
    }

    private static f b(af afVar, int[][] iArr, int i, c cVar, f.a aVar) {
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
        int i10 = cVar.o ? 24 : 16;
        boolean z = cVar.n && (i & i10) != 0;
        for (int i11 = 0; i11 < afVar.b; i11++) {
            ae aeVarA = afVar.a(i11);
            int[] iArr2 = iArr[i11];
            int i12 = cVar.f;
            int i13 = cVar.g;
            int i14 = cVar.h;
            int i15 = cVar.j;
            int i16 = cVar.k;
            boolean z2 = cVar.l;
            if (aeVarA.a < 2) {
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
        if (aeVar.a < 2) {
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
    */
    private static f a(af afVar, int[][] iArr, c cVar) {
        int iB;
        af afVar2 = afVar;
        int i = -1;
        int iA = -1;
        int i2 = -1;
        int i3 = 0;
        ae aeVar = null;
        int i4 = 0;
        int i5 = 0;
        while (i3 < afVar2.b) {
            ae aeVarA = afVar2.a(i3);
            List<Integer> listA = a(aeVarA, cVar.j, cVar.k, cVar.l);
            int[] iArr2 = iArr[i3];
            int i6 = 0;
            while (i6 < aeVarA.a) {
                if (a(iArr2[i6], cVar.p)) {
                    m mVarA = aeVarA.a(i6);
                    boolean z = true;
                    boolean z2 = listA.contains(Integer.valueOf(i6)) && (mVarA.m == i || mVarA.m <= cVar.f) && ((mVarA.n == i || mVarA.n <= cVar.g) && (mVarA.d == i || mVarA.d <= cVar.h));
                    if (z2 || cVar.i) {
                        int i7 = z2 ? 2 : 1;
                        boolean zA = a(iArr2[i6], false);
                        if (zA) {
                            i7 += 1000;
                        }
                        boolean z3 = i7 > i5;
                        if (i7 == i5) {
                            if (cVar.m) {
                                if (b(mVarA.d, i2) >= 0) {
                                    z = false;
                                }
                                z3 = z;
                            } else {
                                int iA2 = mVarA.a();
                                if (iA2 != iA) {
                                    iB = b(iA2, iA);
                                } else {
                                    iB = b(mVarA.d, i2);
                                }
                                if (!zA || !z2 ? iB >= 0 : iB <= 0) {
                                }
                                z3 = z;
                            }
                        }
                        if (z3) {
                            i2 = mVarA.d;
                            iA = mVarA.a();
                            aeVar = aeVarA;
                            i4 = i6;
                            i5 = i7;
                        }
                    }
                }
                i6++;
                i = -1;
            }
            i3++;
            i = -1;
            afVar2 = afVar;
        }
        if (aeVar == null) {
            return null;
        }
        return new com.tkay.expressad.exoplayer.i.d(aeVar, i4);
    }

    private static f a(af afVar, int[][] iArr, c cVar, f.a aVar) {
        int[] iArr2;
        int iA;
        int i = -1;
        int i2 = -1;
        b bVar = null;
        for (int i3 = 0; i3 < afVar.b; i3++) {
            ae aeVarA = afVar.a(i3);
            int[] iArr3 = iArr[i3];
            for (int i4 = 0; i4 < aeVarA.a; i4++) {
                if (a(iArr3[i4], cVar.p)) {
                    b bVar2 = new b(aeVarA.a(i4), cVar, iArr3[i4]);
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
        if (!cVar.m && aVar != null) {
            int[] iArr4 = iArr[i];
            boolean z = cVar.n;
            HashSet hashSet = new HashSet();
            a aVar2 = null;
            int i5 = 0;
            for (int i6 = 0; i6 < aeVarA2.a; i6++) {
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
                for (int i8 = 0; i8 < aeVarA2.a; i8++) {
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
        for (int i2 = 0; i2 < aeVar.a; i2++) {
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
            for (int i4 = 0; i4 < aeVar.a; i4++) {
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
        for (int i2 = 0; i2 < aeVar.a; i2++) {
            if (a(aeVar.a(i2), iArr[i2], aVar)) {
                i++;
            }
        }
        return i;
    }

    private static boolean a(m mVar, int i, a aVar) {
        return a(i, false) && mVar.u == aVar.a && mVar.v == aVar.b && (aVar.c == null || TextUtils.equals(aVar.c, mVar.h));
    }

    /* JADX WARN: Removed duplicated region for block: B:38:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x0084  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0088  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x008b A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static f b(af afVar, int[][] iArr, c cVar) {
        int i;
        ae aeVar = null;
        int i2 = 0;
        int i3 = 0;
        for (int i4 = 0; i4 < afVar.b; i4++) {
            ae aeVarA = afVar.a(i4);
            int[] iArr2 = iArr[i4];
            for (int i5 = 0; i5 < aeVarA.a; i5++) {
                if (a(iArr2[i5], cVar.p)) {
                    m mVarA = aeVarA.a(i5);
                    int i6 = mVarA.z & (~cVar.e);
                    boolean z = (i6 & 1) != 0;
                    boolean z2 = (i6 & 2) != 0;
                    boolean zA = a(mVarA, cVar.c);
                    if (!zA) {
                        if (cVar.d) {
                            if (TextUtils.isEmpty(mVarA.A) || a(mVarA, "und")) {
                            }
                            if (a(iArr2[i5], false)) {
                            }
                            if (i > i3) {
                            }
                        }
                        if (z) {
                            i = 3;
                        } else if (z2) {
                            i = a(mVarA, cVar.b) ? 2 : 1;
                        }
                        if (a(iArr2[i5], false)) {
                        }
                        if (i > i3) {
                        }
                    } else {
                        i = (z ? 8 : !z2 ? 6 : 4) + (zA ? 1 : 0);
                        if (a(iArr2[i5], false)) {
                            i += 1000;
                        }
                        if (i > i3) {
                            aeVar = aeVarA;
                            i2 = i5;
                            i3 = i;
                        }
                    }
                }
            }
        }
        if (aeVar == null) {
            return null;
        }
        return new com.tkay.expressad.exoplayer.i.d(aeVar, i2);
    }

    private static f c(af afVar, int[][] iArr, c cVar) {
        ae aeVar = null;
        int i = 0;
        int i2 = 0;
        for (int i3 = 0; i3 < afVar.b; i3++) {
            ae aeVarA = afVar.a(i3);
            int[] iArr2 = iArr[i3];
            for (int i4 = 0; i4 < aeVarA.a; i4++) {
                if (a(iArr2[i4], cVar.p)) {
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
    */
    private static void a(e.a aVar, int[][][] iArr, aa[] aaVarArr, f[] fVarArr, int i) {
        boolean z;
        boolean z2;
        if (i == 0) {
            return;
        }
        boolean z3 = false;
        int i2 = -1;
        int i3 = -1;
        for (int i4 = 0; i4 < aVar.a(); i4++) {
            int iA = aVar.a(i4);
            f fVar = fVarArr[i4];
            if ((iA == 1 || iA == 2) && fVar != null) {
                int[][] iArr2 = iArr[i4];
                af afVarB = aVar.b(i4);
                if (fVar != null) {
                    int iA2 = afVarB.a(fVar.f());
                    for (int i5 = 0; i5 < fVar.g(); i5++) {
                        if ((iArr2[iA2][fVar.b(i5)] & 32) == 32) {
                        }
                    }
                    z2 = true;
                    if (!z2) {
                        continue;
                    } else if (iA == 1) {
                        if (i3 != -1) {
                            z = false;
                            break;
                        }
                        i3 = i4;
                    } else {
                        if (i2 != -1) {
                            z = false;
                            break;
                        }
                        i2 = i4;
                    }
                }
                z2 = false;
                if (!z2) {
                }
            }
        }
        z = true;
        if (i3 != -1 && i2 != -1) {
            z3 = true;
        }
        if (z && z3) {
            aa aaVar = new aa(i);
            aaVarArr[i3] = aaVar;
            aaVarArr[i2] = aaVar;
        }
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
        ArrayList arrayList = new ArrayList(aeVar.a);
        for (int i3 = 0; i3 < aeVar.a; i3++) {
            arrayList.add(Integer.valueOf(i3));
        }
        if (i != Integer.MAX_VALUE && i2 != Integer.MAX_VALUE) {
            int i4 = Integer.MAX_VALUE;
            for (int i5 = 0; i5 < aeVar.a; i5++) {
                m mVarA = aeVar.a(i5);
                if (mVarA.m > 0 && mVarA.n > 0) {
                    Point pointA = a(z, i, i2, mVarA.m, mVarA.n);
                    int i6 = mVarA.m * mVarA.n;
                    if (mVarA.m >= ((int) (pointA.x * a)) && mVarA.n >= ((int) (pointA.y * a)) && i6 < i4) {
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
    */
    private static Point a(boolean z, int i, int i2, int i3, int i4) {
        if (z) {
            if ((i3 > i4) == (i > i2)) {
                i2 = i;
                i = i2;
            }
        }
        int i5 = i3 * i;
        int i6 = i4 * i2;
        if (i5 >= i6) {
            return new Point(i2, com.tkay.expressad.exoplayer.k.af.a(i6, i3));
        }
        return new Point(com.tkay.expressad.exoplayer.k.af.a(i5, i4), i);
    }

    private static final class b implements Comparable<b> {
        private final c a;
        private final int b;
        private final int c;
        private final int d;
        private final int e;
        private final int f;
        private final int g;

        public b(m mVar, c cVar, int i) {
            this.a = cVar;
            this.b = c.a(i, false) ? 1 : 0;
            this.c = c.a(mVar, cVar.b) ? 1 : 0;
            this.d = (mVar.z & 1) != 0 ? 1 : 0;
            this.e = mVar.u;
            this.f = mVar.v;
            this.g = mVar.d;
        }

        @Override
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
            if (this.a.m) {
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
        public final int a;
        public final int b;
        public final String c;

        public a(int i, int i2, String str) {
            this.a = i;
            this.b = i2;
            this.c = str;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                a aVar = (a) obj;
                if (this.a == aVar.a && this.b == aVar.b && TextUtils.equals(this.c, aVar.c)) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            int i = ((this.a * 31) + this.b) * 31;
            String str = this.c;
            return i + (str != null ? str.hashCode() : 0);
        }
    }
}
