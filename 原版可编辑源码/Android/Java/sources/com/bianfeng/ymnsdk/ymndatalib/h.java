package com.bianfeng.ymnsdk.ymndatalib;

import com.bianfeng.netlibsdk.BaseRequest;
import com.bianfeng.netlibsdk.DefaultRetryPolicy;
import com.bianfeng.netlibsdk.NetlibSdk;
import com.bianfeng.ymnsdk.utilslib.security.Md5Utils;
import com.bianfeng.ymnsdk.ymndatalib.bean.base.WhitelistBean;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class h {
    public static volatile h d;
    public boolean b;
    public Map<String, String> a = new HashMap();
    public BaseRequest.Listener c = new a();

    public class a implements BaseRequest.Listener<WhitelistBean> {
        public a() {
        }

        @Override
        public void onSuccess(WhitelistBean whitelistBean) {
            try {
                if (whitelistBean.getCode() != 0) {
                    h.this.b = true;
                    return;
                }
                WhitelistBean.DataBean data = whitelistBean.getData();
                List<String> functions = data.getFunctions();
                if (data != null && functions != null) {
                    Iterator<String> it = functions.iterator();
                    while (it.hasNext()) {
                        h.this.a.put(it.next(), "1");
                    }
                    h.this.b = false;
                    return;
                }
                h.this.b = true;
            } catch (Exception e) {
                e.printStackTrace();
                h.this.b = true;
            }
        }

        @Override
        public void onFail(String str) {
            h.this.b = true;
        }
    }

    public void a() {
        g gVar = new g();
        gVar.setRetryPolicy(new DefaultRetryPolicy());
        gVar.setListener(this.c);
        NetlibSdk.getInstance().add(gVar);
    }

    public static h b() {
        if (d == null) {
            synchronized (h.class) {
                if (d == null) {
                    d = new h();
                }
            }
        }
        return d;
    }

    public String a(String str) {
        YmnDatalibLogger.i("YmndataWhiteListSdk getKey " + str);
        try {
            if (!this.b) {
                for (String str2 : str.split(";")) {
                    String strMd5 = Md5Utils.md5(str2);
                    YmnDatalibLogger.i("YmndataWhiteListSdk md5 " + strMd5);
                    if (this.a.containsKey(strMd5)) {
                        return strMd5;
                    }
                }
            }
            return null;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }
}
