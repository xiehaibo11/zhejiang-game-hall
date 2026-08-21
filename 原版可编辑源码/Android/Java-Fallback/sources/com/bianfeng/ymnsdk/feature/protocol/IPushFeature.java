package com.bianfeng.ymnsdk.feature.protocol;

public interface IPushFeature {
    void closePush();

    void delAlias(java.lang.String r1);

    void delTags(java.util.List<java.lang.String> r1);

    void setAlias(java.lang.String r1);

    void setTags(java.util.List<java.lang.String> r1);

    void startPush();
}
