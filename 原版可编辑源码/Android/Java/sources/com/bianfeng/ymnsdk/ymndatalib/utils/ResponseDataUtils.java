package com.bianfeng.ymnsdk.ymndatalib.utils;

import com.bianfeng.ymnsdk.utilslib.SystemUtils;

public class ResponseDataUtils {
    public int rst_code;
    public int rst_cost;
    public String rst_msg;
    public int sub_rst_code;
    public String sub_rst_msg;
    public String time;

    public ResponseDataUtils(int i, String str, Long l) {
        l = l == null ? Long.valueOf(System.currentTimeMillis()) : l;
        l = l.longValue() == 0 ? Long.valueOf(System.currentTimeMillis()) : l;
        this.rst_code = i;
        this.rst_msg = str;
        long jCurrentTimeMillis = System.currentTimeMillis();
        this.rst_cost = (int) (jCurrentTimeMillis - l.longValue());
        try {
            this.time = SystemUtils.getRFC3339(Long.valueOf(jCurrentTimeMillis));
        } catch (Exception e) {
            this.time = jCurrentTimeMillis + "";
        }
        setSubdata(str);
    }

    private void setSubdata(String str) {
        String[] strArrSplit = RstMsgSplitUtils.split(str);
        this.sub_rst_code = Integer.parseInt(strArrSplit[0]);
        this.sub_rst_msg = strArrSplit[1];
    }

    public int getRst_code() {
        return this.rst_code;
    }

    public int getRst_cost() {
        return this.rst_cost;
    }

    public String getRst_msg() {
        return this.rst_msg;
    }

    public int getSub_rst_code() {
        return this.sub_rst_code;
    }

    public String getSub_rst_msg() {
        return this.sub_rst_msg;
    }

    public String getTime() {
        return this.time;
    }
}
