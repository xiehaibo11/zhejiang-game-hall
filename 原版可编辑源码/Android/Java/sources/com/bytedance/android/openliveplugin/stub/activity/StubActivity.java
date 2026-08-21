package com.bytedance.android.openliveplugin.stub.activity;

import android.os.Handler;
import android.os.Looper;
import com.bytedance.android.live.base.api.IOuterLiveRoomService;
import com.bytedance.android.live.base.api.JavaCallsUtils;
import com.bytedance.android.openliveplugin.LivePluginHelper;
import com.bytedance.pangle.activity.GenerateProxyActivity;

public class StubActivity {

    static class SuperActivity extends GenerateProxyActivity {
        Handler handler;

        @Override
        public String getPluginPkgName() {
            return "com.byted.live.lite";
        }

        SuperActivity() {
        }

        @Override
        public void onWindowFocusChanged(boolean z) {
            super.onWindowFocusChanged(z);
            if (z) {
                return;
            }
            if (this.handler == null) {
                this.handler = new Handler(Looper.getMainLooper());
            }
            this.handler.post(new Runnable() {
                @Override
                public void run() {
                    SuperActivity.this.execAsyncCheckReport();
                }
            });
        }

        private void execAsyncCheckReport() {
            LivePluginHelper.sExecutor.execute(new Runnable() {
                @Override
                public void run() {
                    IOuterLiveRoomService liveRoomService = LivePluginHelper.getLiveRoomService();
                    if (liveRoomService == null || SuperActivity.this.mTargetActivity == null) {
                        return;
                    }
                    try {
                        liveRoomService.callExpandMethod("report_window_focus_change", JavaCallsUtils.getField(SuperActivity.this, "mToken"), SuperActivity.this.mTargetActivity.getClass().getCanonicalName());
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
            });
        }
    }

    public static class Activity_Portrait extends SuperActivity {
        @Override
        public String getPluginPkgName() {
            return super.getPluginPkgName();
        }

        @Override
        public void onWindowFocusChanged(boolean z) {
            super.onWindowFocusChanged(z);
        }
    }

    public static class AppCompat extends SuperActivity {
        @Override
        public String getPluginPkgName() {
            return super.getPluginPkgName();
        }

        @Override
        public void onWindowFocusChanged(boolean z) {
            super.onWindowFocusChanged(z);
        }
    }

    public static class AppCompat_T extends SuperActivity {
        @Override
        public String getPluginPkgName() {
            return super.getPluginPkgName();
        }

        @Override
        public void onWindowFocusChanged(boolean z) {
            super.onWindowFocusChanged(z);
        }
    }

    public static class AppCompat_T_SingleTop1 extends SuperActivity {
        @Override
        public String getPluginPkgName() {
            return super.getPluginPkgName();
        }

        @Override
        public void onWindowFocusChanged(boolean z) {
            super.onWindowFocusChanged(z);
        }
    }

    public static class Activity_T extends SuperActivity {
        @Override
        public String getPluginPkgName() {
            return super.getPluginPkgName();
        }

        @Override
        public void onWindowFocusChanged(boolean z) {
            super.onWindowFocusChanged(z);
        }
    }

    public static class Activity extends SuperActivity {
        @Override
        public String getPluginPkgName() {
            return super.getPluginPkgName();
        }

        @Override
        public void onWindowFocusChanged(boolean z) {
            super.onWindowFocusChanged(z);
        }
    }

    public static class AppCompat_Portrait extends SuperActivity {
        @Override
        public String getPluginPkgName() {
            return super.getPluginPkgName();
        }

        @Override
        public void onWindowFocusChanged(boolean z) {
            super.onWindowFocusChanged(z);
        }
    }

    public static class Activity_T_SingleTask2 extends SuperActivity {
        @Override
        public String getPluginPkgName() {
            return super.getPluginPkgName();
        }

        @Override
        public void onWindowFocusChanged(boolean z) {
            super.onWindowFocusChanged(z);
        }
    }

    public static class Activity_Behind extends SuperActivity {
        @Override
        public String getPluginPkgName() {
            return super.getPluginPkgName();
        }

        @Override
        public void onWindowFocusChanged(boolean z) {
            super.onWindowFocusChanged(z);
        }
    }

    public static class AppCompat_SingleTask2 extends SuperActivity {
        @Override
        public String getPluginPkgName() {
            return super.getPluginPkgName();
        }

        @Override
        public void onWindowFocusChanged(boolean z) {
            super.onWindowFocusChanged(z);
        }
    }
}
