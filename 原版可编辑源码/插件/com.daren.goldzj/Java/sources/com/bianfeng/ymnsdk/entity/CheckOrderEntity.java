package com.bianfeng.ymnsdk.entity;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class CheckOrderEntity {
    private int channel_id;
    private String client_ip;
    private String created_at;
    private int deliver_status;
    private int discount;
    private int from_type;
    private int inst_id;
    private int is_test;
    private String item_code;
    private int item_qty;
    private String numid;
    private String order_no;
    private String par_value;
    private String pay_attach;
    private int pay_status;
    private Object rewards;
    private String source;
    private String total_fee;
    private String trans_no;
    private String userid;

    public int getChannel_id() {
        return this.channel_id;
    }

    public String getClient_ip() {
        return this.client_ip;
    }

    public String getCreated_at() {
        return this.created_at;
    }

    public int getDeliver_status() {
        return this.deliver_status;
    }

    public int getDiscount() {
        return this.discount;
    }

    public int getFrom_type() {
        return this.from_type;
    }

    public int getInst_id() {
        return this.inst_id;
    }

    public int getIs_test() {
        return this.is_test;
    }

    public String getItem_code() {
        return this.item_code;
    }

    public int getItem_qty() {
        return this.item_qty;
    }

    public String getNumid() {
        return this.numid;
    }

    public String getOrder_no() {
        return this.order_no;
    }

    public String getPar_value() {
        return this.par_value;
    }

    public String getPay_attach() {
        return this.pay_attach;
    }

    public int getPay_status() {
        return this.pay_status;
    }

    public Object getRewards() {
        return this.rewards;
    }

    public String getSource() {
        return this.source;
    }

    public String getTotal_fee() {
        return this.total_fee;
    }

    public String getTrans_no() {
        return this.trans_no;
    }

    public String getUserid() {
        return this.userid;
    }

    public void setChannel_id(int i) {
        this.channel_id = i;
    }

    public void setClient_ip(String str) {
        this.client_ip = str;
    }

    public void setCreated_at(String str) {
        this.created_at = str;
    }

    public void setDeliver_status(int i) {
        this.deliver_status = i;
    }

    public void setDiscount(int i) {
        this.discount = i;
    }

    public void setFrom_type(int i) {
        this.from_type = i;
    }

    public void setInst_id(int i) {
        this.inst_id = i;
    }

    public void setIs_test(int i) {
        this.is_test = i;
    }

    public void setItem_code(String str) {
        this.item_code = str;
    }

    public void setItem_qty(int i) {
        this.item_qty = i;
    }

    public void setNumid(String str) {
        this.numid = str;
    }

    public void setOrder_no(String str) {
        this.order_no = str;
    }

    public void setPar_value(String str) {
        this.par_value = str;
    }

    public void setPay_attach(String str) {
        this.pay_attach = str;
    }

    public void setPay_status(int i) {
        this.pay_status = i;
    }

    public void setRewards(Object obj) {
        this.rewards = obj;
    }

    public void setSource(String str) {
        this.source = str;
    }

    public void setTotal_fee(String str) {
        this.total_fee = str;
    }

    public void setTrans_no(String str) {
        this.trans_no = str;
    }

    public void setUserid(String str) {
        this.userid = str;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
