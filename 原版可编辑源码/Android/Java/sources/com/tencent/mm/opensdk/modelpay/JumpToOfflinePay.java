package com.tencent.mm.opensdk.modelpay;

import android.os.Bundle;
import com.tencent.mm.opensdk.modelbase.BaseReq;
import com.tencent.mm.opensdk.modelbase.BaseResp;

public class JumpToOfflinePay {

    public static class Req extends BaseReq {
        private static final String TAG = "MicroMsg.SDK.JumpToOfflinePay.Req";

        @Override
        public boolean checkArgs() {
            return true;
        }

        @Override
        public void fromBundle(Bundle bundle) {
            super.fromBundle(bundle);
        }

        @Override
        public int getType() {
            return 24;
        }

        @Override
        public void toBundle(Bundle bundle) {
            super.toBundle(bundle);
        }
    }

    public static class Resp extends BaseResp {
        public Resp() {
        }

        public Resp(Bundle bundle) {
            fromBundle(bundle);
        }

        @Override
        public boolean checkArgs() {
            return true;
        }

        @Override
        public void fromBundle(Bundle bundle) {
            super.fromBundle(bundle);
        }

        @Override
        public int getType() {
            return 24;
        }

        @Override
        public void toBundle(Bundle bundle) {
            super.toBundle(bundle);
        }
    }
}
