package com.loc;

import android.os.SystemClock;
import android.util.LongSparseArray;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: compiled from: RssiInfoManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class du {
    private static volatile du g;
    private static Object h = new Object();
    private Object e = new Object();
    private Object f = new Object();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private LongSparseArray<a> f2931a = new LongSparseArray<>();
    private LongSparseArray<a> b = new LongSparseArray<>();
    private LongSparseArray<a> c = new LongSparseArray<>();
    private LongSparseArray<a> d = new LongSparseArray<>();

    /* JADX INFO: compiled from: RssiInfoManager.java */
    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        int f2932a;
        long b;
        boolean c;

        private a() {
        }

        /* synthetic */ a(byte b) {
            this();
        }
    }

    private du() {
    }

    public static du a() {
        if (g == null) {
            synchronized (h) {
                if (g == null) {
                    g = new du();
                }
            }
        }
        return g;
    }

    private static short a(LongSparseArray<a> longSparseArray, long j) {
        synchronized (longSparseArray) {
            a aVar = longSparseArray.get(j);
            if (aVar == null) {
                return (short) 0;
            }
            short sMax = (short) Math.max(1L, Math.min(32767L, (b() - aVar.b) / 1000));
            if (!aVar.c) {
                sMax = (short) (-sMax);
            }
            return sMax;
        }
    }

    private static void a(List<dt> list, LongSparseArray<a> longSparseArray, LongSparseArray<a> longSparseArray2) {
        long jB = b();
        int size = longSparseArray.size();
        byte b = 0;
        Iterator<dt> it = list.iterator();
        if (size == 0) {
            while (it.hasNext()) {
                dt next = it.next();
                a aVar = new a(b);
                aVar.f2932a = next.b();
                aVar.b = jB;
                aVar.c = false;
                longSparseArray2.put(next.a(), aVar);
            }
            return;
        }
        while (it.hasNext()) {
            dt next2 = it.next();
            long jA = next2.a();
            a aVar2 = longSparseArray.get(jA);
            if (aVar2 == null) {
                aVar2 = new a(b);
            } else {
                if (aVar2.f2932a != next2.b()) {
                }
                longSparseArray2.put(jA, aVar2);
            }
            aVar2.f2932a = next2.b();
            aVar2.b = jB;
            aVar2.c = true;
            longSparseArray2.put(jA, aVar2);
        }
    }

    private static long b() {
        return SystemClock.elapsedRealtime();
    }

    final short a(long j) {
        return a(this.f2931a, j);
    }

    final void a(List<dt> list) {
        if (list.isEmpty()) {
            return;
        }
        synchronized (this.e) {
            a(list, this.f2931a, this.b);
            LongSparseArray<a> longSparseArray = this.f2931a;
            this.f2931a = this.b;
            this.b = longSparseArray;
            longSparseArray.clear();
        }
    }

    final short b(long j) {
        return a(this.c, j);
    }

    final void b(List<dt> list) {
        if (list.isEmpty()) {
            return;
        }
        synchronized (this.f) {
            a(list, this.c, this.d);
            LongSparseArray<a> longSparseArray = this.c;
            this.c = this.d;
            this.d = longSparseArray;
            longSparseArray.clear();
        }
    }
}
