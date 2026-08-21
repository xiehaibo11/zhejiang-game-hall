package com.bianfeng.seppellita.db.action;

public interface DBByteDataCallback {
    void onDelSuccess(java.util.List<java.lang.String> r1);

    void onDeltFail(java.util.List<java.lang.String> r1);

    void onFinish();

    void onInsertFail();

    void onInsertSuccess();

    void onSelectNoData();

    void onSelectSuccess(java.util.List<java.lang.String> r1);
}
