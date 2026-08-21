package com.carlt.networklibs;

import java.lang.reflect.Method;

class MethodManager {
    private Method method;
    private NetType netType;
    private Class<?> type;

    public MethodManager(Class<?> cls, NetType netType, Method method) {
        this.type = cls;
        this.netType = netType;
        this.method = method;
    }

    public MethodManager() {
    }

    public Class<?> getType() {
        return this.type;
    }

    public void setType(Class<?> cls) {
        this.type = cls;
    }

    public NetType getNetType() {
        return this.netType;
    }

    public void setNetType(NetType netType) {
        this.netType = netType;
    }

    public Method getMethod() {
        return this.method;
    }

    public void setMethod(Method method) {
        this.method = method;
    }
}
