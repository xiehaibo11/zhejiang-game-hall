package com.bianfeng.seppellita.db.action;

import com.bianfeng.seppellita.utils.SeppellitaLogger;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class SelectLastMonthByteDataTask extends BaseDataTast {
    private DBByteDataCallback callback;
    private String fromdata;
    private String todata;

    public SelectLastMonthByteDataTask(DBByteDataCallback dBByteDataCallback, String str, String str2) {
        super(DataTaskEnum.SELECT);
        this.callback = dBByteDataCallback;
        this.fromdata = str;
        this.todata = str2;
    }

    @Override // java.lang.Runnable
    public void run() {
        SeppellitaLogger.i("SelectLastMonthByteDataTask");
        List<String> listSelectLastMonthEvent = ByteDataTask.getInstance().selectLastMonthEvent(this.fromdata, this.todata);
        if (listSelectLastMonthEvent == null || listSelectLastMonthEvent.size() == 0) {
            this.callback.onSelectNoData();
        } else {
            SeppellitaLogger.i("SelectLastMonthByteDataTask" + listSelectLastMonthEvent.size());
            this.callback.onSelectSuccess(listSelectLastMonthEvent);
        }
        this.callback.onFinish();
    }
}
