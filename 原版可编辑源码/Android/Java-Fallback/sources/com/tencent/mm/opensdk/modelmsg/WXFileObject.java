package com.tencent.mm.opensdk.modelmsg;

public class WXFileObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final int CONTENT_LENGTH_LIMIT = 1920991232;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXFileObject";
    private int contentLengthLimit;
    public byte[] fileData;
    public java.lang.String filePath;

    public WXFileObject() {
            r1 = this;
            r1.<init>()
            r0 = 1920991232(0x72800000, float:5.0706024E30)
            r1.contentLengthLimit = r0
            r0 = 0
            r1.fileData = r0
            r1.filePath = r0
            return
    }

    public WXFileObject(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 1920991232(0x72800000, float:5.0706024E30)
            r1.contentLengthLimit = r0
            r1.filePath = r2
            return
    }

    public WXFileObject(byte[] r2) {
            r1 = this;
            r1.<init>()
            r0 = 1920991232(0x72800000, float:5.0706024E30)
            r1.contentLengthLimit = r0
            r1.fileData = r2
            return
    }

    private int getFileSize(java.lang.String r1) {
            r0 = this;
            int r1 = com.tencent.mm.opensdk.utils.b.a(r1)
            return r1
    }

    @Override
    public boolean checkArgs() {
            r4 = this;
            byte[] r0 = r4.fileData
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXFileObject"
            if (r0 == 0) goto La
            int r0 = r0.length
            if (r0 != 0) goto L15
        La:
            java.lang.String r0 = r4.filePath
            if (r0 == 0) goto L35
            int r0 = r0.length()
            if (r0 != 0) goto L15
            goto L35
        L15:
            byte[] r0 = r4.fileData
            if (r0 == 0) goto L24
            int r0 = r0.length
            int r3 = r4.contentLengthLimit
            if (r0 <= r3) goto L24
            java.lang.String r0 = "checkArgs fail, fileData is too large"
        L20:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L24:
            java.lang.String r0 = r4.filePath
            if (r0 == 0) goto L33
            int r0 = r4.getFileSize(r0)
            int r3 = r4.contentLengthLimit
            if (r0 <= r3) goto L33
            java.lang.String r0 = "checkArgs fail, fileSize is too large"
            goto L20
        L33:
            r0 = 1
            return r0
        L35:
            java.lang.String r0 = "checkArgs fail, both arguments is null"
            goto L20
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            byte[] r0 = r2.fileData
            java.lang.String r1 = "_wxfileobject_fileData"
            r3.putByteArray(r1, r0)
            java.lang.String r0 = r2.filePath
            java.lang.String r1 = "_wxfileobject_filePath"
            r3.putString(r1, r0)
            return
    }

    public void setContentLengthLimit(int r1) {
            r0 = this;
            r0.contentLengthLimit = r1
            return
    }

    public void setFileData(byte[] r1) {
            r0 = this;
            r0.fileData = r1
            return
    }

    public void setFilePath(java.lang.String r1) {
            r0 = this;
            r0.filePath = r1
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 6
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxfileobject_fileData"
            byte[] r0 = r2.getByteArray(r0)
            r1.fileData = r0
            java.lang.String r0 = "_wxfileobject_filePath"
            java.lang.String r2 = r2.getString(r0)
            r1.filePath = r2
            return
    }
}
