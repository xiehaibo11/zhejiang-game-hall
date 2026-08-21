package com.sigmob.sdk.videocache;

import android.content.Context;
import android.net.Uri;
import com.czhj.sdk.logger.SigmobLog;
import java.io.File;
import java.io.IOException;
import java.net.InetAddress;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.SocketException;
import java.util.Iterator;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class h {
    private static final String a = "127.0.0.1";
    private final Object b;
    private final ExecutorService c;
    private final Map<String, i> d;
    private final ServerSocket e;
    private final int f;
    private final Thread g;
    private final e h;
    private final m i;

    public static final class a {
        private static final long a = 536870912;
        private File b;
        private com.sigmob.sdk.videocache.sourcestorage.c e;
        private com.sigmob.sdk.videocache.file.a d = new com.sigmob.sdk.videocache.file.h(a);
        private com.sigmob.sdk.videocache.file.c c = new com.sigmob.sdk.videocache.file.f();
        private com.sigmob.sdk.videocache.headers.b f = new com.sigmob.sdk.videocache.headers.a();

        public a(Context context) {
            this.e = com.sigmob.sdk.videocache.sourcestorage.d.a(context);
            this.b = u.a(context);
        }

        private e b() {
            return new e(this.b, this.c, this.d, this.e, this.f);
        }

        public a a(int i) {
            this.d = new com.sigmob.sdk.videocache.file.g(i);
            return this;
        }

        public a a(long j) {
            this.d = new com.sigmob.sdk.videocache.file.h(j);
            return this;
        }

        public a a(com.sigmob.sdk.videocache.file.a aVar) {
            this.d = (com.sigmob.sdk.videocache.file.a) n.a(aVar);
            return this;
        }

        public a a(com.sigmob.sdk.videocache.file.c cVar) {
            this.c = (com.sigmob.sdk.videocache.file.c) n.a(cVar);
            return this;
        }

        public a a(com.sigmob.sdk.videocache.headers.b bVar) {
            this.f = (com.sigmob.sdk.videocache.headers.b) n.a(bVar);
            return this;
        }

        public a a(File file) {
            this.b = (File) n.a(file);
            return this;
        }

        public h a() {
            return new h(b());
        }
    }

    private final class b implements Runnable {
        private final Socket b;

        public b(Socket socket) {
            this.b = socket;
        }

        @Override
        public void run() {
            h.this.a(this.b);
        }
    }

    private final class c implements Runnable {
        private final CountDownLatch b;

        public c(CountDownLatch countDownLatch) {
            this.b = countDownLatch;
        }

        @Override
        public void run() {
            this.b.countDown();
            h.this.d();
        }
    }

    public h(Context context) {
        this(new a(context).b());
    }

    private h(e eVar) {
        this.b = new Object();
        this.c = Executors.newFixedThreadPool(8);
        this.d = new ConcurrentHashMap();
        this.h = (e) n.a(eVar);
        try {
            ServerSocket serverSocket = new ServerSocket(0, 8, InetAddress.getByName(a));
            this.e = serverSocket;
            int localPort = serverSocket.getLocalPort();
            this.f = localPort;
            k.a(a, localPort);
            CountDownLatch countDownLatch = new CountDownLatch(1);
            Thread thread = new Thread(new c(countDownLatch));
            this.g = thread;
            thread.start();
            countDownLatch.await();
            this.i = new m(a, this.f);
            SigmobLog.i("Proxy cache server started. Is it alive? " + b());
        } catch (IOException | InterruptedException e) {
            this.c.shutdown();
            throw new IllegalStateException("Error starting local proxy server", e);
        }
    }

    private void a(File file) {
        try {
            this.h.c.a(file);
        } catch (IOException e) {
            SigmobLog.e("Error touching file " + file, e);
        }
    }

    private void a(Throwable th) {
        SigmobLog.e("HttpProxyCacheServer error", th);
    }

    private void a(Socket socket) {
        StringBuilder sb;
        try {
            try {
                f fVarA = f.a(socket.getInputStream());
                SigmobLog.d("Request to cache proxy:" + fVarA);
                String strC = q.c(fVarA.a);
                if (this.i.a(strC)) {
                    this.i.a(socket);
                } else {
                    f(strC).a(fVarA, socket);
                }
                b(socket);
                sb = new StringBuilder();
            } catch (p e) {
                e = e;
                a(new p("Error processing request", e));
                b(socket);
                sb = new StringBuilder();
            } catch (SocketException unused) {
                SigmobLog.d("Closing socket… Socket is closed by client.");
                b(socket);
                sb = new StringBuilder();
            } catch (IOException e2) {
                e = e2;
                a(new p("Error processing request", e));
                b(socket);
                sb = new StringBuilder();
            }
            sb.append("Opened connections: ");
            sb.append(e());
            SigmobLog.d(sb.toString());
        } catch (Throwable th) {
            b(socket);
            SigmobLog.d("Opened connections: " + e());
            throw th;
        }
    }

    private void b(Socket socket) {
        c(socket);
        d(socket);
        e(socket);
    }

    private boolean b() {
        return this.i.a(3, 70);
    }

    private void c() {
        synchronized (this.b) {
            Iterator<i> it = this.d.values().iterator();
            while (it.hasNext()) {
                it.next().a();
            }
            this.d.clear();
        }
    }

    private void c(Socket socket) {
        try {
            if (socket.isInputShutdown()) {
                return;
            }
            socket.shutdownInput();
        } catch (SocketException unused) {
            SigmobLog.d("Releasing input stream… Socket is closed by client.");
        } catch (IOException unused2) {
        }
    }

    private void d() {
        while (!Thread.currentThread().isInterrupted()) {
            try {
                Socket socketAccept = this.e.accept();
                SigmobLog.d("Accept new socket " + socketAccept);
                this.c.submit(new b(socketAccept));
            } catch (IOException e) {
                a(new p("Error during waiting connection", e));
                return;
            }
        }
    }

    private void d(Socket socket) {
        try {
            if (socket.isOutputShutdown()) {
                return;
            }
            socket.shutdownOutput();
        } catch (IOException unused) {
        }
    }

    private int e() {
        int iB;
        synchronized (this.b) {
            iB = 0;
            Iterator<i> it = this.d.values().iterator();
            while (it.hasNext()) {
                iB += it.next().b();
            }
        }
        return iB;
    }

    private String e(String str) {
        return String.format(Locale.US, "http://%s:%d/%s", a, Integer.valueOf(this.f), q.b(str));
    }

    private void e(Socket socket) {
        try {
            if (socket.isClosed()) {
                return;
            }
            socket.close();
        } catch (IOException unused) {
        }
    }

    private i f(String str) throws p {
        i iVar;
        synchronized (this.b) {
            iVar = this.d.get(str);
            if (iVar == null) {
                iVar = new i(str, this.h);
                this.d.put(str, iVar);
            }
        }
        return iVar;
    }

    public String a(String str) {
        return a(str, true);
    }

    public String a(String str, boolean z) {
        if (!z || !b(str)) {
            return b() ? e(str) : str;
        }
        File fileC = c(str);
        a(fileC);
        return Uri.fromFile(fileC).toString();
    }

    public void a() {
        SigmobLog.i("Shutdown proxy server");
        c();
        this.h.d.a();
        this.g.interrupt();
        try {
            if (this.e.isClosed()) {
                return;
            }
            this.e.close();
        } catch (IOException e) {
            a(new p("Error shutting down proxy server", e));
        }
    }

    public void a(d dVar) {
        n.a(dVar);
        synchronized (this.b) {
            Iterator<i> it = this.d.values().iterator();
            while (it.hasNext()) {
                it.next().b(dVar);
            }
        }
    }

    public void a(d dVar, String str) {
        n.a(dVar, str);
        synchronized (this.b) {
            try {
                f(str).a(dVar);
            } catch (p e) {
                SigmobLog.w("Error registering cache listener", e);
            }
        }
    }

    public void b(d dVar, String str) {
        n.a(dVar, str);
        synchronized (this.b) {
            try {
                f(str).b(dVar);
            } catch (p e) {
                SigmobLog.w("Error registering cache listener", e);
            }
        }
    }

    public boolean b(String str) {
        n.a(str, "Url can't be null!");
        return c(str).exists();
    }

    public File c(String str) {
        return new File(this.h.a, this.h.b.a(str));
    }

    public void d(String str) {
        synchronized (this.b) {
            i iVar = this.d.get(str);
            if (iVar != null) {
                iVar.a();
            }
        }
    }
}
