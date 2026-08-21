package com.kwad.framework.filedownloader.d;

public final class c implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.kwad.framework.filedownloader.d.c> CREATOR = null;
    private java.lang.String Tt;
    private boolean adN;
    private boolean aea;
    private final java.util.concurrent.atomic.AtomicInteger aeb;
    private final java.util.concurrent.atomic.AtomicLong aec;
    private long aed;
    private java.lang.String aee;
    private java.lang.String aef;
    private int aeg;
    private java.lang.String filename;
    private int id;
    private java.lang.String url;


    static {
            com.kwad.framework.filedownloader.d.c$1 r0 = new com.kwad.framework.filedownloader.d.c$1
            r0.<init>()
            com.kwad.framework.filedownloader.d.c.CREATOR = r0
            return
    }

    public c() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r1.aec = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>()
            r1.aeb = r0
            return
    }

    protected c(android.os.Parcel r6) {
            r5 = this;
            r5.<init>()
            int r0 = r6.readInt()
            r5.id = r0
            java.lang.String r0 = r6.readString()
            r5.url = r0
            java.lang.String r0 = r6.readString()
            r5.Tt = r0
            byte r0 = r6.readByte()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L1f
            r0 = r1
            goto L20
        L1f:
            r0 = r2
        L20:
            r5.aea = r0
            java.lang.String r0 = r6.readString()
            r5.filename = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            byte r3 = r6.readByte()
            r0.<init>(r3)
            r5.aeb = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            long r3 = r6.readLong()
            r0.<init>(r3)
            r5.aec = r0
            long r3 = r6.readLong()
            r5.aed = r3
            java.lang.String r0 = r6.readString()
            r5.aee = r0
            java.lang.String r0 = r6.readString()
            r5.aef = r0
            int r0 = r6.readInt()
            r5.aeg = r0
            byte r6 = r6.readByte()
            if (r6 == 0) goto L5d
            goto L5e
        L5d:
            r1 = r2
        L5e:
            r5.adN = r1
            return
    }

    private java.lang.String vo() {
            r1 = this;
            java.lang.String r0 = r1.aee
            return r0
    }

    public final void L(long r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r1.aec
            r0.set(r2)
            return
    }

    public final void M(long r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r1.aec
            r0.addAndGet(r2)
            return
    }

    public final void N(long r3) {
            r2 = this;
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            r2.adN = r0
            r2.aed = r3
            return
    }

    public final void bi(java.lang.String r1) {
            r0 = this;
            r0.aef = r1
            return
    }

    public final void bj(java.lang.String r1) {
            r0 = this;
            r0.aee = r1
            return
    }

    public final void bk(java.lang.String r1) {
            r0 = this;
            r0.filename = r1
            return
    }

    public final void by(int r1) {
            r0 = this;
            r0.aeg = r1
            return
    }

    public final void c(java.lang.String r1, boolean r2) {
            r0 = this;
            r0.Tt = r1
            r0.aea = r2
            return
    }

    public final void d(byte r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.aeb
            r0.set(r2)
            return
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final java.lang.String getFilename() {
            r1 = this;
            java.lang.String r0 = r1.filename
            return r0
    }

    public final int getId() {
            r1 = this;
            int r0 = r1.id
            return r0
    }

    public final java.lang.String getPath() {
            r1 = this;
            java.lang.String r0 = r1.Tt
            return r0
    }

    public final java.lang.String getTargetFilePath() {
            r3 = this;
            java.lang.String r0 = r3.getPath()
            boolean r1 = r3.sT()
            java.lang.String r2 = r3.getFilename()
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.a(r0, r1, r2)
            return r0
    }

    public final long getTotal() {
            r2 = this;
            long r0 = r2.aed
            return r0
    }

    public final java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = r1.url
            return r0
    }

    public final boolean isChunked() {
            r4 = this;
            long r0 = r4.aed
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public final boolean sT() {
            r1 = this;
            boolean r0 = r1.aea
            return r0
    }

    public final byte sX() {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.aeb
            int r0 = r0.get()
            byte r0 = (byte) r0
            return r0
    }

    public final void setId(int r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public final void setUrl(java.lang.String r1) {
            r0 = this;
            r0.url = r1
            return
    }

    public final boolean td() {
            r1 = this;
            boolean r0 = r1.adN
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            r0 = 8
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r1 = r3.id
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = r3.url
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = r3.Tt
            r2 = 2
            r0[r2] = r1
            java.util.concurrent.atomic.AtomicInteger r1 = r3.aeb
            int r1 = r1.get()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 3
            r0[r2] = r1
            java.util.concurrent.atomic.AtomicLong r1 = r3.aec
            r2 = 4
            r0[r2] = r1
            long r1 = r3.aed
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 5
            r0[r2] = r1
            java.lang.String r1 = r3.aef
            r2 = 6
            r0[r2] = r1
            java.lang.String r1 = super.toString()
            r2 = 7
            r0[r2] = r1
            java.lang.String r1 = "id[%d], url[%s], path[%s], status[%d], sofar[%s], total[%d], etag[%s], %s"
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r1, r0)
            return r0
    }

    public final java.lang.String uE() {
            r1 = this;
            java.lang.String r0 = r1.getTargetFilePath()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.String r0 = r1.getTargetFilePath()
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.bo(r0)
            return r0
    }

    public final android.content.ContentValues vk() {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            int r1 = r3.getId()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "_id"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getUrl()
            java.lang.String r2 = "url"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getPath()
            java.lang.String r2 = "path"
            r0.put(r2, r1)
            byte r1 = r3.sX()
            java.lang.Byte r1 = java.lang.Byte.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            long r1 = r3.vm()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "sofar"
            r0.put(r2, r1)
            long r1 = r3.getTotal()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "total"
            r0.put(r2, r1)
            java.lang.String r1 = r3.vo()
            java.lang.String r2 = "errMsg"
            r0.put(r2, r1)
            java.lang.String r1 = r3.vn()
            java.lang.String r2 = "etag"
            r0.put(r2, r1)
            int r1 = r3.vp()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "connectionCount"
            r0.put(r2, r1)
            boolean r1 = r3.sT()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            java.lang.String r2 = "pathAsDirectory"
            r0.put(r2, r1)
            boolean r1 = r3.sT()
            if (r1 == 0) goto L8c
            java.lang.String r1 = r3.getFilename()
            if (r1 == 0) goto L8c
            java.lang.String r1 = r3.getFilename()
            java.lang.String r2 = "filename"
            r0.put(r2, r1)
        L8c:
            return r0
    }

    public final long vm() {
            r2 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r2.aec
            long r0 = r0.get()
            return r0
    }

    public final java.lang.String vn() {
            r1 = this;
            java.lang.String r0 = r1.aef
            return r0
    }

    public final int vp() {
            r1 = this;
            int r0 = r1.aeg
            return r0
    }

    public final void vq() {
            r1 = this;
            r0 = 1
            r1.aeg = r0
            return
    }

    @Override
    public final void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            int r4 = r2.id
            r3.writeInt(r4)
            java.lang.String r4 = r2.url
            r3.writeString(r4)
            java.lang.String r4 = r2.Tt
            r3.writeString(r4)
            boolean r4 = r2.aea
            r3.writeByte(r4)
            java.lang.String r4 = r2.filename
            r3.writeString(r4)
            java.util.concurrent.atomic.AtomicInteger r4 = r2.aeb
            int r4 = r4.get()
            byte r4 = (byte) r4
            r3.writeByte(r4)
            java.util.concurrent.atomic.AtomicLong r4 = r2.aec
            long r0 = r4.get()
            r3.writeLong(r0)
            long r0 = r2.aed
            r3.writeLong(r0)
            java.lang.String r4 = r2.aee
            r3.writeString(r4)
            java.lang.String r4 = r2.aef
            r3.writeString(r4)
            int r4 = r2.aeg
            r3.writeInt(r4)
            boolean r4 = r2.adN
            r3.writeByte(r4)
            return
    }
}
