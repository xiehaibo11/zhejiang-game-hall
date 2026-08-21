package com.bianfeng.h5library.utils;

import com.bianfeng.ymnsdk.utilslib.appinfo.AppContext;
import java.lang.reflect.Field;

public class H5libAppContext {
    public static String getVerName() {
        return AppContext.getInstance().getVerName();
    }

    public static String getPkgName() {
        return AppContext.getInstance().getPkgName();
    }

    public static String getSdkVersion() {
        try {
            Class<?> cls = Class.forName("com.bianfeng.splitscreenlib.utils.YmnH5Version");
            Object objNewInstance = cls.getConstructor(new Class[0]).newInstance(new Object[0]);
            Field declaredField = cls.getDeclaredField("version");
            declaredField.setAccessible(true);
            return declaredField.get(objNewInstance).toString();
        } catch (Exception unused) {
            return "not find class=com.bianfeng.splitscreenlib.utils.YmnH5Version,Field= version";
        }
    }
}
