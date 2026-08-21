package com.tkay.core.api;

public interface IATThirdPartyMaterial {
    com.tkay.core.api.TYAdAppInfo getAdAppInfo();

    java.lang.String getAdChoiceIconUrl();

    java.lang.String getAdFrom();

    android.view.View getAdIconView();

    android.graphics.Bitmap getAdLogo();

    android.view.View getAdLogoView();

    android.view.View getAdMediaView(java.lang.Object... r1);

    java.lang.String getAdType();

    com.tkay.core.api.ITYAdvertiserInfoOperate getAdvertiserInfoOperate();

    java.lang.String getAdvertiserName();

    int getAppCommentNum();

    android.view.View getAppDownloadButton();

    double getAppPrice();

    java.lang.String getCallToActionText();

    java.lang.String getDescriptionText();

    java.lang.String getDomain();

    java.lang.String getIconImageUrl();

    java.util.List<java.lang.String> getImageUrlList();

    int getMainImageHeight();

    java.lang.String getMainImageUrl();

    int getMainImageWidth();

    int getNativeAdInteractionType();

    com.tkay.core.api.TYCustomVideo getNativeCustomVideo();

    int getNativeExpressHeight();

    int getNativeExpressWidth();

    int getNativeType();

    java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap();

    android.view.View getShakeView(int r1, int r2, com.tkay.core.api.ATShakeViewListener r3);

    java.lang.Double getStarRating();

    java.lang.String getTitle();

    double getVideoDuration();

    int getVideoHeight();

    double getVideoProgress();

    java.lang.String getVideoUrl();

    int getVideoWidth();

    java.lang.String getWarning();
}
