package com.bykv.vk.openvk;

import android.text.TextUtils;
import com.bykv.vk.openvk.api.rg;
import org.json.JSONException;
import org.json.JSONObject;

public class VfSlot implements TTAdSlot {
    private int b;
    private String bm;
    private int c;
    private int df;
    private int f;
    private String fo;
    private boolean fw;
    private int hq;
    private TTAdLoadType l;
    private String n;
    private int oh;
    private String ou;
    private float pp;
    private float pt;
    private int q;
    private String qx;
    private int r;
    private String re;
    private String rg;
    private String rz;
    private int[] un;
    private boolean ux;
    private boolean v;
    private String y;
    private String z;

    private VfSlot() {
        this.b = 2;
        this.v = true;
    }

    @Override
    public String getAdId() {
        return this.ou;
    }

    @Override
    public String getCreativeId() {
        return this.y;
    }

    @Override
    public String getExt() {
        return this.fo;
    }

    @Override
    public String getCodeId() {
        return this.rg;
    }

    @Override
    public boolean isAutoPlay() {
        return this.v;
    }

    @Override
    public int getImgAcceptedWidth() {
        return this.df;
    }

    @Override
    public int getImgAcceptedHeight() {
        return this.q;
    }

    @Override
    public float getExpressViewAcceptedWidth() {
        return this.pt;
    }

    @Override
    public float getExpressViewAcceptedHeight() {
        return this.pp;
    }

    @Override
    public boolean isSupportDeepLink() {
        return this.fw;
    }

    @Override
    public boolean isSupportRenderConrol() {
        return this.ux;
    }

    @Override
    public int getAdCount() {
        return this.c;
    }

    @Override
    public void setAdCount(int i) {
        this.c = i;
    }

    @Override
    public String getMediaExtra() {
        return this.rz;
    }

    @Override
    public String getUserID() {
        return this.bm;
    }

    @Override
    public int getOrientation() {
        return this.b;
    }

    @Override
    public int getNativeAdType() {
        return this.oh;
    }

    @Override
    public void setNativeAdType(int i) {
        this.oh = i;
    }

    @Override
    public void setDurationSlotType(int i) {
        this.f = i;
    }

    @Override
    public int getDurationSlotType() {
        return this.f;
    }

    @Override
    public int[] getExternalABVid() {
        return this.un;
    }

    public void setExternalABVid(int... iArr) {
        this.un = iArr;
    }

    @Override
    public int getAdloadSeq() {
        return this.r;
    }

    @Override
    public String getPrimeRit() {
        String str = this.qx;
        return str == null ? "" : str;
    }

    @Override
    public int getAdType() {
        return this.hq;
    }

    @Override
    public String getBidAdm() {
        return this.n;
    }

    @Override
    public String getExtraSmartLookParam() {
        return this.z;
    }

    public void setUserData(String str) {
        this.re = str;
    }

    @Override
    public String getUserData() {
        return this.re;
    }

    @Override
    public TTAdLoadType getAdLoadType() {
        return this.l;
    }

    public void setAdLoadType(TTAdLoadType tTAdLoadType) {
        this.l = tTAdLoadType;
    }

    public void setGroupLoadMore(int i) {
        this.rz = rg(this.rz, i);
    }

    public String toString() {
        return "AdSlot{mCodeId='" + this.rg + "', mImgAcceptedWidth=" + this.df + ", mImgAcceptedHeight=" + this.q + ", mExpressViewAcceptedWidth=" + this.pt + ", mExpressViewAcceptedHeight=" + this.pp + ", mAdCount=" + this.c + ", mSupportDeepLink=" + this.fw + ", mSupportRenderControl=" + this.ux + ", mMediaExtra='" + this.rz + "', mUserID='" + this.bm + "', mOrientation=" + this.b + ", mNativeAdType=" + this.oh + ", mIsAutoPlay=" + this.v + ", mPrimeRit" + this.qx + ", mAdloadSeq" + this.r + ", mAdId" + this.ou + ", mCreativeId" + this.y + ", mExt" + this.fo + ", mUserData" + this.re + ", mAdLoadType" + this.l + '}';
    }

    public JSONObject toJsonObj() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("mCodeId", this.rg);
            jSONObject.put("mIsAutoPlay", this.v);
            jSONObject.put("mImgAcceptedWidth", this.df);
            jSONObject.put("mImgAcceptedHeight", this.q);
            jSONObject.put("mExpressViewAcceptedWidth", this.pt);
            jSONObject.put("mExpressViewAcceptedHeight", this.pp);
            jSONObject.put("mAdCount", this.c);
            jSONObject.put("mSupportDeepLink", this.fw);
            jSONObject.put("mSupportRenderControl", this.ux);
            jSONObject.put("mMediaExtra", this.rz);
            jSONObject.put("mUserID", this.bm);
            jSONObject.put("mOrientation", this.b);
            jSONObject.put("mNativeAdType", this.oh);
            jSONObject.put("mAdloadSeq", this.r);
            jSONObject.put("mPrimeRit", this.qx);
            jSONObject.put("mExtraSmartLookParam", this.z);
            jSONObject.put("mAdId", this.ou);
            jSONObject.put("mCreativeId", this.y);
            jSONObject.put("mExt", this.fo);
            jSONObject.put("mBidAdm", this.n);
            jSONObject.put("mUserData", this.re);
            jSONObject.put("mAdLoadType", this.l);
        } catch (Exception unused) {
        }
        return jSONObject;
    }

    public static class Builder {
        private String b;
        private int bm;
        private float f;
        private String fo;
        private String fw;
        private int hq;
        private String n;
        private float oh;
        private String qx;
        private String r;
        private String re;
        private String rg;
        private int[] un;
        private String y;
        private int z;
        private int df = 640;
        private int q = 320;
        private boolean pt = true;
        private boolean pp = false;
        private int c = 1;
        private String ux = "defaultUser";
        private int rz = 2;
        private boolean v = true;
        private TTAdLoadType ou = TTAdLoadType.UNKNOWN;

        public Builder setExtraParam(String str) {
            this.b = str;
            return this;
        }

        public Builder setAdType(int i) {
            this.hq = i;
            return this;
        }

        public Builder setAdId(String str) {
            this.y = str;
            return this;
        }

        public Builder setCreativeId(String str) {
            this.fo = str;
            return this;
        }

        public Builder setExt(String str) {
            this.re = str;
            return this;
        }

        public Builder setIsAutoPlay(boolean z) {
            this.v = z;
            return this;
        }

        public Builder setCodeId(String str) {
            this.rg = str;
            return this;
        }

        public Builder setImageAcceptedSize(int i, int i2) {
            this.df = i;
            this.q = i2;
            return this;
        }

        public Builder setExpressViewAcceptedSize(float f, float f2) {
            this.oh = f;
            this.f = f2;
            return this;
        }

        public Builder setSupportDeepLink(boolean z) {
            this.pt = z;
            return this;
        }

        public Builder supportRenderControl() {
            this.pp = true;
            return this;
        }

        public Builder setAdCount(int i) {
            if (i <= 0) {
                i = 1;
                rg.q(TTVfConstant.TAG, "setAdCount: adCount must greater than 0 ");
            }
            if (i > 20) {
                rg.q(TTVfConstant.TAG, "setAdCount: adCount must less than or equal to 20 ");
                i = 20;
            }
            this.c = i;
            return this;
        }

        public Builder setMediaExtra(String str) {
            this.fw = str;
            return this;
        }

        public Builder setUserID(String str) {
            this.ux = str;
            return this;
        }

        public Builder setOrientation(int i) {
            this.rz = i;
            return this;
        }

        public Builder setNativeAdType(int i) {
            this.bm = i;
            return this;
        }

        public Builder setAdloadSeq(int i) {
            this.z = i;
            return this;
        }

        public Builder setPrimeRit(String str) {
            this.r = str;
            return this;
        }

        public Builder setExternalABVid(int... iArr) {
            this.un = iArr;
            return this;
        }

        public Builder setUserData(String str) {
            this.n = str;
            return this;
        }

        public Builder setAdLoadType(TTAdLoadType tTAdLoadType) {
            this.ou = tTAdLoadType;
            return this;
        }

        public Builder withBid(String str) {
            if (str == null) {
                return this;
            }
            this.qx = str;
            return this;
        }

        public VfSlot build() {
            VfSlot vfSlot = new VfSlot();
            vfSlot.rg = this.rg;
            vfSlot.c = this.c;
            vfSlot.fw = this.pt;
            vfSlot.ux = this.pp;
            vfSlot.df = this.df;
            vfSlot.q = this.q;
            float f = this.oh;
            if (f <= 0.0f) {
                vfSlot.pt = this.df;
                vfSlot.pp = this.q;
            } else {
                vfSlot.pt = f;
                vfSlot.pp = this.f;
            }
            vfSlot.rz = this.fw;
            vfSlot.bm = this.ux;
            vfSlot.b = this.rz;
            vfSlot.oh = this.bm;
            vfSlot.v = this.v;
            vfSlot.un = this.un;
            vfSlot.r = this.z;
            vfSlot.qx = this.r;
            vfSlot.z = this.b;
            vfSlot.ou = this.y;
            vfSlot.y = this.fo;
            vfSlot.fo = this.re;
            vfSlot.hq = this.hq;
            vfSlot.n = this.qx;
            vfSlot.re = this.n;
            vfSlot.l = this.ou;
            return vfSlot;
        }
    }

    private String rg(String str, int i) {
        JSONObject jSONObject;
        if (i < 1) {
            return str;
        }
        try {
            if (TextUtils.isEmpty(str)) {
                jSONObject = new JSONObject();
            } else {
                jSONObject = new JSONObject(str);
            }
            jSONObject.put("_tt_group_load_more", i);
            return jSONObject.toString();
        } catch (JSONException e) {
            e.printStackTrace();
            return str;
        }
    }
}
