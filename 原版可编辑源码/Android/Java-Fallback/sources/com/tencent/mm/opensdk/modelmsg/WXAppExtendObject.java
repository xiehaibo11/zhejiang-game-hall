package com.tencent.mm.opensdk.modelmsg;

public class WXAppExtendObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final int CONTENT_LENGTH_LIMIT = 10485760;
    private static final int EXTINFO_LENGTH_LIMIT = 2048;
    private static final int PATH_LENGTH_LIMIT = 10240;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXAppExtendObject";
    public java.lang.String extInfo;
    public byte[] fileData;
    public java.lang.String filePath;

    public WXAppExtendObject() {
            r0 = this;
            r0.<init>()
            return
    }

    public WXAppExtendObject(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.extInfo = r1
            r0.filePath = r2
            return
    }

    public WXAppExtendObject(java.lang.String r1, byte[] r2) {
            r0 = this;
            r0.<init>()
            r0.extInfo = r1
            r0.fileData = r2
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
            java.lang.String r0 = r4.extInfo
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXAppExtendObject"
            if (r0 == 0) goto Ld
            int r0 = r0.length()
            if (r0 != 0) goto L1f
        Ld:
            java.lang.String r0 = r4.filePath
            if (r0 == 0) goto L17
            int r0 = r0.length()
            if (r0 != 0) goto L1f
        L17:
            byte[] r0 = r4.fileData
            if (r0 == 0) goto L5b
            int r0 = r0.length
            if (r0 != 0) goto L1f
            goto L5b
        L1f:
            java.lang.String r0 = r4.extInfo
            if (r0 == 0) goto L31
            int r0 = r0.length()
            r3 = 2048(0x800, float:2.87E-42)
            if (r0 <= r3) goto L31
            java.lang.String r0 = "checkArgs fail, extInfo is invalid"
        L2d:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L31:
            java.lang.String r0 = r4.filePath
            if (r0 == 0) goto L40
            int r0 = r0.length()
            r3 = 10240(0x2800, float:1.4349E-41)
            if (r0 <= r3) goto L40
            java.lang.String r0 = "checkArgs fail, filePath is invalid"
            goto L2d
        L40:
            java.lang.String r0 = r4.filePath
            r3 = 10485760(0xa00000, float:1.469368E-38)
            if (r0 == 0) goto L4f
            int r0 = r4.getFileSize(r0)
            if (r0 <= r3) goto L4f
            java.lang.String r0 = "checkArgs fail, fileSize is too large"
            goto L2d
        L4f:
            byte[] r0 = r4.fileData
            if (r0 == 0) goto L59
            int r0 = r0.length
            if (r0 <= r3) goto L59
            java.lang.String r0 = "checkArgs fail, fileData is too large"
            goto L2d
        L59:
            r0 = 1
            return r0
        L5b:
            java.lang.String r0 = "checkArgs fail, all arguments is null"
            goto L2d
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = r2.extInfo
            java.lang.String r1 = "_wxappextendobject_extInfo"
            r3.putString(r1, r0)
            byte[] r0 = r2.fileData
            java.lang.String r1 = "_wxappextendobject_fileData"
            r3.putByteArray(r1, r0)
            java.lang.String r0 = r2.filePath
            java.lang.String r1 = "_wxappextendobject_filePath"
            r3.putString(r1, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 7
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxappextendobject_extInfo"
            java.lang.String r0 = r2.getString(r0)
            r1.extInfo = r0
            java.lang.String r0 = "_wxappextendobject_fileData"
            byte[] r0 = r2.getByteArray(r0)
            r1.fileData = r0
            java.lang.String r0 = "_wxappextendobject_filePath"
            java.lang.String r2 = r2.getString(r0)
            r1.filePath = r2
            return
    }
}
