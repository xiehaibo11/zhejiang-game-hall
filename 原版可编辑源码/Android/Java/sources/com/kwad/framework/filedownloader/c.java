package com.kwad.framework.filedownloader;

import android.text.TextUtils;
import com.kwad.framework.filedownloader.a;
import com.kwad.framework.filedownloader.d;
import com.kwad.framework.filedownloader.x;
import java.io.File;
import java.util.ArrayList;

public final class c implements com.kwad.framework.filedownloader.a, a.a, d.a {
    private final Object aaD;
    private final x aal;
    private final x.a aam;
    private int aan;
    private ArrayList<Object> aao;
    private String aap;
    private String aaq;
    private boolean aar;
    private com.kwad.framework.filedownloader.d.b aas;
    private i aat;
    private Object aau;
    private final String mUrl;
    private int aav = 0;
    private boolean aaw = false;
    private boolean aax = false;
    private int aay = 100;
    private int aaz = 10;
    private boolean aaA = false;
    volatile int aaB = 0;
    private boolean aaC = false;
    private final Object aaE = new Object();
    private volatile boolean aaF = false;

    static final class a implements a.b {
        private final c aaG;

        private a(c cVar) {
            this.aaG = cVar;
            c.a(cVar, true);
        }

        a(c cVar, byte b) {
            this(cVar);
        }

        @Override
        public final int tn() {
            int id = this.aaG.getId();
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "add the task[%d] to the queue", Integer.valueOf(id));
            }
            h.tD().c(this.aaG);
            return id;
        }
    }

    c(String str) {
        this.mUrl = str;
        Object obj = new Object();
        this.aaD = obj;
        d dVar = new d(this, obj);
        this.aal = dVar;
        this.aam = dVar;
    }

    static boolean a(c cVar, boolean z) {
        cVar.aaC = true;
        return true;
    }

    private boolean tp() {
        return this.aal.sX() != 0;
    }

    private int tq() {
        if (!tp()) {
            if (!sQ()) {
                ti();
            }
            this.aal.tw();
            return getId();
        }
        if (isRunning()) {
            throw new IllegalStateException(com.kwad.framework.filedownloader.f.f.b("This task is running %d, if you want to start the same task, please create a new one by FileDownloader.create", Integer.valueOf(getId())));
        }
        throw new IllegalStateException("This task is dirty to restart, If you want to reuse this task, please invoke #reuse method manually and retry to restart again." + this.aal.toString());
    }

    private void tr() {
        if (this.aas == null) {
            synchronized (this.aaE) {
                if (this.aas == null) {
                    this.aas = new com.kwad.framework.filedownloader.d.b();
                }
            }
        }
    }

    @Override
    public final com.kwad.framework.filedownloader.a a(i iVar) {
        this.aat = iVar;
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "setListener %s", iVar);
        }
        return this;
    }

    @Override
    public final com.kwad.framework.filedownloader.a aS(int i) {
        this.aav = 3;
        return this;
    }

    @Override
    public final com.kwad.framework.filedownloader.a aT(boolean z) {
        this.aaA = true;
        return this;
    }

    @Override
    public final boolean aT(int i) {
        return getId() == i;
    }

    @Override
    public final com.kwad.framework.filedownloader.a aU(String str) {
        return b(str, false);
    }

    @Override
    public final com.kwad.framework.filedownloader.a aU(boolean z) {
        this.aaw = true;
        return this;
    }

    @Override
    public final com.kwad.framework.filedownloader.a aV(String str) {
        if (this.aas == null) {
            synchronized (this.aaE) {
                if (this.aas == null) {
                    return this;
                }
            }
        }
        this.aas.bh(str);
        return this;
    }

    @Override
    public final com.kwad.framework.filedownloader.a aV(boolean z) {
        this.aax = z;
        return this;
    }

    @Override
    public final void aW(String str) {
        this.aaq = str;
    }

    @Override
    public final com.kwad.framework.filedownloader.a b(String str, boolean z) {
        this.aap = str;
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "setPath %s", str);
        }
        this.aar = z;
        this.aaq = z ? null : new File(str).getName();
        return this;
    }

    @Override
    public final boolean cancel() {
        return pause();
    }

    @Override
    public final com.kwad.framework.filedownloader.a e(Object obj) {
        this.aau = obj;
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "setTag %s", obj);
        }
        return this;
    }

    @Override
    public final void free() {
        this.aal.free();
        if (h.tD().a(this)) {
            this.aaF = false;
        }
    }

    @Override
    public final String getFilename() {
        return this.aaq;
    }

    @Override
    public final int getId() {
        int i = this.aan;
        if (i != 0) {
            return i;
        }
        if (TextUtils.isEmpty(this.aap) || TextUtils.isEmpty(this.mUrl)) {
            return 0;
        }
        int iG = com.kwad.framework.filedownloader.f.f.g(this.mUrl, this.aap, this.aar);
        this.aan = iG;
        return iG;
    }

    @Override
    public final String getPath() {
        return this.aap;
    }

    @Override
    public final int getSmallFileSoFarBytes() {
        if (this.aal.tx() > 2147483647L) {
            return Integer.MAX_VALUE;
        }
        return (int) this.aal.tx();
    }

    @Override
    public final int getSmallFileTotalBytes() {
        if (this.aal.getTotalBytes() > 2147483647L) {
            return Integer.MAX_VALUE;
        }
        return (int) this.aal.getTotalBytes();
    }

    @Override
    public final int getSpeed() {
        return this.aal.getSpeed();
    }

    @Override
    public final long getStatusUpdateTime() {
        return this.aal.getStatusUpdateTime();
    }

    @Override
    public final Object getTag() {
        return this.aau;
    }

    @Override
    public final String getTargetFilePath() {
        return com.kwad.framework.filedownloader.f.f.a(getPath(), sT(), getFilename());
    }

    @Override
    public final String getUrl() {
        return this.mUrl;
    }

    @Override
    public final boolean isOver() {
        return com.kwad.framework.filedownloader.d.d.bA(sX());
    }

    @Override
    public final boolean isRunning() {
        if (r.tW().ua().d(this)) {
            return true;
        }
        return com.kwad.framework.filedownloader.d.d.bB(sX());
    }

    @Override
    public final com.kwad.framework.filedownloader.a m(String str, String str2) {
        tr();
        this.aas.o(str, str2);
        return this;
    }

    @Override
    public final boolean pause() {
        boolean zPause;
        synchronized (this.aaD) {
            zPause = this.aal.pause();
        }
        return zPause;
    }

    @Override
    public final a.b sO() {
        return new a(this, (byte) 0);
    }

    @Override
    public final boolean sP() {
        if (isRunning()) {
            com.kwad.framework.filedownloader.f.d.d(this, "This task[%d] is running, if you want start the same task, please create a new one by FileDownloader#create", Integer.valueOf(getId()));
            return false;
        }
        this.aaB = 0;
        this.aaC = false;
        this.aaF = false;
        this.aal.reset();
        return true;
    }

    @Override
    public final boolean sQ() {
        return this.aaB != 0;
    }

    @Override
    public final int sR() {
        return this.aay;
    }

    @Override
    public final int sS() {
        return this.aaz;
    }

    @Override
    public final boolean sT() {
        return this.aar;
    }

    @Override
    public final i sU() {
        return this.aat;
    }

    @Override
    public final long sV() {
        return this.aal.tx();
    }

    @Override
    public final long sW() {
        return this.aal.getTotalBytes();
    }

    @Override
    public final byte sX() {
        return this.aal.sX();
    }

    @Override
    public final boolean sY() {
        return this.aaA;
    }

    @Override
    public final Throwable sZ() {
        return this.aal.sZ();
    }

    @Override
    public final int start() {
        if (this.aaC) {
            throw new IllegalStateException("If you start the task manually, it means this task doesn't belong to a queue, so you must not invoke BaseDownloadTask#ready() or InQueueTask#enqueue() before you start() this method. For detail: If this task doesn't belong to a queue, what is just an isolated task, you just need to invoke BaseDownloadTask#start() to start this task, that's all. In other words, If this task doesn't belong to a queue, you must not invoke BaseDownloadTask#ready() method or InQueueTask#enqueue() method before invoke BaseDownloadTask#start(), If you do that and if there is the same listener object to start a queue in another thread, this task may be assembled by the queue, in that case, when you invoke BaseDownloadTask#start() manually to start this task or this task is started by the queue, there is an exception buried in there, because this task object is started two times without declare BaseDownloadTask#reuse() : 1. you invoke BaseDownloadTask#start() manually;  2. the queue start this task automatically.");
        }
        return tq();
    }

    @Override
    public final int ta() {
        return this.aav;
    }

    @Override
    public final int tb() {
        return this.aal.tb();
    }

    @Override
    public final boolean tc() {
        return this.aaw;
    }

    @Override
    public final boolean td() {
        return this.aal.td();
    }

    @Override
    public final boolean te() {
        return this.aax;
    }

    @Override
    public final com.kwad.framework.filedownloader.a tf() {
        return this;
    }

    @Override
    public final x.a tg() {
        return this.aam;
    }

    @Override
    public final int th() {
        return this.aaB;
    }

    @Override
    public final void ti() {
        this.aaB = sU() != null ? sU().hashCode() : hashCode();
    }

    @Override
    public final boolean tj() {
        return this.aaF;
    }

    @Override
    public final void tk() {
        this.aaF = true;
    }

    @Override
    public final void tl() {
        tq();
    }

    @Override
    public final boolean tm() {
        ArrayList<Object> arrayList = this.aao;
        return arrayList != null && arrayList.size() > 0;
    }

    public final String toString() {
        return com.kwad.framework.filedownloader.f.f.b("%d@%s", Integer.valueOf(getId()), super.toString());
    }

    @Override
    public final com.kwad.framework.filedownloader.d.b ts() {
        return this.aas;
    }

    @Override
    public final a.a tt() {
        return this;
    }

    @Override
    public final ArrayList<Object> tu() {
        return this.aao;
    }
}
