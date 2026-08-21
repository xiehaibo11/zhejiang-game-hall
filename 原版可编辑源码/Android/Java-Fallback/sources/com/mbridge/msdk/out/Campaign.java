package com.mbridge.msdk.out;

public class Campaign implements com.mbridge.msdk.foundation.same.c.c, com.mbridge.msdk.system.NoProGuard, java.io.Serializable {
    public static final int TYPE_BIG = 3;
    public static final int TYPE_ICON = 2;
    public static final int TYPE_MB = 1;
    private static final long serialVersionUID = 1;
    public java.lang.String adCall;
    private int adchoiceSizeHeight;
    private int adchoiceSizeWidth;
    private com.mbridge.msdk.out.ApkDisplayInfo apkDisplayInfo;
    private java.lang.String appDesc;
    private java.lang.String appName;
    private android.graphics.drawable.Drawable bigDrawable;
    private android.graphics.drawable.Drawable iconDrawable;
    private java.lang.String iconUrl;
    private java.lang.String id;
    private java.lang.String imageUrl;
    private com.mbridge.msdk.out.OnImageLoadListener mOnImageLoadListener;
    private java.lang.Object nativead;
    private int numberRating;
    private java.lang.String packageName;
    private double rating;
    private java.lang.String size;
    private java.lang.String subType;
    private long timestamp;
    private int type;
    private int videoLength;

    public Campaign() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.id = r0
            r2.packageName = r0
            r2.appName = r0
            r2.appDesc = r0
            r2.size = r0
            r2.iconUrl = r0
            r2.imageUrl = r0
            r0 = 0
            r2.timestamp = r0
            r0 = 33333(0x8235, float:4.671E-41)
            r2.numberRating = r0
            r0 = 1
            r2.type = r0
            r0 = 0
            r2.adchoiceSizeWidth = r0
            r2.adchoiceSizeHeight = r0
            r2.videoLength = r0
            return
    }

    private android.graphics.drawable.Drawable BitmapToDrawable(android.graphics.Bitmap r2) {
            r1 = this;
            android.graphics.drawable.BitmapDrawable r0 = new android.graphics.drawable.BitmapDrawable
            r0.<init>(r2)
            return r0
    }

    public java.lang.String getAdCall() {
            r1 = this;
            java.lang.String r0 = r1.adCall
            return r0
    }

    public int getAdchoiceSizeHeight() {
            r1 = this;
            int r0 = r1.adchoiceSizeHeight
            return r0
    }

    public int getAdchoiceSizeWidth() {
            r1 = this;
            int r0 = r1.adchoiceSizeWidth
            return r0
    }

    public com.mbridge.msdk.out.ApkDisplayInfo getApkDisplayInfo() {
            r1 = this;
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r1.apkDisplayInfo
            return r0
    }

    public java.lang.String getAppDesc() {
            r1 = this;
            java.lang.String r0 = r1.appDesc
            return r0
    }

    public java.lang.String getAppName() {
            r1 = this;
            java.lang.String r0 = r1.appName
            return r0
    }

    public android.graphics.drawable.Drawable getBigDrawable() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.bigDrawable
            return r0
    }

    public android.graphics.drawable.Drawable getIconDrawable() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.iconDrawable
            return r0
    }

    public java.lang.String getIconUrl() {
            r1 = this;
            java.lang.String r0 = r1.iconUrl
            return r0
    }

    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.id
            return r0
    }

    public java.lang.String getImageUrl() {
            r1 = this;
            java.lang.String r0 = r1.imageUrl
            return r0
    }

    public java.lang.Object getNativead() {
            r1 = this;
            java.lang.Object r0 = r1.nativead
            return r0
    }

    public int getNumberRating() {
            r1 = this;
            int r0 = r1.numberRating
            return r0
    }

    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.packageName
            return r0
    }

    public double getRating() {
            r2 = this;
            double r0 = r2.rating
            return r0
    }

    public java.lang.String getSize() {
            r1 = this;
            java.lang.String r0 = r1.size
            return r0
    }

    public java.lang.String getSubType() {
            r1 = this;
            java.lang.String r0 = r1.subType
            return r0
    }

    public long getTimestamp() {
            r2 = this;
            long r0 = r2.timestamp
            return r0
    }

    public int getType() {
            r1 = this;
            int r0 = r1.type
            return r0
    }

    public int getVideoLength() {
            r1 = this;
            int r0 = r1.videoLength
            return r0
    }

    public void loadIconUrlAsyncWithBlock(com.mbridge.msdk.out.OnImageLoadListener r2) {
            r1 = this;
            r1.mOnImageLoadListener = r2
            java.lang.String r2 = r1.getIconUrl()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1f
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            com.mbridge.msdk.foundation.same.c.b r2 = com.mbridge.msdk.foundation.same.c.b.a(r2)
            java.lang.String r0 = r1.getIconUrl()
            r2.a(r0, r1)
        L1f:
            return
    }

    public void loadImageUrlAsyncWithBlock(com.mbridge.msdk.out.OnImageLoadListener r2) {
            r1 = this;
            r1.mOnImageLoadListener = r2
            java.lang.String r2 = r1.getImageUrl()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1f
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            com.mbridge.msdk.foundation.same.c.b r2 = com.mbridge.msdk.foundation.same.c.b.a(r2)
            java.lang.String r0 = r1.getImageUrl()
            r2.a(r0, r1)
        L1f:
            return
    }

    @Override
    public void onFailedLoad(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void onSuccessLoad(android.graphics.Bitmap r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = r3.getImageUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L29
            java.lang.String r0 = r3.getImageUrl()
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L29
            if (r4 == 0) goto L29
            android.graphics.drawable.Drawable r0 = r3.BitmapToDrawable(r4)
            r3.setBigDrawable(r0)
            com.mbridge.msdk.out.OnImageLoadListener r0 = r3.mOnImageLoadListener
            if (r0 == 0) goto L29
            android.graphics.drawable.Drawable r1 = r3.BitmapToDrawable(r4)
            r2 = 3
            r0.loadSuccess(r1, r2)
        L29:
            java.lang.String r0 = r3.getIconUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L58
            java.lang.String r0 = r3.getIconUrl()
            if (r0 == 0) goto L58
            java.lang.String r0 = r3.getIconUrl()
            boolean r5 = r0.equals(r5)
            if (r5 == 0) goto L58
            if (r4 == 0) goto L58
            android.graphics.drawable.Drawable r5 = r3.BitmapToDrawable(r4)
            r3.setIconDrawable(r5)
            com.mbridge.msdk.out.OnImageLoadListener r5 = r3.mOnImageLoadListener
            if (r5 == 0) goto L58
            android.graphics.drawable.Drawable r4 = r3.BitmapToDrawable(r4)
            r0 = 2
            r5.loadSuccess(r4, r0)
        L58:
            return
    }

    public void setAdCall(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            r1.adCall = r2
            return
    }

    public void setAdchoiceSizeHeight(int r1) {
            r0 = this;
            r0.adchoiceSizeHeight = r1
            return
    }

    public void setAdchoiceSizeWidth(int r1) {
            r0 = this;
            r0.adchoiceSizeWidth = r1
            return
    }

    public void setApkDisplayInfo(com.mbridge.msdk.out.ApkDisplayInfo r1) {
            r0 = this;
            r0.apkDisplayInfo = r1
            return
    }

    public void setAppDesc(java.lang.String r1) {
            r0 = this;
            r0.appDesc = r1
            return
    }

    public void setAppName(java.lang.String r1) {
            r0 = this;
            r0.appName = r1
            return
    }

    public void setBigDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.bigDrawable = r1
            return
    }

    public void setIconDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.iconDrawable = r1
            return
    }

    public void setIconUrl(java.lang.String r1) {
            r0 = this;
            r0.iconUrl = r1
            return
    }

    public void setId(java.lang.String r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public void setImageUrl(java.lang.String r1) {
            r0 = this;
            r0.imageUrl = r1
            return
    }

    public void setNativead(java.lang.Object r1) {
            r0 = this;
            r0.nativead = r1
            return
    }

    public void setNumberRating(int r1) {
            r0 = this;
            if (r1 <= 0) goto L4
            r0.numberRating = r1
        L4:
            return
    }

    public void setOnImageLoadListener(com.mbridge.msdk.out.OnImageLoadListener r1) {
            r0 = this;
            r0.mOnImageLoadListener = r1
            return
    }

    public void setPackageName(java.lang.String r1) {
            r0 = this;
            r0.packageName = r1
            return
    }

    public void setRating(double r1) {
            r0 = this;
            r0.rating = r1
            return
    }

    public void setSize(java.lang.String r1) {
            r0 = this;
            r0.size = r1
            return
    }

    public void setSubType(java.lang.String r1) {
            r0 = this;
            r0.subType = r1
            return
    }

    public void setTimestamp(long r1) {
            r0 = this;
            r0.timestamp = r1
            return
    }

    public void setType(int r1) {
            r0 = this;
            r0.type = r1
            return
    }

    public void setVideoLength(int r1) {
            r0 = this;
            r0.videoLength = r1
            return
    }
}
