package com.qq.e.comm.pi;

public interface LADI extends com.qq.e.comm.compliance.ApkDownloadComplianceInterface, com.qq.e.comm.pi.IBidding {
    int getECPM();

    java.lang.String getECPMLevel();

    java.util.Map<java.lang.String, java.lang.Object> getExtraInfo();

    boolean isValid();
}
