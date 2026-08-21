package com.bianfeng.ymnsdk.ymndatalib;

import android.os.Handler;
import android.os.Looper;
import com.bianfeng.datafunsdk.PostDatalib;
import com.bianfeng.datafunsdk.bean.DataFunBean;
import com.bianfeng.datafunsdk.net.ResponseHeaders;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger;

/* JADX INFO: compiled from: PostDatalibUtils.java */
/* JADX INFO: loaded from: classes.dex */
public class f {
    public static volatile f b;
    public static Handler c = new Handler(Looper.getMainLooper());

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public ResponseHeaders f1482a = new ResponseHeaders("X-Error-Code", 0);

    /* JADX INFO: compiled from: PostDatalibUtils.java */
    public class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ String f1483a;
        public final /* synthetic */ String b;

        public a(String str, String str2) {
            this.f1483a = str;
            this.b = str2;
        }

        @Override // java.lang.Runnable
        public void run() {
            PostDatalib.getInstance().postByteData(new DataFunBean(this.f1483a, this.b, null, null, f.this.f1482a.toString(), null));
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
