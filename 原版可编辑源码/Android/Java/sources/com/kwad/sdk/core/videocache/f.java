package com.kwad.sdk.core.videocache;

import android.content.Context;
import android.net.Uri;
import com.kwad.sdk.core.network.a.a;
import com.kwad.sdk.core.threads.GlobalThreadPools;
import com.kwad.sdk.utils.ao;
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

public final class f {
    private final Object awt;
    private final ExecutorService awu;
    private final Map<String, g> awv;
    private final ServerSocket aww;
    private final Thread awx;
    private final com.kwad.sdk.core.videocache.c awy;
    private final int port;

    public static final class a {
        private File awh;
        private com.kwad.sdk.core.videocache.d.b awk;
        private com.kwad.sdk.core.videocache.a.a awj = new com.kwad.sdk.core.videocache.a.g(536870912);
        private com.kwad.sdk.core.videocache.a.c awi = new com.kwad.sdk.core.videocache.a.f();
        private com.kwad.sdk.core.videocache.b.b awl = new com.kwad.sdk.core.videocache.b.a();

        public a(Context context) {
            this.awk = com.kwad.sdk.core.videocache.d.c.bl(context);
            this.awh = n.bi(context);
        }

        private com.kwad.sdk.core.videocache.c DF() {
            return new com.kwad.sdk.core.videocache.c(this.awh, this.awi, this.awj, this.awk, this.awl);
        }

        public final f DE() {
            return new f(DF(), (byte) 0);
        }

        public final a ah(long j) {
            this.awj = new com.kwad.sdk.core.videocache.a.g(104857600L);
            return this;
        }
    }

    final class b implements Runnable {
        private final Socket awz;

        public b(Socket socket) {
            this.awz = socket;
        }

        @Override
        public final void run() {
            com.kwad.sdk.core.e.c.d("HttpProxyCacheServer", "schedule SocketProcessorRunnable run");
            f.this.a(this.awz);
        }
    }

    final class c implements Runnable {
        private final CountDownLatch awB;

        public c(CountDownLatch countDownLatch) {
            this.awB = countDownLatch;
        }

        @Override
        public final void run() {
            try {
                this.awB.countDown();
                f.this.DC();
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTrace(th);
            }
        }
    }

    private f(com.kwad.sdk.core.videocache.c cVar) {
        this.awt = new Object();
        this.awu = GlobalThreadPools.CX();
        this.awv = new ConcurrentHashMap();
        this.awy = (com.kwad.sdk.core.videocache.c) ao.checkNotNull(cVar);
        try {
            ServerSocket serverSocket = new ServerSocket(0, 8, InetAddress.getByName("127.0.0.1"));
            this.aww = serverSocket;
            int localPort = serverSocket.getLocalPort();
            this.port = localPort;
            i.install("127.0.0.1", localPort);
            CountDownLatch countDownLatch = new CountDownLatch(1);
            Thread thread = new Thread(new c(countDownLatch));
            this.awx = thread;
            thread.start();
            countDownLatch.await();
        } catch (IOException | InterruptedException e) {
            this.awu.shutdown();
            throw new IllegalStateException("Error starting local proxy server", e);
        }
    }

    f(com.kwad.sdk.core.videocache.c cVar, byte b2) {
        this(cVar);
    }

    private void DC() {
        while (!Thread.currentThread().isInterrupted()) {
            try {
                Socket socketAccept = this.aww.accept();
                com.kwad.sdk.core.e.c.d("HttpProxyCacheServer", "Accept new socket " + socketAccept);
                this.awu.submit(new b(socketAccept));
            } catch (IOException e) {
                onError(new ProxyCacheException("Error during waiting connection", e));
                return;
            }
        }
    }

    private int DD() {
        int iDD;
        synchronized (this.awt) {
            iDD = 0;
            Iterator<g> it = this.awv.values().iterator();
            while (it.hasNext()) {
                iDD += it.next().DD();
            }
        }
        return iDD;
    }

    private File X(String str) {
        return new File(this.awy.awh, this.awy.awi.generate(str));
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r0v3, types: [int] */
    /* JADX WARN: Type inference failed for: r5v0, types: [com.kwad.sdk.core.videocache.f] */
    /* JADX WARN: Type inference failed for: r6v0, types: [java.net.Socket] */
    /* JADX WARN: Type inference failed for: r6v10 */
    /* JADX WARN: Type inference failed for: r6v11 */
    /* JADX WARN: Type inference failed for: r6v3, types: [java.net.Socket] */
    /* JADX WARN: Type inference failed for: r6v6, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r6v7, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r6v9 */
    private void a(Socket socket) {
        ?? sb;
        ?? DD = "Opened connections: ";
        try {
            try {
                d dVarB = d.b(socket.getInputStream());
                com.kwad.sdk.core.e.c.d("HttpProxyCacheServer", "Request to cache proxy:" + dVarB);
                dT(k.decode(dVarB.uri)).a(dVarB, socket);
                b(socket);
                sb = new StringBuilder("Opened connections: ");
            } catch (ProxyCacheException e) {
                e = e;
                onError(new ProxyCacheException("Error processing request", e));
                b(socket);
                sb = new StringBuilder("Opened connections: ");
            } catch (SocketException e2) {
                com.kwad.sdk.core.e.c.d("HttpProxyCacheServer", "Closing socket… Socket is closed by client.");
                e2.printStackTrace();
                b(socket);
                sb = new StringBuilder("Opened connections: ");
            } catch (IOException e3) {
                e = e3;
                onError(new ProxyCacheException("Error processing request", e));
                b(socket);
                sb = new StringBuilder("Opened connections: ");
            }
            DD = DD();
            sb.append(DD);
            socket = sb.toString();
            com.kwad.sdk.core.e.c.d("HttpProxyCacheServer", socket);
        } catch (Throwable th) {
            b(socket);
            com.kwad.sdk.core.e.c.d("HttpProxyCacheServer", ((String) DD) + DD());
            throw th;
        }
    }

    private void b(Socket socket) {
        c(socket);
        d(socket);
        e(socket);
    }

    private void c(Socket socket) {
        try {
            if (socket.isInputShutdown()) {
                return;
            }
            socket.shutdownInput();
        } catch (SocketException unused) {
            com.kwad.sdk.core.e.c.d("HttpProxyCacheServer", "Releasing input stream… Socket is closed by client.");
        } catch (IOException e) {
            onError(new ProxyCacheException("Error closing socket input stream", e));
        }
    }

    private static void d(Socket socket) {
        try {
            if (socket.isOutputShutdown()) {
                return;
            }
            socket.shutdownOutput();
        } catch (IOException unused) {
            com.kwad.sdk.core.e.c.w("HttpProxyCacheServer", "Failed to close socket on proxy side: {}. It seems client have already closed connection.");
        }
    }

    private boolean dO(String str) {
        ao.au(str, "Url can't be null!");
        return X(str).exists();
    }

    private String dR(String str) {
        return String.format(Locale.US, "http://%s:%d/%s", "127.0.0.1", Integer.valueOf(this.port), k.encode(str));
    }

    private File dS(String str) {
        return new File(this.awy.awh, this.awy.awi.generate(str) + ".download");
    }

    private g dT(String str) {
        g gVar;
        synchronized (this.awt) {
            gVar = this.awv.get(str);
            if (gVar == null) {
                gVar = new g(str, this.awy);
                this.awv.put(str, gVar);
            }
        }
        return gVar;
    }

    private String e(String str, boolean z) {
        if (!X(str).exists()) {
            return dR(str);
        }
        File fileX = X(str);
        r(fileX);
        return Uri.fromFile(fileX).toString();
    }

    private void e(Socket socket) {
        try {
            if (socket.isClosed()) {
                return;
            }
            socket.close();
        } catch (IOException e) {
            onError(new ProxyCacheException("Error closing socket", e));
        }
    }

    private static void onError(Throwable th) {
        com.kwad.sdk.core.e.c.printStackTraceOnly(th);
    }

    private void r(File file) {
        try {
            this.awy.awj.s(file);
        } catch (IOException unused) {
            com.kwad.sdk.core.e.c.e("HttpProxyCacheServer", "Error touching file " + file);
        }
    }

    public final boolean a(String str, int i, a.a aVar) {
        com.kwad.sdk.core.e.c.d("HttpProxyCacheServer", "preloadSync preloadUrl " + str);
        if (dO(str)) {
            return true;
        }
        return com.kwad.sdk.core.network.a.a.a(dR(str), null, aVar, i);
    }

    public final String dN(String str) {
        return e(str, true);
    }

    public final boolean dP(String str) {
        ao.au(str, "Url can't be null!");
        return dS(str).exists() || X(str).exists();
    }

    public final boolean dQ(String str) {
        g gVar = this.awv.get(str);
        if (gVar == null) {
            return false;
        }
        gVar.shutdown();
        this.awv.remove(str);
        return true;
    }
}
