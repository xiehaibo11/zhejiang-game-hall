package com.huawei.secure.android.common.ssl.util;

import android.content.Context;
import android.os.AsyncTask;
import java.io.InputStream;

/* JADX INFO: loaded from: classes2.dex */
public class e extends AsyncTask<Context, Integer, Boolean> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2260a = e.class.getSimpleName();

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public Boolean doInBackground(Context... contextArr) {
        InputStream bksFromTss;
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            bksFromTss = BksUtil.getBksFromTss(contextArr[0]);
        } catch (Exception e) {
            g.b(f2260a, "doInBackground: exception : " + e.getMessage());
            bksFromTss = null;
        }
        g.a(f2260a, "doInBackground: get bks from hms tss cost : " + (System.currentTimeMillis() - jCurrentTimeMillis) + " ms");
        if (bksFromTss == null) {
            return false;
        }
        f.a(bksFromTss);
        return true;
    }

    @Override // android.os.AsyncTask
    protected void onPreExecute() {
        g.a(f2260a, "onPreExecute");
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public void onPostExecute(Boolean bool) {
        if (bool.booleanValue()) {
            g.c(f2260a, "onPostExecute: upate done");
        } else {
            g.b(f2260a, "onPostExecute: upate failed");
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public void onProgressUpdate(Integer... numArr) {
        g.c(f2260a, "onProgressUpdate");
    }
}
