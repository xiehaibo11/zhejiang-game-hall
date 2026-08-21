package com.sigmob.sdk.videocache;

import android.content.Context;
import android.text.TextUtils;
import com.czhj.sdk.logger.SigmobLog;
import java.io.InputStream;
import java.lang.ref.WeakReference;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicBoolean;

public class v {
    private static v a;
    private ExecutorService b = Executors.newFixedThreadPool(8);
    private Map<String, WeakReference<a>> c = new HashMap();
    private Context d;

    private static class a implements Runnable {
        private String a;
        private AtomicBoolean b = new AtomicBoolean(false);

        public a(String str) {
            this.a = str;
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Removed duplicated region for block: B:56:0x0093 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:60:0x009d A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:71:? A[SYNTHETIC] */
        /* JADX WARN: Type inference failed for: r7v0, types: [java.lang.String] */
        /* JADX WARN: Type inference failed for: r7v2 */
        /* JADX WARN: Type inference failed for: r7v4, types: [java.net.HttpURLConnection] */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        private void a(String str) throws Throwable {
            HttpURLConnection httpURLConnection;
            InputStream inputStream = null;
            try {
                try {
                    try {
                        httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
                        try {
                            httpURLConnection.setConnectTimeout(5000);
                            httpURLConnection.setReadTimeout(5000);
                            httpURLConnection.connect();
                            byte[] bArr = new byte[1024];
                            inputStream = httpURLConnection.getInputStream();
                            while (true) {
                                if (inputStream.read(bArr) == -1) {
                                    break;
                                } else if (this.b.get()) {
                                    SigmobLog.d(String.format("cancelPreLoadVideo,取消网络请求,成功(正在下载数据),url=%s", this.a));
                                    break;
                                }
                            }
                            SigmobLog.i(String.format("preloadVideo,网络文件,成功,url=%s", this.a));
                            if (inputStream != null) {
                                try {
                                    inputStream.close();
                                } catch (Exception e) {
                                    e.printStackTrace();
                                }
                            }
                        } catch (Exception e2) {
                            e = e2;
                            SigmobLog.e(String.format("preloadVideo,网络文件,失败,msg=%s,url=%s", e.getMessage(), this.a));
                            if (inputStream != null) {
                                try {
                                    inputStream.close();
                                } catch (Exception e3) {
                                    e3.printStackTrace();
                                }
                            }
                            if (httpURLConnection == null) {
                                return;
                            } else {
                                httpURLConnection.disconnect();
                            }
                        }
                    } catch (Throwable th) {
                        th = th;
                        if (0 != 0) {
                            try {
                                inputStream.close();
                            } catch (Exception e4) {
                                e4.printStackTrace();
                            }
                        }
                        if (str != 0) {
                            throw th;
                        }
                        try {
                            str.disconnect();
                            throw th;
                        } catch (Exception e5) {
                            e5.printStackTrace();
                            throw th;
                        }
                    }
                } catch (Exception e6) {
                    e = e6;
                    httpURLConnection = null;
                } catch (Throwable th2) {
                    th = th2;
                    str = 0;
                    if (0 != 0) {
                    }
                    if (str != 0) {
                    }
                }
                if (httpURLConnection != null) {
                    httpURLConnection.disconnect();
                }
            } catch (Exception e7) {
                e7.printStackTrace();
            }
        }

        public void a(boolean z) {
            this.b.set(z);
        }

        @Override
        public void run() throws Throwable {
            if (this.b.get()) {
                SigmobLog.i(String.format("cancelPreLoadVideo,取消网络请求,成功(未下载数据),url=%s", this.a));
            } else {
                a(this.a);
            }
        }
    }

    private v(Context context) {
        this.d = context;
    }

    public static v a(Context context) {
        Context applicationContext = context.getApplicationContext();
        if (a == null) {
            synchronized (v.class) {
                if (a == null) {
                    a = new v(applicationContext);
                }
            }
        }
        return a;
    }

    public void a(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (!str.startsWith("http")) {
            SigmobLog.d(String.format("preloadVideo,本地文件:ulr=%s", str));
            return;
        }
        SigmobLog.d(String.format("preloadVideo,网络文件,开始下载:ulr=%s", str));
        a aVar = new a(str);
        this.c.put(str, new WeakReference<>(aVar));
        this.b.execute(aVar);
    }

    public void b(String str) {
        WeakReference<a> weakReference;
        a aVar;
        SigmobLog.d(String.format("cancelPreLoadVideo,ulr=%s", str));
        if (this.c == null || TextUtils.isEmpty(str) || (weakReference = this.c.get(str)) == null || (aVar = weakReference.get()) == null) {
            return;
        }
        SigmobLog.d(String.format("cancelPreLoadVideo,取消网络请求,ulr=%s", str));
        aVar.a(true);
    }
}
