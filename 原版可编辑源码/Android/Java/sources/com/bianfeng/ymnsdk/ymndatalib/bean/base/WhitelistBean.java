package com.bianfeng.ymnsdk.ymndatalib.bean.base;

import java.util.List;

public class WhitelistBean {
    public int code;
    public DataBean data;
    public String message;

    public static class DataBean {
        public List<String> functions;

        public List<String> getFunctions() {
            return this.functions;
        }

        public void setFunctions(List<String> list) {
            this.functions = list;
        }

        public String toString() {
            return "DataBean{functions=" + this.functions + '}';
        }
    }

    public int getCode() {
        return this.code;
    }

    public DataBean getData() {
        return this.data;
    }

    public String getMessage() {
        return this.message;
    }

    public void setCode(int i) {
        this.code = i;
    }

    public void setData(DataBean dataBean) {
        this.data = dataBean;
    }

    public void setMessage(String str) {
        this.message = str;
    }

    public String toString() {
        return "WhitelistBean{code=" + this.code + ", data=" + this.data + ", message='" + this.message + "'}";
    }
}
