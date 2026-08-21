package com.qq.e.comm.compliance;

public interface ApkDownloadComplianceInterface {
    public static final int INSTALL_BITS = 256;
    public static final int SCENES_AD_OR_NATIVE_LANDING_PAGE = 1;
    public static final int SCENES_WEB_LANDING_PAGE = 2;

    java.lang.String getApkInfoUrl();

    void setDownloadConfirmListener(com.qq.e.comm.compliance.DownloadConfirmListener r1);
}
