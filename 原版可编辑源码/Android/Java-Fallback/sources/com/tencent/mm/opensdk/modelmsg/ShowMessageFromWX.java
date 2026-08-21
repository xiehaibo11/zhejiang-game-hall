package com.tencent.mm.opensdk.modelmsg;

public class ShowMessageFromWX {

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        public java.lang.String country;
        public java.lang.String lang;
        public com.tencent.mm.opensdk.modelmsg.WXMediaMessage message;

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
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = r1.message
                if (r0 != 0) goto L6
                r0 = 0
                return r0
            L6:
                boolean r0 = r0.checkArgs()
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_wxapi_showmessage_req_lang"
                java.lang.String r0 = r2.getString(r0)
                r1.lang = r0
                java.lang.String r0 = "_wxapi_showmessage_req_country"
                java.lang.String r0 = r2.getString(r0)
                r1.country = r0
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r2 = com.tencent.mm.opensdk.modelmsg.WXMediaMessage.Builder.fromBundle(r2)
                r1.message = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 4
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r4) {
                r3 = this;
                com.tencent.mm.opensdk.modelmsg.WXMediaMessage r0 = r3.message
                android.os.Bundle r0 = com.tencent.mm.opensdk.modelmsg.WXMediaMessage.Builder.toBundle(r0)
                super.toBundle(r0)
                java.lang.String r1 = r3.lang
                java.lang.String r2 = "_wxapi_showmessage_req_lang"
                r4.putString(r2, r1)
                java.lang.String r1 = r3.country
                java.lang.String r2 = "_wxapi_showmessage_req_country"
                r4.putString(r2, r1)
                r4.putAll(r0)
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
                r0 = 4
                return r0
        }
    }

    private ShowMessageFromWX() {
            r0 = this;
            r0.<init>()
            return
    }
}
