package com.bianfeng.seppellita.db.action;

import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class DelByteDataTask extends BaseDataTast {
    private DBByteDataCallback callback;
    private List<String> t;

    public DelByteDataTask(List<String> list, DBByteDataCallback dBByteDataCallback) {
        super(DataTaskEnum.DEL);
        this.t = list;
        this.callback = dBByteDataCallback;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (ByteDataTask.getInstance().deleteEvent(this.t).size() == 0) {
            this.callback.onDelSuccess(this.t);
        } else {
            this.callback.onDeltFail(this.t);
        }
        this.callback.onFinish();
    }
}
