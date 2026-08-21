package com.tencent.mm.opensdk.modelmsg;

public final class SendAuth {

    public static class Options {
        public static final int INVALID_FLAGS = -1;
        public java.lang.String callbackClassName;
        public int callbackFlags;

        public Options() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.callbackFlags = r0
                return
        }

        public void fromBundle(android.os.Bundle r3) {
                r2 = this;
                java.lang.String r0 = "_wxapi_sendauth_options_callback_classname"
                java.lang.String r0 = com.tencent.mm.opensdk.channel.a.a.a(r3, r0)
                r2.callbackClassName = r0
                java.lang.String r0 = "_wxapi_sendauth_options_callback_flags"
                r1 = -1
                int r3 = com.tencent.mm.opensdk.channel.a.a.a(r3, r0, r1)
                r2.callbackFlags = r3
                return
        }

        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                java.lang.String r0 = r2.callbackClassName
                java.lang.String r1 = "_wxapi_sendauth_options_callback_classname"
                r3.putString(r1, r0)
                int r0 = r2.callbackFlags
                java.lang.String r1 = "_wxapi_sendauth_options_callback_flags"
                r3.putInt(r1, r0)
                return
        }
    }

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        private static final int LENGTH_LIMIT = 1024;
        private static final java.lang.String TAG = "MicroMsg.SDK.SendAuth.Req";
        public java.lang.String extData;
        public com.tencent.mm.opensdk.modelmsg.SendAuth.Options options;
        public java.lang.String scope;
        public java.lang.String state;

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
                java.lang.String r0 = r4.scope
                r1 = 0
                java.lang.String r2 = "MicroMsg.SDK.SendAuth.Req"
                if (r0 == 0) goto L2a
                int r0 = r0.length()
                if (r0 == 0) goto L2a
                java.lang.String r0 = r4.scope
                int r0 = r0.length()
                r3 = 1024(0x400, float:1.435E-42)
                if (r0 <= r3) goto L18
                goto L2a
            L18:
                java.lang.String r0 = r4.state
                if (r0 == 0) goto L28
                int r0 = r0.length()
                if (r0 <= r3) goto L28
                java.lang.String r0 = "checkArgs fail, state is invalid"
            L24:
                com.tencent.mm.opensdk.utils.Log.e(r2, r0)
                return r1
            L28:
                r0 = 1
                return r0
            L2a:
                java.lang.String r0 = "checkArgs fail, scope is invalid"
                goto L24
        }

        @Override
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_wxapi_sendauth_req_scope"
                java.lang.String r0 = r2.getString(r0)
                r1.scope = r0
                java.lang.String r0 = "_wxapi_sendauth_req_state"
                java.lang.String r0 = r2.getString(r0)
                r1.state = r0
                java.lang.String r0 = "_wxapi_sendauth_req_ext_data"
                java.lang.String r0 = r2.getString(r0)
                r1.extData = r0
                com.tencent.mm.opensdk.modelmsg.SendAuth$Options r0 = new com.tencent.mm.opensdk.modelmsg.SendAuth$Options
                r0.<init>()
                r1.options = r0
                r0.fromBundle(r2)
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.scope
                java.lang.String r1 = "_wxapi_sendauth_req_scope"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.state
                java.lang.String r1 = "_wxapi_sendauth_req_state"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.extData
                java.lang.String r1 = "_wxapi_sendauth_req_ext_data"
                r3.putString(r1, r0)
                com.tencent.mm.opensdk.modelmsg.SendAuth$Options r0 = r2.options
                if (r0 == 0) goto L1f
                r0.toBundle(r3)
            L1f:
                return
        }
    }

    public static class Resp extends com.tencent.mm.opensdk.modelbase.BaseResp {
        public static final int ERR_SCOPE_SNSAPI_WXAAPP_INFO_CAN_ONLY_AUTHORIZED_SEPARATELY = -1000;
        private static final int LENGTH_LIMIT = 1024;
        private static final java.lang.String TAG = "MicroMsg.SDK.SendAuth.Resp";
        public boolean authResult;
        public java.lang.String code;
        public java.lang.String country;
        public java.lang.String lang;
        public java.lang.String state;
        public java.lang.String url;

        public Resp() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.authResult = r0
                return
        }

        public Resp(android.os.Bundle r2) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.authResult = r0
                r1.fromBundle(r2)
                return
        }

        @Override
        public boolean checkArgs() {
                r2 = this;
                java.lang.String r0 = r2.state
                if (r0 == 0) goto L15
                int r0 = r0.length()
                r1 = 1024(0x400, float:1.435E-42)
                if (r0 <= r1) goto L15
                java.lang.String r0 = "MicroMsg.SDK.SendAuth.Resp"
                java.lang.String r1 = "checkArgs fail, state is invalid"
                com.tencent.mm.opensdk.utils.Log.e(r0, r1)
                r0 = 0
                return r0
            L15:
                r0 = 1
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_wxapi_sendauth_resp_token"
                java.lang.String r0 = r2.getString(r0)
                r1.code = r0
                java.lang.String r0 = "_wxapi_sendauth_resp_state"
                java.lang.String r0 = r2.getString(r0)
                r1.state = r0
                java.lang.String r0 = "_wxapi_sendauth_resp_url"
                java.lang.String r0 = r2.getString(r0)
                r1.url = r0
                java.lang.String r0 = "_wxapi_sendauth_resp_lang"
                java.lang.String r0 = r2.getString(r0)
                r1.lang = r0
                java.lang.String r0 = "_wxapi_sendauth_resp_country"
                java.lang.String r0 = r2.getString(r0)
                r1.country = r0
                java.lang.String r0 = "_wxapi_sendauth_resp_auth_result"
                boolean r2 = r2.getBoolean(r0)
                r1.authResult = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.code
                java.lang.String r1 = "_wxapi_sendauth_resp_token"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.state
                java.lang.String r1 = "_wxapi_sendauth_resp_state"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.url
                java.lang.String r1 = "_wxapi_sendauth_resp_url"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.lang
                java.lang.String r1 = "_wxapi_sendauth_resp_lang"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.country
                java.lang.String r1 = "_wxapi_sendauth_resp_country"
                r3.putString(r1, r0)
                boolean r0 = r2.authResult
                java.lang.String r1 = "_wxapi_sendauth_resp_auth_result"
                r3.putBoolean(r1, r0)
                return
        }
    }

    private SendAuth() {
            r0 = this;
            r0.<init>()
            return
    }
}
