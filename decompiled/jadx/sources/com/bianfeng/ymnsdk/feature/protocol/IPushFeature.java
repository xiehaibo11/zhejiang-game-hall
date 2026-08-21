package com.bianfeng.ymnsdk.feature.protocol;

import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface IPushFeature {
    void closePush();

    void delAlias(String str);

    void delTags(List<String> list);

    void setAlias(String str);

    void setTags(List<String> list);

    void startPush();
}
