package com.tencent.mm.opensdk.modelbiz;

public final class SubscribeMessage {

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        private static final int LENGTH_LIMIT = 1024;
        private static final java.lang.String TAG = "MicroMsg.SDK.SubscribeMessage.Req";
        public java.lang.String reserved;
        public int scene;
        public java.lang.String templateID;

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
                java.lang.String r0 = r4.templateID
                r1 = 0
                java.lang.String r2 = "MicroMsg.SDK.SubscribeMessage.Req"
                if (r0 == 0) goto L2d
                int r0 = r0.length()
                if (r0 != 0) goto Le
                goto L2d
            Le:
                java.lang.String r0 = r4.templateID
                int r0 = r0.length()
                r3 = 1024(0x400, float:1.435E-42)
                if (r0 <= r3) goto L1e
                java.lang.String r0 = "checkArgs fail, templateID is too long"
            L1a:
                com.tencent.mm.opensdk.utils.Log.e(r2, r0)
                return r1
            L1e:
                java.lang.String r0 = r4.reserved
                if (r0 == 0) goto L2b
                int r0 = r0.length()
                if (r0 <= r3) goto L2b
                java.lang.String r0 = "checkArgs fail, reserved is too long"
                goto L1a
            L2b:
                r0 = 1
                return r0
            L2d:
                java.lang.String r0 = "checkArgs fail, templateID is null"
                goto L1a
        }

        @Override
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_wxapi_subscribemessage_req_scene"
                int r0 = r2.getInt(r0)
                r1.scene = r0
                java.lang.String r0 = "_wxapi_subscribemessage_req_templateid"
                java.lang.String r0 = r2.getString(r0)
                r1.templateID = r0
                java.lang.String r0 = "_wxapi_subscribemessage_req_reserved"
                java.lang.String r2 = r2.getString(r0)
                r1.reserved = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 18
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                int r0 = r2.scene
                java.lang.String r1 = "_wxapi_subscribemessage_req_scene"
                r3.putInt(r1, r0)
                java.lang.String r0 = r2.templateID
                java.lang.String r1 = "_wxapi_subscribemessage_req_templateid"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.reserved
                java.lang.String r1 = "_wxapi_subscribemessage_req_reserved"
                r3.putString(r1, r0)
                return
        }
    }

    public static class Resp extends com.tencent.mm.opensdk.modelbase.BaseResp {
        private static final java.lang.String TAG = "MicroMsg.SDK.SubscribeMessage.Resp";
        public java.lang.String action;
        public java.lang.String reserved;
        public int scene;
        public java.lang.String templateID;

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
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_wxapi_subscribemessage_resp_templateid"
                java.lang.String r0 = r2.getString(r0)
                r1.templateID = r0
                java.lang.String r0 = "_wxapi_subscribemessage_resp_scene"
                int r0 = r2.getInt(r0)
                r1.scene = r0
                java.lang.String r0 = "_wxapi_subscribemessage_resp_action"
                java.lang.String r0 = r2.getString(r0)
                r1.action = r0
                java.lang.String r0 = "_wxapi_subscribemessage_resp_reserved"
                java.lang.String r2 = r2.getString(r0)
                r1.reserved = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 18
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.templateID
                java.lang.String r1 = "_wxapi_subscribemessage_resp_templateid"
                r3.putString(r1, r0)
                int r0 = r2.scene
                java.lang.String r1 = "_wxapi_subscribemessage_resp_scene"
                r3.putInt(r1, r0)
                java.lang.String r0 = r2.action
                java.lang.String r1 = "_wxapi_subscribemessage_resp_action"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.reserved
                java.lang.String r1 = "_wxapi_subscribemessage_resp_reserved"
                r3.putString(r1, r0)
                return
        }
    }

    private SubscribeMessage() {
            r0 = this;
            r0.<init>()
            return
    }
}
