package com.bianfeng.seppellita.db.action;

/* JADX INFO: loaded from: classes.dex */
public class DelBeforeOneMouthDataTask extends BaseDataTast {
    private String t;

    public DelBeforeOneMouthDataTask(String str) {
        super(DataTaskEnum.DELBEFOREONEMOUTH);
        this.t = str;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            ByteDataTask.getInstance().deleteBeforeData(this.t);
        } catch (Exception unused) {
        }
    }
}
