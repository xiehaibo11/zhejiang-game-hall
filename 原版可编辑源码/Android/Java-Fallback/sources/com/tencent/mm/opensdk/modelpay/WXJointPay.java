package com.tencent.mm.opensdk.modelpay;

public class WXJointPay {

    public static class JointPayReq extends com.tencent.mm.opensdk.modelpay.PayReq {
        public JointPayReq() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean checkArgs() {
                r1 = this;
                boolean r0 = super.checkArgs()
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
                r0 = 27
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r1) {
                r0 = this;
                super.toBundle(r1)
                return
        }
    }

    public static class JointPayResp extends com.tencent.mm.opensdk.modelpay.PayResp {
        public JointPayResp() {
                r0 = this;
                r0.<init>()
                return
        }

        public JointPayResp(android.os.Bundle r1) {
                r0 = this;
                r0.<init>()
                r0.fromBundle(r1)
                return
        }

        @Override
        public boolean checkArgs() {
                r1 = this;
                boolean r0 = super.checkArgs()
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
                r0 = 27
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r1) {
                r0 = this;
                super.toBundle(r1)
                return
        }
    }

    public WXJointPay() {
            r0 = this;
            r0.<init>()
            return
    }
}
