package com.bianfeng.ymnsdk.entity;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

/* JADX INFO: loaded from: classes.dex */
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

    public void setChannel_id(int channel_id) {
        this.channel_id = channel_id;
    }

    public String getClient_ip() {
        return this.client_ip;
    }

    public void setClient_ip(String client_ip) {
        this.client_ip = client_ip;
    }

    public String getCreated_at() {
        return this.created_at;
    }

    public void setCreated_at(String created_at) {
        this.created_at = created_at;
    }

    public int getDeliver_status() {
        return this.deliver_status;
    }

    public void setDeliver_status(int deliver_status) {
        this.deliver_status = deliver_status;
    }

    public int getDiscount() {
        return this.discount;
    }

    public void setDiscount(int discount) {
        this.discount = discount;
    }

    public int getFrom_type() {
        return this.from_type;
    }

    public void setFrom_type(int from_type) {
        this.from_type = from_type;
    }

    public int getInst_id() {
        return this.inst_id;
    }

    public void setInst_id(int inst_id) {
        this.inst_id = inst_id;
    }

    public int getIs_test() {
        return this.is_test;
    }

    public void setIs_test(int is_test) {
        this.is_test = is_test;
    }

    public String getItem_code() {
        return this.item_code;
    }

    public void setItem_code(String item_code) {
        this.item_code = item_code;
    }

    public int getItem_qty() {
        return this.item_qty;
    }

    public void setItem_qty(int item_qty) {
        this.item_qty = item_qty;
    }

    public String getNumid() {
        return this.numid;
    }

    public void setNumid(String numid) {
        this.numid = numid;
    }

    public String getOrder_no() {
        return this.order_no;
    }

    public void setOrder_no(String order_no) {
        this.order_no = order_no;
    }

    public String getPar_value() {
        return this.par_value;
    }

    public void setPar_value(String par_value) {
        this.par_value = par_value;
    }

    public String getPay_attach() {
        return this.pay_attach;
    }

    public void setPay_attach(String pay_attach) {
        this.pay_attach = pay_attach;
    }

    public int getPay_status() {
        return this.pay_status;
    }

    public void setPay_status(int pay_status) {
        this.pay_status = pay_status;
    }

    public Object getRewards() {
        return this.rewards;
    }

    public void setRewards(Object rewards) {
        this.rewards = rewards;
    }

    public String getSource() {
        return this.source;
    }

    public void setSource(String source) {
        this.source = source;
    }

    public String getTotal_fee() {
        return this.total_fee;
    }

    public void setTotal_fee(String total_fee) {
        this.total_fee = total_fee;
    }

    public String getTrans_no() {
        return this.trans_no;
    }

    public void setTrans_no(String trans_no) {
        this.trans_no = trans_no;
    }

    public String getUserid() {
        return this.userid;
    }

    public void setUserid(String userid) {
        this.userid = userid;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
