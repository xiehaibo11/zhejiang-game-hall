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

    public CheckOrderEntity() {
    }

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

    public void setChannel_id(int r1) {
        this.channel_id = r1;
    }

    public void setClient_ip(String r1) {
        this.client_ip = r1;
    }

    public void setCreated_at(String r1) {
        this.created_at = r1;
    }

    public void setDeliver_status(int r1) {
        this.deliver_status = r1;
    }

    public void setDiscount(int r1) {
        this.discount = r1;
    }

    public void setFrom_type(int r1) {
        this.from_type = r1;
    }

    public void setInst_id(int r1) {
        this.inst_id = r1;
    }

    public void setIs_test(int r1) {
        this.is_test = r1;
    }

    public void setItem_code(String r1) {
        this.item_code = r1;
    }

    public void setItem_qty(int r1) {
        this.item_qty = r1;
    }

    public void setNumid(String r1) {
        this.numid = r1;
    }

    public void setOrder_no(String r1) {
        this.order_no = r1;
    }

    public void setPar_value(String r1) {
        this.par_value = r1;
    }

    public void setPay_attach(String r1) {
        this.pay_attach = r1;
    }

    public void setPay_status(int r1) {
        this.pay_status = r1;
    }

    public void setRewards(Object r1) {
        this.rewards = r1;
    }

    public void setSource(String r1) {
        this.source = r1;
    }

    public void setTotal_fee(String r1) {
        this.total_fee = r1;
    }

    public void setTrans_no(String r1) {
        this.trans_no = r1;
    }

    public void setUserid(String r1) {
        this.userid = r1;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
