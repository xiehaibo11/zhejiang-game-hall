package com.tencent.mm.opensdk.modelmsg;

public class WXStateJumpMiniProgramInfo implements com.tencent.mm.opensdk.modelmsg.WXStateSceneDataObject.IWXStateJumpInfo {
    private static final java.lang.String TAG = "MicroMsg.SDK.WXStateJumpUrlInfo";
    public int miniProgramType;
    public java.lang.String path;
    public java.lang.String username;

    public WXStateJumpMiniProgramInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean checkArgs() {
            r2 = this;
            java.lang.String r0 = r2.username
            if (r0 == 0) goto Ld
            int r0 = r0.length()
            if (r0 > 0) goto Lb
            goto Ld
        Lb:
            r0 = 1
            return r0
        Ld:
            java.lang.String r0 = "MicroMsg.SDK.WXStateJumpUrlInfo"
            java.lang.String r1 = "checkArgs fail, username is null"
            com.tencent.mm.opensdk.utils.Log.e(r0, r1)
            r0 = 0
            return r0
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = r2.username
            java.lang.String r1 = "wx_state_jump_mini_program_username"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.path
            java.lang.String r1 = "wx_state_jump_mini_program_path"
            r3.putString(r1, r0)
            int r0 = r2.miniProgramType
            java.lang.String r1 = "wx_state_jump_mini_program_type"
            r3.putInt(r1, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "wx_state_jump_mini_program_username"
            java.lang.String r1 = r3.getString(r1, r0)
            r2.username = r1
            java.lang.String r1 = "wx_state_jump_mini_program_path"
            java.lang.String r0 = r3.getString(r1, r0)
            r2.path = r0
            java.lang.String r0 = "wx_state_jump_mini_program_type"
            r1 = 0
            int r3 = r3.getInt(r0, r1)
            r2.miniProgramType = r3
            return
    }
}
