package com.tencent.mm.opensdk.modelpay;

public class JumpToOfflinePay {

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        private static final java.lang.String TAG = "MicroMsg.SDK.JumpToOfflinePay.Req";

        public Req() {
                r0 = this;
                r0.<init>()
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
                r0 = 24
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r1) {
                r0 = this;
                super.toBundle(r1)
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
                r0 = 24
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r1) {
                r0 = this;
                super.toBundle(r1)
                return
        }
    }

    public JumpToOfflinePay() {
            r0 = this;
            r0.<init>()
            return
    }
}
