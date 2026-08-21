package com.tencent.mm.opensdk.modelmsg;

public class WXStateJumpUrlInfo implements com.tencent.mm.opensdk.modelmsg.WXStateSceneDataObject.IWXStateJumpInfo {
    private static final int LENGTH_LIMIT = 10240;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXStateJumpUrlInfo";
    public java.lang.String jumpUrl;

    public WXStateJumpUrlInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean checkArgs() {
            r4 = this;
            java.lang.String r0 = r4.jumpUrl
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXStateJumpUrlInfo"
            if (r0 == 0) goto L20
            int r0 = r0.length()
            if (r0 > 0) goto Le
            goto L20
        Le:
            java.lang.String r0 = r4.jumpUrl
            int r0 = r0.length()
            r3 = 10240(0x2800, float:1.4349E-41)
            if (r0 < r3) goto L1e
            java.lang.String r0 = "checkArgs fail, jumpUrl is invalid"
        L1a:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L1e:
            r0 = 1
            return r0
        L20:
            java.lang.String r0 = "checkArgs fail, jumpUrl is null"
            goto L1a
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = r2.jumpUrl
            java.lang.String r1 = "wx_state_jump_url"
            r3.putString(r1, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = "wx_state_jump_url"
            java.lang.String r1 = ""
            java.lang.String r3 = r3.getString(r0, r1)
            r2.jumpUrl = r3
            return
    }
}
