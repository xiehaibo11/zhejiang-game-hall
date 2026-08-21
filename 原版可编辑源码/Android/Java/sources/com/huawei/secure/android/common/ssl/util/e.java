package com.huawei.secure.android.common.ssl.util;

import android.content.Context;
import android.os.AsyncTask;
import java.io.InputStream;

public class e extends AsyncTask<Context, Integer, Boolean> {
    private static final String a = e.class.getSimpleName();

    @Override
    protected Boolean doInBackground(Context... contextArr) {
        InputStream bksFromTss;
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            bksFromTss = BksUtil.getBksFromTss(contextArr[0]);
        } catch (Exception e) {
            g.b(a, "doInBackground: exception : " + e.getMessage());
            bksFromTss = null;
        }
        g.a(a, "doInBackground: get bks from hms tss cost : " + (System.currentTimeMillis() - jCurrentTimeMillis) + " ms");
        if (bksFromTss == null) {
            return false;
        }
        f.a(bksFromTss);
        return true;
    }

    @Override
    protected void onPreExecute() {
        g.a(a, "onPreExecute");
    }

    @Override
    protected void onPostExecute(Boolean bool) {
        if (bool.booleanValue()) {
            g.c(a, "onPostExecute: upate done");
        } else {
            g.b(a, "onPostExecute: upate failed");
        }
    }

    @Override
    protected void onProgressUpdate(Integer... numArr) {
        g.c(a, "onProgressUpdate");
    }
}
