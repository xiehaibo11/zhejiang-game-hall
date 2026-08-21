package com.bianfeng.seppellita.db.action;

import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface DBByteDataCallback {
    void onDelSuccess(List<String> list);

    void onDeltFail(List<String> list);

    void onFinish();

    void onInsertFail();

    void onInsertSuccess();

    void onSelectNoData();

    void onSelectSuccess(List<String> list);
}
