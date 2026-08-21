package com.tencent.mm.opensdk.modelbiz;

public class WXChannelJumpUrlInfo extends com.tencent.mm.opensdk.modelbiz.WXChannelBaseJumpInfo {
    private static final int LENGTH_LIMIT = 10240;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXChannelJumpUrlInfo";
    public java.lang.String url;

    public WXChannelJumpUrlInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean checkArgs() {
            r4 = this;
            java.lang.String r0 = r4.url
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXChannelJumpUrlInfo"
            if (r0 == 0) goto L20
            int r0 = r0.length()
            if (r0 > 0) goto Le
            goto L20
        Le:
            java.lang.String r0 = r4.url
            int r0 = r0.length()
            r3 = 10240(0x2800, float:1.4349E-41)
            if (r0 < r3) goto L1e
            java.lang.String r0 = "checkArgs fail, url is invalid"
        L1a:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L1e:
            r0 = 1
            return r0
        L20:
            java.lang.String r0 = "checkArgs fail, url is null"
            goto L1a
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            super.serialize(r3)
            java.lang.String r0 = r2.url
            java.lang.String r1 = "wx_channel_jump_url"
            r3.putString(r1, r0)
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
            super.unserialize(r2)
            java.lang.String r0 = "wx_channel_jump_url"
            java.lang.String r2 = r2.getString(r0)
            r1.url = r2
            return
    }
}
