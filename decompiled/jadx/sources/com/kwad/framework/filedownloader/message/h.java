package com.kwad.framework.filedownloader.message;

import android.os.Parcel;
import com.kwad.framework.filedownloader.message.MessageSnapshot;

/* JADX INFO: loaded from: classes2.dex */
public abstract class h extends MessageSnapshot {

    public static class a extends b implements com.kwad.framework.filedownloader.message.b {
        a(int i, boolean z, int i2) {
            super(i, true, i2);
        }
    }

    public static class b extends h {
        private final boolean adI;
        private final int adX;

        b(int i, boolean z, int i2) {
            super(i);
            this.adI = z;
            this.adX = i2;
        }

        b(Parcel parcel) {
            super(parcel);
            this.adI = parcel.readByte() != 0;
            this.adX = parcel.readInt();
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
        public final int va() {
            return this.adX;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final boolean vc() {
            return this.adI;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeByte(this.adI ? (byte) 1 : (byte) 0);
            parcel.writeInt(this.adX);
        }
    }

    public static class c extends h {
        private final String acf;
        private final boolean adJ;
        private final String adK;
        private final int adX;

        c(int i, boolean z, int i2, String str, String str2) {
            super(i);
            this.adJ = z;
            this.adX = i2;
            this.acf = str;
            this.adK = str2;
        }

        c(Parcel parcel) {
            super(parcel);
            this.adJ = parcel.readByte() != 0;
            this.adX = parcel.readInt();
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
        public final int va() {
            return this.adX;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeByte(this.adJ ? (byte) 1 : (byte) 0);
            parcel.writeInt(this.adX);
            parcel.writeString(this.acf);
            parcel.writeString(this.adK);
        }
    }

    public static class d extends h {
        private final Throwable adM;
        private final int adY;

        d(int i, int i2, Throwable th) {
            super(i);
            this.adY = i2;
            this.adM = th;
        }

        d(Parcel parcel) {
            super(parcel);
            this.adY = parcel.readInt();
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
        public final int uZ() {
            return this.adY;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final Throwable ve() {
            return this.adM;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeInt(this.adY);
            parcel.writeSerializable(this.adM);
        }
    }

    public static class e extends f {
        e(int i, int i2, int i3) {
            super(i, i2, i3);
        }

        @Override // com.kwad.framework.filedownloader.message.h.f, com.kwad.framework.filedownloader.message.c
        public final byte sX() {
            return (byte) -2;
        }
    }

    public static class f extends h {
        private final int adX;
        private final int adY;

        f(int i, int i2, int i3) {
            super(i);
            this.adY = i2;
            this.adX = i3;
        }

        f(Parcel parcel) {
            super(parcel);
            this.adY = parcel.readInt();
            this.adX = parcel.readInt();
        }

        f(f fVar) {
            this(fVar.getId(), fVar.uZ(), fVar.va());
        }

        public byte sX() {
            return (byte) 1;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final int uZ() {
            return this.adY;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final int va() {
            return this.adX;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeInt(this.adY);
            parcel.writeInt(this.adX);
        }
    }

    public static class g extends h {
        private final int adY;

        g(int i, int i2) {
            super(i);
            this.adY = i2;
        }

        g(Parcel parcel) {
            super(parcel);
            this.adY = parcel.readInt();
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
        public final int uZ() {
            return this.adY;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeInt(this.adY);
        }
    }

    /* JADX INFO: renamed from: com.kwad.framework.filedownloader.message.h$h, reason: collision with other inner class name */
    public static class C0190h extends d {
        private final int adq;

        C0190h(int i, int i2, Throwable th, int i3) {
            super(i, i2, th);
            this.adq = i3;
        }

        C0190h(Parcel parcel) {
            super(parcel);
            this.adq = parcel.readInt();
        }

        @Override // com.kwad.framework.filedownloader.message.h.d, com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public final int describeContents() {
            return 0;
        }

        @Override // com.kwad.framework.filedownloader.message.h.d, com.kwad.framework.filedownloader.message.c
        public final byte sX() {
            return (byte) 5;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
        public final int tb() {
            return this.adq;
        }

        @Override // com.kwad.framework.filedownloader.message.h.d, com.kwad.framework.filedownloader.message.MessageSnapshot, android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeInt(this.adq);
        }
    }

    public static class i extends j implements com.kwad.framework.filedownloader.message.b {
        i(int i, int i2, int i3) {
            super(i, i2, i3);
        }
    }

    public static class j extends f implements MessageSnapshot.a {
        j(int i, int i2, int i3) {
            super(i, i2, i3);
        }

        j(Parcel parcel) {
            super(parcel);
        }

        @Override // com.kwad.framework.filedownloader.message.h.f, com.kwad.framework.filedownloader.message.c
        public final byte sX() {
            return (byte) -4;
        }

        @Override // com.kwad.framework.filedownloader.message.MessageSnapshot.a
        public final MessageSnapshot vf() {
            return new f(this);
        }
    }

    h(int i2) {
        super(i2);
        this.adN = false;
    }

    h(Parcel parcel) {
        super(parcel);
    }

    @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
    public final long vb() {
        return va();
    }

    @Override // com.kwad.framework.filedownloader.message.MessageSnapshot
    public final long vd() {
        return uZ();
    }
}
