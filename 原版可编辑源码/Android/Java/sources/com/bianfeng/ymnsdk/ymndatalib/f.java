package com.bianfeng.ymnsdk.ymndatalib;

import android.os.Handler;
import android.os.Looper;
import com.bianfeng.datafunsdk.PostDatalib;
import com.bianfeng.datafunsdk.bean.DataFunBean;
import com.bianfeng.datafunsdk.net.ResponseHeaders;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger;

public class f {
    public static volatile f b;
    public static Handler c = new Handler(Looper.getMainLooper());
    public ResponseHeaders a = new ResponseHeaders("X-Error-Code", 0);

    public class a implements Runnable {
        public final String a;
        public final String b;

        public a(String str, String str2) {
            this.a = str;
            this.b = str2;
        }

        @Override
        public void run() {
            PostDatalib.getInstance().postByteData(new DataFunBean(this.a, this.b, null, null, f.this.a.toString(), null));
        }
    }

    public void b(String str) {
        YmnDataUrlUtils.getInstance().setYmndataPostUrl(str);
    }

    public static f a() {
        if (b == null) {
            synchronized (f.class) {
                if (b == null) {
                    b = new f();
                }
            }
        }
        return b;
    }

    public void a(String str) {
        YmnDatalibLogger.i("PostDatalibUtils-->" + str);
        String ymndataPostUrl = YmnDataUrlUtils.getInstance().getYmndataPostUrl();
        YmnDatalibLogger.i("PostDatalibUtils--url-->" + ymndataPostUrl);
        try {
            c.post(new a(ymndataPostUrl, str));
        } catch (Exception e) {
            YmnDatalibLogger.i("调postByteData出错" + e.getMessage());
        }
    }
}
