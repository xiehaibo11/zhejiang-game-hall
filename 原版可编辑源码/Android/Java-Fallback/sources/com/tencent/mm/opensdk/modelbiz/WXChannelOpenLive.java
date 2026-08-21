package com.tencent.mm.opensdk.modelbiz;

public class WXChannelOpenLive {

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        private static final int LENGTH_LIMIT = 1024;
        private static final java.lang.String TAG = "MicroMsg.SDK.WXChannelOpenLive.Req";
        public java.lang.String feedID;
        public java.lang.String nonceID;

        public Req() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean checkArgs() {
                r4 = this;
                java.lang.String r0 = r4.feedID
                boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
                r1 = 0
                java.lang.String r2 = "MicroMsg.SDK.WXChannelOpenLive.Req"
                if (r0 == 0) goto L11
                java.lang.String r0 = "feedID is null"
            Ld:
                com.tencent.mm.opensdk.utils.Log.e(r2, r0)
                return r1
            L11:
                java.lang.String r0 = r4.nonceID
                boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
                if (r0 == 0) goto L1c
                java.lang.String r0 = "nonceID is null"
                goto Ld
            L1c:
                java.lang.String r0 = r4.feedID
                int r0 = r0.length()
                r3 = 1024(0x400, float:1.435E-42)
                if (r0 <= r3) goto L29
                java.lang.String r0 = "feedID.length too long!"
                goto Ld
            L29:
                java.lang.String r0 = r4.nonceID
                int r0 = r0.length()
                if (r0 <= r3) goto L34
                java.lang.String r0 = "nonceID.length too long!"
                goto Ld
            L34:
                r0 = 1
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r2) {
                r1 = this;
                super.fromBundle(r2)
                java.lang.String r0 = "_wxapi_finder_feedID"
                java.lang.String r0 = r2.getString(r0)
                r1.feedID = r0
                java.lang.String r0 = "_wxapi_finder_nonceID"
                java.lang.String r2 = r2.getString(r0)
                r1.nonceID = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 35
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.feedID
                java.lang.String r1 = "_wxapi_finder_feedID"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.nonceID
                java.lang.String r1 = "_wxapi_finder_nonceID"
                r3.putString(r1, r0)
                return
        }
    }

    public static class Resp extends com.tencent.mm.opensdk.modelbase.BaseResp {
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
                java.lang.String r0 = "_wxapi_finder_extMsg"
                java.lang.String r2 = r2.getString(r0)
                r1.extMsg = r2
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 35
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.extMsg
                java.lang.String r1 = "_wxapi_finder_extMsg"
                r3.putString(r1, r0)
                return
        }
    }

    public WXChannelOpenLive() {
            r0 = this;
            r0.<init>()
            return
    }
}
