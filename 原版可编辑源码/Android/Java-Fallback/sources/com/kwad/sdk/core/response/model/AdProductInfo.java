package com.kwad.sdk.core.response.model;

public class AdProductInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    private static final long serialVersionUID = -7038691521398433079L;
    public java.util.List<com.kwad.sdk.core.response.model.CouponInfo> couponList;
    public java.lang.String icon;
    public java.lang.String name;
    public java.lang.String originPrice;
    public java.lang.String price;
    public java.lang.String rating;
    public com.kwad.sdk.core.response.model.AdProductInfo.SpikeInfo seckillInfo;
    public java.lang.String volume;

    public static class SpikeInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -4379476990559885495L;
        public long endTime;
        public int originalStock;
        public int soldStock;

        public SpikeInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public AdProductInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.util.List<com.kwad.sdk.core.response.model.CouponInfo> getCouponList() {
            r1 = this;
            java.util.List<com.kwad.sdk.core.response.model.CouponInfo> r0 = r1.couponList
            return r0
    }

    public com.kwad.sdk.core.response.model.CouponInfo getFirstCouponList() {
            r2 = this;
            boolean r0 = r2.isCouponListEmpty()
            if (r0 == 0) goto L8
            r0 = 0
            return r0
        L8:
            java.util.List<com.kwad.sdk.core.response.model.CouponInfo> r0 = r2.couponList
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.core.response.model.CouponInfo r0 = (com.kwad.sdk.core.response.model.CouponInfo) r0
            return r0
    }

    public java.lang.String getIcon() {
            r1 = this;
            java.lang.String r0 = r1.icon
            return r0
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    public java.lang.String getOriginPrice() {
            r1 = this;
            java.lang.String r0 = r1.originPrice
            return r0
    }

    public java.lang.String getPrice() {
            r1 = this;
            java.lang.String r0 = r1.price
            return r0
    }

    public java.lang.String getRating() {
            r1 = this;
            java.lang.String r0 = r1.rating
            return r0
    }

    public java.lang.String getVolume() {
            r1 = this;
            java.lang.String r0 = r1.volume
            return r0
    }

    public boolean hasCoupon() {
            r1 = this;
            boolean r0 = r1.isCouponListEmpty()
            if (r0 != 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public boolean hasOriginalPrice() {
            r1 = this;
            java.lang.String r0 = r1.originPrice
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public boolean hasSpike() {
            r4 = this;
            com.kwad.sdk.core.response.model.AdProductInfo$SpikeInfo r0 = r4.seckillInfo
            if (r0 == 0) goto Le
            long r0 = r0.endTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public boolean isCouponListEmpty() {
            r1 = this;
            java.util.List<com.kwad.sdk.core.response.model.CouponInfo> r0 = r1.couponList
            if (r0 == 0) goto Ld
            int r0 = r0.size()
            if (r0 != 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            return r0
        Ld:
            r0 = 1
            return r0
    }
}
