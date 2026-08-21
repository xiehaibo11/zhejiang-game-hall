package com.qq.e.ads.hybrid;

import android.content.Context;
import com.qq.e.ads.AbstractAD;
import com.qq.e.comm.pi.HADI;
import com.qq.e.comm.pi.POFactory;
import com.qq.e.comm.util.AdErrorConvertor;
import com.qq.e.comm.util.GDTLogger;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;

public class HybridAD extends AbstractAD<HADI> implements HADI {
    private HybridADListener f;
    private CountDownLatch g = new CountDownLatch(1);
    private HybridADSetting h;

    public HybridAD(Context context, HybridADSetting hybridADSetting, HybridADListener hybridADListener) {
        this.h = hybridADSetting;
        this.f = hybridADListener;
        a(context, "NO_POS_ID");
    }

    protected HADI a(POFactory pOFactory) {
        return pOFactory.getHybridAD(this.h, this.f);
    }

    @Override
    protected HADI a(Context context, POFactory pOFactory, String str, String str2, String str3) {
        return a(pOFactory);
    }

    @Override
    protected void a(HADI hadi) {
        c();
    }

    @Override
    protected void b(int i) {
        HybridADListener hybridADListener = this.f;
        if (hybridADListener != null) {
            hybridADListener.onError(AdErrorConvertor.formatErrorCode(i));
        }
        this.g.countDown();
    }

    protected void c() {
        this.g.countDown();
    }

    @Override
    public void loadUrl(final String str) {
        if (a()) {
            if (!b()) {
                new Thread(new Runnable() {
                    @Override
                    public void run() {
                        try {
                            HybridAD.this.g.await(30L, TimeUnit.SECONDS);
                            if (!HybridAD.this.b() || ((AbstractAD) HybridAD.this).a == null) {
                                GDTLogger.e("初始化错误：广告实例未被初始化");
                                HybridAD.this.a(2001);
                            } else {
                                ((HADI) ((AbstractAD) HybridAD.this).a).loadUrl(str);
                            }
                        } catch (InterruptedException unused) {
                            GDTLogger.e("初始化错误：广告实例未被初始化");
                            HybridAD.this.a(2001);
                        }
                    }
                }).start();
                return;
            }
            T t = this.a;
            if (t != 0) {
                ((HADI) t).loadUrl(str);
            } else {
                a("loadUrl");
            }
        }
    }
}
