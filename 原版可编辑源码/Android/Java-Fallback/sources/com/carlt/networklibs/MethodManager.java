package com.carlt.networklibs;

class MethodManager {
    private java.lang.reflect.Method method;
    private com.carlt.networklibs.NetType netType;
    private java.lang.Class<?> type;

    public MethodManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public MethodManager(java.lang.Class<?> r1, com.carlt.networklibs.NetType r2, java.lang.reflect.Method r3) {
            r0 = this;
            r0.<init>()
            r0.type = r1
            r0.netType = r2
            r0.method = r3
            return
    }

    public java.lang.reflect.Method getMethod() {
            r1 = this;
            java.lang.reflect.Method r0 = r1.method
            return r0
    }

    public com.carlt.networklibs.NetType getNetType() {
            r1 = this;
            com.carlt.networklibs.NetType r0 = r1.netType
            return r0
    }

    public java.lang.Class<?> getType() {
            r1 = this;
            java.lang.Class<?> r0 = r1.type
            return r0
    }

    public void setMethod(java.lang.reflect.Method r1) {
            r0 = this;
            r0.method = r1
            return
    }

    public void setNetType(com.carlt.networklibs.NetType r1) {
            r0 = this;
            r0.netType = r1
            return
    }

    public void setType(java.lang.Class<?> r1) {
            r0 = this;
            r0.type = r1
            return
    }
}
