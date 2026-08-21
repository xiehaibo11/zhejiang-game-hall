package com.qq.e.mediation.interfaces;

public interface INoticeUrlProvider {
    public static final java.lang.String IMPL_CLASS_NAME = "util.NoticeUrlProviderImpl";

    java.lang.String getAssembledLossNoticeUrl(java.lang.String r1, java.lang.String r2, boolean r3);

    java.lang.String getAssembledWinNoticeUrl(java.lang.String r1, java.lang.String r2, boolean r3);

    java.lang.String getOtherAssembledLossNoticeUrl(java.lang.String r1, java.lang.String r2);
}
