package com.bianfeng.ymnsdk.sysfunc.helpers;

import android.content.Context;
import java.lang.reflect.Method;

public class XiaomiDeviceIDHelper {
    private Method aaid;
    private Object idImpl;
    private Class idProvider;
    private Context mContext;
    private Method oaid;
    private Method udid;
    private Method vaid;

    public XiaomiDeviceIDHelper(Context context) {
        this.mContext = context;
        try {
            Class<?> cls = Class.forName("com.android.id.impl.IdProviderImpl");
            this.idProvider = cls;
            this.idImpl = cls.newInstance();
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            this.udid = this.idProvider.getMethod("getDefaultUDID", Context.class);
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        try {
            this.oaid = this.idProvider.getMethod("getOAID", Context.class);
        } catch (Exception e3) {
            e3.printStackTrace();
        }
        try {
            this.vaid = this.idProvider.getMethod("getVAID", Context.class);
        } catch (Exception e4) {
            e4.printStackTrace();
        }
        try {
            this.aaid = this.idProvider.getMethod("getAAID", Context.class);
        } catch (Exception e5) {
            e5.printStackTrace();
        }
    }

    private String invokeMethod(Context context, Method method) {
        Object obj = this.idImpl;
        if (obj != null && method != null) {
            try {
                return (String) method.invoke(obj, context);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return null;
    }

    public String getUDID() {
        return invokeMethod(this.mContext, this.udid);
    }

    public String getOAID() {
        return invokeMethod(this.mContext, this.oaid);
    }

    public String getAAID() {
        return invokeMethod(this.mContext, this.aaid);
    }

    public String getVAID() {
        return invokeMethod(this.mContext, this.vaid);
    }
}
