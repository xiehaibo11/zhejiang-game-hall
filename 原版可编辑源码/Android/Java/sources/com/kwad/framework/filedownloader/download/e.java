package com.kwad.framework.filedownloader.download;

import android.os.SystemClock;
import com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException;
import com.kwad.framework.filedownloader.exception.FileDownloadNetworkPolicyException;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;

public final class e {
    private final String Tt;
    private final f acZ;
    private final int acc;
    private final long ack;
    long acl;
    private final long acm;
    private final com.kwad.framework.filedownloader.b.a acr;
    private final boolean acz;
    private final int adb;
    private final c adr;
    private final com.kwad.framework.filedownloader.a.b ads;
    private com.kwad.framework.filedownloader.e.a adt;
    private volatile long adu;
    private volatile long adv;
    private final long contentLength;
    private volatile boolean kT;

    public static class a {
        String Tt;
        Boolean acW;
        f acZ;
        Integer aci;
        com.kwad.framework.filedownloader.download.a acj;
        Integer add;
        com.kwad.framework.filedownloader.a.b ads;
        c adw;

        public final a a(c cVar) {
            this.adw = cVar;
            return this;
        }

        public final a aY(boolean z) {
            this.acW = Boolean.valueOf(z);
            return this;
        }

        public final a b(f fVar) {
            this.acZ = fVar;
            return this;
        }

        public final a bg(String str) {
            this.Tt = str;
            return this;
        }

        public final a bq(int i) {
            this.add = Integer.valueOf(i);
            return this;
        }

        public final a br(int i) {
            this.aci = Integer.valueOf(i);
            return this;
        }

        public final a c(com.kwad.framework.filedownloader.download.a aVar) {
            this.acj = aVar;
            return this;
        }

        public final a d(com.kwad.framework.filedownloader.a.b bVar) {
            this.ads = bVar;
            return this;
        }

        public final e uT() {
            com.kwad.framework.filedownloader.a.b bVar;
            com.kwad.framework.filedownloader.download.a aVar;
            Integer num;
            if (this.acW == null || (bVar = this.ads) == null || (aVar = this.acj) == null || this.acZ == null || this.Tt == null || (num = this.aci) == null || this.add == null) {
                throw new IllegalArgumentException();
            }
            return new e(bVar, aVar, this.adw, num.intValue(), this.add.intValue(), this.acW.booleanValue(), this.acZ, this.Tt, (byte) 0);
        }
    }

    private e(com.kwad.framework.filedownloader.a.b bVar, com.kwad.framework.filedownloader.download.a aVar, c cVar, int i, int i2, boolean z, f fVar, String str) {
        this.adu = 0L;
        this.adv = 0L;
        this.acZ = fVar;
        this.Tt = str;
        this.ads = bVar;
        this.acz = z;
        this.adr = cVar;
        this.adb = i2;
        this.acc = i;
        this.acr = b.up().ur();
        this.ack = aVar.ack;
        this.acm = aVar.acm;
        this.acl = aVar.acl;
        this.contentLength = aVar.contentLength;
    }

    e(com.kwad.framework.filedownloader.a.b bVar, com.kwad.framework.filedownloader.download.a aVar, c cVar, int i, int i2, boolean z, f fVar, String str, byte b) {
        this(bVar, aVar, cVar, i, i2, z, fVar, str);
    }

    private void sync() {
        boolean z;
        long jUptimeMillis = SystemClock.uptimeMillis();
        try {
            this.adt.vJ();
            z = true;
        } catch (IOException e) {
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "Because of the system cannot guarantee that all the buffers have been synchronized with physical media, or write to filefailed, we just not flushAndSync process to database too %s", e);
            }
            z = false;
        }
        if (z) {
            if (this.adr != null) {
                this.acr.a(this.acc, this.adb, this.acl);
            } else {
                this.acZ.uB();
            }
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "require flushAndSync id[%d] index[%d] offset[%d], consume[%d]", Integer.valueOf(this.acc), Integer.valueOf(this.adb), Long.valueOf(this.acl), Long.valueOf(SystemClock.uptimeMillis() - jUptimeMillis));
            }
        }
    }

    private void uS() {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (com.kwad.framework.filedownloader.f.f.g(this.acl - this.adu, jElapsedRealtime - this.adv)) {
            sync();
            this.adu = this.acl;
            this.adv = jElapsedRealtime;
        }
    }

    public final void pause() {
        this.kT = true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:47:0x011c, code lost:
    
        if (r10 == null) goto L49;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x011e, code lost:
    
        sync();
     */
    /* JADX WARN: Code restructure failed: missing block: B:49:0x0121, code lost:
    
        com.kwad.sdk.crash.utils.b.closeQuietly(r9);
        com.kwad.sdk.crash.utils.b.closeQuietly(r10);
        r6 = r16.acl - r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:50:0x012e, code lost:
    
        if (r2 == (-1)) goto L56;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x0132, code lost:
    
        if (r2 != r6) goto L54;
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:0x0172, code lost:
    
        throw new com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException(com.kwad.framework.filedownloader.f.f.b("fetched length[%d] != content length[%d], range[%d, %d) offset[%d] fetch begin offset", java.lang.Long.valueOf(r6), java.lang.Long.valueOf(r2), java.lang.Long.valueOf(r16.ack), java.lang.Long.valueOf(r16.acm), java.lang.Long.valueOf(r16.acl), java.lang.Long.valueOf(r4)));
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:0x0173, code lost:
    
        r16.acZ.a(r16.adr, r16.ack, r16.acm);
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x017e, code lost:
    
        return;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() throws Throwable {
        com.kwad.framework.filedownloader.e.a aVarBv;
        boolean zUt;
        if (this.kT) {
            return;
        }
        long jB = com.kwad.framework.filedownloader.f.f.b(this.adb, this.ads);
        if (jB == 0) {
            throw new FileDownloadGiveUpRetryException(com.kwad.framework.filedownloader.f.f.b("there isn't any content need to download on %d-%d with the content-length is 0", Integer.valueOf(this.acc), Integer.valueOf(this.adb)));
        }
        long j = this.contentLength;
        if (j > 0 && jB != j) {
            throw new FileDownloadGiveUpRetryException(com.kwad.framework.filedownloader.f.f.b("require %s with contentLength(%d), but the backend response contentLength is %d on downloadId[%d]-connectionIndex[%d], please ask your backend dev to fix such problem.", this.acm == 0 ? com.kwad.framework.filedownloader.f.f.b("range[%d-)", Long.valueOf(this.acl)) : com.kwad.framework.filedownloader.f.f.b("range[%d-%d)", Long.valueOf(this.acl), Long.valueOf(this.acm)), Long.valueOf(this.contentLength), Long.valueOf(jB), Integer.valueOf(this.acc), Integer.valueOf(this.adb)));
        }
        long j2 = this.acl;
        try {
            zUt = b.up().ut();
            if (this.adr != null && !zUt) {
                throw new IllegalAccessException("can't using multi-download when the output stream can't support seek");
            }
            aVarBv = com.kwad.framework.filedownloader.f.f.bv(this.Tt);
        } catch (Throwable th) {
            th = th;
            aVarBv = null;
        }
        try {
            this.adt = aVarBv;
            if (zUt) {
                aVarBv.seek(this.acl);
            }
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "start fetch(%d): range [%d, %d), seek to[%d]", Integer.valueOf(this.adb), Long.valueOf(this.ack), Long.valueOf(this.acm), Long.valueOf(this.acl));
            }
            InputStream inputStream = this.ads.getInputStream();
            byte[] bArr = new byte[4096];
            if (!this.kT) {
                while (true) {
                    int i = inputStream.read(bArr);
                    if (i == -1) {
                        break;
                    }
                    aVarBv.write(bArr, 0, i);
                    long j3 = i;
                    this.acl += j3;
                    this.acZ.onProgress(j3);
                    uS();
                    if (this.kT) {
                        break;
                    } else if (this.acz && com.kwad.framework.filedownloader.f.f.vT()) {
                        throw new FileDownloadNetworkPolicyException();
                    }
                }
            } else {
                com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
                com.kwad.sdk.crash.utils.b.closeQuietly(aVarBv);
            }
        } catch (Throwable th2) {
            th = th2;
            com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) null);
            com.kwad.sdk.crash.utils.b.closeQuietly(aVarBv);
            throw th;
        }
    }
}
