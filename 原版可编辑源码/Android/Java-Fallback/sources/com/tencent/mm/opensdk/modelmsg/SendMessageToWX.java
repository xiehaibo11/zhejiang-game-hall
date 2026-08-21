package com.tencent.mm.opensdk.modelmsg;

public class SendMessageToWX {

    public interface IWXSceneDataObject {
        boolean checkArgs();

        int getJumpType();

        void serialize(android.os.Bundle r1);

        void unserialize(android.os.Bundle r1);
    }

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        private static final int FAV_CONTENT_LENGTH_LIMIT = 26214400;
        private static final java.lang.String SCENE_DATA_OBJECT_KEY_IDENTIFIER = "_scene_data_object_identifier";
        private static final java.lang.String TAG = "MicroMsg.SDK.SendMessageToWX.Req";
        public static final int WXSceneFavorite = 2;
        public static final int WXSceneSession = 0;
        public static final int WXSceneSpecifiedContact = 3;
        public static final int WXSceneStatus = 4;
        public static final int WXSceneTimeline = 1;
        public com.tencent.mm.opensdk.modelmsg.WXMediaMessage message;
        public int scene;
        public com.tencent.mm.opensdk.modelmsg.SendMessageToWX.IWXSceneDataObject sceneDataObject;
        public java.lang.String userOpenId;

        public Req() {
                r0 = this;
                r0.<init>()
                return
        }

        public Req(android.os.Bundle r1) {
                r0 = this;
                r0.<init>()
                r0.fromBundle(r1)
                return
        }

        @Override
        public boolean checkArgs() {
                r4 = this;
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = r4.message
                java.lang.String r1 = "MicroMsg.SDK.SendMessageToWX.Req"
                r2 = 0
                if (r0 != 0) goto Ld
                java.lang.String r0 = "checkArgs fail ,message is null"
            L9:
                com.tencent.mm.opensdk.utils.Log.e(r1, r0)
                return r2
            Ld:
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage$IMediaObject r0 = r0.mediaObject
                int r0 = r0.type()
                r3 = 6
                if (r0 != r3) goto L26
                int r0 = r4.scene
                r3 = 2
                if (r0 != r3) goto L26
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = r4.message
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage$IMediaObject r0 = r0.mediaObject
                com.tencent.mm.opensdk.modelmsg.WXFileObject r0 = (com.tencent.mm.opensdk.modelmsg.WXFileObject) r0
                r3 = 26214400(0x1900000, float:5.2897246E-38)
                r0.setContentLengthLimit(r3)
            L26:
                int r0 = r4.scene
                r3 = 3
                if (r0 != r3) goto L32
                java.lang.String r0 = r4.userOpenId
                if (r0 != 0) goto L32
                java.lang.String r0 = "Send specifiedContact userOpenId can not be null."
                goto L9
            L32:
                int r0 = r4.scene
                if (r0 != r3) goto L3d
                java.lang.String r0 = r4.openId
                if (r0 != 0) goto L3d
                java.lang.String r0 = "Send specifiedContact openid can not be null."
                goto L9
            L3d:
                int r0 = r4.scene
                r3 = 4
                if (r0 != r3) goto L6b
                com.tencent.mm.opensdk.modelmsg.SendMessageToWX$IWXSceneDataObject r0 = r4.sceneDataObject
                if (r0 != 0) goto L49
                java.lang.String r0 = "checkArgs fail, sceneDataObject is null"
                goto L9
            L49:
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = r4.message
                int r0 = r0.getType()
                r1 = 1
                if (r0 != r1) goto L59
                com.tencent.mm.opensdk.modelmsg.SendMessageToWX$IWXSceneDataObject r0 = r4.sceneDataObject
                boolean r0 = r0.checkArgs()
                return r0
            L59:
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = r4.message
                boolean r0 = r0.checkArgs()
                if (r0 == 0) goto L6a
                com.tencent.mm.opensdk.modelmsg.SendMessageToWX$IWXSceneDataObject r0 = r4.sceneDataObject
                boolean r0 = r0.checkArgs()
                if (r0 == 0) goto L6a
                r2 = 1
            L6a:
                return r2
            L6b:
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = r4.message
                boolean r0 = r0.checkArgs()
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r4) {
                r3 = this;
                super.fromBundle(r4)
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = com.tencent.mm.opensdk.modelmsg.WXMediaMessage.Builder.fromBundle(r4)
                r3.message = r0
                java.lang.String r0 = "_wxapi_sendmessagetowx_req_scene"
                int r0 = r4.getInt(r0)
                r3.scene = r0
                java.lang.String r0 = "_wxapi_sendmessagetowx_req_use_open_id"
                java.lang.String r0 = r4.getString(r0)
                r3.userOpenId = r0
                java.lang.String r0 = "_scene_data_object_identifier"
                java.lang.String r0 = r4.getString(r0)
                if (r0 == 0) goto L54
                java.lang.Class r1 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L31
                java.lang.Object r1 = r1.newInstance()     // Catch: java.lang.Exception -> L31
                com.tencent.mm.opensdk.modelmsg.SendMessageToWX$IWXSceneDataObject r1 = (com.tencent.mm.opensdk.modelmsg.SendMessageToWX.IWXSceneDataObject) r1     // Catch: java.lang.Exception -> L31
                r3.sceneDataObject = r1     // Catch: java.lang.Exception -> L31
                r1.unserialize(r4)     // Catch: java.lang.Exception -> L31
                goto L54
            L31:
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
                java.lang.String r0 = "MicroMsg.SDK.SendMessageToWX.Req"
                com.tencent.mm.opensdk.utils.Log.e(r0, r4)
            L54:
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 2
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = r2.message
                android.os.Bundle r0 = com.tencent.mm.opensdk.modelmsg.WXMediaMessage.Builder.toBundle(r0)
                r3.putAll(r0)
                int r0 = r2.scene
                java.lang.String r1 = "_wxapi_sendmessagetowx_req_scene"
                r3.putInt(r1, r0)
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = r2.message
                int r0 = r0.getType()
                java.lang.String r1 = "_wxapi_sendmessagetowx_req_media_type"
                r3.putInt(r1, r0)
                java.lang.String r0 = r2.userOpenId
                java.lang.String r1 = "_wxapi_sendmessagetowx_req_use_open_id"
                r3.putString(r1, r0)
                com.tencent.mm.opensdk.modelmsg.SendMessageToWX$IWXSceneDataObject r0 = r2.sceneDataObject
                if (r0 == 0) goto L3b
                java.lang.Class r0 = r0.getClass()
                java.lang.String r0 = r0.getName()
                java.lang.String r1 = "_scene_data_object_identifier"
                r3.putString(r1, r0)
                com.tencent.mm.opensdk.modelmsg.SendMessageToWX$IWXSceneDataObject r0 = r2.sceneDataObject
                r0.serialize(r3)
            L3b:
                return
        }
    }

    public static class Resp extends com.tencent.mm.opensdk.modelbase.BaseResp {
        public Resp() {
                r0 = this;
                r0.<init>()
                return
        }

        public Resp(android.os.Bundle r1) {
                r0 = this;
                r0.<init>()
                r0.fromBundle(r1)
                return
        }

        @Override
        public boolean checkArgs() {
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r1) {
                r0 = this;
                super.fromBundle(r1)
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 2
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r1) {
                r0 = this;
                super.toBundle(r1)
                return
        }
    }

    private SendMessageToWX() {
            r0 = this;
            r0.<init>()
            return
    }
}
