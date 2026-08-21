package com.bianfeng.seppellita.db.action;

import com.bianfeng.seppellita.bean.DataBean;
import com.bianfeng.seppellita.utils.SeppellitaGsonUtils;
import com.bianfeng.seppellita.utils.SeppellitaLogger;

public class InsertByteDataTask extends BaseDataTast {
    protected DataBean bean;
    protected DBByteDataCallback callback;
    private volatile boolean test;

    public InsertByteDataTask(DataBean dataBean, DBByteDataCallback dBByteDataCallback) {
        super(DataTaskEnum.INSERT);
        this.test = false;
        this.bean = dataBean;
        this.callback = dBByteDataCallback;
    }

    @Override
    public void run() {
        synchronized (InsertByteDataTask.class) {
            try {
                ByteDataTask.getInstance().insert(this.bean.getData(), this.bean.getTime(), this.bean.getDataTime(), this.callback);
                this.callback.onFinish();
            } catch (Exception e) {
                e.printStackTrace();
                SeppellitaLogger.i("InsertEventTask" + e.getMessage());
            }
        }
    }

    public String getBean() {
        return SeppellitaGsonUtils.toJson(this.bean);
    }
}
