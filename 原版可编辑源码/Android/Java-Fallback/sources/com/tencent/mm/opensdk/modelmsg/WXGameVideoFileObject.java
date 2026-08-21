package com.tencent.mm.opensdk.modelmsg;

public class WXGameVideoFileObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final int FILE_SIZE_LIMIT = 104857600;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXGameVideoFileObject";
    private static final int URL_LENGTH_LIMIT = 10240;
    public java.lang.String filePath;
    public java.lang.String thumbUrl;
    public java.lang.String videoUrl;

    public WXGameVideoFileObject() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.filePath = r0
            r1.videoUrl = r0
            r1.thumbUrl = r0
            return
    }

    public WXGameVideoFileObject(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.filePath = r1
            r0.videoUrl = r2
            r0.thumbUrl = r3
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
            java.lang.String r0 = r4.filePath
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXGameVideoFileObject"
            if (r0 == 0) goto L3c
            int r0 = r0.length()
            if (r0 != 0) goto Le
            goto L3c
        Le:
            java.lang.String r0 = r4.filePath
            int r0 = r4.getFileSize(r0)
            r3 = 104857600(0x6400000, float:3.6111186E-35)
            if (r0 <= r3) goto L1e
            java.lang.String r0 = "checkArgs fail, video file size is too large"
        L1a:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L1e:
            java.lang.String r0 = r4.videoUrl
            r3 = 10240(0x2800, float:1.4349E-41)
            if (r0 == 0) goto L2d
            int r0 = r0.length()
            if (r0 <= r3) goto L2d
            java.lang.String r0 = "checkArgs fail, videoUrl is too long"
            goto L1a
        L2d:
            java.lang.String r0 = r4.thumbUrl
            if (r0 == 0) goto L3a
            int r0 = r0.length()
            if (r0 <= r3) goto L3a
            java.lang.String r0 = "checkArgs fail, thumbUrl is too long"
            goto L1a
        L3a:
            r0 = 1
            return r0
        L3c:
            java.lang.String r0 = "checkArgs fail, filePath is null"
            goto L1a
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = r2.filePath
            java.lang.String r1 = "_wxvideofileobject_filePath"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.videoUrl
            java.lang.String r1 = "_wxvideofileobject_cdnUrl"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.thumbUrl
            java.lang.String r1 = "_wxvideofileobject_thumbUrl"
            r3.putString(r1, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 39
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxvideofileobject_filePath"
            java.lang.String r0 = r2.getString(r0)
            r1.filePath = r0
            java.lang.String r0 = "_wxvideofileobject_cdnUrl"
            java.lang.String r0 = r2.getString(r0)
            r1.videoUrl = r0
            java.lang.String r0 = "_wxvideofileobject_thumbUrl"
            java.lang.String r2 = r2.getString(r0)
            r1.thumbUrl = r2
            return
    }
}
