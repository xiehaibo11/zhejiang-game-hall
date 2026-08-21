package com.kwad.framework.filedownloader.message;

public abstract class h extends com.kwad.framework.filedownloader.message.MessageSnapshot {

    public static class a extends com.kwad.framework.filedownloader.message.h.b implements com.kwad.framework.filedownloader.message.b {
        a(int r1, boolean r2, int r3) {
                r0 = this;
                r2 = 1
                r0.<init>(r1, r2, r3)
                return
        }
    }

    public static class b extends com.kwad.framework.filedownloader.message.h {
        private final boolean adI;
        private final int adX;

        b(int r1, boolean r2, int r3) {
                r0 = this;
                r0.<init>(r1)
                r0.adI = r2
                r0.adX = r3
                return
        }

        b(android.os.Parcel r2) {
                r1 = this;
                r1.<init>(r2)
                byte r0 = r2.readByte()
                if (r0 == 0) goto Lb
                r0 = 1
                goto Lc
            Lb:
                r0 = 0
            Lc:
                r1.adI = r0
                int r2 = r2.readInt()
                r1.adX = r2
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
        public final int va() {
                r1 = this;
                int r0 = r1.adX
                return r0
        }

        @Override
        public final boolean vc() {
                r1 = this;
                boolean r0 = r1.adI
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                boolean r2 = r0.adI
                r1.writeByte(r2)
                int r2 = r0.adX
                r1.writeInt(r2)
                return
        }
    }

    public static class c extends com.kwad.framework.filedownloader.message.h {
        private final java.lang.String acf;
        private final boolean adJ;
        private final java.lang.String adK;
        private final int adX;

        c(int r1, boolean r2, int r3, java.lang.String r4, java.lang.String r5) {
                r0 = this;
                r0.<init>(r1)
                r0.adJ = r2
                r0.adX = r3
                r0.acf = r4
                r0.adK = r5
                return
        }

        c(android.os.Parcel r2) {
                r1 = this;
                r1.<init>(r2)
                byte r0 = r2.readByte()
                if (r0 == 0) goto Lb
                r0 = 1
                goto Lc
            Lb:
                r0 = 0
            Lc:
                r1.adJ = r0
                int r0 = r2.readInt()
                r1.adX = r0
                java.lang.String r0 = r2.readString()
                r1.acf = r0
                java.lang.String r2 = r2.readString()
                r1.adK = r2
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
        public final int va() {
                r1 = this;
                int r0 = r1.adX
                return r0
        }

        @Override
        public final void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                boolean r2 = r0.adJ
                r1.writeByte(r2)
                int r2 = r0.adX
                r1.writeInt(r2)
                java.lang.String r2 = r0.acf
                r1.writeString(r2)
                java.lang.String r2 = r0.adK
                r1.writeString(r2)
                return
        }
    }

    public static class d extends com.kwad.framework.filedownloader.message.h {
        private final java.lang.Throwable adM;
        private final int adY;

        d(int r1, int r2, java.lang.Throwable r3) {
                r0 = this;
                r0.<init>(r1)
                r0.adY = r2
                r0.adM = r3
                return
        }

        d(android.os.Parcel r2) {
                r1 = this;
                r1.<init>(r2)
                int r0 = r2.readInt()
                r1.adY = r0
                java.io.Serializable r2 = r2.readSerializable()
                java.lang.Throwable r2 = (java.lang.Throwable) r2
                r1.adM = r2
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
        public final int uZ() {
                r1 = this;
                int r0 = r1.adY
                return r0
        }

        @Override
        public final java.lang.Throwable ve() {
                r1 = this;
                java.lang.Throwable r0 = r1.adM
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                int r2 = r0.adY
                r1.writeInt(r2)
                java.lang.Throwable r2 = r0.adM
                r1.writeSerializable(r2)
                return
        }
    }

    public static class e extends com.kwad.framework.filedownloader.message.h.f {
        e(int r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        @Override
        public final byte sX() {
                r1 = this;
                r0 = -2
                return r0
        }
    }

    public static class f extends com.kwad.framework.filedownloader.message.h {
        private final int adX;
        private final int adY;

        f(int r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1)
                r0.adY = r2
                r0.adX = r3
                return
        }

        f(android.os.Parcel r2) {
                r1 = this;
                r1.<init>(r2)
                int r0 = r2.readInt()
                r1.adY = r0
                int r2 = r2.readInt()
                r1.adX = r2
                return
        }

        f(com.kwad.framework.filedownloader.message.h.f r3) {
                r2 = this;
                int r0 = r3.getId()
                int r1 = r3.uZ()
                int r3 = r3.va()
                r2.<init>(r0, r1, r3)
                return
        }

        public byte sX() {
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public final int uZ() {
                r1 = this;
                int r0 = r1.adY
                return r0
        }

        @Override
        public final int va() {
                r1 = this;
                int r0 = r1.adX
                return r0
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                int r2 = r0.adY
                r1.writeInt(r2)
                int r2 = r0.adX
                r1.writeInt(r2)
                return
        }
    }

    public static class g extends com.kwad.framework.filedownloader.message.h {
        private final int adY;

        g(int r1, int r2) {
                r0 = this;
                r0.<init>(r1)
                r0.adY = r2
                return
        }

        g(android.os.Parcel r1) {
                r0 = this;
                r0.<init>(r1)
                int r1 = r1.readInt()
                r0.adY = r1
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
        public final int uZ() {
                r1 = this;
                int r0 = r1.adY
                return r0
        }

        @Override
        public final void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                int r2 = r0.adY
                r1.writeInt(r2)
                return
        }
    }

    public static class h extends com.kwad.framework.filedownloader.message.h.d {
        private final int adq;

        h(int r1, int r2, java.lang.Throwable r3, int r4) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                r0.adq = r4
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

    public static class i extends com.kwad.framework.filedownloader.message.h.j implements com.kwad.framework.filedownloader.message.b {
        i(int r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }
    }

    public static class j extends com.kwad.framework.filedownloader.message.h.f implements com.kwad.framework.filedownloader.message.MessageSnapshot.a {
        j(int r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
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
                com.kwad.framework.filedownloader.message.h$f r0 = new com.kwad.framework.filedownloader.message.h$f
                r0.<init>(r1)
                return r0
        }
    }

    h(int r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.adN = r1
            return
    }

    h(android.os.Parcel r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final long vb() {
            r2 = this;
            int r0 = r2.va()
            long r0 = (long) r0
            return r0
    }

    @Override
    public final long vd() {
            r2 = this;
            int r0 = r2.uZ()
            long r0 = (long) r0
            return r0
    }
}
