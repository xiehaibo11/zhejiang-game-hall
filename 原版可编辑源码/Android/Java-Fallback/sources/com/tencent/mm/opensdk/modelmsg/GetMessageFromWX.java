package com.tencent.mm.opensdk.modelmsg;

public final class GetMessageFromWX {

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        public java.lang.String country;
        public java.lang.String lang;
        public java.lang.String username;

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
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_wxapi_getmessage_req_lang"
                java.lang.String r0 = r2.getString(r0)
                r1.lang = r0
                java.lang.String r0 = "_wxapi_getmessage_req_country"
                java.lang.String r2 = r2.getString(r0)
                r1.country = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 3
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.lang
                java.lang.String r1 = "_wxapi_getmessage_req_lang"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.country
                java.lang.String r1 = "_wxapi_getmessage_req_country"
                r3.putString(r1, r0)
                return
        }
    }

    public static class Resp extends com.tencent.mm.opensdk.modelbase.BaseResp {
        private static final java.lang.String TAG = "MicroMsg.SDK.GetMessageFromWX.Resp";
        public com.tencent.mm.opensdk.modelmsg.WXMediaMessage message;

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
                r2 = this;
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = r2.message
                if (r0 != 0) goto Ld
                java.lang.String r0 = "MicroMsg.SDK.GetMessageFromWX.Resp"
                java.lang.String r1 = "checkArgs fail, message is null"
                com.tencent.mm.opensdk.utils.Log.e(r0, r1)
                r0 = 0
                return r0
            Ld:
                boolean r0 = r0.checkArgs()
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r1) {
                r0 = this;
                super.fromBundle(r1)
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r1 = com.tencent.mm.opensdk.modelmsg.WXMediaMessage.Builder.fromBundle(r1)
                r0.message = r1
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 3
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r2) {
                r1 = this;
                super.toBundle(r2)
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = r1.message
                android.os.Bundle r0 = com.tencent.mm.opensdk.modelmsg.WXMediaMessage.Builder.toBundle(r0)
                r2.putAll(r0)
                return
        }
    }

    private GetMessageFromWX() {
            r0 = this;
            r0.<init>()
            return
    }
}
