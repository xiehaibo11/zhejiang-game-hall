package com.bianfeng.ymnsdk.feature.protocol;

import java.util.List;

public interface IPushFeature {
    void closePush();

    void delAlias(String r1);

    void delTags(List<String> r1);

    void setAlias(String r1);

    void setTags(List<String> r1);

    void startPush();
}
