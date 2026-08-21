package com.bianfeng.seppellita.db.action;

import com.bianfeng.seppellita.db.base.BaseDBTask;
import com.bianfeng.seppellita.utils.SeppellitaLogger;
import com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class ByteDataTask extends BaseDBTask {
    private static volatile ByteDataTask task;
    private boolean hasDb = init();
    private List<String> delFailList = new ArrayList();

    private ByteDataTask() {
    }

    public static ByteDataTask getInstance() {
        if (task == null) {
            synchronized (ByteDataTask.class) {
                if (task == null) {
                    task = new ByteDataTask();
                }
            }
        }
        return task;
    }

    public synchronized void insert(String str, long j, String str2, DBByteDataCallback dBByteDataCallback) {
        if (!this.hasDb) {
            dBByteDataCallback.onInsertFail();
            return;
        }
        try {
            long jLongValue = insert(str, j, str2).longValue();
            if (jLongValue > 1.61061273525E9d) {
                SeppellitaSharedPreferencesUtils.putDelDb(DelDbEnum.NEED_DEL.ordinal());
            }
            if (jLongValue != -1) {
                dBByteDataCallback.onInsertSuccess();
            } else {
                dBByteDataCallback.onInsertFail();
            }
        } catch (Exception e) {
            e.printStackTrace();
            dBByteDataCallback.onInsertFail();
        }
    }

    public void selectEvent(DBByteDataCallback dBByteDataCallback) {
        if (!this.hasDb) {
            dBByteDataCallback.onSelectNoData();
            return;
        }
        try {
            List<String> listSelect = select("", "");
            if (listSelect.isEmpty()) {
                dBByteDataCallback.onSelectNoData();
            } else {
                dBByteDataCallback.onSelectSuccess(listSelect);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public List<String> selectLastMonthEvent(String str, String str2) {
        if (!this.hasDb) {
            return null;
        }
        try {
            return select(str, str2);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public List<String> deleteEvent(List<String> list) {
        this.delFailList.clear();
        if (!this.hasDb) {
            return this.delFailList;
        }
        for (String str : list) {
            try {
                delete(str);
            } catch (Exception e) {
                this.delFailList.add(str);
                e.printStackTrace();
                SeppellitaLogger.i("ByteDataTask deleteEvent 异常");
            }
        }
        return this.delFailList;
    }
}
