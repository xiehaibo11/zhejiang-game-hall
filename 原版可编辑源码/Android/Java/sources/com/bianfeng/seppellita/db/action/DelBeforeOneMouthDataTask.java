package com.bianfeng.seppellita.db.action;

public class DelBeforeOneMouthDataTask extends BaseDataTast {
    private String t;

    public DelBeforeOneMouthDataTask(String str) {
        super(DataTaskEnum.DELBEFOREONEMOUTH);
        this.t = str;
    }

    @Override
    public void run() {
        try {
            ByteDataTask.getInstance().deleteBeforeData(this.t);
        } catch (Exception unused) {
        }
    }
}
