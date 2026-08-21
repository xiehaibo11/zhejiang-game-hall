package com.tencent.mm.opensdk.modelmsg;

public class LaunchFromWX {

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        private static final int MESSAGE_ACTION_LENGTH_LIMIT = 2048;
        private static final int MESSAGE_EXT_LENGTH_LIMIT = 2048;
        private static final java.lang.String TAG = "MicroMsg.SDK.LaunchFromWX.Req";
        public java.lang.String country;
        public java.lang.String lang;
        public java.lang.String messageAction;
        public java.lang.String messageExt;

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
                java.lang.String r0 = r4.messageAction
                r1 = 0
                java.lang.String r2 = "MicroMsg.SDK.LaunchFromWX.Req"
                r3 = 2048(0x800, float:2.87E-42)
                if (r0 == 0) goto L15
                int r0 = r0.length()
                if (r0 <= r3) goto L15
                java.lang.String r0 = "checkArgs fail, messageAction is too long"
            L11:
                com.tencent.mm.opensdk.utils.Log.e(r2, r0)
                return r1
            L15:
                java.lang.String r0 = r4.messageExt
                if (r0 == 0) goto L22
                int r0 = r0.length()
                if (r0 <= r3) goto L22
                java.lang.String r0 = "checkArgs fail, messageExt is too long"
                goto L11
            L22:
                r0 = 1
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_wxobject_message_action"
                java.lang.String r0 = r2.getString(r0)
                r1.messageAction = r0
                java.lang.String r0 = "_wxobject_message_ext"
                java.lang.String r0 = r2.getString(r0)
                r1.messageExt = r0
                java.lang.String r0 = "_wxapi_launch_req_lang"
                java.lang.String r0 = r2.getString(r0)
                r1.lang = r0
                java.lang.String r0 = "_wxapi_launch_req_country"
                java.lang.String r2 = r2.getString(r0)
                r1.country = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 6
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.messageAction
                java.lang.String r1 = "_wxobject_message_action"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.messageExt
                java.lang.String r1 = "_wxobject_message_ext"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.lang
                java.lang.String r1 = "_wxapi_launch_req_lang"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.country
                java.lang.String r1 = "_wxapi_launch_req_country"
                r3.putString(r1, r0)
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
        public int getType() {
                r1 = this;
                r0 = 6
                return r0
        }
    }

    private LaunchFromWX() {
            r0 = this;
            r0.<init>()
            return
    }
}
