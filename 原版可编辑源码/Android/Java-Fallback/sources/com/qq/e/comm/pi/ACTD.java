package com.qq.e.comm.pi;

public interface ACTD {
    public static final java.lang.String APPID_KEY = "appid";
    public static final java.lang.String DELEGATE_NAME_KEY = "gdt_activity_delegate_name";

    void onActivityResult(int r1, int r2, android.content.Intent r3);

    void onAfterCreate(android.os.Bundle r1);

    void onBackPressed();

    void onBeforeCreate(android.os.Bundle r1);

    void onConfigurationChanged(android.content.res.Configuration r1);

    void onDestroy();

    void onPause();

    void onResume();

    void onStop();
}
