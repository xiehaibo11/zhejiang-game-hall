package com.tencent.mm.opensdk.modelpay;

import android.os.Bundle;

public class WXJointPay {

    public static class JointPayReq extends PayReq {
        @Override
        public boolean checkArgs() {
            return super.checkArgs();
        }

        @Override
        public void fromBundle(Bundle bundle) {
            super.fromBundle(bundle);
        }

        @Override
        public int getType() {
            return 27;
        }

        @Override
        public void toBundle(Bundle bundle) {
            super.toBundle(bundle);
        }
    }

    public static class JointPayResp extends PayResp {
        public JointPayResp() {
        }

        public JointPayResp(Bundle bundle) {
            fromBundle(bundle);
        }

        @Override
        public boolean checkArgs() {
            return super.checkArgs();
        }

        @Override
        public void fromBundle(Bundle bundle) {
            super.fromBundle(bundle);
        }

        @Override
        public int getType() {
            return 27;
        }

        @Override
        public void toBundle(Bundle bundle) {
            super.toBundle(bundle);
        }
    }
}
