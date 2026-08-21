package com.bianfeng.paylib.action;

public class RequestNetIpAction {
    private static com.bianfeng.paylib.action.RequestNetIpAction action;
    private com.bianfeng.paylib.action.RequestNetIpCallBack callBack;


    static {
            com.bianfeng.paylib.action.RequestNetIpAction r0 = new com.bianfeng.paylib.action.RequestNetIpAction
            r0.<init>()
            com.bianfeng.paylib.action.RequestNetIpAction.action = r0
            return
    }

    private RequestNetIpAction() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.bianfeng.paylib.action.RequestNetIpCallBack access$000(com.bianfeng.paylib.action.RequestNetIpAction r0) {
            com.bianfeng.paylib.action.RequestNetIpCallBack r0 = r0.callBack
            return r0
    }

    public static com.bianfeng.paylib.action.RequestNetIpAction getInstance() {
            com.bianfeng.paylib.action.RequestNetIpAction r0 = com.bianfeng.paylib.action.RequestNetIpAction.action
            return r0
    }

    public void GetNetIp() {
            r1 = this;
            com.bianfeng.paylib.action.RequestNetIpAction$1 r0 = new com.bianfeng.paylib.action.RequestNetIpAction$1
            r0.<init>(r1)
            r0.start()
            return
    }

    public com.bianfeng.paylib.action.RequestNetIpAction setCallBack(com.bianfeng.paylib.action.RequestNetIpCallBack r1) {
            r0 = this;
            r0.callBack = r1
            return r0
    }
}
