package com.kwad.framework.filedownloader.download;

import android.os.Process;
import com.kuaishou.weapon.p0.g;
import com.kwad.framework.filedownloader.download.ConnectTask;
import com.kwad.framework.filedownloader.download.c;
import com.kwad.framework.filedownloader.download.e;
import com.kwad.framework.filedownloader.exception.FileDownloadGiveUpRetryException;
import com.kwad.framework.filedownloader.exception.FileDownloadHttpException;
import com.kwad.framework.filedownloader.exception.FileDownloadNetworkPolicyException;
import com.kwad.framework.filedownloader.exception.FileDownloadOutOfSpaceException;
import com.kwad.framework.filedownloader.y;
import com.kwad.sdk.crash.utils.h;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.atomic.AtomicBoolean;

public final class DownloadLaunchRunnable implements f, Runnable {
    private static final ThreadPoolExecutor acH = com.kwad.framework.filedownloader.f.b.bl("ConnectionBlock");
    private final y acA;
    private boolean acB;
    int acC;
    private final boolean acD;
    private final ArrayList<c> acE;
    private e acF;
    private boolean acG;
    private boolean acI;
    private boolean acJ;
    private boolean acK;
    private final AtomicBoolean acL;
    private volatile boolean acM;
    private volatile Exception acN;
    private String acO;
    private long acP;
    private long acQ;
    private long acR;
    private long acS;
    private final com.kwad.framework.filedownloader.b.a acr;
    private final d acu;
    private final int acv;
    private final com.kwad.framework.filedownloader.d.c acw;
    private final com.kwad.framework.filedownloader.d.b acx;
    private final boolean acy;
    private final boolean acz;
    private volatile boolean kT;

    class DiscardSafely extends Throwable {
        private static final long serialVersionUID = 4243896780616180062L;

        DiscardSafely() {
        }
    }

    class RetryDirectly extends Throwable {
        private static final long serialVersionUID = -4127585119566978768L;

        RetryDirectly() {
        }
    }

    public static class a {
        private y acA;
        private Integer acT;
        private Integer acU;
        private Boolean acV;
        private Boolean acW;
        private Integer acX;
        private com.kwad.framework.filedownloader.d.b acd;
        private com.kwad.framework.filedownloader.d.c acw;

        public final a a(y yVar) {
            this.acA = yVar;
            return this;
        }

        public final a a(Boolean bool) {
            this.acV = bool;
            return this;
        }

        public final a a(Integer num) {
            this.acT = num;
            return this;
        }

        public final a b(com.kwad.framework.filedownloader.d.b bVar) {
            this.acd = bVar;
            return this;
        }

        public final a b(Boolean bool) {
            this.acW = bool;
            return this;
        }

        public final a b(Integer num) {
            this.acU = num;
            return this;
        }

        public final a c(Integer num) {
            this.acX = num;
            return this;
        }

        public final a e(com.kwad.framework.filedownloader.d.c cVar) {
            this.acw = cVar;
            return this;
        }

        public final DownloadLaunchRunnable uF() {
            if (this.acw == null || this.acA == null || this.acT == null || this.acU == null || this.acV == null || this.acW == null || this.acX == null) {
                throw new IllegalArgumentException();
            }
            return new DownloadLaunchRunnable(this.acw, this.acd, this.acA, this.acT.intValue(), this.acU.intValue(), this.acV.booleanValue(), this.acW.booleanValue(), this.acX.intValue(), (byte) 0);
        }
    }

    private DownloadLaunchRunnable(com.kwad.framework.filedownloader.d.c cVar, com.kwad.framework.filedownloader.d.b bVar, y yVar, int i, int i2, boolean z, boolean z2, int i3) {
        this.acv = 5;
        this.acE = new ArrayList<>(5);
        this.acP = 0L;
        this.acQ = 0L;
        this.acR = 0L;
        this.acS = 0L;
        this.acL = new AtomicBoolean(true);
        this.kT = false;
        this.acB = false;
        this.acw = cVar;
        this.acx = bVar;
        this.acy = z;
        this.acz = z2;
        this.acr = b.up().ur();
        this.acD = b.up().ut();
        this.acA = yVar;
        this.acC = i3;
        this.acu = new d(cVar, i3, i, i2);
    }

    DownloadLaunchRunnable(com.kwad.framework.filedownloader.d.c cVar, com.kwad.framework.filedownloader.d.b bVar, y yVar, int i, int i2, boolean z, boolean z2, int i3, byte b) {
        this(cVar, bVar, yVar, i, i2, z, z2, i3);
    }

    private void a(int i, List<com.kwad.framework.filedownloader.d.a> list) {
        if (i <= 1 || list.size() != i) {
            throw new IllegalArgumentException();
        }
        b(list, this.acw.getTotal());
    }

    private void a(long j, String str) {
        com.kwad.framework.filedownloader.e.a aVarBv = null;
        if (j != -1) {
            try {
                aVarBv = com.kwad.framework.filedownloader.f.f.bv(this.acw.uE());
                long length = new File(str).length();
                long j2 = j - length;
                long availableBytes = h.getAvailableBytes(str);
                if (availableBytes < j2) {
                    throw new FileDownloadOutOfSpaceException(availableBytes, j2, length);
                }
                if (!com.kwad.framework.filedownloader.f.e.vO().aeO) {
                    aVarBv.setLength(j);
                }
            } finally {
                if (0 != 0) {
                    aVarBv.close();
                }
            }
        }
    }

    private void a(com.kwad.framework.filedownloader.download.a aVar, com.kwad.framework.filedownloader.a.b bVar) throws Throwable {
        if (!this.acJ) {
            this.acw.L(0L);
            aVar = new com.kwad.framework.filedownloader.download.a(0L, 0L, aVar.acm, aVar.contentLength);
        }
        e.a aVar2 = new e.a();
        aVar2.b(this).br(this.acw.getId()).bq(-1).aY(this.acz).d(bVar).c(aVar).bg(this.acw.uE());
        this.acw.by(1);
        this.acr.q(this.acw.getId(), 1);
        this.acF = aVar2.uT();
        if (!this.kT) {
            this.acF.run();
        } else {
            this.acw.d((byte) -2);
            this.acF.pause();
        }
    }

    private void a(Map<String, List<String>> map, ConnectTask connectTask, com.kwad.framework.filedownloader.a.b bVar) throws FileDownloadHttpException, RetryDirectly {
        int id = this.acw.getId();
        int responseCode = bVar.getResponseCode();
        this.acJ = responseCode == 206 || responseCode == 1;
        boolean z = responseCode == 200 || responseCode == 201 || responseCode == 0;
        String strVn = this.acw.vn();
        String strA = com.kwad.framework.filedownloader.f.f.a(id, bVar);
        if (!(responseCode == 412 || !(strVn == null || strVn.equals(strA) || (!z && !this.acJ)) || ((responseCode == 201 && connectTask.ul()) || (responseCode == 416 && this.acw.vm() > 0)))) {
            this.acO = connectTask.um();
            if (!this.acJ && !z) {
                throw new FileDownloadHttpException(responseCode, map, bVar.uf());
            }
            long jB = com.kwad.framework.filedownloader.f.f.b(id, bVar);
            String strA2 = this.acw.sT() ? com.kwad.framework.filedownloader.f.f.a(bVar, this.acw.getUrl()) : null;
            boolean z2 = jB == -1;
            this.acK = z2;
            this.acu.a(this.acI && this.acJ, !z2 ? this.acw.vm() + jB : jB, strA, strA2);
            return;
        }
        if (this.acI) {
            com.kwad.framework.filedownloader.f.d.d(this, "there is precondition failed on this request[%d] with old etag[%s]、new etag[%s]、response requestHttpCode is %d", Integer.valueOf(id), strVn, strA, Integer.valueOf(responseCode));
        }
        this.acr.bh(this.acw.getId());
        com.kwad.framework.filedownloader.f.f.s(this.acw.getTargetFilePath(), this.acw.uE());
        this.acI = false;
        if (strVn != null && strVn.equals(strA)) {
            com.kwad.framework.filedownloader.f.d.d(this, "the old etag[%s] is the same to the new etag[%s], but the response status requestHttpCode is %d not Partial(206), so wo have to start this task from very beginning for task[%d]!", strVn, strA, Integer.valueOf(responseCode), Integer.valueOf(id));
            strA = null;
        }
        this.acw.L(0L);
        this.acw.N(0L);
        this.acw.bi(strA);
        this.acw.vq();
        this.acr.a(id, this.acw.vn(), this.acw.vm(), this.acw.getTotal(), this.acw.vp());
        throw new RetryDirectly();
    }

    private void b(long j, int i) {
        long j2 = j / ((long) i);
        int id = this.acw.getId();
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        long j3 = 0;
        while (i2 < i) {
            long j4 = i2 == i + (-1) ? 0L : (j3 + j2) - 1;
            com.kwad.framework.filedownloader.d.a aVar = new com.kwad.framework.filedownloader.d.a();
            aVar.setId(id);
            aVar.setIndex(i2);
            aVar.setStartOffset(j3);
            aVar.J(j3);
            aVar.K(j4);
            arrayList.add(aVar);
            this.acr.a(aVar);
            j3 += j2;
            i2++;
        }
        this.acw.by(i);
        this.acr.q(id, i);
        b(arrayList, j);
    }

    private void b(List<com.kwad.framework.filedownloader.d.a> list, long j) {
        int id = this.acw.getId();
        String strVn = this.acw.vn();
        String url = this.acO;
        if (url == null) {
            url = this.acw.getUrl();
        }
        String strUE = this.acw.uE();
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "fetch data with multiple connection(count: [%d]) for task[%d] totalLength[%d]", Integer.valueOf(list.size()), Integer.valueOf(id), Long.valueOf(j));
        }
        boolean z = this.acI;
        long j2 = 0;
        long jVi = 0;
        for (com.kwad.framework.filedownloader.d.a aVar : list) {
            long jVi2 = aVar.vj() == j2 ? j - aVar.vi() : (aVar.vj() - aVar.vi()) + 1;
            jVi += aVar.vi() - aVar.getStartOffset();
            if (jVi2 != j2) {
                c cVarUG = new c.a().bo(id).d(Integer.valueOf(aVar.getIndex())).a(this).bd(url).be(z ? strVn : null).c(this.acx).aW(this.acz).b(new com.kwad.framework.filedownloader.download.a(aVar.getStartOffset(), aVar.vi(), aVar.vj(), jVi2)).bf(strUE).uG();
                if (com.kwad.framework.filedownloader.f.d.aeI) {
                    com.kwad.framework.filedownloader.f.d.c(this, "enable multiple connection: %s", aVar);
                }
                this.acE.add(cVarUG);
            } else if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "pass connection[%d-%d], because it has been completed", Integer.valueOf(aVar.getId()), Integer.valueOf(aVar.getIndex()));
            }
            j2 = 0;
        }
        if (jVi != this.acw.vm()) {
            com.kwad.framework.filedownloader.f.d.d(this, "correct the sofar[%d] from connection table[%d]", Long.valueOf(this.acw.vm()), Long.valueOf(jVi));
            this.acw.L(jVi);
        }
        ArrayList arrayList = new ArrayList(this.acE.size());
        for (c cVar : this.acE) {
            if (this.kT) {
                cVar.pause();
            } else {
                arrayList.add(Executors.callable(cVar));
            }
        }
        if (this.kT) {
            this.acw.d((byte) -2);
            return;
        }
        List<Future> listInvokeAll = acH.invokeAll(arrayList);
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            for (Future future : listInvokeAll) {
                com.kwad.framework.filedownloader.f.d.c(this, "finish sub-task for [%d] %B %B", Integer.valueOf(id), Boolean.valueOf(future.isDone()), Boolean.valueOf(future.isCancelled()));
            }
        }
    }

    private com.kwad.framework.filedownloader.download.a n(List<com.kwad.framework.filedownloader.d.a> list) {
        long jVm;
        long j;
        int iVp = this.acw.vp();
        String strUE = this.acw.uE();
        String targetFilePath = this.acw.getTargetFilePath();
        boolean z = iVp > 1;
        if ((!z || this.acD) && com.kwad.framework.filedownloader.f.f.b(this.acw.getId(), this.acw)) {
            if (!this.acD) {
                jVm = new File(strUE).length();
            } else if (z) {
                if (iVp == list.size()) {
                    jVm = com.kwad.framework.filedownloader.d.a.o(list);
                }
                j = 0;
            } else {
                jVm = this.acw.vm();
            }
            j = jVm;
        } else {
            j = 0;
        }
        this.acw.L(j);
        boolean z2 = j > 0;
        this.acI = z2;
        if (!z2) {
            this.acr.bh(this.acw.getId());
            com.kwad.framework.filedownloader.f.f.s(targetFilePath, strUE);
        }
        return new com.kwad.framework.filedownloader.download.a(0L, j, 0L, this.acw.getTotal() - j);
    }

    private boolean uA() {
        return (!this.acI || this.acw.vp() > 1) && this.acJ && this.acD && !this.acK;
    }

    private void uC() {
        if (this.acz && !com.kwad.framework.filedownloader.f.f.bt(g.b)) {
            throw new FileDownloadGiveUpRetryException(com.kwad.framework.filedownloader.f.f.b("Task[%d] can't start the download runnable, because this task require wifi, but user application nor current process has %s, so we can't check whether the network type connection.", Integer.valueOf(this.acw.getId()), g.b));
        }
        if (this.acz && com.kwad.framework.filedownloader.f.f.vT()) {
            throw new FileDownloadNetworkPolicyException();
        }
    }

    private void uD() throws RetryDirectly, DiscardSafely {
        int id = this.acw.getId();
        if (this.acw.sT()) {
            String targetFilePath = this.acw.getTargetFilePath();
            int iR = com.kwad.framework.filedownloader.f.f.r(this.acw.getUrl(), targetFilePath);
            if (com.kwad.framework.filedownloader.f.c.a(id, targetFilePath, this.acy, false)) {
                this.acr.bi(id);
                this.acr.bh(id);
                throw new DiscardSafely();
            }
            com.kwad.framework.filedownloader.d.c cVarBf = this.acr.bf(iR);
            if (cVarBf != null) {
                if (com.kwad.framework.filedownloader.f.c.a(id, cVarBf, this.acA, false)) {
                    this.acr.bi(id);
                    this.acr.bh(id);
                    throw new DiscardSafely();
                }
                List<com.kwad.framework.filedownloader.d.a> listBg = this.acr.bg(iR);
                this.acr.bi(iR);
                this.acr.bh(iR);
                com.kwad.framework.filedownloader.f.f.bx(this.acw.getTargetFilePath());
                if (com.kwad.framework.filedownloader.f.f.b(iR, cVarBf)) {
                    this.acw.L(cVarBf.vm());
                    this.acw.N(cVarBf.getTotal());
                    this.acw.bi(cVarBf.vn());
                    this.acw.by(cVarBf.vp());
                    this.acr.b(this.acw);
                    if (listBg != null) {
                        for (com.kwad.framework.filedownloader.d.a aVar : listBg) {
                            aVar.setId(id);
                            this.acr.a(aVar);
                        }
                    }
                    throw new RetryDirectly();
                }
            }
            if (com.kwad.framework.filedownloader.f.c.a(id, this.acw.vm(), this.acw.uE(), targetFilePath, this.acA)) {
                this.acr.bi(id);
                this.acr.bh(id);
                throw new DiscardSafely();
            }
        }
    }

    @Override
    public final void a(c cVar, long j, long j2) {
        if (this.kT) {
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "the task[%d] has already been paused, so pass the completed callback", Integer.valueOf(this.acw.getId()));
                return;
            }
            return;
        }
        int i = cVar == null ? -1 : cVar.adb;
        if (com.kwad.framework.filedownloader.f.d.aeI) {
            com.kwad.framework.filedownloader.f.d.c(this, "the connection has been completed(%d): [%d, %d)  %d", Integer.valueOf(i), Long.valueOf(j), Long.valueOf(j2), Long.valueOf(this.acw.getTotal()));
        }
        if (!this.acG) {
            synchronized (this.acE) {
                this.acE.remove(cVar);
            }
        } else {
            if (j == 0 || j2 == this.acw.getTotal()) {
                return;
            }
            com.kwad.framework.filedownloader.f.d.a(this, "the single task not completed corrected(%d, %d != %d) for task(%d)", Long.valueOf(j), Long.valueOf(j2), Long.valueOf(this.acw.getTotal()), Integer.valueOf(this.acw.getId()));
        }
    }

    @Override
    public final void a(Exception exc, long j) {
        if (this.kT) {
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "the task[%d] has already been paused, so pass the retry callback", Integer.valueOf(this.acw.getId()));
            }
        } else {
            int i = this.acC;
            int i2 = i - 1;
            this.acC = i2;
            if (i < 0) {
                com.kwad.framework.filedownloader.f.d.a(this, "valid retry times is less than 0(%d) for download task(%d)", Integer.valueOf(i2), Integer.valueOf(this.acw.getId()));
            }
            this.acu.a(exc, this.acC, j);
        }
    }

    @Override
    public final boolean a(Exception exc) {
        if (exc instanceof FileDownloadHttpException) {
            int code = ((FileDownloadHttpException) exc).getCode();
            if (this.acG && code == 416 && !this.acB) {
                com.kwad.framework.filedownloader.f.f.s(this.acw.getTargetFilePath(), this.acw.uE());
                this.acB = true;
                return true;
            }
        }
        return this.acC > 0 && !(exc instanceof FileDownloadGiveUpRetryException);
    }

    @Override
    public final void b(Exception exc) {
        this.acM = true;
        this.acN = exc;
        if (this.kT) {
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(this, "the task[%d] has already been paused, so pass the error callback", Integer.valueOf(this.acw.getId()));
            }
        } else {
            for (c cVar : (ArrayList) this.acE.clone()) {
                if (cVar != null) {
                    cVar.tM();
                }
            }
        }
    }

    public final int getId() {
        return this.acw.getId();
    }

    public final boolean isAlive() {
        return this.acL.get() || this.acu.isAlive();
    }

    @Override
    public final void onProgress(long j) {
        if (this.kT) {
            return;
        }
        this.acu.onProgress(j);
    }

    public final void pause() {
        this.kT = true;
        e eVar = this.acF;
        if (eVar != null) {
            eVar.pause();
        }
        for (c cVar : (ArrayList) this.acE.clone()) {
            if (cVar != null) {
                cVar.pause();
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:100:0x01e7, code lost:
    
        if (r9 == null) goto L165;
     */
    /* JADX WARN: Code restructure failed: missing block: B:101:0x01e9, code lost:
    
        r9.ug();
     */
    /* JADX WARN: Code restructure failed: missing block: B:104:0x01fd, code lost:
    
        throw new java.lang.IllegalAccessException(com.kwad.framework.filedownloader.f.f.b("invalid connection count %d, the connection count must be larger than 0", r9));
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x009f, code lost:
    
        if (com.kwad.framework.filedownloader.f.d.aeI == false) goto L33;
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x00a1, code lost:
    
        com.kwad.framework.filedownloader.f.d.c(r19, "High concurrent cause, start runnable but already paused %d", java.lang.Integer.valueOf(r19.acw.getId()));
     */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x00b2, code lost:
    
        r19.acu.uH();
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x00b9, code lost:
    
        if (r19.kT == false) goto L36;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x00be, code lost:
    
        if (r19.acM == false) goto L194;
     */
    /* JADX WARN: Code restructure failed: missing block: B:39:0x00c1, code lost:
    
        r19.acu.uM();
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x00c7, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x00c8, code lost:
    
        r2 = r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x0120, code lost:
    
        if (r19.kT == false) goto L62;
     */
    /* JADX WARN: Code restructure failed: missing block: B:49:0x0122, code lost:
    
        r19.acw.d((byte) -2);
     */
    /* JADX WARN: Code restructure failed: missing block: B:50:0x0127, code lost:
    
        if (r9 == null) goto L52;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x0129, code lost:
    
        r9.ug();
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x012c, code lost:
    
        r19.acu.uH();
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x0133, code lost:
    
        if (r19.kT == false) goto L55;
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:0x0139, code lost:
    
        if (r19.acM == false) goto L200;
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x013d, code lost:
    
        r19.acu.uM();
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x0144, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x0145, code lost:
    
        r2 = r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x0148, code lost:
    
        uD();
        r14 = r19.acw.getTotal();
        a(r14, r19.acw.uE());
     */
    /* JADX WARN: Code restructure failed: missing block: B:63:0x015e, code lost:
    
        if (uA() == false) goto L68;
     */
    /* JADX WARN: Code restructure failed: missing block: B:65:0x0162, code lost:
    
        if (r19.acI == false) goto L67;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x0164, code lost:
    
        r10 = r19.acw.vp();
        r17 = r14;
     */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x016d, code lost:
    
        r17 = r14;
        r10 = com.kwad.framework.filedownloader.download.b.up().a(r19.acw.getId(), r19.acw.getUrl(), r19.acw.getPath(), r17);
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x018d, code lost:
    
        r17 = r14;
        r10 = 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:69:0x0190, code lost:
    
        if (r10 <= 0) goto L103;
     */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x0194, code lost:
    
        if (r19.kT == false) goto L85;
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x0196, code lost:
    
        r19.acw.d((byte) -2);
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x019b, code lost:
    
        if (r9 == null) goto L75;
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x019d, code lost:
    
        r9.ug();
     */
    /* JADX WARN: Code restructure failed: missing block: B:75:0x01a0, code lost:
    
        r19.acu.uH();
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x01a7, code lost:
    
        if (r19.kT == false) goto L78;
     */
    /* JADX WARN: Code restructure failed: missing block: B:79:0x01ad, code lost:
    
        if (r19.acM == false) goto L190;
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x01b1, code lost:
    
        r19.acu.uM();
     */
    /* JADX WARN: Code restructure failed: missing block: B:83:0x01b8, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:84:0x01b9, code lost:
    
        r2 = r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x01bc, code lost:
    
        if (r10 != 1) goto L87;
     */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x01be, code lost:
    
        r11 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:87:0x01c0, code lost:
    
        r11 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:88:0x01c1, code lost:
    
        r19.acG = r11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x01c3, code lost:
    
        if (r11 == false) goto L91;
     */
    /* JADX WARN: Code restructure failed: missing block: B:90:0x01c5, code lost:
    
        a(r8.un(), r9);
     */
    /* JADX WARN: Code restructure failed: missing block: B:91:0x01cd, code lost:
    
        if (r9 == null) goto L94;
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x01cf, code lost:
    
        r9.ug();
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x01d3, code lost:
    
        r2 = r9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:95:0x01d4, code lost:
    
        r19.acu.uK();
     */
    /* JADX WARN: Code restructure failed: missing block: B:96:0x01db, code lost:
    
        if (r19.acI == false) goto L98;
     */
    /* JADX WARN: Code restructure failed: missing block: B:97:0x01dd, code lost:
    
        a(r10, r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x01e1, code lost:
    
        b(r17, r10);
     */
    /* JADX WARN: Code restructure failed: missing block: B:99:0x01e6, code lost:
    
        r9 = r2;
     */
    /* JADX WARN: Removed duplicated region for block: B:14:0x006b  */
    /* JADX WARN: Removed duplicated region for block: B:156:0x025c A[Catch: all -> 0x0217, TryCatch #25 {all -> 0x0217, blocks: (B:46:0x00cf, B:95:0x01d4, B:97:0x01dd, B:98:0x01e1, B:154:0x0256, B:156:0x025c, B:159:0x0264, B:125:0x021a), top: B:205:0x0256 }] */
    /* JADX WARN: Removed duplicated region for block: B:163:0x026f A[Catch: all -> 0x028f, TryCatch #24 {all -> 0x028f, blocks: (B:3:0x0005, B:6:0x0014, B:8:0x001c, B:10:0x0020, B:11:0x0032, B:25:0x0090, B:27:0x0094, B:28:0x0099, B:30:0x009d, B:32:0x00a1, B:43:0x00ca, B:51:0x0129, B:74:0x019d, B:101:0x01e9, B:163:0x026f, B:164:0x0272, B:127:0x0222, B:161:0x0269, B:129:0x0229), top: B:204:0x0005 }] */
    /* JADX WARN: Removed duplicated region for block: B:168:0x027e  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0075  */
    /* JADX WARN: Removed duplicated region for block: B:211:0x0264 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:218:? A[Catch: all -> 0x028f, SYNTHETIC, TRY_LEAVE, TryCatch #24 {all -> 0x028f, blocks: (B:3:0x0005, B:6:0x0014, B:8:0x001c, B:10:0x0020, B:11:0x0032, B:25:0x0090, B:27:0x0094, B:28:0x0099, B:30:0x009d, B:32:0x00a1, B:43:0x00ca, B:51:0x0129, B:74:0x019d, B:101:0x01e9, B:163:0x026f, B:164:0x0272, B:127:0x0222, B:161:0x0269, B:129:0x0229), top: B:204:0x0005 }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        IOException iOException;
        Exception exc;
        Throwable th;
        ConnectTask connectTaskUo;
        com.kwad.framework.filedownloader.a.b bVarUk;
        try {
            Process.setThreadPriority(10);
            if (this.acw.sX() != 1) {
                if (this.acw.sX() != -2) {
                    b(new RuntimeException(com.kwad.framework.filedownloader.f.f.b("Task[%d] can't start the download runnable, because its status is %d not %d", Integer.valueOf(this.acw.getId()), Byte.valueOf(this.acw.sX()), (byte) 1)));
                } else if (com.kwad.framework.filedownloader.f.d.aeI) {
                    com.kwad.framework.filedownloader.f.d.c(this, "High concurrent cause, start runnable but already paused %d", Integer.valueOf(this.acw.getId()));
                }
                this.acu.uH();
                if (this.kT) {
                    this.acu.uL();
                } else if (this.acM) {
                    this.acu.c(this.acN);
                } else {
                    try {
                        this.acu.uM();
                    } catch (IOException e) {
                        iOException = e;
                        this.acu.c(iOException);
                    }
                }
            } else {
                if (!this.kT) {
                    this.acu.uJ();
                }
                while (true) {
                    if (!this.kT) {
                        if (this.acr == null) {
                            break;
                        }
                        com.kwad.framework.filedownloader.a.b bVar = null;
                        try {
                            uC();
                            List<com.kwad.framework.filedownloader.d.a> listBg = this.acr.bg(this.acw.getId());
                            connectTaskUo = new ConnectTask.a().bn(this.acw.getId()).ba(this.acw.getUrl()).bb(this.acw.vn()).a(this.acx).a(n(listBg)).uo();
                            bVarUk = connectTaskUo.uk();
                        } catch (DiscardSafely unused) {
                        } catch (RetryDirectly unused2) {
                        } catch (FileDownloadGiveUpRetryException e2) {
                            e = e2;
                            exc = e;
                            try {
                                if (a(exc)) {
                                    b(exc);
                                    if (bVar != null) {
                                        bVar.ug();
                                    }
                                    this.acu.uH();
                                    if (this.kT) {
                                    }
                                    this.acL.set(false);
                                }
                                a(exc, 0L);
                                if (bVar != null) {
                                    bVar.ug();
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                if (bVar != null) {
                                    throw th;
                                }
                                bVar.ug();
                                throw th;
                            }
                        } catch (IOException e3) {
                            e = e3;
                            exc = e;
                            if (a(exc)) {
                            }
                        } catch (ArrayIndexOutOfBoundsException e4) {
                            e = e4;
                            exc = e;
                            if (a(exc)) {
                            }
                        } catch (IllegalAccessException e5) {
                            e = e5;
                            exc = e;
                            if (a(exc)) {
                            }
                        } catch (IllegalArgumentException e6) {
                            e = e6;
                            exc = e;
                            if (a(exc)) {
                            }
                        } catch (InterruptedException e7) {
                            e = e7;
                            exc = e;
                            if (a(exc)) {
                            }
                        } catch (NullPointerException e8) {
                            e = e8;
                            exc = e;
                            if (a(exc)) {
                            }
                        }
                        try {
                            a(connectTaskUo.getRequestHeader(), connectTaskUo, bVarUk);
                            break;
                        } catch (DiscardSafely unused3) {
                            bVar = bVarUk;
                            if (bVar != null) {
                                bVar.ug();
                            }
                            this.acu.uH();
                            if (!this.kT) {
                                if (!this.acM) {
                                    try {
                                        this.acu.uM();
                                    } catch (IOException e9) {
                                        iOException = e9;
                                        this.acu.c(iOException);
                                    }
                                }
                            }
                            this.acL.set(false);
                        } catch (RetryDirectly unused4) {
                            bVar = bVarUk;
                            this.acw.d((byte) 5);
                            if (bVar != null) {
                                bVar.ug();
                            }
                        } catch (FileDownloadGiveUpRetryException e10) {
                            e = e10;
                            exc = e;
                            bVar = bVarUk;
                            if (a(exc)) {
                            }
                        } catch (IOException e11) {
                            e = e11;
                            exc = e;
                            bVar = bVarUk;
                            if (a(exc)) {
                            }
                        } catch (ArrayIndexOutOfBoundsException e12) {
                            e = e12;
                            exc = e;
                            bVar = bVarUk;
                            if (a(exc)) {
                            }
                        } catch (IllegalAccessException e13) {
                            e = e13;
                            exc = e;
                            bVar = bVarUk;
                            if (a(exc)) {
                            }
                        } catch (IllegalArgumentException e14) {
                            e = e14;
                            exc = e;
                            bVar = bVarUk;
                            if (a(exc)) {
                            }
                        } catch (InterruptedException e15) {
                            e = e15;
                            exc = e;
                            bVar = bVarUk;
                            if (a(exc)) {
                            }
                        } catch (NullPointerException e16) {
                            e = e16;
                            exc = e;
                            bVar = bVarUk;
                            if (a(exc)) {
                            }
                        } catch (Throwable th3) {
                            th = th3;
                            bVar = bVarUk;
                            if (bVar != null) {
                            }
                        }
                    } else {
                        break;
                    }
                }
                this.acu.uH();
                if (this.kT) {
                    if (!this.acM) {
                        try {
                            this.acu.uM();
                        } catch (IOException e17) {
                            iOException = e17;
                            this.acu.c(iOException);
                        }
                    }
                }
            }
            this.acL.set(false);
        } catch (Throwable th4) {
            this.acu.uH();
            if (this.kT) {
                this.acu.uL();
            } else if (this.acM) {
                this.acu.c(this.acN);
            } else {
                try {
                    this.acu.uM();
                } catch (IOException e18) {
                    this.acu.c(e18);
                }
            }
            this.acL.set(false);
            throw th4;
        }
    }

    @Override
    public final void uB() {
        this.acr.c(this.acw.getId(), this.acw.vm());
    }

    public final String uE() {
        return this.acw.uE();
    }

    public final void uz() {
        if (this.acw.vp() > 1) {
            List<com.kwad.framework.filedownloader.d.a> listBg = this.acr.bg(this.acw.getId());
            if (this.acw.vp() == listBg.size()) {
                this.acw.L(com.kwad.framework.filedownloader.d.a.o(listBg));
            } else {
                this.acw.L(0L);
                this.acr.bh(this.acw.getId());
            }
        }
        this.acu.uI();
    }
}
