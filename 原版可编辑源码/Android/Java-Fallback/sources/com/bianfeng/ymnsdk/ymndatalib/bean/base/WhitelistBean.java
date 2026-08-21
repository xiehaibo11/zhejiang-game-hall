package com.bianfeng.ymnsdk.ymndatalib.bean.base;

public class WhitelistBean {
    public int code;
    public com.bianfeng.ymnsdk.ymndatalib.bean.base.WhitelistBean.DataBean data;
    public java.lang.String message;

    public static class DataBean {
        public java.util.List<java.lang.String> functions;

        public DataBean() {
                r0 = this;
                r0.<init>()
                return
        }

        public java.util.List<java.lang.String> getFunctions() {
                r1 = this;
                java.util.List<java.lang.String> r0 = r1.functions
                return r0
        }

        public void setFunctions(java.util.List<java.lang.String> r1) {
                r0 = this;
                r0.functions = r1
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "DataBean{functions="
                r0.append(r1)
                java.util.List<java.lang.String> r1 = r2.functions
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public WhitelistBean() {
            r0 = this;
            r0.<init>()
            return
    }

    public int getCode() {
            r1 = this;
            int r0 = r1.code
            return r0
    }

    public com.bianfeng.ymnsdk.ymndatalib.bean.base.WhitelistBean.DataBean getData() {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.bean.base.WhitelistBean$DataBean r0 = r1.data
            return r0
    }

    public java.lang.String getMessage() {
            r1 = this;
            java.lang.String r0 = r1.message
            return r0
    }

    public void setCode(int r1) {
            r0 = this;
            r0.code = r1
            return
    }

    public void setData(com.bianfeng.ymnsdk.ymndatalib.bean.base.WhitelistBean.DataBean r1) {
            r0 = this;
            r0.data = r1
            return
    }

    public void setMessage(java.lang.String r1) {
            r0 = this;
            r0.message = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "WhitelistBean{code="
            r0.append(r1)
            int r1 = r2.code
            r0.append(r1)
            java.lang.String r1 = ", data="
            r0.append(r1)
            com.bianfeng.ymnsdk.ymndatalib.bean.base.WhitelistBean$DataBean r1 = r2.data
            r0.append(r1)
            java.lang.String r1 = ", message='"
            r0.append(r1)
            java.lang.String r1 = r2.message
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
