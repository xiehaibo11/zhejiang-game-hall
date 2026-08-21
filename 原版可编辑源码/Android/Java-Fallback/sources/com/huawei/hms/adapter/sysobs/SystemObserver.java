package com.huawei.hms.adapter.sysobs;

public interface SystemObserver {
    boolean onNoticeResult(int r1);

    boolean onSolutionResult(android.content.Intent r1, java.lang.String r2);

    boolean onUpdateResult(int r1);
}
