package com.loc;

import android.os.SystemClock;
import com.loc.cz;
import java.util.List;

/* JADX INFO: compiled from: FpsCollector.java */
/* JADX INFO: loaded from: classes2.dex */
public final class da {
    private static volatile da g;
    private static Object h = new Object();
    private long c;
    private ef d;
    private ef f = new ef();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private cz f2926a = new cz();
    private db b = new db();
    private cw e = new cw();

    /* JADX INFO: compiled from: FpsCollector.java */
    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public ef f2927a;
        public List<eg> b;
        public long c;
        public long d;
        public boolean e;
        public long f;
        public byte g;
        public String h;
        public List<dz> i;
        public boolean j;
    }

    private da() {
    }

    public static da a() {
        if (g == null) {
            synchronized (h) {
                if (g == null) {
                    g = new da();
                }
            }
        }
        return g;
    }

    public final dc a(a aVar) {
        dc dcVar = null;
        if (aVar == null) {
            return null;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (this.d == null || aVar.f2927a.a(this.d) >= 10.0d) {
            cz.a aVarA = this.f2926a.a(aVar.f2927a, aVar.j, aVar.g, aVar.h, aVar.i);
            List<eg> listA = this.b.a(aVar.f2927a, aVar.b, aVar.e, aVar.d, jCurrentTimeMillis);
            if (aVarA != null || listA != null) {
                dx.a(this.f, aVar.f2927a, aVar.f, jCurrentTimeMillis);
                dcVar = new dc(0, this.e.a(this.f, aVarA, aVar.c, listA));
            }
            this.d = aVar.f2927a;
            this.c = jElapsedRealtime;
        }
        return dcVar;
    }
}
