package com.tencent.mm.opensdk.modelmsg;

public class WXStateSceneDataObject implements com.tencent.mm.opensdk.modelmsg.SendMessageToWX.IWXSceneDataObject {
    private static final int LENGTH_LIMIT = 10240;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXStateSceneDataObject";
    private static final java.lang.String WX_STATE_JUMP_INFO_KEY_IDENTIFIER = "_wxapi_scene_data_state_jump_info_identifier";
    public java.lang.String stateId;
    public com.tencent.mm.opensdk.modelmsg.WXStateSceneDataObject.IWXStateJumpInfo stateJumpInfo;
    public java.lang.String stateTitle;
    public java.lang.String token;

    public interface IWXStateJumpInfo {
        public static final int WX_STATE_JUMP_TYPE_CHANNEL_PROFILE = 3;
        public static final int WX_STATE_JUMP_TYPE_MINI_PROGRAM = 2;
        public static final int WX_STATE_JUMP_TYPE_UNKNOWN = 0;
        public static final int WX_STATE_JUMP_TYPE_URL = 1;

        boolean checkArgs();

        void serialize(android.os.Bundle r1);

        int type();

        void unserialize(android.os.Bundle r1);
    }

    public WXStateSceneDataObject() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean checkArgs() {
            r5 = this;
            java.lang.String r0 = r5.stateId
            java.lang.String r1 = "checkArgs fail, stateId is invalid"
            r2 = 10240(0x2800, float:1.4349E-41)
            r3 = 0
            java.lang.String r4 = "MicroMsg.SDK.WXStateSceneDataObject"
            if (r0 == 0) goto L15
            int r0 = r0.length()
            if (r0 <= r2) goto L15
            com.tencent.mm.opensdk.utils.Log.e(r4, r1)
            return r3
        L15:
            java.lang.String r0 = r5.stateTitle
            if (r0 == 0) goto L23
            int r0 = r0.length()
            if (r0 <= r2) goto L23
            com.tencent.mm.opensdk.utils.Log.e(r4, r1)
            return r3
        L23:
            java.lang.String r0 = r5.token
            if (r0 == 0) goto L31
            int r0 = r0.length()
            if (r0 <= r2) goto L31
            com.tencent.mm.opensdk.utils.Log.e(r4, r1)
            return r3
        L31:
            com.tencent.mm.opensdk.modelmsg.WXStateSceneDataObject$IWXStateJumpInfo r0 = r5.stateJumpInfo
            if (r0 != 0) goto L3b
            java.lang.String r0 = "checkArgs fail, statsJumpInfo is null"
            com.tencent.mm.opensdk.utils.Log.e(r4, r0)
            return r3
        L3b:
            boolean r0 = r0.checkArgs()
            return r0
    }

    @Override
    public int getJumpType() {
            r1 = this;
            com.tencent.mm.opensdk.modelmsg.WXStateSceneDataObject$IWXStateJumpInfo r0 = r1.stateJumpInfo
            if (r0 == 0) goto L9
            int r0 = r0.type()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = r2.stateId
            java.lang.String r1 = "_wxapi_scene_data_state_id"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.stateTitle
            java.lang.String r1 = "_wxapi_scene_data_state_title"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.token
            java.lang.String r1 = "_wxapi_scene_data_state_token"
            r3.putString(r1, r0)
            com.tencent.mm.opensdk.modelmsg.WXStateSceneDataObject$IWXStateJumpInfo r0 = r2.stateJumpInfo
            if (r0 == 0) goto L2b
            java.lang.Class r0 = r0.getClass()
            java.lang.String r0 = r0.getName()
            java.lang.String r1 = "_wxapi_scene_data_state_jump_info_identifier"
            r3.putString(r1, r0)
            com.tencent.mm.opensdk.modelmsg.WXStateSceneDataObject$IWXStateJumpInfo r0 = r2.stateJumpInfo
            r0.serialize(r3)
        L2b:
            return
    }

    @Override
    public void unserialize(android.os.Bundle r4) {
            r3 = this;
            java.lang.String r0 = "_wxapi_scene_data_state_id"
            java.lang.String r0 = r4.getString(r0)
            r3.stateId = r0
            java.lang.String r0 = "_wxapi_scene_data_state_title"
            java.lang.String r0 = r4.getString(r0)
            r3.stateTitle = r0
            java.lang.String r0 = "_wxapi_scene_data_state_token"
            java.lang.String r0 = r4.getString(r0)
            r3.token = r0
            java.lang.String r0 = "_wxapi_scene_data_state_jump_info_identifier"
            java.lang.String r0 = r4.getString(r0)
            if (r0 == 0) goto L53
            java.lang.Class r1 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L30
            java.lang.Object r1 = r1.newInstance()     // Catch: java.lang.Exception -> L30
            com.tencent.mm.opensdk.modelmsg.WXStateSceneDataObject$IWXStateJumpInfo r1 = (com.tencent.mm.opensdk.modelmsg.WXStateSceneDataObject.IWXStateJumpInfo) r1     // Catch: java.lang.Exception -> L30
            r3.stateJumpInfo = r1     // Catch: java.lang.Exception -> L30
            r1.unserialize(r4)     // Catch: java.lang.Exception -> L30
            goto L53
        L30:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "get WXSceneDataObject from bundle failed: unknown ident "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = ", ex = "
            r1.append(r0)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r0 = "MicroMsg.SDK.WXStateSceneDataObject"
            com.tencent.mm.opensdk.utils.Log.e(r0, r4)
        L53:
            return
    }
}
