package com.kwad.framework.filedownloader.message;

import android.os.Parcel;
import android.os.Parcelable;
import com.kwad.framework.filedownloader.message.d;
import com.kwad.framework.filedownloader.message.h;

public abstract class MessageSnapshot implements Parcelable, c {
    public static final Parcelable.Creator<MessageSnapshot> CREATOR = new Parcelable.Creator<MessageSnapshot>() {
        /* JADX WARN: Removed duplicated region for block: B:46:0x0094  */
        /* JADX WARN: Removed duplicated region for block: B:48:0x0097  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        private static MessageSnapshot a(Parcel parcel) {
            MessageSnapshot jVar;
            MessageSnapshot messageSnapshot;
            boolean z = parcel.readByte() == 1;
            byte b2 = parcel.readByte();
            if (b2 == -4) {
                jVar = z ? new d.j(parcel) : new h.j(parcel);
            } else if (b2 == -3) {
                jVar = z ? new d.b(parcel) : new h.b(parcel);
            } else if (b2 == -1) {
                jVar = z ? new d.d(parcel) : new h.d(parcel);
            } else if (b2 == 1) {
                jVar = z ? new d.f(parcel) : new h.f(parcel);
            } else if (b2 == 2) {
                jVar = z ? new d.c(parcel) : new h.c(parcel);
            } else if (b2 == 3) {
                jVar = z ? new d.g(parcel) : new h.g(parcel);
            } else if (b2 == 5) {
                jVar = z ? new d.h(parcel) : new h.h(parcel);
            } else {
                if (b2 != 6) {
                    messageSnapshot = null;
                    if (messageSnapshot == null) {
                        messageSnapshot.adN = z;
                        return messageSnapshot;
                    }
                    throw new IllegalStateException("Can't restore the snapshot because unknown status: " + ((int) b2));
                }
                jVar = new b(parcel);
            }
            messageSnapshot = jVar;
            if (messageSnapshot == null) {
            }
        }

        private static MessageSnapshot[] bv(int i) {
            return new MessageSnapshot[i];
        }

        @Override
        public final MessageSnapshot createFromParcel(Parcel parcel) {
            return a(parcel);
        }

        @Override
        public final MessageSnapshot[] newArray(int i) {
            return bv(i);
        }
    };
    protected boolean adN;
    private final int id;

    public static class NoFieldException extends IllegalStateException {
        NoFieldException(String str, MessageSnapshot messageSnapshot) {
            super(com.kwad.framework.filedownloader.f.f.b("There isn't a field for '%s' in this message %d %d %s", str, Integer.valueOf(messageSnapshot.getId()), Byte.valueOf(messageSnapshot.sX()), messageSnapshot.getClass().getName()));
        }
    }

    public interface a {
        MessageSnapshot vf();
    }

    public static class b extends MessageSnapshot {
        b(int i) {
            super(i);
        }

        b(Parcel parcel) {
            super(parcel);
        }

        @Override
        public final byte sX() {
            return (byte) 6;
        }
    }

    MessageSnapshot(int i) {
        this.id = i;
    }

    MessageSnapshot(Parcel parcel) {
        this.id = parcel.readInt();
    }

    @Override
    public int describeContents() {
        return 0;
    }

    public String getEtag() {
        throw new NoFieldException("getEtag", this);
    }

    public String getFileName() {
        throw new NoFieldException("getFileName", this);
    }

    public final int getId() {
        return this.id;
    }

    public int tb() {
        throw new NoFieldException("getRetryingTimes", this);
    }

    public final boolean td() {
        return this.adN;
    }

    public boolean uR() {
        throw new NoFieldException("isResuming", this);
    }

    public int uZ() {
        throw new NoFieldException("getSmallSofarBytes", this);
    }

    public int va() {
        throw new NoFieldException("getSmallTotalBytes", this);
    }

    public long vb() {
        throw new NoFieldException("getLargeTotalBytes", this);
    }

    public boolean vc() {
        throw new NoFieldException("isReusedDownloadedFile", this);
    }

    public long vd() {
        throw new NoFieldException("getLargeSofarBytes", this);
    }

    public Throwable ve() {
        throw new NoFieldException("getThrowable", this);
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeByte(this.adN ? (byte) 1 : (byte) 0);
        parcel.writeByte(sX());
        parcel.writeInt(this.id);
    }
}
