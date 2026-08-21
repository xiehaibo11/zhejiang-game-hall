package com.tencent.mm.opensdk.modelbiz;

public class WXChannelJumpMiniProgramInfo extends com.tencent.mm.opensdk.modelbiz.WXChannelBaseJumpInfo {
    private static final int LENGTH_LIMIT = 10240;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXChannelJumpMiniProgramInfo";
    public java.lang.String path;
    public java.lang.String username;

    public WXChannelJumpMiniProgramInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean checkArgs() {
            r4 = this;
            java.lang.String r0 = r4.username
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXChannelJumpMiniProgramInfo"
            if (r0 == 0) goto L25
            int r0 = r0.length()
            if (r0 > 0) goto Le
            goto L25
        Le:
            java.lang.String r0 = r4.path
            if (r0 == 0) goto L20
            int r0 = r0.length()
            r3 = 10240(0x2800, float:1.4349E-41)
            if (r0 < r3) goto L20
            java.lang.String r0 = "checkArgs fail, path is invalid"
        L1c:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L20:
            boolean r0 = super.checkArgs()
            return r0
        L25:
            java.lang.String r0 = "checkArgs fail, username is null"
            goto L1c
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            super.serialize(r3)
            java.lang.String r0 = r2.username
            java.lang.String r1 = "wx_channel_jump_mini_program_username"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.path
            java.lang.String r1 = "wx_channel_jump_mini_program_path"
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
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            super.unserialize(r2)
            java.lang.String r0 = "wx_channel_jump_mini_program_username"
            java.lang.String r0 = r2.getString(r0)
            r1.username = r0
            java.lang.String r0 = "wx_channel_jump_mini_program_path"
            java.lang.String r2 = r2.getString(r0)
            r1.path = r2
            return
    }
}
