package com.tencent.mm.opensdk.modelbiz;

public class WXLaunchMiniProgramWithToken {

    public static final class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        private static final java.lang.String TAG = "MicroMsg.SDK.WXLaunchMiniProgramWithToken.Req";
        public java.lang.String token;

        public Req() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean checkArgs() {
                r2 = this;
                java.lang.String r0 = r2.token
                boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
                if (r0 == 0) goto L11
                java.lang.String r0 = "MicroMsg.SDK.WXLaunchMiniProgramWithToken.Req"
                java.lang.String r1 = "token is null"
                com.tencent.mm.opensdk.utils.Log.e(r0, r1)
                r0 = 0
                return r0
            L11:
                r0 = 1
                return r0
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 29
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.token
                java.lang.String r1 = "_launch_wxminiprogram_token"
                r3.putString(r1, r0)
                return
        }
    }

    public static final class Resp extends com.tencent.mm.opensdk.modelbase.BaseResp {
        public static final int ERR_INVALID_TOKEN = -1000;
        public java.lang.String extMsg;

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
                java.lang.String r0 = "_launch_wxminiprogram_ext_msg"
                java.lang.String r2 = r2.getString(r0)
                r1.extMsg = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 29
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.extMsg
                java.lang.String r1 = "_launch_wxminiprogram_ext_msg"
                r3.putString(r1, r0)
                return
        }
    }

    public WXLaunchMiniProgramWithToken() {
            r0 = this;
            r0.<init>()
            return
    }
}
