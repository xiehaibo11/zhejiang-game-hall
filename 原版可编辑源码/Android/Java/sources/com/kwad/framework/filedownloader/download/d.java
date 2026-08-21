package com.kwad.framework.filedownloader.download;

import android.database.sqlite.SQLiteFullException;
import android.os.Build;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import android.os.SystemClock;
import com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException;
import com.kwad.framework.filedownloader.exception.FileDownloadOutOfSpaceException;
import com.kwad.sdk.crash.utils.h;
import com.tencent.mm.opensdk.constants.ConstantsAPI;
import java.io.File;
import java.io.IOException;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicLong;
import java.util.concurrent.locks.LockSupport;

public final class d implements Handler.Callback {
    private volatile Thread abS;
    private final com.kwad.framework.filedownloader.d.c acw;
    private final a ade;
    private final int adf;
    private final int adg;
    private final int adh;
    private long adi;
    private HandlerThread adj;
    private volatile boolean adm;
    private Handler handler;
    private volatile boolean adk = false;
    private volatile long acQ = 0;
    private final AtomicLong adl = new AtomicLong();
    private boolean adn = true;
    private final com.kwad.framework.filedownloader.b.a acr = b.up().ur();

    public static class a {
        private boolean ado;
        private Exception adp;
        private int adq;

        final void aX(boolean z) {
            this.ado = z;
        }

        final void bp(int i) {
            this.adq = i;
        }

        final void f(Exception exc) {
            this.adp = exc;
        }

        public final Exception getException() {
            return this.adp;
        }

        public final int tb() {
            return this.adq;
        }

        public final boolean uR() {
            return this.ado;
        }
    }

    d(com.kwad.framework.filedownloader.d.c cVar, int i, int i2, int i3) {
        this.acw = cVar;
        this.adg = i2 < 5 ? 5 : i2;
        this.adh = i3;
        this.ade = new a();
        this.adf = i;
    }

    private boolean I(long j) {
        if (!this.adn) {
            return this.adi != -1 && this.adl.get() >= this.adi && j - this.acQ >= ((long) this.adg);
        }
        this.adn = false;
        return true;
    }

    private void a(SQLiteFullException sQLiteFullException) {
        int id = this.acw.getId();
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "the data of the task[%d] is dirty, because the SQLite full exception[%s], so remove it from the database directly.", Integer.valueOf(id), sQLiteFullException.toString());
        }
        this.acw.bj(sQLiteFullException.toString());
        this.acw.d((byte) -1);
        this.acr.bi(id);
        this.acr.bh(id);
    }

    private void a(Exception exc, int i) {
        Exception excD = d(exc);
        this.ade.f(excD);
        this.ade.bp(this.adf - i);
        this.acw.d((byte) 5);
        this.acw.bj(excD.toString());
        this.acr.a(this.acw.getId(), excD);
        c((byte) 5);
    }

    private void b(long j, boolean z) {
        if (this.acw.vm() == this.acw.getTotal()) {
            this.acr.c(this.acw.getId(), this.acw.vm());
            return;
        }
        if (this.adm) {
            this.adm = false;
            this.acw.d((byte) 3);
        }
        if (z) {
            this.acQ = j;
            c((byte) 3);
            this.adl.set(0L);
        }
    }

    private synchronized void b(Message message) {
        if (!this.adj.isAlive()) {
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "require callback %d but the host thread of the flow has already dead, what is occurred because of there are several reason can final this flow on different thread.", Integer.valueOf(message.what));
            }
            return;
        }
        try {
            this.handler.sendMessage(message);
        } catch (IllegalStateException e) {
            if (this.adj.isAlive()) {
                throw e;
            }
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "require callback %d but the host thread of the flow has already dead, what is occurred because of there are several reason can final this flow on different thread.", Integer.valueOf(message.what));
            }
        }
    }

    private void c(byte b) {
        if (b != -2) {
            com.kwad.framework.filedownloader.message.e.vg().s(com.kwad.framework.filedownloader.message.f.a(b, this.acw, this.ade));
        } else if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "High concurrent cause, Already paused and we don't need to call-back to Task in here, %d", Integer.valueOf(this.acw.getId()));
        }
    }

    private Exception d(Exception exc) {
        long length;
        String strUE = this.acw.uE();
        if ((!this.acw.isChunked() && !com.kwad.framework.filedownloader.f.e.vO().aeO) || !(exc instanceof IOException) || !new File(strUE).exists()) {
            return exc;
        }
        long availableBytes = h.getAvailableBytes(strUE);
        if (availableBytes > ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_PDF) {
            return exc;
        }
        File file = new File(strUE);
        if (file.exists()) {
            length = file.length();
        } else {
            com.kwad.framework.filedownloader.f.d.a(this, exc, "Exception with: free space isn't enough, and the target file not exist.", new Object[0]);
            length = 0;
        }
        return Build.VERSION.SDK_INT >= 9 ? new FileDownloadOutOfSpaceException(availableBytes, ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_PDF, length, exc) : new FileDownloadOutOfSpaceException(availableBytes, ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_PDF, length);
    }

    private void e(Exception exc) {
        Exception excD = d(exc);
        if (excD instanceof SQLiteFullException) {
            a((SQLiteFullException) excD);
        } else {
            try {
                this.acw.d((byte) -1);
                this.acw.bj(exc.toString());
                this.acr.a(this.acw.getId(), excD, this.acw.vm());
            } catch (SQLiteFullException e) {
                excD = e;
                a((SQLiteFullException) excD);
            }
        }
        this.ade.f(excD);
        c((byte) -1);
    }

    private static long f(long j, long j2) {
        if (j2 <= 0) {
            return -1L;
        }
        if (j == -1) {
            return 1L;
        }
        long j3 = j / (j2 + 1);
        if (j3 <= 0) {
            return 1L;
        }
        return j3;
    }

    private void uN() {
        String strUE = this.acw.uE();
        String targetFilePath = this.acw.getTargetFilePath();
        File file = new File(strUE);
        try {
            File file2 = new File(targetFilePath);
            if (file2.exists()) {
                long length = file2.length();
                if (!file2.delete()) {
                    throw new IOException(com.kwad.framework.filedownloader.f.f.b("Can't delete the old file([%s], [%d]), so can't replace it with the new downloaded one.", targetFilePath, Long.valueOf(length)));
                }
                com.kwad.framework.filedownloader.f.d.d(this, "The target file([%s], [%d]) will be replaced with the new downloaded file[%d]", targetFilePath, Long.valueOf(length), Long.valueOf(file.length()));
            }
            if (!file.renameTo(file2)) {
                throw new IOException(com.kwad.framework.filedownloader.f.f.b("Can't rename the  temp downloaded file(%s) to the target file(%s)", strUE, targetFilePath));
            }
            if (!file.exists() || file.delete()) {
                return;
            }
            com.kwad.framework.filedownloader.f.d.d(this, "delete the temp file(%s) failed, on completed downloading.", strUE);
        } catch (Throwable th) {
            if (file.exists() && !file.delete()) {
                com.kwad.framework.filedownloader.f.d.d(this, "delete the temp file(%s) failed, on completed downloading.", strUE);
            }
            throw th;
        }
    }

    private void uO() {
        uN();
        this.acw.d((byte) -3);
        this.acr.d(this.acw.getId(), this.acw.getTotal());
        this.acr.bh(this.acw.getId());
        c((byte) -3);
        if (com.kwad.framework.filedownloader.f.e.vO().aeP) {
            com.kwad.framework.filedownloader.services.f.f(this.acw);
        }
    }

    private boolean uP() {
        if (this.acw.isChunked()) {
            com.kwad.framework.filedownloader.d.c cVar = this.acw;
            cVar.N(cVar.vm());
        } else if (this.acw.vm() != this.acw.getTotal()) {
            c(new FileDownloadGiveUpRetryException(com.kwad.framework.filedownloader.f.f.b("sofar[%d] not equal total[%d]", Long.valueOf(this.acw.vm()), Long.valueOf(this.acw.getTotal()))));
            return true;
        }
        return false;
    }

    private void uQ() {
        this.acw.d((byte) -2);
        this.acr.e(this.acw.getId(), this.acw.vm());
        c((byte) -2);
    }

    final void a(Exception exc, int i, long j) {
        this.adl.set(0L);
        this.acw.M(-j);
        Handler handler = this.handler;
        if (handler == null) {
            a(exc, i);
        } else {
            b(handler.obtainMessage(5, i, 0, exc));
        }
    }

    final void a(boolean z, long j, String str, String str2) {
        String strVn = this.acw.vn();
        if (strVn != null && !strVn.equals(str)) {
            throw new IllegalArgumentException(com.kwad.framework.filedownloader.f.f.b("callback onConnected must with precondition succeed, but the etag is changes(%s != %s)", str, strVn));
        }
        this.ade.aX(z);
        this.acw.d((byte) 2);
        this.acw.N(j);
        this.acw.bi(str);
        this.acw.bk(str2);
        this.acr.a(this.acw.getId(), j, str, str2);
        c((byte) 2);
        this.adi = f(j, this.adh);
        this.adm = true;
    }

    final void c(Exception exc) {
        e(exc);
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0024 A[DONT_GENERATE] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean handleMessage(Message message) {
        this.adk = true;
        int i = message.what;
        try {
            if (i != 3) {
                if (i == 5) {
                    a((Exception) message.obj, message.arg1);
                }
                return true;
            }
            b(SystemClock.elapsedRealtime(), true);
            return true;
        } finally {
            this.adk = false;
            if (this.abS != null) {
                LockSupport.unpark(this.abS);
            }
        }
    }

    public final boolean isAlive() {
        HandlerThread handlerThread = this.adj;
        return handlerThread != null && handlerThread.isAlive();
    }

    final void onProgress(long j) {
        this.adl.addAndGet(j);
        this.acw.M(j);
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        boolean zI = I(jElapsedRealtime);
        Handler handler = this.handler;
        if (handler == null) {
            b(jElapsedRealtime, zI);
        } else if (zI) {
            b(handler.obtainMessage(3));
        }
    }

    final void uH() {
        Handler handler = this.handler;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
            this.adj.quit();
            this.abS = Thread.currentThread();
            while (this.adk) {
                LockSupport.parkNanos(TimeUnit.MILLISECONDS.toNanos(100L));
            }
            this.abS = null;
        }
    }

    public final void uI() {
        this.acw.d((byte) 1);
        this.acr.bj(this.acw.getId());
        c((byte) 1);
    }

    final void uJ() {
        this.acw.d((byte) 6);
        c((byte) 6);
        this.acr.be(this.acw.getId());
    }

    final void uK() {
        HandlerThread handlerThread = new HandlerThread("source-status-callback", 10);
        this.adj = handlerThread;
        handlerThread.start();
        this.handler = new Handler(this.adj.getLooper(), this);
    }

    final void uL() {
        uQ();
    }

    final void uM() {
        if (uP()) {
            return;
        }
        uO();
    }
}
