package com.kwad.framework.filedownloader.message;

public abstract class MessageSnapshot implements android.os.Parcelable, com.kwad.framework.filedownloader.message.c {
    public static final android.os.Parcelable.Creator<com.kwad.framework.filedownloader.message.MessageSnapshot> CREATOR = null;
    protected boolean adN;
    private final int id;


    public static class NoFieldException extends java.lang.IllegalStateException {
        NoFieldException(java.lang.String r3, com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
                r2 = this;
                r0 = 4
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                r0[r1] = r3
                int r3 = r4.getId()
                java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
                r1 = 1
                r0[r1] = r3
                byte r3 = r4.sX()
                java.lang.Byte r3 = java.lang.Byte.valueOf(r3)
                r1 = 2
                r0[r1] = r3
                java.lang.Class r3 = r4.getClass()
                java.lang.String r3 = r3.getName()
                r4 = 3
                r0[r4] = r3
                java.lang.String r3 = "There isn't a field for '%s' in this message %d %d %s"
                java.lang.String r3 = com.kwad.framework.filedownloader.f.f.b(r3, r0)
                r2.<init>(r3)
                return
        }
    }

    public interface a {
        com.kwad.framework.filedownloader.message.MessageSnapshot vf();
    }

    public static class b extends com.kwad.framework.filedownloader.message.MessageSnapshot {
        b(int r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        b(android.os.Parcel r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final byte sX() {
                r1 = this;
                r0 = 6
                return r0
        }
    }

    static {
            com.kwad.framework.filedownloader.message.MessageSnapshot$1 r0 = new com.kwad.framework.filedownloader.message.MessageSnapshot$1
            r0.<init>()
            com.kwad.framework.filedownloader.message.MessageSnapshot.CREATOR = r0
            return
    }

    MessageSnapshot(int r1) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            return
    }

    MessageSnapshot(android.os.Parcel r1) {
            r0 = this;
            r0.<init>()
            int r1 = r1.readInt()
            r0.id = r1
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getEtag() {
            r2 = this;
            com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException r0 = new com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException
            java.lang.String r1 = "getEtag"
            r0.<init>(r1, r2)
            throw r0
    }

    public java.lang.String getFileName() {
            r2 = this;
            com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException r0 = new com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException
            java.lang.String r1 = "getFileName"
            r0.<init>(r1, r2)
            throw r0
    }

    public final int getId() {
            r1 = this;
            int r0 = r1.id
            return r0
    }

    public int tb() {
            r2 = this;
            com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException r0 = new com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException
            java.lang.String r1 = "getRetryingTimes"
            r0.<init>(r1, r2)
            throw r0
    }

    public final boolean td() {
            r1 = this;
            boolean r0 = r1.adN
            return r0
    }

    public boolean uR() {
            r2 = this;
            com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException r0 = new com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException
            java.lang.String r1 = "isResuming"
            r0.<init>(r1, r2)
            throw r0
    }

    public int uZ() {
            r2 = this;
            com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException r0 = new com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException
            java.lang.String r1 = "getSmallSofarBytes"
            r0.<init>(r1, r2)
            throw r0
    }

    public int va() {
            r2 = this;
            com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException r0 = new com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException
            java.lang.String r1 = "getSmallTotalBytes"
            r0.<init>(r1, r2)
            throw r0
    }

    public long vb() {
            r2 = this;
            com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException r0 = new com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException
            java.lang.String r1 = "getLargeTotalBytes"
            r0.<init>(r1, r2)
            throw r0
    }

    public boolean vc() {
            r2 = this;
            com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException r0 = new com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException
            java.lang.String r1 = "isReusedDownloadedFile"
            r0.<init>(r1, r2)
            throw r0
    }

    public long vd() {
            r2 = this;
            com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException r0 = new com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException
            java.lang.String r1 = "getLargeSofarBytes"
            r0.<init>(r1, r2)
            throw r0
    }

    public java.lang.Throwable ve() {
            r2 = this;
            com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException r0 = new com.kwad.framework.filedownloader.message.MessageSnapshot$NoFieldException
            java.lang.String r1 = "getThrowable"
            r0.<init>(r1, r2)
            throw r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            boolean r2 = r0.adN
            byte r2 = (byte) r2
            r1.writeByte(r2)
            byte r2 = r0.sX()
            r1.writeByte(r2)
            int r2 = r0.id
            r1.writeInt(r2)
            return
    }
}
