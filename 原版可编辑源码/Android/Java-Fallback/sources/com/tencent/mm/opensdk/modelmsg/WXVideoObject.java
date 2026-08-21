package com.tencent.mm.opensdk.modelmsg;

public class WXVideoObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final int LENGTH_LIMIT = 10240;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXVideoObject";
    public java.lang.String videoLowBandUrl;
    public java.lang.String videoUrl;

    public WXVideoObject() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean checkArgs() {
            r4 = this;
            java.lang.String r0 = r4.videoUrl
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXVideoObject"
            if (r0 == 0) goto Ld
            int r0 = r0.length()
            if (r0 != 0) goto L18
        Ld:
            java.lang.String r0 = r4.videoLowBandUrl
            if (r0 == 0) goto L39
            int r0 = r0.length()
            if (r0 != 0) goto L18
            goto L39
        L18:
            java.lang.String r0 = r4.videoUrl
            r3 = 10240(0x2800, float:1.4349E-41)
            if (r0 == 0) goto L2a
            int r0 = r0.length()
            if (r0 <= r3) goto L2a
            java.lang.String r0 = "checkArgs fail, videoUrl is too long"
        L26:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L2a:
            java.lang.String r0 = r4.videoLowBandUrl
            if (r0 == 0) goto L37
            int r0 = r0.length()
            if (r0 <= r3) goto L37
            java.lang.String r0 = "checkArgs fail, videoLowBandUrl is too long"
            goto L26
        L37:
            r0 = 1
            return r0
        L39:
            java.lang.String r0 = "both arguments are null"
            goto L26
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = r2.videoUrl
            java.lang.String r1 = "_wxvideoobject_videoUrl"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.videoLowBandUrl
            java.lang.String r1 = "_wxvideoobject_videoLowBandUrl"
            r3.putString(r1, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 4
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxvideoobject_videoUrl"
            java.lang.String r0 = r2.getString(r0)
            r1.videoUrl = r0
            java.lang.String r0 = "_wxvideoobject_videoLowBandUrl"
            java.lang.String r2 = r2.getString(r0)
            r1.videoLowBandUrl = r2
            return
    }
}
