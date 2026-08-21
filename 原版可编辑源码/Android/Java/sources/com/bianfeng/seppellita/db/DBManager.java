package com.bianfeng.seppellita.db;

import com.bianfeng.seppellita.SepperllitaCallback;
import com.bianfeng.seppellita.bean.DataBean;
import com.bianfeng.seppellita.db.action.BaseDataTast;
import com.bianfeng.seppellita.db.action.DBByteDataCallback;
import com.bianfeng.seppellita.db.action.DataTaskEnum;
import com.bianfeng.seppellita.db.action.DelBeforeOneMouthDataTask;
import com.bianfeng.seppellita.db.action.DelByteDataTask;
import com.bianfeng.seppellita.db.action.InsertByteDataTask;
import com.bianfeng.seppellita.db.action.SelectLastMonthByteDataTask;
import com.bianfeng.seppellita.utils.SeppellitaLogger;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.RejectedExecutionHandler;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

public class DBManager {
    private SepperllitaCallback callback;
    private Deque<Runnable> readyTaskQueue = new ArrayDeque();
    private volatile AtomicInteger delingTesk = new AtomicInteger(0);
    private volatile AtomicInteger selectingTesk = new AtomicInteger(0);
    private volatile AtomicInteger runningTask = new AtomicInteger(0);
    private volatile int MAXCOUNT = 64;
    private DBByteDataCallback dbByteDataCallback = new DBByteDataCallback() {
        @Override
        public void onInsertSuccess() {
            SeppellitaLogger.i("onInsertSuccess 成功");
            DBManager.this.callback.onInsertSuccess();
        }

        @Override
        public void onInsertFail() {
            SeppellitaLogger.i("onInsertFail 失败");
        }

        @Override
        public void onSelectSuccess(List<String> list) {
            SeppellitaLogger.i("onSelectSuccess 成功");
            DBManager.this.selectingTesk.decrementAndGet();
            if (DBManager.this.callback != null) {
                DBManager.this.callback.onSelectSuc(list);
            }
        }

        @Override
        public void onSelectNoData() {
            SeppellitaLogger.i("onSelectNoData 失败");
            DBManager.this.selectingTesk.decrementAndGet();
        }

        @Override
        public void onDelSuccess(List<String> list) {
            SeppellitaLogger.i("onDelSuccess 成功" + list.toString());
            DBManager.this.delingTesk.decrementAndGet();
            DBManager.this.callback.onDel();
        }

        @Override
        public void onDeltFail(List<String> list) {
            SeppellitaLogger.i("onDeltFail 失败");
            DBManager.this.delingTesk.decrementAndGet();
            DBManager.this.callback.onDel();
        }

        @Override
        public void onFinish() {
            DBManager.this.finish();
        }
    };
    private ThreadPoolExecutor taskExector = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 5, TimeUnit.SECONDS, new SynchronousQueue(), new RejectedExecutionHandler() {
        @Override
        public void rejectedExecution(Runnable runnable, ThreadPoolExecutor threadPoolExecutor) {
            DBManager.this.readyTaskQueue.add(runnable);
        }
    });

    private void finish() {
        SeppellitaLogger.i("runningTaskQueue的大小--->");
        this.runningTask.decrementAndGet();
        taskExector();
    }

    private void taskExector() {
        BaseDataTast baseDataTast;
        SeppellitaLogger.i("taskExector--开始 遍历-->");
        HashSet hashSet = new HashSet();
        synchronized (this) {
            Iterator<Runnable> it = this.readyTaskQueue.iterator();
            while (it.hasNext()) {
                try {
                    baseDataTast = (BaseDataTast) it.next();
                } catch (Exception e) {
                    e.printStackTrace();
                }
                if (this.runningTask.get() >= this.MAXCOUNT) {
                    break;
                }
                if (baseDataTast.getName() == DataTaskEnum.SELECT && this.delingTesk.get() != 0) {
                    it.remove();
                } else if (baseDataTast.getName() != DataTaskEnum.DEL || this.selectingTesk.get() == 0) {
                    if (baseDataTast.getName() == DataTaskEnum.DEL) {
                        this.delingTesk.getAndIncrement();
                    }
                    if (baseDataTast.getName() == DataTaskEnum.SELECT && this.selectingTesk.get() != 0) {
                        it.remove();
                    } else {
                        if (baseDataTast.getName() == DataTaskEnum.SELECT) {
                            this.selectingTesk.getAndIncrement();
                        }
                        it.remove();
                        hashSet.add(baseDataTast);
                        this.runningTask.getAndIncrement();
                    }
                }
            }
        }
        Iterator it2 = hashSet.iterator();
        while (it2.hasNext()) {
            this.taskExector.execute((Runnable) it2.next());
        }
    }

    public void add(DataBean dataBean) {
        synchronized (this) {
            this.readyTaskQueue.add(new InsertByteDataTask(dataBean, this.dbByteDataCallback));
            taskExector();
        }
    }

    public void selectDbLastMonthByteData(String str, String str2) {
        synchronized (this) {
            try {
                SeppellitaLogger.i("selectDbLastMonthByteData");
                this.readyTaskQueue.add(new SelectLastMonthByteDataTask(this.dbByteDataCallback, str, str2));
                taskExector();
            } catch (Exception unused) {
            }
        }
    }

    public void del(List<String> list) {
        if (list.size() == 0) {
            return;
        }
        synchronized (this) {
            this.readyTaskQueue.add(new DelByteDataTask(list, this.dbByteDataCallback));
            taskExector();
        }
    }

    public void setCallback(SepperllitaCallback sepperllitaCallback) {
        this.callback = sepperllitaCallback;
    }

    public void delBeforeOneMouthData(String str) {
        SeppellitaLogger.i("delBeforeOneMouthData");
        synchronized (this) {
            this.readyTaskQueue.add(new DelBeforeOneMouthDataTask(str));
            taskExector();
        }
    }
}
