package com.sigmob.sdk.videocache;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import java.io.File;
import java.io.IOException;
import java.net.Socket;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes3.dex */
final class i {
    private final String b;
    private volatile g c;
    private final d e;
    private final e f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final AtomicInteger f5227a = new AtomicInteger(0);
    private final List<d> d = new CopyOnWriteArrayList();

    private static final class a extends Handler implements d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f5228a;
        private final List<d> b;

        public a(String str, List<d> list) {
            super(Looper.getMainLooper());
            this.f5228a = str;
            this.b = list;
        }

        @Override // com.sigmob.sdk.videocache.d
        public void a(File file, String str, int i) {
            Message messageObtainMessage = obtainMessage();
            messageObtainMessage.arg1 = i;
            messageObtainMessage.obj = file;
            sendMessage(messageObtainMessage);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Iterator<d> it = this.b.iterator();
            while (it.hasNext()) {
                it.next().a((File) message.obj, this.f5228a, message.arg1);
            }
        }
    }

    public i(String str, e eVar) {
        this.b = (String) n.a(str);
        this.f = (e) n.a(eVar);
        this.e = new a(str, this.d);
    }

    private synchronized void c() throws p {
        this.c = this.c == null ? e() : this.c;
    }

    private synchronized void d() {
        if (this.f5227a.decrementAndGet() <= 0) {
            this.c.a();
            this.c = null;
        }
    }

    private g e() throws p {
        g gVar = new g(new j(this.b, this.f.d, this.f.e), new com.sigmob.sdk.videocache.file.b(this.f.a(this.b), this.f.c));
        gVar.a(this.e);
        return gVar;
    }

    public void a() {
        this.d.clear();
        if (this.c != null) {
            this.c.a((d) null);
            this.c.a();
            this.c = null;
        }
        this.f5227a.set(0);
    }

    public void a(d dVar) {
        this.d.add(dVar);
    }

    public void a(f fVar, Socket socket) throws p, IOException {
        c();
        try {
            this.f5227a.incrementAndGet();
            this.c.a(fVar, socket);
        } finally {
            try {
            } finally {
            }
        }
    }

    public int b() {
        return this.f5227a.get();
    }

    public void b(d dVar) {
        this.d.remove(dVar);
    }
}
