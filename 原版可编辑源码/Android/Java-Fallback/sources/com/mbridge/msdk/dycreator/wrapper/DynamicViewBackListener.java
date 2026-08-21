package com.mbridge.msdk.dycreator.wrapper;

public interface DynamicViewBackListener {
    void viewClicked(com.mbridge.msdk.dycreator.binding.response.base.BaseRespData r1);

    void viewCreateFail(com.mbridge.msdk.dycreator.b.a r1);

    void viewCreatedSuccess(android.view.View r1);
}
