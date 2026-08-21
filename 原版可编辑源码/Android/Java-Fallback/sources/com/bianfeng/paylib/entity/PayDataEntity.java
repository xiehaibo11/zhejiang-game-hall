package com.bianfeng.paylib.entity;

public class PayDataEntity {
    private java.lang.String ext;
    private java.lang.String notify_url;
    private java.lang.String order_id;
    private java.lang.String product_count;
    private java.lang.String product_id;
    private java.lang.String product_name;
    private java.lang.String product_price;
    private java.lang.String role_balance;
    private java.lang.String role_grade;
    private java.lang.String role_id;
    private java.lang.String role_name;
    private java.lang.String server_id;
    private java.lang.String server_name;

    public PayDataEntity() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getExt() {
            r1 = this;
            java.lang.String r0 = r1.ext
            return r0
    }

    public java.lang.String getNotify_url() {
            r1 = this;
            java.lang.String r0 = r1.notify_url
            return r0
    }

    public java.lang.String getOrder_id() {
            r1 = this;
            java.lang.String r0 = r1.order_id
            return r0
    }

    public java.lang.String getProduct_count() {
            r1 = this;
            java.lang.String r0 = r1.product_count
            return r0
    }

    public java.lang.String getProduct_id() {
            r1 = this;
            java.lang.String r0 = r1.product_id
            return r0
    }

    public java.lang.String getProduct_name() {
            r1 = this;
            java.lang.String r0 = r1.product_name
            return r0
    }

    public java.lang.String getProduct_price() {
            r1 = this;
            java.lang.String r0 = r1.product_price
            return r0
    }

    public java.lang.String getRole_balance() {
            r1 = this;
            java.lang.String r0 = r1.role_balance
            return r0
    }

    public java.lang.String getRole_grade() {
            r1 = this;
            java.lang.String r0 = r1.role_grade
            return r0
    }

    public java.lang.String getRole_id() {
            r1 = this;
            java.lang.String r0 = r1.role_id
            return r0
    }

    public java.lang.String getRole_name() {
            r1 = this;
            java.lang.String r0 = r1.role_name
            return r0
    }

    public java.lang.String getServer_id() {
            r1 = this;
            java.lang.String r0 = r1.server_id
            return r0
    }

    public java.lang.String getServer_name() {
            r1 = this;
            java.lang.String r0 = r1.server_name
            return r0
    }

    public void setExt(java.lang.String r1) {
            r0 = this;
            r0.ext = r1
            return
    }

    public void setNotify_url(java.lang.String r1) {
            r0 = this;
            r0.notify_url = r1
            return
    }

    public void setOrder_id(java.lang.String r1) {
            r0 = this;
            r0.order_id = r1
            return
    }

    public void setProduct_count(java.lang.String r1) {
            r0 = this;
            r0.product_count = r1
            return
    }

    public void setProduct_id(java.lang.String r1) {
            r0 = this;
            r0.product_id = r1
            return
    }

    public void setProduct_name(java.lang.String r1) {
            r0 = this;
            r0.product_name = r1
            return
    }

    public void setProduct_price(java.lang.String r1) {
            r0 = this;
            r0.product_price = r1
            return
    }

    public void setRole_balance(java.lang.String r1) {
            r0 = this;
            r0.role_balance = r1
            return
    }

    public void setRole_grade(java.lang.String r1) {
            r0 = this;
            r0.role_grade = r1
            return
    }

    public void setRole_id(java.lang.String r1) {
            r0 = this;
            r0.role_id = r1
            return
    }

    public void setRole_name(java.lang.String r1) {
            r0 = this;
            r0.role_name = r1
            return
    }

    public void setServer_id(java.lang.String r1) {
            r0 = this;
            r0.server_id = r1
            return
    }

    public void setServer_name(java.lang.String r1) {
            r0 = this;
            r0.server_name = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()
            java.lang.String r0 = r0.toJson(r1)
            return r0
    }
}
