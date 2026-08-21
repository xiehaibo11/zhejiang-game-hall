package com.bykv.vk.openvk;

public class VfSlot implements com.bykv.vk.openvk.TTAdSlot {
    private int b;
    private java.lang.String bm;
    private int c;
    private int df;
    private int f;
    private java.lang.String fo;
    private boolean fw;
    private int hq;
    private com.bykv.vk.openvk.TTAdLoadType l;
    private java.lang.String n;
    private int oh;
    private java.lang.String ou;
    private float pp;
    private float pt;
    private int q;
    private java.lang.String qx;
    private int r;
    private java.lang.String re;
    private java.lang.String rg;
    private java.lang.String rz;
    private int[] un;
    private boolean ux;
    private boolean v;
    private java.lang.String y;
    private java.lang.String z;

    static class 1 {
    }

    public static class Builder {
        private java.lang.String b;
        private int bm;
        private int c;
        private int df;
        private float f;
        private java.lang.String fo;
        private java.lang.String fw;
        private int hq;
        private java.lang.String n;
        private float oh;
        private com.bykv.vk.openvk.TTAdLoadType ou;
        private boolean pp;
        private boolean pt;
        private int q;
        private java.lang.String qx;
        private java.lang.String r;
        private java.lang.String re;
        private java.lang.String rg;
        private int rz;
        private int[] un;
        private java.lang.String ux;
        private boolean v;
        private java.lang.String y;
        private int z;

        public Builder() {
                r2 = this;
                r2.<init>()
                r0 = 640(0x280, float:8.97E-43)
                r2.df = r0
                r0 = 320(0x140, float:4.48E-43)
                r2.q = r0
                r0 = 1
                r2.pt = r0
                r1 = 0
                r2.pp = r1
                r2.c = r0
                java.lang.String r1 = "defaultUser"
                r2.ux = r1
                r1 = 2
                r2.rz = r1
                r2.v = r0
                com.bykv.vk.openvk.TTAdLoadType r0 = com.bykv.vk.openvk.TTAdLoadType.UNKNOWN
                r2.ou = r0
                return
        }

        public com.bykv.vk.openvk.VfSlot build() {
                r3 = this;
                com.bykv.vk.openvk.VfSlot r0 = new com.bykv.vk.openvk.VfSlot
                r1 = 0
                r0.<init>(r1)
                java.lang.String r1 = r3.rg
                com.bykv.vk.openvk.VfSlot.rg(r0, r1)
                int r1 = r3.c
                com.bykv.vk.openvk.VfSlot.rg(r0, r1)
                boolean r1 = r3.pt
                com.bykv.vk.openvk.VfSlot.rg(r0, r1)
                boolean r1 = r3.pp
                com.bykv.vk.openvk.VfSlot.df(r0, r1)
                int r1 = r3.df
                com.bykv.vk.openvk.VfSlot.df(r0, r1)
                int r1 = r3.q
                com.bykv.vk.openvk.VfSlot.q(r0, r1)
                float r1 = r3.oh
                r2 = 0
                int r2 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
                if (r2 > 0) goto L38
                int r1 = r3.df
                float r1 = (float) r1
                com.bykv.vk.openvk.VfSlot.rg(r0, r1)
                int r1 = r3.q
                float r1 = (float) r1
                com.bykv.vk.openvk.VfSlot.df(r0, r1)
                goto L40
            L38:
                com.bykv.vk.openvk.VfSlot.rg(r0, r1)
                float r1 = r3.f
                com.bykv.vk.openvk.VfSlot.df(r0, r1)
            L40:
                java.lang.String r1 = r3.fw
                com.bykv.vk.openvk.VfSlot.df(r0, r1)
                java.lang.String r1 = r3.ux
                com.bykv.vk.openvk.VfSlot.q(r0, r1)
                int r1 = r3.rz
                com.bykv.vk.openvk.VfSlot.pt(r0, r1)
                int r1 = r3.bm
                com.bykv.vk.openvk.VfSlot.pp(r0, r1)
                boolean r1 = r3.v
                com.bykv.vk.openvk.VfSlot.q(r0, r1)
                int[] r1 = r3.un
                com.bykv.vk.openvk.VfSlot.rg(r0, r1)
                int r1 = r3.z
                com.bykv.vk.openvk.VfSlot.c(r0, r1)
                java.lang.String r1 = r3.r
                com.bykv.vk.openvk.VfSlot.pt(r0, r1)
                java.lang.String r1 = r3.b
                com.bykv.vk.openvk.VfSlot.pp(r0, r1)
                java.lang.String r1 = r3.y
                com.bykv.vk.openvk.VfSlot.c(r0, r1)
                java.lang.String r1 = r3.fo
                com.bykv.vk.openvk.VfSlot.fw(r0, r1)
                java.lang.String r1 = r3.re
                com.bykv.vk.openvk.VfSlot.ux(r0, r1)
                int r1 = r3.hq
                com.bykv.vk.openvk.VfSlot.fw(r0, r1)
                java.lang.String r1 = r3.qx
                com.bykv.vk.openvk.VfSlot.rz(r0, r1)
                java.lang.String r1 = r3.n
                com.bykv.vk.openvk.VfSlot.bm(r0, r1)
                com.bykv.vk.openvk.TTAdLoadType r1 = r3.ou
                com.bykv.vk.openvk.VfSlot.rg(r0, r1)
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setAdCount(int r3) {
                r2 = this;
                java.lang.String r0 = "TT_AD_SDK"
                if (r3 > 0) goto La
                r3 = 1
                java.lang.String r1 = "setAdCount: adCount must greater than 0 "
                com.bykv.vk.openvk.api.rg.q(r0, r1)
            La:
                r1 = 20
                if (r3 <= r1) goto L14
                java.lang.String r3 = "setAdCount: adCount must less than or equal to 20 "
                com.bykv.vk.openvk.api.rg.q(r0, r3)
                r3 = r1
            L14:
                r2.c = r3
                return r2
        }

        public com.bykv.vk.openvk.VfSlot.Builder setAdId(java.lang.String r1) {
                r0 = this;
                r0.y = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setAdLoadType(com.bykv.vk.openvk.TTAdLoadType r1) {
                r0 = this;
                r0.ou = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setAdType(int r1) {
                r0 = this;
                r0.hq = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setAdloadSeq(int r1) {
                r0 = this;
                r0.z = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setCodeId(java.lang.String r1) {
                r0 = this;
                r0.rg = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setCreativeId(java.lang.String r1) {
                r0 = this;
                r0.fo = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setExpressViewAcceptedSize(float r1, float r2) {
                r0 = this;
                r0.oh = r1
                r0.f = r2
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setExt(java.lang.String r1) {
                r0 = this;
                r0.re = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setExternalABVid(int... r1) {
                r0 = this;
                r0.un = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setExtraParam(java.lang.String r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setImageAcceptedSize(int r1, int r2) {
                r0 = this;
                r0.df = r1
                r0.q = r2
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setIsAutoPlay(boolean r1) {
                r0 = this;
                r0.v = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setMediaExtra(java.lang.String r1) {
                r0 = this;
                r0.fw = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setNativeAdType(int r1) {
                r0 = this;
                r0.bm = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setOrientation(int r1) {
                r0 = this;
                r0.rz = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setPrimeRit(java.lang.String r1) {
                r0 = this;
                r0.r = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setSupportDeepLink(boolean r1) {
                r0 = this;
                r0.pt = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setUserData(java.lang.String r1) {
                r0 = this;
                r0.n = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder setUserID(java.lang.String r1) {
                r0 = this;
                r0.ux = r1
                return r0
        }

        public com.bykv.vk.openvk.VfSlot.Builder supportRenderControl() {
                r1 = this;
                r0 = 1
                r1.pp = r0
                return r1
        }

        public com.bykv.vk.openvk.VfSlot.Builder withBid(java.lang.String r1) {
                r0 = this;
                if (r1 != 0) goto L3
                return r0
            L3:
                r0.qx = r1
                return r0
        }
    }

    private VfSlot() {
            r1 = this;
            r1.<init>()
            r0 = 2
            r1.b = r0
            r0 = 1
            r1.v = r0
            return
    }

    VfSlot(com.bykv.vk.openvk.VfSlot.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String bm(com.bykv.vk.openvk.VfSlot r0, java.lang.String r1) {
            r0.re = r1
            return r1
    }

    static int c(com.bykv.vk.openvk.VfSlot r0, int r1) {
            r0.r = r1
            return r1
    }

    static java.lang.String c(com.bykv.vk.openvk.VfSlot r0, java.lang.String r1) {
            r0.ou = r1
            return r1
    }

    static float df(com.bykv.vk.openvk.VfSlot r0, float r1) {
            r0.pp = r1
            return r1
    }

    static int df(com.bykv.vk.openvk.VfSlot r0, int r1) {
            r0.df = r1
            return r1
    }

    static java.lang.String df(com.bykv.vk.openvk.VfSlot r0, java.lang.String r1) {
            r0.rz = r1
            return r1
    }

    static boolean df(com.bykv.vk.openvk.VfSlot r0, boolean r1) {
            r0.ux = r1
            return r1
    }

    static int fw(com.bykv.vk.openvk.VfSlot r0, int r1) {
            r0.hq = r1
            return r1
    }

    static java.lang.String fw(com.bykv.vk.openvk.VfSlot r0, java.lang.String r1) {
            r0.y = r1
            return r1
    }

    static int pp(com.bykv.vk.openvk.VfSlot r0, int r1) {
            r0.oh = r1
            return r1
    }

    static java.lang.String pp(com.bykv.vk.openvk.VfSlot r0, java.lang.String r1) {
            r0.z = r1
            return r1
    }

    static int pt(com.bykv.vk.openvk.VfSlot r0, int r1) {
            r0.b = r1
            return r1
    }

    static java.lang.String pt(com.bykv.vk.openvk.VfSlot r0, java.lang.String r1) {
            r0.qx = r1
            return r1
    }

    static int q(com.bykv.vk.openvk.VfSlot r0, int r1) {
            r0.q = r1
            return r1
    }

    static java.lang.String q(com.bykv.vk.openvk.VfSlot r0, java.lang.String r1) {
            r0.bm = r1
            return r1
    }

    static boolean q(com.bykv.vk.openvk.VfSlot r0, boolean r1) {
            r0.v = r1
            return r1
    }

    static float rg(com.bykv.vk.openvk.VfSlot r0, float r1) {
            r0.pt = r1
            return r1
    }

    static int rg(com.bykv.vk.openvk.VfSlot r0, int r1) {
            r0.c = r1
            return r1
    }

    static com.bykv.vk.openvk.TTAdLoadType rg(com.bykv.vk.openvk.VfSlot r0, com.bykv.vk.openvk.TTAdLoadType r1) {
            r0.l = r1
            return r1
    }

    static java.lang.String rg(com.bykv.vk.openvk.VfSlot r0, java.lang.String r1) {
            r0.rg = r1
            return r1
    }

    private java.lang.String rg(java.lang.String r3, int r4) {
            r2 = this;
            r0 = 1
            if (r4 >= r0) goto L4
            return r3
        L4:
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L1f
            if (r0 == 0) goto L10
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1f
            r0.<init>()     // Catch: org.json.JSONException -> L1f
            goto L15
        L10:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1f
            r0.<init>(r3)     // Catch: org.json.JSONException -> L1f
        L15:
            java.lang.String r1 = "_tt_group_load_more"
            r0.put(r1, r4)     // Catch: org.json.JSONException -> L1f
            java.lang.String r3 = r0.toString()     // Catch: org.json.JSONException -> L1f
            goto L23
        L1f:
            r4 = move-exception
            r4.printStackTrace()
        L23:
            return r3
    }

    static boolean rg(com.bykv.vk.openvk.VfSlot r0, boolean r1) {
            r0.fw = r1
            return r1
    }

    static int[] rg(com.bykv.vk.openvk.VfSlot r0, int[] r1) {
            r0.un = r1
            return r1
    }

    static java.lang.String rz(com.bykv.vk.openvk.VfSlot r0, java.lang.String r1) {
            r0.n = r1
            return r1
    }

    static java.lang.String ux(com.bykv.vk.openvk.VfSlot r0, java.lang.String r1) {
            r0.fo = r1
            return r1
    }

    @Override
    public int getAdCount() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    @Override
    public java.lang.String getAdId() {
            r1 = this;
            java.lang.String r0 = r1.ou
            return r0
    }

    @Override
    public com.bykv.vk.openvk.TTAdLoadType getAdLoadType() {
            r1 = this;
            com.bykv.vk.openvk.TTAdLoadType r0 = r1.l
            return r0
    }

    @Override
    public int getAdType() {
            r1 = this;
            int r0 = r1.hq
            return r0
    }

    @Override
    public int getAdloadSeq() {
            r1 = this;
            int r0 = r1.r
            return r0
    }

    @Override
    public java.lang.String getBidAdm() {
            r1 = this;
            java.lang.String r0 = r1.n
            return r0
    }

    @Override
    public java.lang.String getCodeId() {
            r1 = this;
            java.lang.String r0 = r1.rg
            return r0
    }

    @Override
    public java.lang.String getCreativeId() {
            r1 = this;
            java.lang.String r0 = r1.y
            return r0
    }

    @Override
    public int getDurationSlotType() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    @Override
    public float getExpressViewAcceptedHeight() {
            r1 = this;
            float r0 = r1.pp
            return r0
    }

    @Override
    public float getExpressViewAcceptedWidth() {
            r1 = this;
            float r0 = r1.pt
            return r0
    }

    @Override
    public java.lang.String getExt() {
            r1 = this;
            java.lang.String r0 = r1.fo
            return r0
    }

    @Override
    public int[] getExternalABVid() {
            r1 = this;
            int[] r0 = r1.un
            return r0
    }

    @Override
    public java.lang.String getExtraSmartLookParam() {
            r1 = this;
            java.lang.String r0 = r1.z
            return r0
    }

    @Override
    public int getImgAcceptedHeight() {
            r1 = this;
            int r0 = r1.q
            return r0
    }

    @Override
    public int getImgAcceptedWidth() {
            r1 = this;
            int r0 = r1.df
            return r0
    }

    @Override
    public java.lang.String getMediaExtra() {
            r1 = this;
            java.lang.String r0 = r1.rz
            return r0
    }

    @Override
    public int getNativeAdType() {
            r1 = this;
            int r0 = r1.oh
            return r0
    }

    @Override
    public int getOrientation() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    @Override
    public java.lang.String getPrimeRit() {
            r1 = this;
            java.lang.String r0 = r1.qx
            if (r0 != 0) goto L6
            java.lang.String r0 = ""
        L6:
            return r0
    }

    @Override
    public java.lang.String getUserData() {
            r1 = this;
            java.lang.String r0 = r1.re
            return r0
    }

    @Override
    public java.lang.String getUserID() {
            r1 = this;
            java.lang.String r0 = r1.bm
            return r0
    }

    @Override
    public boolean isAutoPlay() {
            r1 = this;
            boolean r0 = r1.v
            return r0
    }

    @Override
    public boolean isSupportDeepLink() {
            r1 = this;
            boolean r0 = r1.fw
            return r0
    }

    @Override
    public boolean isSupportRenderConrol() {
            r1 = this;
            boolean r0 = r1.ux
            return r0
    }

    @Override
    public void setAdCount(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setAdLoadType(com.bykv.vk.openvk.TTAdLoadType r1) {
            r0 = this;
            r0.l = r1
            return
    }

    @Override
    public void setDurationSlotType(int r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setExternalABVid(int... r1) {
            r0 = this;
            r0.un = r1
            return
    }

    public void setGroupLoadMore(int r2) {
            r1 = this;
            java.lang.String r0 = r1.rz
            java.lang.String r2 = r1.rg(r0, r2)
            r1.rz = r2
            return
    }

    @Override
    public void setNativeAdType(int r1) {
            r0 = this;
            r0.oh = r1
            return
    }

    public void setUserData(java.lang.String r1) {
            r0 = this;
            r0.re = r1
            return
    }

    public org.json.JSONObject toJsonObj() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "mCodeId"
            java.lang.String r2 = r4.rg     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mIsAutoPlay"
            boolean r2 = r4.v     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mImgAcceptedWidth"
            int r2 = r4.df     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mImgAcceptedHeight"
            int r2 = r4.q     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mExpressViewAcceptedWidth"
            float r2 = r4.pt     // Catch: java.lang.Exception -> La1
            double r2 = (double) r2     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mExpressViewAcceptedHeight"
            float r2 = r4.pp     // Catch: java.lang.Exception -> La1
            double r2 = (double) r2     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mAdCount"
            int r2 = r4.c     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mSupportDeepLink"
            boolean r2 = r4.fw     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mSupportRenderControl"
            boolean r2 = r4.ux     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mMediaExtra"
            java.lang.String r2 = r4.rz     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mUserID"
            java.lang.String r2 = r4.bm     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mOrientation"
            int r2 = r4.b     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mNativeAdType"
            int r2 = r4.oh     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mAdloadSeq"
            int r2 = r4.r     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mPrimeRit"
            java.lang.String r2 = r4.qx     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mExtraSmartLookParam"
            java.lang.String r2 = r4.z     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mAdId"
            java.lang.String r2 = r4.ou     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mCreativeId"
            java.lang.String r2 = r4.y     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mExt"
            java.lang.String r2 = r4.fo     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mBidAdm"
            java.lang.String r2 = r4.n     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mUserData"
            java.lang.String r2 = r4.re     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r1 = "mAdLoadType"
            com.bykv.vk.openvk.TTAdLoadType r2 = r4.l     // Catch: java.lang.Exception -> La1
            r0.put(r1, r2)     // Catch: java.lang.Exception -> La1
        La1:
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "AdSlot{mCodeId='"
            r0.append(r1)
            java.lang.String r1 = r3.rg
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", mImgAcceptedWidth="
            r0.append(r2)
            int r2 = r3.df
            r0.append(r2)
            java.lang.String r2 = ", mImgAcceptedHeight="
            r0.append(r2)
            int r2 = r3.q
            r0.append(r2)
            java.lang.String r2 = ", mExpressViewAcceptedWidth="
            r0.append(r2)
            float r2 = r3.pt
            r0.append(r2)
            java.lang.String r2 = ", mExpressViewAcceptedHeight="
            r0.append(r2)
            float r2 = r3.pp
            r0.append(r2)
            java.lang.String r2 = ", mAdCount="
            r0.append(r2)
            int r2 = r3.c
            r0.append(r2)
            java.lang.String r2 = ", mSupportDeepLink="
            r0.append(r2)
            boolean r2 = r3.fw
            r0.append(r2)
            java.lang.String r2 = ", mSupportRenderControl="
            r0.append(r2)
            boolean r2 = r3.ux
            r0.append(r2)
            java.lang.String r2 = ", mMediaExtra='"
            r0.append(r2)
            java.lang.String r2 = r3.rz
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mUserID='"
            r0.append(r2)
            java.lang.String r2 = r3.bm
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", mOrientation="
            r0.append(r1)
            int r1 = r3.b
            r0.append(r1)
            java.lang.String r1 = ", mNativeAdType="
            r0.append(r1)
            int r1 = r3.oh
            r0.append(r1)
            java.lang.String r1 = ", mIsAutoPlay="
            r0.append(r1)
            boolean r1 = r3.v
            r0.append(r1)
            java.lang.String r1 = ", mPrimeRit"
            r0.append(r1)
            java.lang.String r1 = r3.qx
            r0.append(r1)
            java.lang.String r1 = ", mAdloadSeq"
            r0.append(r1)
            int r1 = r3.r
            r0.append(r1)
            java.lang.String r1 = ", mAdId"
            r0.append(r1)
            java.lang.String r1 = r3.ou
            r0.append(r1)
            java.lang.String r1 = ", mCreativeId"
            r0.append(r1)
            java.lang.String r1 = r3.y
            r0.append(r1)
            java.lang.String r1 = ", mExt"
            r0.append(r1)
            java.lang.String r1 = r3.fo
            r0.append(r1)
            java.lang.String r1 = ", mUserData"
            r0.append(r1)
            java.lang.String r1 = r3.re
            r0.append(r1)
            java.lang.String r1 = ", mAdLoadType"
            r0.append(r1)
            com.bykv.vk.openvk.TTAdLoadType r1 = r3.l
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
