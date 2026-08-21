package com.tencent.mm.opensdk.modelbiz;

public class WXPreloadMiniProgramEnvironment {

    public static final class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        private static final java.lang.String TAG = "MicroMsg.SDK.WXPreloadMiniProgramEnvironment.Req";
        public java.lang.String extData;

        public Req() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = ""
                r1.extData = r0
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
                r0 = 32
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.extData
                java.lang.String r1 = "_preload_wxminiprogram_environment_extData"
                r3.putString(r1, r0)
                return
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
                r0 = 32
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r1) {
                r0 = this;
                super.toBundle(r1)
                return
        }
    }

    public WXPreloadMiniProgramEnvironment() {
            r0 = this;
            r0.<init>()
            return
    }
}
