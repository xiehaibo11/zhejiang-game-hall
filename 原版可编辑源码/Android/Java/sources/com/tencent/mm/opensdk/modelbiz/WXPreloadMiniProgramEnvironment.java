package com.tencent.mm.opensdk.modelbiz;

import android.os.Bundle;
import com.tencent.mm.opensdk.modelbase.BaseReq;
import com.tencent.mm.opensdk.modelbase.BaseResp;

public class WXPreloadMiniProgramEnvironment {

    public static final class Req extends BaseReq {
        private static final String TAG = "MicroMsg.SDK.WXPreloadMiniProgramEnvironment.Req";
        public String extData = "";

        @Override
        public boolean checkArgs() {
            return true;
        }

        @Override
        public int getType() {
            return 32;
        }

        @Override
        public void toBundle(Bundle bundle) {
            super.toBundle(bundle);
            bundle.putString("_preload_wxminiprogram_environment_extData", this.extData);
        }
    }

    public static final class Resp extends BaseResp {
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
            return 32;
        }

        @Override
        public void toBundle(Bundle bundle) {
            super.toBundle(bundle);
        }
    }
}
