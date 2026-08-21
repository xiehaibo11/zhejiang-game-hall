package com.kwad.framework.filedownloader.message;

import android.os.Parcel;
import com.kwad.framework.filedownloader.message.MessageSnapshot;

/* JADX INFO: loaded from: classes2.dex */
public abstract class d extends MessageSnapshot {

    public static class a extends b implements com.kwad.framework.filedownloader.message.b {
        a(int i, boolean z, long j) {
            super(i, true, j);
        }
    }

    public static class b extends d {
        private final boolean adI;
        private final long totalBytes;

        b(int i, boolean z, long j) {
            super(i);
            this.adI = z;
            this.totalBytes = j;
        }

        b(Parcel parcel) {
            super(parcel);
            this.adI = parcel.readByte() != 0;
            this.totalBytes = parcel.readLong();
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public int describeContents() {
            return 0;
        }

        @Override // com.kwad.framework.filedownloader.message.c
        public final byte sX() {
            return (byte) -3;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final long vb() {
            return this.totalBytes;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final boolean vc() {
            return this.adI;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeByte(this.adI ? (byte) 1 : (byte) 0);
            parcel.writeLong(this.totalBytes);
        }
    }

    public static class c extends d {
        private final String acf;
        private final boolean adJ;
        private final String adK;
        private final long totalBytes;

        c(int i, boolean z, long j, String str, String str2) {
            super(i);
            this.adJ = z;
            this.totalBytes = j;
            this.acf = str;
            this.adK = str2;
        }

        c(Parcel parcel) {
            super(parcel);
            this.adJ = parcel.readByte() != 0;
            this.totalBytes = parcel.readLong();
            this.acf = parcel.readString();
            this.adK = parcel.readString();
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final String getEtag() {
            return this.acf;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final String getFileName() {
            return this.adK;
        }

        @Override // com.kwad.framework.filedownloader.message.c
        public final byte sX() {
            return (byte) 2;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final boolean uR() {
            return this.adJ;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final long vb() {
            return this.totalBytes;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeByte(this.adJ ? (byte) 1 : (byte) 0);
            parcel.writeLong(this.totalBytes);
            parcel.writeString(this.acf);
            parcel.writeString(this.adK);
        }
    }

    /* JADX INFO: renamed from: com.kwad.framework.filedownloader.message.d$d, reason: collision with other inner class name */
    public static class C0189d extends d {
        private final long adL;
        private final Throwable adM;

        C0189d(int i, long j, Throwable th) {
            super(i);
            this.adL = j;
            this.adM = th;
        }

        C0189d(Parcel parcel) {
            super(parcel);
            this.adL = parcel.readLong();
            this.adM = (Throwable) parcel.readSerializable();
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public int describeContents() {
            return 0;
        }

        @Override // com.kwad.framework.filedownloader.message.c
        public byte sX() {
            return (byte) -1;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final long vd() {
            return this.adL;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final Throwable ve() {
            return this.adM;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeLong(this.adL);
            parcel.writeSerializable(this.adM);
        }
    }

    public static class e extends f {
        e(int i, long j, long j2) {
            super(i, j, j2);
        }

        @Override // com.kwad.framework.filedownloader.message.d.f, com.kwad.framework.filedownloader.message.c
        public final byte sX() {
            return (byte) -2;
        }
    }

    public static class f extends d {
        private final long adL;
        private final long totalBytes;

        f(int i, long j, long j2) {
            super(i);
            this.adL = j;
            this.totalBytes = j2;
        }

        f(Parcel parcel) {
            super(parcel);
            this.adL = parcel.readLong();
            this.totalBytes = parcel.readLong();
        }

        f(f fVar) {
            this(fVar.getId(), fVar.vd(), fVar.vb());
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public int describeContents() {
            return 0;
        }

        public byte sX() {
            return (byte) 1;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final long vb() {
            return this.totalBytes;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final long vd() {
            return this.adL;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeLong(this.adL);
            parcel.writeLong(this.totalBytes);
        }
    }

    public static class g extends d {
        private final long adL;

        g(int i, long j) {
            super(i);
            this.adL = j;
        }

        g(Parcel parcel) {
            super(parcel);
            this.adL = parcel.readLong();
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        @Override // com.kwad.framework.filedownloader.message.c
        public final byte sX() {
            return (byte) 3;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final long vd() {
            return this.adL;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeLong(this.adL);
        }
    }

    public static class h extends C0189d {
        private final int adq;

        h(int i, long j, Throwable th, int i2) {
            super(i, j, th);
            this.adq = i2;
        }

        h(Parcel parcel) {
            super(parcel);
            this.adq = parcel.readInt();
        }

        @Override // com.kwad.framework.filedownloader.message.d.C0189d, com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        @Override // com.kwad.framework.filedownloader.message.d.C0189d, com.kwad.framework.filedownloader.message.c
        public final byte sX() {
            return (byte) 5;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final int tb() {
            return this.adq;
        }

        @Override // com.kwad.framework.filedownloader.message.d.C0189d, com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeInt(this.adq);
        }
    }

    public static class i extends j implements com.kwad.framework.filedownloader.message.b {
        i(int i, long j, long j2) {
            super(i, j, j2);
        }
    }

    public static class j extends f implements MessageSnapshot.a {
        j(int i, long j, long j2) {
            super(i, j, j2);
        }

        j(Parcel parcel) {
            super(parcel);
        }

        @Override // com.kwad.framework.filedownloader.message.d.f, com.kwad.framework.filedownloader.message.c
        public final byte sX() {
            return (byte) -4;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot.a
        public final MessageSnapshot vf() {
            return new f(this);
        }
    }

    d(int i2) {
        super(i2);
        this.adN = true;
    }

    d(Parcel parcel) {
        super(parcel);
    }

    @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
    public final int uZ() {
        if (vd() > 2147483647L) {
            return Integer.MAX_VALUE;
        }
        return (int) vd();
    }

    @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
    public final int va() {
        if (vb() > 2147483647L) {
            return Integer.MAX_VALUE;
        }
        return (int) vb();
    }
}
