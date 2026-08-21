package com.tencent.mm.opensdk.modelmsg;

public class WXDynamicVideoMiniProgramObject extends com.tencent.mm.opensdk.modelmsg.WXMiniProgramObject {
    private static final java.lang.String TAG = "MicroMsg.SDK.WXDynamicVideoMiniProgramObject";
    public java.lang.String appThumbUrl;
    public java.lang.String videoSource;

    public WXDynamicVideoMiniProgramObject() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean checkArgs() {
            r4 = this;
            java.lang.String r0 = r4.webpageUrl
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXDynamicVideoMiniProgramObject"
            if (r0 == 0) goto L11
            java.lang.String r0 = "webPageUrl is null"
        Ld:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L11:
            java.lang.String r0 = r4.userName
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 == 0) goto L1c
            java.lang.String r0 = "userName is null"
            goto Ld
        L1c:
            int r0 = r4.miniprogramType
            if (r0 < 0) goto L26
            r3 = 2
            if (r0 <= r3) goto L24
            goto L26
        L24:
            r0 = 1
            return r0
        L26:
            java.lang.String r0 = "miniprogram type should between MINIPTOGRAM_TYPE_RELEASE and MINIPROGRAM_TYPE_PREVIEW"
            goto Ld
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = r2.webpageUrl
            java.lang.String r1 = "_wxminiprogram_webpageurl"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.userName
            java.lang.String r1 = "_wxminiprogram_username"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.path
            java.lang.String r1 = "_wxminiprogram_path"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.videoSource
            java.lang.String r1 = "_wxminiprogram_videoSource"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.appThumbUrl
            java.lang.String r1 = "_wxminiprogram_appThumbUrl"
            r3.putString(r1, r0)
            boolean r0 = r2.withShareTicket
            java.lang.String r1 = "_wxminiprogram_withsharetiket"
            r3.putBoolean(r1, r0)
            int r0 = r2.miniprogramType
            java.lang.String r1 = "_wxminiprogram_type"
            r3.putInt(r1, r0)
            int r0 = r2.disableforward
            java.lang.String r1 = "_wxminiprogram_disableforward"
            r3.putInt(r1, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 46
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxminiprogram_webpageurl"
            java.lang.String r0 = r2.getString(r0)
            r1.webpageUrl = r0
            java.lang.String r0 = "_wxminiprogram_username"
            java.lang.String r0 = r2.getString(r0)
            r1.userName = r0
            java.lang.String r0 = "_wxminiprogram_path"
            java.lang.String r0 = r2.getString(r0)
            r1.path = r0
            java.lang.String r0 = "_wxminiprogram_videoSource"
            java.lang.String r0 = r2.getString(r0)
            r1.videoSource = r0
            java.lang.String r0 = "_wxminiprogram_appThumbUrl"
            java.lang.String r0 = r2.getString(r0)
            r1.appThumbUrl = r0
            java.lang.String r0 = "_wxminiprogram_withsharetiket"
            boolean r0 = r2.getBoolean(r0)
            r1.withShareTicket = r0
            java.lang.String r0 = "_wxminiprogram_type"
            int r0 = r2.getInt(r0)
            r1.miniprogramType = r0
            java.lang.String r0 = "_wxminiprogram_disableforward"
            int r2 = r2.getInt(r0)
            r1.disableforward = r2
            return
    }
}
