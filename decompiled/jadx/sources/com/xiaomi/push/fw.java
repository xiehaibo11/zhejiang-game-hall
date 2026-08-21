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

/* JADX INFO: loaded from: classes4.dex */
public abstract class fw {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AtomicInteger f8171a = new AtomicInteger(0);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public static boolean f417a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected fx f420a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected XMPushService f422a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected int f418a = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected long f419a = -1;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    protected volatile long f427b = 0;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    protected volatile long f430c = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private LinkedList<Pair<Integer, Long>> f425a = new LinkedList<>();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final Collection<fz> f424a = new CopyOnWriteArrayList();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected final Map<gb, a> f426a = new ConcurrentHashMap();

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    protected final Map<gb, a> f429b = new ConcurrentHashMap();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected gi f421a = null;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected String f423a = "";

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    protected String f428b = "";
    private int c = 2;
    protected final int b = f8171a.getAndIncrement();
    private long e = 0;
    protected long d = 0;

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private gb f8172a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private gj f431a;

        public a(gb gbVar, gj gjVar) {
            this.f8172a = gbVar;
            this.f431a = gjVar;
        }

        public void a(fl flVar) {
            this.f8172a.a(flVar);
        }

        public void a(gn gnVar) {
            gj gjVar = this.f431a;
            if (gjVar == null || gjVar.mo362a(gnVar)) {
                this.f8172a.a(gnVar);
            }
        }
    }

    static {
        f417a = false;
        try {
            f417a = Boolean.getBoolean("smack.debugEnabled");
        } catch (Exception unused) {
        }
        gc.m375a();
    }

    protected fw(XMPushService xMPushService, fx fxVar) {
        this.f420a = fxVar;
        this.f422a = xMPushService;
        m369b();
    }

    private String a(int i) {
        return i == 1 ? "connected" : i == 0 ? "connecting" : i == 2 ? "disconnected" : EnvironmentCompat.MEDIA_UNKNOWN;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private void m363a(int i) {
        synchronized (this.f425a) {
            if (i == 1) {
                this.f425a.clear();
            } else {
                this.f425a.add(new Pair<>(Integer.valueOf(i), Long.valueOf(System.currentTimeMillis())));
                if (this.f425a.size() > 6) {
                    this.f425a.remove(0);
                }
            }
        }
    }

    public int a() {
        return this.f418a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public long m364a() {
        return this.f430c;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public fx m365a() {
        return this.f420a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String mo366a() {
        return this.f420a.c();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    protected Map<gb, a> m367a() {
        return this.f426a;
    }

    public void a(int i, int i2, Exception exc) {
        int i3 = this.c;
        if (i != i3) {
            com.xiaomi.channel.commonutils.logger.b.m43a(String.format("update the connection status. %1$s -> %2$s : %3$s ", a(i3), a(i), com.xiaomi.push.service.bk.a(i2)));
        }
        if (bj.b(this.f422a)) {
            m363a(i);
        }
        if (i == 1) {
            this.f422a.a(10);
            if (this.c != 0) {
                com.xiaomi.channel.commonutils.logger.b.m43a("try set connected while not connecting.");
            }
            this.c = i;
            Iterator<fz> it = this.f424a.iterator();
            while (it.hasNext()) {
                it.next().b(this);
            }
            return;
        }
        if (i == 0) {
            if (this.c != 2) {
                com.xiaomi.channel.commonutils.logger.b.m43a("try set connecting while not disconnected.");
            }
            this.c = i;
            Iterator<fz> it2 = this.f424a.iterator();
            while (it2.hasNext()) {
                it2.next().a(this);
            }
            return;
        }
        if (i == 2) {
            this.f422a.a(10);
            int i4 = this.c;
            if (i4 == 0) {
                Iterator<fz> it3 = this.f424a.iterator();
                while (it3.hasNext()) {
                    it3.next().a(this, exc == null ? new CancellationException("disconnect while connecting") : exc);
                }
            } else if (i4 == 1) {
                Iterator<fz> it4 = this.f424a.iterator();
                while (it4.hasNext()) {
                    it4.next().a(this, i2, exc);
                }
            }
            this.c = i;
        }
    }

    public void a(fz fzVar) {
        if (fzVar == null || this.f424a.contains(fzVar)) {
            return;
        }
        this.f424a.add(fzVar);
    }

    public void a(gb gbVar, gj gjVar) {
        if (gbVar == null) {
            throw new NullPointerException("Packet listener is null.");
        }
        this.f426a.put(gbVar, new a(gbVar, gjVar));
    }

    public abstract void a(gn gnVar);

    public abstract void a(bg.b bVar);

    public synchronized void a(String str) {
        if (this.c == 0) {
            com.xiaomi.channel.commonutils.logger.b.m43a("setChallenge hash = " + bo.a(str).substring(0, 8));
            this.f423a = str;
            a(1, 0, null);
        } else {
            com.xiaomi.channel.commonutils.logger.b.m43a("ignore setChallenge because connection was disconnected");
        }
    }

    public abstract void a(String str, String str2);

    public abstract void a(fl[] flVarArr);

    /* JADX INFO: renamed from: a */
    public boolean mo358a() {
        return false;
    }

    public synchronized boolean a(long j) {
        return this.e >= j;
    }

    public int b() {
        return this.c;
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public String m368b() {
        return this.f420a.b();
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    protected void m369b() {
        String property;
        if (this.f420a.m373a() && this.f421a == null) {
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
                this.f421a = new fu(this);
                return;
            }
            try {
                this.f421a = (gi) cls.getConstructor(fw.class, Writer.class, Reader.class).newInstance(this);
            } catch (Exception e2) {
                throw new IllegalArgumentException("Can't initialize the configured debugger!", e2);
            }
        }
    }

    public abstract void b(int i, Exception exc);

    public abstract void b(fl flVar);

    public void b(fz fzVar) {
        this.f424a.remove(fzVar);
    }

    public void b(gb gbVar, gj gjVar) {
        if (gbVar == null) {
            throw new NullPointerException("Packet listener is null.");
        }
        this.f429b.put(gbVar, new a(gbVar, gjVar));
    }

    public abstract void b(boolean z);

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m370b() {
        return this.c == 0;
    }

    public synchronized void c() {
        this.e = SystemClock.elapsedRealtime();
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m371c() {
        return this.c == 1;
    }

    public void d() {
        synchronized (this.f425a) {
            this.f425a.clear();
        }
    }
}
