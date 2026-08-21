package com.mbridge.msdk.playercommon.exoplayer2.offline;

public abstract class DownloadAction {
    public final byte[] data;
    public final boolean isRemoveAction;
    public final java.lang.String type;
    public final android.net.Uri uri;
    public final int version;

    public static abstract class Deserializer {
        public final java.lang.String type;
        public final int version;

        public Deserializer(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.type = r1
                r0.version = r2
                return
        }

        public abstract com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction readFromStream(int r1, java.io.DataInputStream r2) throws java.io.IOException;
    }

    protected DownloadAction(java.lang.String r1, int r2, android.net.Uri r3, boolean r4, byte[] r5) {
            r0 = this;
            r0.<init>()
            r0.type = r1
            r0.version = r2
            r0.uri = r3
            r0.isRemoveAction = r4
            if (r5 == 0) goto Le
            goto L11
        Le:
            r1 = 0
            byte[] r5 = new byte[r1]
        L11:
            r0.data = r5
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction deserializeFromStream(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction.Deserializer[] r6, java.io.InputStream r7) throws java.io.IOException {
            java.io.DataInputStream r0 = new java.io.DataInputStream
            r0.<init>(r7)
            java.lang.String r7 = r0.readUTF()
            int r1 = r0.readInt()
            int r2 = r6.length
            r3 = 0
        Lf:
            if (r3 >= r2) goto L27
            r4 = r6[r3]
            java.lang.String r5 = r4.type
            boolean r5 = r7.equals(r5)
            if (r5 == 0) goto L24
            int r5 = r4.version
            if (r5 < r1) goto L24
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r6 = r4.readFromStream(r1, r0)
            return r6
        L24:
            int r3 = r3 + 1
            goto Lf
        L27:
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadException r6 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "No deserializer found for:"
            r0.append(r2)
            r0.append(r7)
            java.lang.String r7 = ", "
            r0.append(r7)
            r0.append(r1)
            java.lang.String r7 = r0.toString()
            r6.<init>(r7)
            throw r6
    }

    public static void serializeToStream(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r1, java.io.OutputStream r2) throws java.io.IOException {
            java.io.DataOutputStream r0 = new java.io.DataOutputStream
            r0.<init>(r2)
            java.lang.String r2 = r1.type
            r0.writeUTF(r2)
            int r2 = r1.version
            r0.writeInt(r2)
            r1.writeToStream(r0)
            r0.flush()
            return
    }

    protected abstract com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader createDownloader(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper r1);

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L3b
            java.lang.Class r1 = r3.getClass()
            java.lang.Class r2 = r4.getClass()
            if (r1 == r2) goto Le
            goto L3b
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r4 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction) r4
            java.lang.String r1 = r3.type
            java.lang.String r2 = r4.type
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L3b
            int r1 = r3.version
            int r2 = r4.version
            if (r1 != r2) goto L3b
            android.net.Uri r1 = r3.uri
            android.net.Uri r2 = r4.uri
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L3b
            boolean r1 = r3.isRemoveAction
            boolean r2 = r4.isRemoveAction
            if (r1 != r2) goto L3b
            byte[] r1 = r3.data
            byte[] r4 = r4.data
            boolean r4 = java.util.Arrays.equals(r1, r4)
            if (r4 == 0) goto L3b
            r0 = 1
        L3b:
            return r0
    }

    public int hashCode() {
            r2 = this;
            android.net.Uri r0 = r2.uri
            int r0 = r0.hashCode()
            int r0 = r0 * 31
            boolean r1 = r2.isRemoveAction
            int r0 = r0 + r1
            int r0 = r0 * 31
            byte[] r1 = r2.data
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            return r0
    }

    public boolean isSameMedia(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r2) {
            r1 = this;
            android.net.Uri r0 = r1.uri
            android.net.Uri r2 = r2.uri
            boolean r2 = r0.equals(r2)
            return r2
    }

    public final byte[] toByteArray() {
            r1 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            serializeToStream(r1, r0)     // Catch: java.io.IOException -> Ld
            byte[] r0 = r0.toByteArray()
            return r0
        Ld:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
            throw r0
    }

    protected abstract void writeToStream(java.io.DataOutputStream r1) throws java.io.IOException;
}
