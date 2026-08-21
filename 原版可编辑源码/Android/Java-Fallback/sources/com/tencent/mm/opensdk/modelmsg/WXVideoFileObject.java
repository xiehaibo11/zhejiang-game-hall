package com.tencent.mm.opensdk.modelmsg;

public class WXVideoFileObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    public static final int FILE_SIZE_LIMIT = 1073741824;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXVideoFileObject";
    public static final int WXVideoFileShareSceneCommon = 0;
    public static final int WXVideoFileShareSceneFromWX = 1;
    public java.lang.String filePath;
    public int shareScene;
    public java.lang.String shareTicket;

    public WXVideoFileObject() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.shareScene = r0
            r0 = 0
            r1.filePath = r0
            return
    }

    public WXVideoFileObject(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.shareScene = r0
            r1.filePath = r2
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
            java.lang.String r2 = "MicroMsg.SDK.WXVideoFileObject"
            if (r0 == 0) goto L20
            int r0 = r0.length()
            if (r0 != 0) goto Le
            goto L20
        Le:
            java.lang.String r0 = r4.filePath
            int r0 = r4.getFileSize(r0)
            r3 = 1073741824(0x40000000, float:2.0)
            if (r0 <= r3) goto L1e
            java.lang.String r0 = "checkArgs fail, video file size is too large"
        L1a:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L1e:
            r0 = 1
            return r0
        L20:
            java.lang.String r0 = "checkArgs fail, filePath is null"
            goto L1a
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = r2.filePath
            java.lang.String r1 = "_wxvideofileobject_filePath"
            r3.putString(r1, r0)
            int r0 = r2.shareScene
            java.lang.String r1 = "_wxvideofileobject_shareScene"
            r3.putInt(r1, r0)
            java.lang.String r0 = r2.shareTicket
            java.lang.String r1 = "_wxvideofileobject_shareTicketh"
            r3.putString(r1, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 38
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = "_wxvideofileobject_filePath"
            java.lang.String r0 = r3.getString(r0)
            r2.filePath = r0
            java.lang.String r0 = "_wxvideofileobject_shareScene"
            r1 = 0
            int r0 = r3.getInt(r0, r1)
            r2.shareScene = r0
            java.lang.String r0 = "_wxvideofileobject_shareTicketh"
            java.lang.String r3 = r3.getString(r0)
            r2.shareTicket = r3
            return
    }
}
