package com.kwad.sdk.core.videocache;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.kwad.sdk.utils.ao;
import java.io.File;
import java.net.Socket;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicInteger;

final class g {
    private volatile e awD;
    private final b awF;
    private final c awy;
    private final String url;
    private final AtomicInteger awC = new AtomicInteger(0);
    private final List<b> awE = new CopyOnWriteArrayList();

    static final class a extends Handler implements b {
        private final List<b> awE;
        private final String url;

        public a(String str, List<b> list) {
            super(Looper.getMainLooper());
            this.url = str;
            this.awE = list;
        }

        @Override
        public final void a(File file, int i) {
            Message messageObtainMessage = obtainMessage();
            messageObtainMessage.arg1 = i;
            messageObtainMessage.obj = file;
            sendMessage(messageObtainMessage);
        }

        @Override
        public final void handleMessage(Message message) {
            Iterator<b> it = this.awE.iterator();
            while (it.hasNext()) {
                it.next().a((File) message.obj, message.arg1);
            }
        }
    }

    public g(String str, c cVar) {
        this.url = ao.fE(str);
        this.awy = (c) ao.checkNotNull(cVar);
        this.awF = new a(str, this.awE);
    }

    private synchronized void DG() {
        this.awD = this.awD == null ? DI() : this.awD;
    }

    private synchronized void DH() {
        if (this.awC.decrementAndGet() <= 0) {
            this.awD.shutdown();
            this.awD = null;
        }
    }

    private e DI() {
        e eVar = new e(new h(this.url, this.awy.awk, this.awy.awl), new com.kwad.sdk.core.videocache.a.b(this.awy.dK(this.url), this.awy.awj));
        eVar.a(this.awF);
        return eVar;
    }

    public final int DD() {
        return this.awC.get();
    }

    public final void a(d dVar, Socket socket) {
        DG();
        try {
            this.awC.incrementAndGet();
            this.awD.a(dVar, socket);
        } finally {
            DH();
        }
    }

    public final void shutdown() {
        this.awE.clear();
        e eVar = this.awD;
        if (eVar != null) {
            eVar.a((b) null);
            eVar.shutdown();
        }
        this.awD = null;
        this.awC.set(0);
    }
}
