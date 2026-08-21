package com.huawei.hms.adapter.sysobs;

public interface SystemNotifier {
    void notifyNoticeObservers(int r1);

    void notifyObservers(int r1);

    void notifyObservers(android.content.Intent r1, java.lang.String r2);

    void registerObserver(com.huawei.hms.adapter.sysobs.SystemObserver r1);

    void unRegisterObserver(com.huawei.hms.adapter.sysobs.SystemObserver r1);
}
