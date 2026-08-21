package com.xiaomi.push;

import android.os.SystemClock;
import android.support.v4.os.EnvironmentCompat;
import android.util.Pair;
import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.bg;
import java.io.Reader;
import java.io.Writer;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Map;
import java.util.concurrent.CancellationException;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicInteger;

public abstract class fw {
    private static final AtomicInteger a = new AtomicInteger(0);
    public static boolean a;
    protected fx a;
    protected XMPushService a;
    protected int a = 0;
    protected long a = -1;
    protected volatile long b = 0;
    protected volatile long c = 0;
    private LinkedList<Pair<Integer, Long>> a = new LinkedList<>();
    private final Collection<fz> a = new CopyOnWriteArrayList();
    protected final Map<gb, a> a = new ConcurrentHashMap();
    protected final Map<gb, a> b = new ConcurrentHashMap();
    protected gi a = null;
    protected String a = "";
    protected String b = "";
    private int c = 2;
    protected final int b = a.getAndIncrement();
    private long e = 0;
    protected long d = 0;

    public class a {
        private gb a;
        private gj a;

        public a(gb gbVar, gj gjVar) {
            this.a = gbVar;
            this.a = gjVar;
        }

        public void a(fl flVar) {
            this.a.a(flVar);
        }

        public void a(gn gnVar) {
            gj gjVar = this.a;
            if (gjVar == null || gjVar.a(gnVar)) {
                this.a.a(gnVar);
            }
        }
    }

    static {
        a = false;
        try {
            a = Boolean.getBoolean("smack.debugEnabled");
        } catch (Exception unused) {
        }
        gc.a();
    }

    protected fw(XMPushService xMPushService, fx fxVar) {
        this.a = fxVar;
        this.a = xMPushService;
        b();
    }

    private String a(int i) {
        return i == 1 ? "connected" : i == 0 ? "connecting" : i == 2 ? "disconnected" : EnvironmentCompat.MEDIA_UNKNOWN;
    }

    private void a(int i) {
        synchronized (this.a) {
            if (i == 1) {
                this.a.clear();
            } else {
                this.a.add(new Pair<>(Integer.valueOf(i), Long.valueOf(System.currentTimeMillis())));
                if (this.a.size() > 6) {
                    this.a.remove(0);
                }
            }
        }
    }

    public int a() {
        return this.a;
    }

    public long a() {
        return this.c;
    }

    public fx a() {
        return this.a;
    }

    public String a() {
        return this.a.c();
    }

    protected Map<gb, a> a() {
        return this.a;
    }

    public void a(int i, int i2, Exception exc) {
        int i3 = this.c;
        if (i != i3) {
            com.xiaomi.channel.commonutils.logger.b.a(String.format("update the connection status. %1$s -> %2$s : %3$s ", a(i3), a(i), com.xiaomi.push.service.bk.a(i2)));
        }
        if (bj.b(this.a)) {
            a(i);
        }
        if (i == 1) {
            this.a.a(10);
            if (this.c != 0) {
                com.xiaomi.channel.commonutils.logger.b.a("try set connected while not connecting.");
            }
            this.c = i;
            Iterator<fz> it = this.a.iterator();
            while (it.hasNext()) {
                it.next().b(this);
            }
            return;
        }
        if (i == 0) {
            if (this.c != 2) {
                com.xiaomi.channel.commonutils.logger.b.a("try set connecting while not disconnected.");
            }
            this.c = i;
            Iterator<fz> it2 = this.a.iterator();
            while (it2.hasNext()) {
                it2.next().a(this);
            }
            return;
        }
        if (i == 2) {
            this.a.a(10);
            int i4 = this.c;
            if (i4 == 0) {
                Iterator<fz> it3 = this.a.iterator();
                while (it3.hasNext()) {
                    it3.next().a(this, exc == null ? new CancellationException("disconnect while connecting") : exc);
                }
            } else if (i4 == 1) {
                Iterator<fz> it4 = this.a.iterator();
                while (it4.hasNext()) {
                    it4.next().a(this, i2, exc);
                }
            }
            this.c = i;
        }
    }

    public void a(fz fzVar) {
        if (fzVar == null || this.a.contains(fzVar)) {
            return;
        }
        this.a.add(fzVar);
    }

    public void a(gb gbVar, gj gjVar) {
        if (gbVar == null) {
            throw new NullPointerException("Packet listener is null.");
        }
        this.a.put(gbVar, new a(gbVar, gjVar));
    }

    public abstract void a(gn gnVar);

    public abstract void a(bg.b bVar);

    public synchronized void a(String str) {
        if (this.c == 0) {
            com.xiaomi.channel.commonutils.logger.b.a("setChallenge hash = " + bo.a(str).substring(0, 8));
            this.a = str;
            a(1, 0, null);
        } else {
            com.xiaomi.channel.commonutils.logger.b.a("ignore setChallenge because connection was disconnected");
        }
    }

    public abstract void a(String str, String str2);

    public abstract void a(fl[] flVarArr);

    public boolean a() {
        return false;
    }

    public synchronized boolean a(long j) {
        return this.e >= j;
    }

    public int b() {
        return this.c;
    }

    public String b() {
        return this.a.b();
    }

    protected void b() {
        String property;
        if (this.a.a() && this.a == null) {
            Class<?> cls = null;
            try {
                property = System.getProperty("smack.debuggerClass");
            } catch (Throwable unused) {
                property = null;
            }
            if (property != null) {
                try {
                    cls = Class.forName(property);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            if (cls == null) {
                this.a = new fu(this);
                return;
            }
            try {
                this.a = (gi) cls.getConstructor(fw.class, Writer.class, Reader.class).newInstance(this);
            } catch (Exception e2) {
                throw new IllegalArgumentException("Can't initialize the configured debugger!", e2);
            }
        }
    }

    public abstract void b(int i, Exception exc);

    public abstract void b(fl flVar);

    public void b(fz fzVar) {
        this.a.remove(fzVar);
    }

    public void b(gb gbVar, gj gjVar) {
        if (gbVar == null) {
            throw new NullPointerException("Packet listener is null.");
        }
        this.b.put(gbVar, new a(gbVar, gjVar));
    }

    public abstract void b(boolean z);

    public boolean b() {
        return this.c == 0;
    }

    public synchronized void c() {
        this.e = SystemClock.elapsedRealtime();
    }

    public boolean c() {
        return this.c == 1;
    }

    public void d() {
        synchronized (this.a) {
            this.a.clear();
        }
    }
}
