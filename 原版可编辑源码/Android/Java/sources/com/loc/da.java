package com.loc;

import android.os.SystemClock;
import com.loc.cz;
import java.util.List;

public final class da {
    private static volatile da g;
    private static Object h = new Object();
    private long c;
    private ef d;
    private ef f = new ef();
    private cz a = new cz();
    private db b = new db();
    private cw e = new cw();

    public static class a {
        public ef a;
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
        if (this.d == null || aVar.a.a(this.d) >= 10.0d) {
            cz.a aVarA = this.a.a(aVar.a, aVar.j, aVar.g, aVar.h, aVar.i);
            List<eg> listA = this.b.a(aVar.a, aVar.b, aVar.e, aVar.d, jCurrentTimeMillis);
            if (aVarA != null || listA != null) {
                dx.a(this.f, aVar.a, aVar.f, jCurrentTimeMillis);
                dcVar = new dc(0, this.e.a(this.f, aVarA, aVar.c, listA));
            }
            this.d = aVar.a;
            this.c = jElapsedRealtime;
        }
        return dcVar;
    }
}
