package com.kwad.framework.filedownloader.message;

public abstract class d extends com.kwad.framework.filedownloader.message.MessageSnapshot {

    public static class a extends com.kwad.framework.filedownloader.message.d.b implements com.kwad.framework.filedownloader.message.b {
        a(int r1, boolean r2, long r3) {
                r0 = this;
                r2 = 1
                r0.<init>(r1, r2, r3)
                return
        }
    }

    public static class b extends com.kwad.framework.filedownloader.message.d {
        private final boolean adI;
        private final long totalBytes;

        b(int r1, boolean r2, long r3) {
                r0 = this;
                r0.<init>(r1)
                r0.adI = r2
                r0.totalBytes = r3
                return
        }

        b(android.os.Parcel r3) {
                r2 = this;
                r2.<init>(r3)
                byte r0 = r3.readByte()
                if (r0 == 0) goto Lb
                r0 = 1
                goto Lc
            Lb:
                r0 = 0
            Lc:
                r2.adI = r0
                long r0 = r3.readLong()
                r2.totalBytes = r0
                return
        }

        @Override
        public int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public final byte sX() {
                r1 = this;
                r0 = -3
                return r0
        }

        @Override
        public final long vb() {
                r2 = this;
                long r0 = r2.totalBytes
                return r0
        }

        @Override
        public final boolean vc() {
                r1 = this;
                boolean r0 = r1.adI
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r3, int r4) {
                r2 = this;
                super.writeToParcel(r3, r4)
                boolean r4 = r2.adI
                r3.writeByte(r4)
                long r0 = r2.totalBytes
                r3.writeLong(r0)
                return
        }
    }

    public static class c extends com.kwad.framework.filedownloader.message.d {
        private final java.lang.String acf;
        private final boolean adJ;
        private final java.lang.String adK;
        private final long totalBytes;

        c(int r1, boolean r2, long r3, java.lang.String r5, java.lang.String r6) {
                r0 = this;
                r0.<init>(r1)
                r0.adJ = r2
                r0.totalBytes = r3
                r0.acf = r5
                r0.adK = r6
                return
        }

        c(android.os.Parcel r3) {
                r2 = this;
                r2.<init>(r3)
                byte r0 = r3.readByte()
                if (r0 == 0) goto Lb
                r0 = 1
                goto Lc
            Lb:
                r0 = 0
            Lc:
                r2.adJ = r0
                long r0 = r3.readLong()
                r2.totalBytes = r0
                java.lang.String r0 = r3.readString()
                r2.acf = r0
                java.lang.String r3 = r3.readString()
                r2.adK = r3
                return
        }

        @Override
        public final int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public final java.lang.String getEtag() {
                r1 = this;
                java.lang.String r0 = r1.acf
                return r0
        }

        @Override
        public final java.lang.String getFileName() {
                r1 = this;
                java.lang.String r0 = r1.adK
                return r0
        }

        @Override
        public final byte sX() {
                r1 = this;
                r0 = 2
                return r0
        }

        @Override
        public final boolean uR() {
                r1 = this;
                boolean r0 = r1.adJ
                return r0
        }

        @Override
        public final long vb() {
                r2 = this;
                long r0 = r2.totalBytes
                return r0
        }

        @Override
        public final void writeToParcel(android.os.Parcel r3, int r4) {
                r2 = this;
                super.writeToParcel(r3, r4)
                boolean r4 = r2.adJ
                r3.writeByte(r4)
                long r0 = r2.totalBytes
                r3.writeLong(r0)
                java.lang.String r4 = r2.acf
                r3.writeString(r4)
                java.lang.String r4 = r2.adK
                r3.writeString(r4)
                return
        }
    }

    public static class d extends com.kwad.framework.filedownloader.message.d {
        private final long adL;
        private final java.lang.Throwable adM;

        d(int r1, long r2, java.lang.Throwable r4) {
                r0 = this;
                r0.<init>(r1)
                r0.adL = r2
                r0.adM = r4
                return
        }

        d(android.os.Parcel r3) {
                r2 = this;
                r2.<init>(r3)
                long r0 = r3.readLong()
                r2.adL = r0
                java.io.Serializable r3 = r3.readSerializable()
                java.lang.Throwable r3 = (java.lang.Throwable) r3
                r2.adM = r3
                return
        }

        @Override
        public int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public byte sX() {
                r1 = this;
                r0 = -1
                return r0
        }

        @Override
        public final long vd() {
                r2 = this;
                long r0 = r2.adL
                return r0
        }

        @Override
        public final java.lang.Throwable ve() {
                r1 = this;
                java.lang.Throwable r0 = r1.adM
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r3, int r4) {
                r2 = this;
                super.writeToParcel(r3, r4)
                long r0 = r2.adL
                r3.writeLong(r0)
                java.lang.Throwable r4 = r2.adM
                r3.writeSerializable(r4)
                return
        }
    }

    public static class e extends com.kwad.framework.filedownloader.message.d.f {
        e(int r1, long r2, long r4) {
                r0 = this;
                r0.<init>(r1, r2, r4)
                return
        }

        @Override
        public final byte sX() {
                r1 = this;
                r0 = -2
                return r0
        }
    }

    public static class f extends com.kwad.framework.filedownloader.message.d {
        private final long adL;
        private final long totalBytes;

        f(int r1, long r2, long r4) {
                r0 = this;
                r0.<init>(r1)
                r0.adL = r2
                r0.totalBytes = r4
                return
        }

        f(android.os.Parcel r3) {
                r2 = this;
                r2.<init>(r3)
                long r0 = r3.readLong()
                r2.adL = r0
                long r0 = r3.readLong()
                r2.totalBytes = r0
                return
        }

        f(com.kwad.framework.filedownloader.message.d.f r7) {
                r6 = this;
                int r1 = r7.getId()
                long r2 = r7.vd()
                long r4 = r7.vb()
                r0 = r6
                r0.<init>(r1, r2, r4)
                return
        }

        @Override
        public int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        public byte sX() {
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public final long vb() {
                r2 = this;
                long r0 = r2.totalBytes
                return r0
        }

        @Override
        public final long vd() {
                r2 = this;
                long r0 = r2.adL
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r3, int r4) {
                r2 = this;
                super.writeToParcel(r3, r4)
                long r0 = r2.adL
                r3.writeLong(r0)
                long r0 = r2.totalBytes
                r3.writeLong(r0)
                return
        }
    }

    public static class g extends com.kwad.framework.filedownloader.message.d {
        private final long adL;

        g(int r1, long r2) {
                r0 = this;
                r0.<init>(r1)
                r0.adL = r2
                return
        }

        g(android.os.Parcel r3) {
                r2 = this;
                r2.<init>(r3)
                long r0 = r3.readLong()
                r2.adL = r0
                return
        }

        @Override
        public final int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public final byte sX() {
                r1 = this;
                r0 = 3
                return r0
        }

        @Override
        public final long vd() {
                r2 = this;
                long r0 = r2.adL
                return r0
        }

        @Override
        public final void writeToParcel(android.os.Parcel r3, int r4) {
                r2 = this;
                super.writeToParcel(r3, r4)
                long r0 = r2.adL
                r3.writeLong(r0)
                return
        }
    }

    public static class h extends com.kwad.framework.filedownloader.message.d.d {
        private final int adq;

        h(int r1, long r2, java.lang.Throwable r4, int r5) {
                r0 = this;
                r0.<init>(r1, r2, r4)
                r0.adq = r5
                return
        }

        h(android.os.Parcel r1) {
                r0 = this;
                r0.<init>(r1)
                int r1 = r1.readInt()
                r0.adq = r1
                return
        }

        @Override
        public final int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public final byte sX() {
                r1 = this;
                r0 = 5
                return r0
        }

        @Override
        public final int tb() {
                r1 = this;
                int r0 = r1.adq
                return r0
        }

        @Override
        public final void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                int r2 = r0.adq
                r1.writeInt(r2)
                return
        }
    }

    public static class i extends com.kwad.framework.filedownloader.message.d.j implements com.kwad.framework.filedownloader.message.b {
        i(int r1, long r2, long r4) {
                r0 = this;
                r0.<init>(r1, r2, r4)
                return
        }
    }

    public static class j extends com.kwad.framework.filedownloader.message.d.f implements com.kwad.framework.filedownloader.message.MessageSnapshot.a {
        j(int r1, long r2, long r4) {
                r0 = this;
                r0.<init>(r1, r2, r4)
                return
        }

        j(android.os.Parcel r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final byte sX() {
                r1 = this;
                r0 = -4
                return r0
        }

        @Override
        public final com.kwad.framework.filedownloader.message.MessageSnapshot vf() {
                r1 = this;
                com.kwad.framework.filedownloader.message.d$f r0 = new com.kwad.framework.filedownloader.message.d$f
                r0.<init>(r1)
                return r0
        }
    }

    d(int r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            r0.adN = r1
            return
    }

    d(android.os.Parcel r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final int uZ() {
            r4 = this;
            long r0 = r4.vd()
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lf
            r0 = 2147483647(0x7fffffff, float:NaN)
            return r0
        Lf:
            long r0 = r4.vd()
            int r0 = (int) r0
            return r0
    }

    @Override
    public final int va() {
            r4 = this;
            long r0 = r4.vb()
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lf
            r0 = 2147483647(0x7fffffff, float:NaN)
            return r0
        Lf:
            long r0 = r4.vb()
            int r0 = (int) r0
            return r0
    }
}
