package com.kwad.sdk.ip.direct;

import android.os.SystemClock;
import com.kwad.sdk.utils.bj;
import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.nio.channels.SelectionKey;
import java.nio.channels.Selector;
import java.nio.channels.SocketChannel;
import java.util.Iterator;
import java.util.LinkedList;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    static int aCB = 80;
    static int port = 80;

    static class a extends Thread {
        LinkedList aCD = new LinkedList();
        volatile boolean aCE = false;
        Selector aCC = Selector.open();

        a() {
            setName("Connector");
        }

        private void FX() {
            synchronized (this.aCD) {
                while (this.aCD.size() > 0) {
                    C0225b c0225b = (C0225b) this.aCD.removeFirst();
                    try {
                        c0225b.aCG.register(this.aCC, 8, c0225b);
                    } catch (Throwable th) {
                        c0225b.aCG.close();
                        c0225b.aCH = th;
                    }
                }
            }
        }

        private void FY() {
            Iterator<SelectionKey> it = this.aCC.selectedKeys().iterator();
            while (it.hasNext()) {
                SelectionKey next = it.next();
                it.remove();
                C0225b c0225b = (C0225b) next.attachment();
                SocketChannel socketChannel = (SocketChannel) next.channel();
                try {
                    if (socketChannel.finishConnect()) {
                        next.cancel();
                        c0225b.aCK = SystemClock.elapsedRealtime();
                        socketChannel.close();
                    }
                } catch (Throwable th) {
                    bj.c(socketChannel);
                    c0225b.aCH = th;
                }
            }
        }

        final void a(C0225b c0225b) {
            SocketChannel socketChannelOpen;
            try {
                socketChannelOpen = SocketChannel.open();
                try {
                    socketChannelOpen.configureBlocking(false);
                    boolean zConnect = socketChannelOpen.connect(c0225b.aCF);
                    c0225b.aCG = socketChannelOpen;
                    c0225b.aCJ = SystemClock.elapsedRealtime();
                    if (zConnect) {
                        c0225b.aCK = c0225b.aCJ;
                        bj.c(socketChannelOpen);
                        return;
                    }
                    synchronized (this.aCD) {
                        this.aCD.add(c0225b);
                    }
                    if (this.aCC != null) {
                        try {
                            this.aCC.wakeup();
                        } catch (Throwable unused) {
                        }
                    }
                } catch (Throwable th) {
                    th = th;
                    bj.c(socketChannelOpen);
                    c0225b.aCH = th;
                }
            } catch (Throwable th2) {
                th = th2;
                socketChannelOpen = null;
            }
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public final void run() {
            while (true) {
                try {
                    if (this.aCC.select() > 0) {
                        FY();
                    }
                    FX();
                    if (this.aCE) {
                        if (this.aCC != null) {
                            try {
                                this.aCC.close();
                                return;
                            } catch (IOException unused) {
                                return;
                            }
                        }
                        return;
                    }
                    continue;
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        }

        final void shutdown() {
            this.aCE = true;
            Selector selector = this.aCC;
            if (selector != null) {
                try {
                    selector.wakeup();
                } catch (Throwable unused) {
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.kwad.sdk.ip.direct.b$b, reason: collision with other inner class name */
    static class C0225b {
        InetSocketAddress aCF;
        SocketChannel aCG;
        Throwable aCH;
        private float aCI;
        long aCJ;
        long aCK = 0;
        boolean aCL = false;
        private boolean success;

        C0225b(String str) {
            try {
                this.aCF = new InetSocketAddress(InetAddress.getByName(str), b.port);
            } catch (Throwable th) {
                this.aCH = th;
            }
        }

        final void FZ() {
            String string;
            if (this.aCK != 0) {
                string = Long.toString(this.aCK - this.aCJ) + "ms";
                this.aCI = this.aCK - this.aCJ;
                this.success = true;
            } else {
                Throwable th = this.aCH;
                if (th != null) {
                    string = th.toString();
                    this.success = false;
                } else {
                    this.success = false;
                    string = "Timed out";
                }
            }
            com.kwad.sdk.core.e.c.d("IpDirect_Ping", this.aCF + " : " + string);
            this.aCL = true;
        }
    }

    public static c f(String str, long j) {
        a aVar;
        long j2 = j / 5;
        com.kwad.sdk.core.e.c.d("IpDirect_Ping", "ping:" + str);
        c cVar = new c(str);
        try {
            aVar = new a();
        } catch (Throwable th) {
            th.printStackTrace();
            aVar = null;
        }
        if (aVar == null) {
            return cVar;
        }
        try {
            aVar.start();
            LinkedList<C0225b> linkedList = new LinkedList();
            for (int i = 0; i < cVar.Ga(); i++) {
                C0225b c0225b = new C0225b(str);
                linkedList.add(c0225b);
                try {
                    aVar.a(c0225b);
                } catch (Throwable th2) {
                    th2.printStackTrace();
                }
            }
            try {
                Thread.sleep(j + j2);
                try {
                    aVar.shutdown();
                    aVar.join();
                    float f = 0.0f;
                    boolean z = true;
                    for (C0225b c0225b2 : linkedList) {
                        c0225b2.FZ();
                        z &= c0225b2.success;
                        cVar.bs(z);
                        f += c0225b2.aCI;
                    }
                    com.kwad.sdk.core.e.c.d("IpDirect_Ping", "sum:" + f + "*size:" + linkedList.size());
                    cVar.i(f / ((float) linkedList.size()));
                    return cVar;
                } catch (Throwable th3) {
                    th3.printStackTrace();
                    return cVar;
                }
            } catch (Throwable th4) {
                th4.printStackTrace();
                return cVar;
            }
        } catch (Throwable th5) {
            th5.printStackTrace();
            return cVar;
        }
    }
}
