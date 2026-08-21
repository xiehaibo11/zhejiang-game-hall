package com.bianfeng.ymnsdk.sysfunc;

import android.os.AsyncTask;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class PingAsyncTask extends AsyncTask<Void, Void, String> {
    private PingCallback callback;
    private String url;

    public PingAsyncTask(String str, PingCallback pingCallback) {
        this.url = str;
        this.callback = pingCallback;
    }

    @Override
    protected String doInBackground(Void... voidArr) {
        try {
            Process processExec = Runtime.getRuntime().exec("ping -c 3 -w 100 " + this.url);
            int iWaitFor = processExec.waitFor();
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(processExec.getInputStream()));
            StringBuffer stringBuffer = new StringBuffer();
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                stringBuffer.append(line);
            }
            System.out.println("Return ============" + stringBuffer.toString());
            return iWaitFor == 0 ? stringBuffer.toString() : "faild";
        } catch (IOException e) {
            e.printStackTrace();
            return "faild";
        } catch (InterruptedException e2) {
            e2.printStackTrace();
            return "faild";
        }
    }

    @Override
    protected void onPostExecute(String str) {
        PingCallback pingCallback = this.callback;
        if (pingCallback != null) {
            pingCallback.call(str);
        }
    }
}
