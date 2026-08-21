package com.tencent.mm.opensdk.modelbiz;

public class WXChannelShareVideo {

    public static class Req extends com.tencent.mm.opensdk.modelbase.BaseReq {
        private static final int LENGTH_LIMIT = 1024;
        private static final java.lang.String TAG = "MicroMsg.SDK.WXChannelShareVideo.Req";
        private static final java.lang.String WX_CHANNEL_SHARE_VIDEO_JUMP_INFO_KEY_IDENTIFIER = "_wxapi_channel_share_video_jump_info_identifier";
        public java.lang.String extData;
        public com.tencent.mm.opensdk.modelbiz.IWXChannelJumpInfo jumpInfo;
        public java.lang.String videoPath;

        public Req() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean checkArgs() {
                r3 = this;
                java.lang.String r0 = r3.videoPath
                boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
                r1 = 0
                java.lang.String r2 = "MicroMsg.SDK.WXChannelShareVideo.Req"
                if (r0 == 0) goto L11
                java.lang.String r0 = "videoPath is null"
            Ld:
                com.tencent.mm.opensdk.utils.Log.e(r2, r0)
                return r1
            L11:
                com.tencent.mm.opensdk.modelbiz.IWXChannelJumpInfo r0 = r3.jumpInfo
                if (r0 == 0) goto L1e
                boolean r0 = r0.checkArgs()
                if (r0 != 0) goto L1e
                java.lang.String r0 = "checkArgs fail, jumpInfo is invalid"
                goto Ld
            L1e:
                r0 = 1
                return r0
        }

        @Override
        public void fromBundle(android.os.Bundle r4) {
                r3 = this;
                super.fromBundle(r4)
                java.lang.String r0 = "_wxapi_finder_share_video_path"
                java.lang.String r0 = r4.getString(r0)
                r3.videoPath = r0
                java.lang.String r0 = "_wxapi_finder_share_video_extData"
                java.lang.String r0 = r4.getString(r0)
                r3.extData = r0
                java.lang.String r0 = "_wxapi_channel_share_video_jump_info_identifier"
                java.lang.String r0 = r4.getString(r0)
                if (r0 == 0) goto L4e
                java.lang.Class r1 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L2b
                java.lang.Object r1 = r1.newInstance()     // Catch: java.lang.Exception -> L2b
                com.tencent.mm.opensdk.modelbiz.IWXChannelJumpInfo r1 = (com.tencent.mm.opensdk.modelbiz.IWXChannelJumpInfo) r1     // Catch: java.lang.Exception -> L2b
                r3.jumpInfo = r1     // Catch: java.lang.Exception -> L2b
                r1.unserialize(r4)     // Catch: java.lang.Exception -> L2b
                goto L4e
            L2b:
                r4 = move-exception
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "get WXChannelJumpInfo from bundle failed: unknown ident "
                r1.append(r2)
                r1.append(r0)
                java.lang.String r0 = ", ex = "
                r1.append(r0)
                java.lang.String r4 = r4.getMessage()
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                java.lang.String r0 = "MicroMsg.SDK.WXChannelShareVideo.Req"
                com.tencent.mm.opensdk.utils.Log.e(r0, r4)
            L4e:
                return
        }

        @Override
        public int getType() {
                r1 = this;
                r0 = 33
                return r0
        }

        @Override
        public void toBundle(android.os.Bundle r3) {
                r2 = this;
                super.toBundle(r3)
                java.lang.String r0 = r2.videoPath
                java.lang.String r1 = "_wxapi_finder_share_video_path"
                r3.putString(r1, r0)
                java.lang.String r0 = r2.extData
                java.lang.String r1 = "_wxapi_finder_share_video_extData"
                r3.putString(r1, r0)
                com.tencent.mm.opensdk.modelbiz.IWXChannelJumpInfo r0 = r2.jumpInfo
                if (r0 == 0) goto L27
                java.lang.Class r0 = r0.getClass()
                java.lang.String r0 = r0.getName()
                java.lang.String r1 = "_wxapi_channel_share_video_jump_info_identifier"
                r3.putString(r1, r0)
                com.tencent.mm.opensdk.modelbiz.IWXChannelJumpInfo r0 = r2.jumpInfo
                r0.serialize(r3)
            L27:
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
                r0 = 33
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

    public WXChannelShareVideo() {
            r0 = this;
            r0.<init>()
            return
    }
}
