package com.kwad.framework.filedownloader;

public final class c implements com.kwad.framework.filedownloader.a, com.kwad.framework.filedownloader.a.a, com.kwad.framework.filedownloader.d.a {
    private boolean aaA;
    volatile int aaB;
    private boolean aaC;
    private final java.lang.Object aaD;
    private final java.lang.Object aaE;
    private volatile boolean aaF;
    private final com.kwad.framework.filedownloader.x aal;
    private final com.kwad.framework.filedownloader.x.a aam;
    private int aan;
    private java.util.ArrayList<java.lang.Object> aao;
    private java.lang.String aap;
    private java.lang.String aaq;
    private boolean aar;
    private com.kwad.framework.filedownloader.d.b aas;
    private com.kwad.framework.filedownloader.i aat;
    private java.lang.Object aau;
    private int aav;
    private boolean aaw;
    private boolean aax;
    private int aay;
    private int aaz;
    private final java.lang.String mUrl;

    static final class a implements com.kwad.framework.filedownloader.a.b {
        private final com.kwad.framework.filedownloader.c aaG;

        private a(com.kwad.framework.filedownloader.c r2) {
                r1 = this;
                r1.<init>()
                r1.aaG = r2
                r0 = 1
                com.kwad.framework.filedownloader.c.a(r2, r0)
                return
        }

        a(com.kwad.framework.filedownloader.c r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final int tn() {
                r4 = this;
                com.kwad.framework.filedownloader.c r0 = r4.aaG
                int r0 = r0.getId()
                boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
                if (r1 == 0) goto L19
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                java.lang.Integer r3 = java.lang.Integer.valueOf(r0)
                r1[r2] = r3
                java.lang.String r2 = "add the task[%d] to the queue"
                com.kwad.framework.filedownloader.f.d.c(r4, r2, r1)
            L19:
                com.kwad.framework.filedownloader.h r1 = com.kwad.framework.filedownloader.h.tD()
                com.kwad.framework.filedownloader.c r2 = r4.aaG
                r1.c(r2)
                return r0
        }
    }

    c(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.aav = r0
            r2.aaw = r0
            r2.aax = r0
            r1 = 100
            r2.aay = r1
            r1 = 10
            r2.aaz = r1
            r2.aaA = r0
            r2.aaB = r0
            r2.aaC = r0
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r2.aaE = r1
            r2.aaF = r0
            r2.mUrl = r3
            java.lang.Object r3 = new java.lang.Object
            r3.<init>()
            r2.aaD = r3
            com.kwad.framework.filedownloader.d r0 = new com.kwad.framework.filedownloader.d
            r0.<init>(r2, r3)
            r2.aal = r0
            r2.aam = r0
            return
    }

    static boolean a(com.kwad.framework.filedownloader.c r0, boolean r1) {
            r1 = 1
            r0.aaC = r1
            return r1
    }

    private boolean tp() {
            r1 = this;
            com.kwad.framework.filedownloader.x r0 = r1.aal
            byte r0 = r0.sX()
            if (r0 == 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    private int tq() {
            r4 = this;
            boolean r0 = r4.tp()
            if (r0 == 0) goto L40
            boolean r0 = r4.isRunning()
            if (r0 == 0) goto L26
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            int r3 = r4.getId()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            java.lang.String r2 = "This task is running %d, if you want to start the same task, please create a new one by FileDownloader.create"
            java.lang.String r1 = com.kwad.framework.filedownloader.f.f.b(r2, r1)
            r0.<init>(r1)
            throw r0
        L26:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "This task is dirty to restart, If you want to reuse this task, please invoke #reuse method manually and retry to restart again."
            r1.<init>(r2)
            com.kwad.framework.filedownloader.x r2 = r4.aal
            java.lang.String r2 = r2.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L40:
            boolean r0 = r4.sQ()
            if (r0 != 0) goto L49
            r4.ti()
        L49:
            com.kwad.framework.filedownloader.x r0 = r4.aal
            r0.tw()
            int r0 = r4.getId()
            return r0
    }

    private void tr() {
            r2 = this;
            com.kwad.framework.filedownloader.d.b r0 = r2.aas
            if (r0 != 0) goto L17
            java.lang.Object r0 = r2.aaE
            monitor-enter(r0)
            com.kwad.framework.filedownloader.d.b r1 = r2.aas     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.framework.filedownloader.d.b r1 = new com.kwad.framework.filedownloader.d.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            r2.aas = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            return
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            return
    }

    @Override
    public final com.kwad.framework.filedownloader.a a(com.kwad.framework.filedownloader.i r3) {
            r2 = this;
            r2.aat = r3
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L11
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r3 = "setListener %s"
            com.kwad.framework.filedownloader.f.d.c(r2, r3, r0)
        L11:
            return r2
    }

    @Override
    public final com.kwad.framework.filedownloader.a aS(int r1) {
            r0 = this;
            r1 = 3
            r0.aav = r1
            return r0
    }

    @Override
    public final com.kwad.framework.filedownloader.a aT(boolean r1) {
            r0 = this;
            r1 = 1
            r0.aaA = r1
            return r0
    }

    @Override
    public final boolean aT(int r2) {
            r1 = this;
            int r0 = r1.getId()
            if (r0 != r2) goto L8
            r2 = 1
            return r2
        L8:
            r2 = 0
            return r2
    }

    @Override
    public final com.kwad.framework.filedownloader.a aU(java.lang.String r2) {
            r1 = this;
            r0 = 0
            com.kwad.framework.filedownloader.a r2 = r1.b(r2, r0)
            return r2
    }

    @Override
    public final com.kwad.framework.filedownloader.a aU(boolean r1) {
            r0 = this;
            r1 = 1
            r0.aaw = r1
            return r0
    }

    @Override
    public final com.kwad.framework.filedownloader.a aV(java.lang.String r3) {
            r2 = this;
            com.kwad.framework.filedownloader.d.b r0 = r2.aas
            if (r0 != 0) goto L12
            java.lang.Object r0 = r2.aaE
            monitor-enter(r0)
            com.kwad.framework.filedownloader.d.b r1 = r2.aas     // Catch: java.lang.Throwable -> Lf
            if (r1 != 0) goto Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            return r2
        Ld:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            goto L12
        Lf:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            throw r3
        L12:
            com.kwad.framework.filedownloader.d.b r0 = r2.aas
            r0.bh(r3)
            return r2
    }

    @Override
    public final com.kwad.framework.filedownloader.a aV(boolean r1) {
            r0 = this;
            r0.aax = r1
            return r0
    }

    @Override
    public final void aW(java.lang.String r1) {
            r0 = this;
            r0.aaq = r1
            return
    }

    @Override
    public final com.kwad.framework.filedownloader.a b(java.lang.String r3, boolean r4) {
            r2 = this;
            r2.aap = r3
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L11
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r1 = "setPath %s"
            com.kwad.framework.filedownloader.f.d.c(r2, r1, r0)
        L11:
            r2.aar = r4
            if (r4 == 0) goto L17
            r3 = 0
            goto L20
        L17:
            java.io.File r4 = new java.io.File
            r4.<init>(r3)
            java.lang.String r3 = r4.getName()
        L20:
            r2.aaq = r3
            return r2
    }

    @Override
    public final boolean cancel() {
            r1 = this;
            boolean r0 = r1.pause()
            return r0
    }

    @Override
    public final com.kwad.framework.filedownloader.a e(java.lang.Object r3) {
            r2 = this;
            r2.aau = r3
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L11
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r3 = "setTag %s"
            com.kwad.framework.filedownloader.f.d.c(r2, r3, r0)
        L11:
            return r2
    }

    @Override
    public final void free() {
            r1 = this;
            com.kwad.framework.filedownloader.x r0 = r1.aal
            r0.free()
            com.kwad.framework.filedownloader.h r0 = com.kwad.framework.filedownloader.h.tD()
            boolean r0 = r0.a(r1)
            if (r0 == 0) goto L12
            r0 = 0
            r1.aaF = r0
        L12:
            return
    }

    @Override
    public final java.lang.String getFilename() {
            r1 = this;
            java.lang.String r0 = r1.aaq
            return r0
    }

    @Override
    public final int getId() {
            r3 = this;
            int r0 = r3.aan
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.String r0 = r3.aap
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L22
            java.lang.String r0 = r3.mUrl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L22
            java.lang.String r0 = r3.mUrl
            java.lang.String r1 = r3.aap
            boolean r2 = r3.aar
            int r0 = com.kwad.framework.filedownloader.f.f.g(r0, r1, r2)
            r3.aan = r0
            return r0
        L22:
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.String getPath() {
            r1 = this;
            java.lang.String r0 = r1.aap
            return r0
    }

    @Override
    public final int getSmallFileSoFarBytes() {
            r4 = this;
            com.kwad.framework.filedownloader.x r0 = r4.aal
            long r0 = r0.tx()
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L11
            r0 = 2147483647(0x7fffffff, float:NaN)
            return r0
        L11:
            com.kwad.framework.filedownloader.x r0 = r4.aal
            long r0 = r0.tx()
            int r0 = (int) r0
            return r0
    }

    @Override
    public final int getSmallFileTotalBytes() {
            r4 = this;
            com.kwad.framework.filedownloader.x r0 = r4.aal
            long r0 = r0.getTotalBytes()
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L11
            r0 = 2147483647(0x7fffffff, float:NaN)
            return r0
        L11:
            com.kwad.framework.filedownloader.x r0 = r4.aal
            long r0 = r0.getTotalBytes()
            int r0 = (int) r0
            return r0
    }

    @Override
    public final int getSpeed() {
            r1 = this;
            com.kwad.framework.filedownloader.x r0 = r1.aal
            int r0 = r0.getSpeed()
            return r0
    }

    @Override
    public final long getStatusUpdateTime() {
            r2 = this;
            com.kwad.framework.filedownloader.x r0 = r2.aal
            long r0 = r0.getStatusUpdateTime()
            return r0
    }

    @Override
    public final java.lang.Object getTag() {
            r1 = this;
            java.lang.Object r0 = r1.aau
            return r0
    }

    @Override
    public final java.lang.String getTargetFilePath() {
            r3 = this;
            java.lang.String r0 = r3.getPath()
            boolean r1 = r3.sT()
            java.lang.String r2 = r3.getFilename()
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.a(r0, r1, r2)
            return r0
    }

    @Override
    public final java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = r1.mUrl
            return r0
    }

    @Override
    public final boolean isOver() {
            r1 = this;
            byte r0 = r1.sX()
            boolean r0 = com.kwad.framework.filedownloader.d.d.bA(r0)
            return r0
    }

    @Override
    public final boolean isRunning() {
            r1 = this;
            com.kwad.framework.filedownloader.r r0 = com.kwad.framework.filedownloader.r.tW()
            com.kwad.framework.filedownloader.v r0 = r0.ua()
            boolean r0 = r0.d(r1)
            if (r0 == 0) goto L10
            r0 = 1
            return r0
        L10:
            byte r0 = r1.sX()
            boolean r0 = com.kwad.framework.filedownloader.d.d.bB(r0)
            return r0
    }

    @Override
    public final com.kwad.framework.filedownloader.a m(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.tr()
            com.kwad.framework.filedownloader.d.b r0 = r1.aas
            r0.o(r2, r3)
            return r1
    }

    @Override
    public final boolean pause() {
            r2 = this;
            java.lang.Object r0 = r2.aaD
            monitor-enter(r0)
            com.kwad.framework.filedownloader.x r1 = r2.aal     // Catch: java.lang.Throwable -> Lb
            boolean r1 = r1.pause()     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return r1
        Lb:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r1
    }

    @Override
    public final com.kwad.framework.filedownloader.a.b sO() {
            r2 = this;
            com.kwad.framework.filedownloader.c$a r0 = new com.kwad.framework.filedownloader.c$a
            r1 = 0
            r0.<init>(r2, r1)
            return r0
    }

    @Override
    public final boolean sP() {
            r3 = this;
            boolean r0 = r3.isRunning()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L1a
            java.lang.Object[] r0 = new java.lang.Object[r1]
            int r1 = r3.getId()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0[r2] = r1
            java.lang.String r1 = "This task[%d] is running, if you want start the same task, please create a new one by FileDownloader#create"
            com.kwad.framework.filedownloader.f.d.d(r3, r1, r0)
            return r2
        L1a:
            r3.aaB = r2
            r3.aaC = r2
            r3.aaF = r2
            com.kwad.framework.filedownloader.x r0 = r3.aal
            r0.reset()
            return r1
    }

    @Override
    public final boolean sQ() {
            r1 = this;
            int r0 = r1.aaB
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    @Override
    public final int sR() {
            r1 = this;
            int r0 = r1.aay
            return r0
    }

    @Override
    public final int sS() {
            r1 = this;
            int r0 = r1.aaz
            return r0
    }

    @Override
    public final boolean sT() {
            r1 = this;
            boolean r0 = r1.aar
            return r0
    }

    @Override
    public final com.kwad.framework.filedownloader.i sU() {
            r1 = this;
            com.kwad.framework.filedownloader.i r0 = r1.aat
            return r0
    }

    @Override
    public final long sV() {
            r2 = this;
            com.kwad.framework.filedownloader.x r0 = r2.aal
            long r0 = r0.tx()
            return r0
    }

    @Override
    public final long sW() {
            r2 = this;
            com.kwad.framework.filedownloader.x r0 = r2.aal
            long r0 = r0.getTotalBytes()
            return r0
    }

    @Override
    public final byte sX() {
            r1 = this;
            com.kwad.framework.filedownloader.x r0 = r1.aal
            byte r0 = r0.sX()
            return r0
    }

    @Override
    public final boolean sY() {
            r1 = this;
            boolean r0 = r1.aaA
            return r0
    }

    @Override
    public final java.lang.Throwable sZ() {
            r1 = this;
            com.kwad.framework.filedownloader.x r0 = r1.aal
            java.lang.Throwable r0 = r0.sZ()
            return r0
    }

    @Override
    public final int start() {
            r2 = this;
            boolean r0 = r2.aaC
            if (r0 != 0) goto L9
            int r0 = r2.tq()
            return r0
        L9:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "If you start the task manually, it means this task doesn't belong to a queue, so you must not invoke BaseDownloadTask#ready() or InQueueTask#enqueue() before you start() this method. For detail: If this task doesn't belong to a queue, what is just an isolated task, you just need to invoke BaseDownloadTask#start() to start this task, that's all. In other words, If this task doesn't belong to a queue, you must not invoke BaseDownloadTask#ready() method or InQueueTask#enqueue() method before invoke BaseDownloadTask#start(), If you do that and if there is the same listener object to start a queue in another thread, this task may be assembled by the queue, in that case, when you invoke BaseDownloadTask#start() manually to start this task or this task is started by the queue, there is an exception buried in there, because this task object is started two times without declare BaseDownloadTask#reuse() : 1. you invoke BaseDownloadTask#start() manually;  2. the queue start this task automatically."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final int ta() {
            r1 = this;
            int r0 = r1.aav
            return r0
    }

    @Override
    public final int tb() {
            r1 = this;
            com.kwad.framework.filedownloader.x r0 = r1.aal
            int r0 = r0.tb()
            return r0
    }

    @Override
    public final boolean tc() {
            r1 = this;
            boolean r0 = r1.aaw
            return r0
    }

    @Override
    public final boolean td() {
            r1 = this;
            com.kwad.framework.filedownloader.x r0 = r1.aal
            boolean r0 = r0.td()
            return r0
    }

    @Override
    public final boolean te() {
            r1 = this;
            boolean r0 = r1.aax
            return r0
    }

    @Override
    public final com.kwad.framework.filedownloader.a tf() {
            r0 = this;
            return r0
    }

    @Override
    public final com.kwad.framework.filedownloader.x.a tg() {
            r1 = this;
            com.kwad.framework.filedownloader.x$a r0 = r1.aam
            return r0
    }

    @Override
    public final int th() {
            r1 = this;
            int r0 = r1.aaB
            return r0
    }

    @Override
    public final void ti() {
            r1 = this;
            com.kwad.framework.filedownloader.i r0 = r1.sU()
            if (r0 == 0) goto Lf
            com.kwad.framework.filedownloader.i r0 = r1.sU()
            int r0 = r0.hashCode()
            goto L13
        Lf:
            int r0 = r1.hashCode()
        L13:
            r1.aaB = r0
            return
    }

    @Override
    public final boolean tj() {
            r1 = this;
            boolean r0 = r1.aaF
            return r0
    }

    @Override
    public final void tk() {
            r1 = this;
            r0 = 1
            r1.aaF = r0
            return
    }

    @Override
    public final void tl() {
            r0 = this;
            r0.tq()
            return
    }

    @Override
    public final boolean tm() {
            r1 = this;
            java.util.ArrayList<java.lang.Object> r0 = r1.aao
            if (r0 == 0) goto Lc
            int r0 = r0.size()
            if (r0 <= 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r1 = r3.getId()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = super.toString()
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "%d@%s"
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r1, r0)
            return r0
    }

    @Override
    public final com.kwad.framework.filedownloader.d.b ts() {
            r1 = this;
            com.kwad.framework.filedownloader.d.b r0 = r1.aas
            return r0
    }

    @Override
    public final com.kwad.framework.filedownloader.a.a tt() {
            r0 = this;
            return r0
    }

    @Override
    public final java.util.ArrayList<java.lang.Object> tu() {
            r1 = this;
            java.util.ArrayList<java.lang.Object> r0 = r1.aao
            return r0
    }
}
