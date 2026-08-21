package com.tencent.mm.opensdk.modelbiz;

public class WXQRCodePay {

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        private static final java.lang.String TAG = "MicroMsg.SDK.WXQRCodePayReq.Req";
        public java.lang.String codeContent;
        public java.lang.String extraMsg;

        public Req() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean checkArgs() {
                r1 = this;
                java.lang.String r0 = r1.codeContent
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                r0 = r0 ^ 1
                return r0
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 38
                return r0
        }
    }

    public static final class Resp extends com.tencent.mm.opensdk.modelbase.BaseResp {
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
                r0 = 38
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r1) {
                r0 = this;
                super.toBundle(r1)
                return
        }
    }

    public WXQRCodePay() {
            r0 = this;
            r0.<init>()
            return
    }
}
