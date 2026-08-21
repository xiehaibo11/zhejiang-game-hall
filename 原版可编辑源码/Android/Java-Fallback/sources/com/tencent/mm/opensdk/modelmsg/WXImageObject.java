package com.tencent.mm.opensdk.modelmsg;

public class WXImageObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final int CONTENT_LENGTH_LIMIT = 26214400;
    private static final int PATH_LENGTH_LIMIT = 10240;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXImageObject";
    public byte[] imageData;
    public java.lang.String imagePath;

    public WXImageObject() {
            r0 = this;
            r0.<init>()
            return
    }

    public WXImageObject(android.graphics.Bitmap r4) {
            r3 = this;
            r3.<init>()
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L19
            r0.<init>()     // Catch: java.lang.Exception -> L19
            android.graphics.Bitmap$CompressFormat r1 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.lang.Exception -> L19
            r2 = 85
            r4.compress(r1, r2, r0)     // Catch: java.lang.Exception -> L19
            byte[] r4 = r0.toByteArray()     // Catch: java.lang.Exception -> L19
            r3.imageData = r4     // Catch: java.lang.Exception -> L19
            r0.close()     // Catch: java.lang.Exception -> L19
            goto L34
        L19:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "WXImageObject <init>, exception:"
            r0.append(r1)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "MicroMsg.SDK.WXImageObject"
            com.tencent.mm.opensdk.utils.Log.e(r0, r4)
        L34:
            return
    }

    public WXImageObject(byte[] r1) {
            r0 = this;
            r0.<init>()
            r0.imageData = r1
            return
    }

    private int getFileSize(java.lang.String r1) {
            r0 = this;
            int r1 = com.tencent.mm.opensdk.utils.b.a(r1)
            return r1
    }

    @Override
    public boolean checkArgs() {
            r5 = this;
            byte[] r0 = r5.imageData
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXImageObject"
            if (r0 == 0) goto La
            int r0 = r0.length
            if (r0 != 0) goto L15
        La:
            java.lang.String r0 = r5.imagePath
            if (r0 == 0) goto L42
            int r0 = r0.length()
            if (r0 != 0) goto L15
            goto L42
        L15:
            byte[] r0 = r5.imageData
            r3 = 26214400(0x1900000, float:5.2897246E-38)
            if (r0 == 0) goto L24
            int r0 = r0.length
            if (r0 <= r3) goto L24
            java.lang.String r0 = "checkArgs fail, content is too large"
        L20:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L24:
            java.lang.String r0 = r5.imagePath
            if (r0 == 0) goto L33
            int r0 = r0.length()
            r4 = 10240(0x2800, float:1.4349E-41)
            if (r0 <= r4) goto L33
            java.lang.String r0 = "checkArgs fail, path is invalid"
            goto L20
        L33:
            java.lang.String r0 = r5.imagePath
            if (r0 == 0) goto L40
            int r0 = r5.getFileSize(r0)
            if (r0 <= r3) goto L40
            java.lang.String r0 = "checkArgs fail, image content is too large"
            goto L20
        L40:
            r0 = 1
            return r0
        L42:
            java.lang.String r0 = "checkArgs fail, all arguments are null"
            goto L20
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            byte[] r0 = r2.imageData
            java.lang.String r1 = "_wximageobject_imageData"
            r3.putByteArray(r1, r0)
            java.lang.String r0 = r2.imagePath
            java.lang.String r1 = "_wximageobject_imagePath"
            r3.putString(r1, r0)
            return
    }

    public void setImagePath(java.lang.String r1) {
            r0 = this;
            r0.imagePath = r1
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wximageobject_imageData"
            byte[] r0 = r2.getByteArray(r0)
            r1.imageData = r0
            java.lang.String r0 = "_wximageobject_imagePath"
            java.lang.String r2 = r2.getString(r0)
            r1.imagePath = r2
            return
    }
}
