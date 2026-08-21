package com.bianfeng.datafunsdk;

/* JADX INFO: compiled from: DelDbTask.java */
/* JADX INFO: loaded from: classes.dex */
public class h implements Runnable {
    @Override // java.lang.Runnable
    public void run() {
        x.a("启动了删库");
        try {
            v.a();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
