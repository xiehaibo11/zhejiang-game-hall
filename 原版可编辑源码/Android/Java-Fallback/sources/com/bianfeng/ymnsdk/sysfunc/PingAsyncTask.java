package com.bianfeng.ymnsdk.sysfunc;

public class PingAsyncTask extends android.os.AsyncTask<java.lang.Void, java.lang.Void, java.lang.String> {
    private com.bianfeng.ymnsdk.sysfunc.PingCallback callback;
    private java.lang.String url;

    public PingAsyncTask(java.lang.String r1, com.bianfeng.ymnsdk.sysfunc.PingCallback r2) {
            r0 = this;
            r0.<init>()
            r0.url = r1
            r0.callback = r2
            return
    }

    @Override
    protected java.lang.String doInBackground(java.lang.Void[] r1) {
            r0 = this;
            java.lang.Void[] r1 = (java.lang.Void[]) r1
            java.lang.String r1 = r0.doInBackground(r1)
            return r1
    }

    protected java.lang.String doInBackground(java.lang.Void... r6) {
            r5 = this;
            java.lang.String r6 = "faild"
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            r1.<init>()     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.lang.String r2 = "ping -c 3 -w 100 "
            r1.append(r2)     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.lang.String r2 = r5.url     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            r1.append(r2)     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.lang.String r1 = r1.toString()     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.lang.Process r0 = r0.exec(r1)     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            int r1 = r0.waitFor()     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            r3.<init>(r0)     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            r2.<init>(r3)     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            r0.<init>()     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
        L34:
            java.lang.String r3 = r2.readLine()     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            if (r3 == 0) goto L3e
            r0.append(r3)     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            goto L34
        L3e:
            java.io.PrintStream r2 = java.lang.System.out     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            r3.<init>()     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.lang.String r4 = "Return ============"
            r3.append(r4)     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.lang.String r4 = r0.toString()     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            r3.append(r4)     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            java.lang.String r3 = r3.toString()     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            r2.println(r3)     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            if (r1 != 0) goto L68
            java.lang.String r6 = r0.toString()     // Catch: java.lang.InterruptedException -> L5f java.io.IOException -> L64
            goto L68
        L5f:
            r0 = move-exception
            r0.printStackTrace()
            goto L68
        L64:
            r0 = move-exception
            r0.printStackTrace()
        L68:
            return r6
    }

    @Override
    protected void onPostExecute(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            r0.onPostExecute(r1)
            return
    }

    protected void onPostExecute(java.lang.String r2) {
            r1 = this;
            com.bianfeng.ymnsdk.sysfunc.PingCallback r0 = r1.callback
            if (r0 == 0) goto L7
            r0.call(r2)
        L7:
            return
    }
}
