package com.kwad.sdk.core.response.model;

public class CouponInfo extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
    private static final float COUPON_DISCOUNT_THRESHOLD = 20.0f;
    public static final java.lang.String JINNIIU_DISCOUNT = "2";
    public static final java.lang.String JINNIIU_PRICE_BREAK_DISCOUNT = "1";
    private static final long serialVersionUID = -9143537899646897962L;
    public java.lang.String displayActionWords;
    public java.lang.String displayBase;
    public java.lang.String displayDiscount;
    public java.lang.String displayName;
    public java.lang.String displayTitle;
    public java.lang.String displayType;
    public java.lang.String displayValue;

    public CouponInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String jinniuFormatCoupon(com.kwad.sdk.core.response.model.CouponInfo r7) {
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r7.getDisplayType()
            java.lang.String r2 = r7.getDisplayValue()
            java.lang.String r2 = rinToYuan(r2)
            r3 = -1
            int r4 = r1.hashCode()
            r5 = 49
            r6 = 1
            if (r4 == r5) goto L29
            r5 = 50
            if (r4 == r5) goto L1f
            goto L32
        L1f:
            java.lang.String r4 = "2"
            boolean r1 = r1.equals(r4)
            if (r1 == 0) goto L32
            r3 = r6
            goto L32
        L29:
            java.lang.String r4 = "1"
            boolean r1 = r1.equals(r4)
            if (r1 == 0) goto L32
            r3 = 0
        L32:
            java.lang.String r1 = "¥"
            if (r3 == 0) goto L6c
            if (r3 == r6) goto L39
            goto La0
        L39:
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto La0
            float r3 = java.lang.Float.parseFloat(r2)     // Catch: java.lang.Exception -> La0
            r4 = 1101004800(0x41a00000, float:20.0)
            int r3 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r3 < 0) goto L56
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La0
            r7.<init>(r1)     // Catch: java.lang.Exception -> La0
            r7.append(r2)     // Catch: java.lang.Exception -> La0
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Exception -> La0
            goto La0
        L56:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La0
            r1.<init>()     // Catch: java.lang.Exception -> La0
            java.lang.String r7 = r7.getFormattedDisplayDiscount()     // Catch: java.lang.Exception -> La0
            r1.append(r7)     // Catch: java.lang.Exception -> La0
            java.lang.String r7 = "折"
            r1.append(r7)     // Catch: java.lang.Exception -> La0
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> La0
            goto La0
        L6c:
            java.lang.String r3 = r7.getDisplayBase()
            java.lang.String r3 = rinToYuan(r3)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto La0
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 != 0) goto La0
            boolean r7 = r7.isNoPreRequirement()
            if (r7 == 0) goto L8c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>(r1)
            goto L99
        L8c:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r3)
            java.lang.String r0 = "减"
            r7.append(r0)
        L99:
            r7.append(r2)
            java.lang.String r0 = r7.toString()
        La0:
            return r0
    }

    public static java.lang.String rinToYuan(java.lang.String r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            float r4 = java.lang.Float.parseFloat(r4)     // Catch: java.lang.Exception -> L18
            r1 = 1148846080(0x447a0000, float:1000.0)
            float r4 = r4 / r1
            java.text.DecimalFormat r1 = new java.text.DecimalFormat     // Catch: java.lang.Exception -> L18
            java.lang.String r2 = "#.#"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L18
            double r2 = (double) r4     // Catch: java.lang.Exception -> L18
            java.lang.String r0 = r1.format(r2)     // Catch: java.lang.Exception -> L18
            goto L1c
        L18:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
        L1c:
            return r0
    }

    public java.lang.String getDisplayActionWords() {
            r1 = this;
            java.lang.String r0 = r1.displayActionWords
            return r0
    }

    public java.lang.String getDisplayBase() {
            r1 = this;
            java.lang.String r0 = r1.displayBase
            return r0
    }

    public java.lang.String getDisplayName() {
            r1 = this;
            java.lang.String r0 = r1.displayName
            return r0
    }

    public java.lang.String getDisplayTitle() {
            r1 = this;
            java.lang.String r0 = r1.displayTitle
            return r0
    }

    public java.lang.String getDisplayType() {
            r1 = this;
            java.lang.String r0 = r1.displayType
            return r0
    }

    public java.lang.String getDisplayValue() {
            r1 = this;
            java.lang.String r0 = r1.displayValue
            return r0
    }

    public java.lang.String getFormattedDisplayDiscount() {
            r4 = this;
            java.lang.String r0 = r4.displayDiscount     // Catch: java.lang.Exception -> L1a
            java.lang.Float r0 = java.lang.Float.valueOf(r0)     // Catch: java.lang.Exception -> L1a
            float r0 = r0.floatValue()     // Catch: java.lang.Exception -> L1a
            r1 = 1092616192(0x41200000, float:10.0)
            float r0 = r0 / r1
            java.text.DecimalFormat r1 = new java.text.DecimalFormat     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = "#.#"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L1a
            double r2 = (double) r0     // Catch: java.lang.Exception -> L1a
            java.lang.String r0 = r1.format(r2)     // Catch: java.lang.Exception -> L1a
            return r0
        L1a:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            r0 = 0
            return r0
    }

    public java.lang.String getFormattedJinniuPrefix() {
            r3 = this;
            java.lang.String r0 = r3.getDisplayType()
            boolean r1 = r3.isNoPreRequirement()
            java.lang.String r2 = "券"
            if (r1 == 0) goto Ld
            goto L22
        Ld:
            java.lang.String r1 = "1"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L18
            java.lang.String r2 = "满"
            goto L22
        L18:
            java.lang.String r1 = "2"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L21
            goto L22
        L21:
            r2 = 0
        L22:
            return r2
    }

    public boolean isNoPreRequirement() {
            r3 = this;
            java.lang.String r0 = r3.displayBase
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            float r0 = java.lang.Float.parseFloat(r0)     // Catch: java.lang.Exception -> L10
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L10
            r1 = 1
        L10:
            return r1
    }

    public void setDisplayDiscount(java.lang.String r1) {
            r0 = this;
            r0.displayDiscount = r1
            return
    }
}
