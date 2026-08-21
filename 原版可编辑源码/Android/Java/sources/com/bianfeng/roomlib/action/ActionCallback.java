package com.bianfeng.roomlib.action;

public interface ActionCallback<M> {
    void onFali(String str);

    void onSuccess(M m);
}
