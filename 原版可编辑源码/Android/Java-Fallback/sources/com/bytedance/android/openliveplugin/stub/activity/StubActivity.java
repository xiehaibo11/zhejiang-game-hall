package com.bytedance.android.openliveplugin.stub.activity;

public class StubActivity {

    public static class Activity extends com.bytedance.android.openliveplugin.stub.activity.StubActivity.SuperActivity {
        public Activity() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String getPluginPkgName() {
                r1 = this;
                java.lang.String r0 = super.getPluginPkgName()
                return r0
        }

        @Override
        public void onWindowFocusChanged(boolean r1) {
                r0 = this;
                super.onWindowFocusChanged(r1)
                return
        }
    }

    public static class Activity_Behind extends com.bytedance.android.openliveplugin.stub.activity.StubActivity.SuperActivity {
        public Activity_Behind() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String getPluginPkgName() {
                r1 = this;
                java.lang.String r0 = super.getPluginPkgName()
                return r0
        }

        @Override
        public void onWindowFocusChanged(boolean r1) {
                r0 = this;
                super.onWindowFocusChanged(r1)
                return
        }
    }

    public static class Activity_Portrait extends com.bytedance.android.openliveplugin.stub.activity.StubActivity.SuperActivity {
        public Activity_Portrait() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String getPluginPkgName() {
                r1 = this;
                java.lang.String r0 = super.getPluginPkgName()
                return r0
        }

        @Override
        public void onWindowFocusChanged(boolean r1) {
                r0 = this;
                super.onWindowFocusChanged(r1)
                return
        }
    }

    public static class Activity_T extends com.bytedance.android.openliveplugin.stub.activity.StubActivity.SuperActivity {
        public Activity_T() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String getPluginPkgName() {
                r1 = this;
                java.lang.String r0 = super.getPluginPkgName()
                return r0
        }

        @Override
        public void onWindowFocusChanged(boolean r1) {
                r0 = this;
                super.onWindowFocusChanged(r1)
                return
        }
    }

    public static class Activity_T_SingleTask2 extends com.bytedance.android.openliveplugin.stub.activity.StubActivity.SuperActivity {
        public Activity_T_SingleTask2() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String getPluginPkgName() {
                r1 = this;
                java.lang.String r0 = super.getPluginPkgName()
                return r0
        }

        @Override
        public void onWindowFocusChanged(boolean r1) {
                r0 = this;
                super.onWindowFocusChanged(r1)
                return
        }
    }

    public static class AppCompat extends com.bytedance.android.openliveplugin.stub.activity.StubActivity.SuperActivity {
        public AppCompat() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String getPluginPkgName() {
                r1 = this;
                java.lang.String r0 = super.getPluginPkgName()
                return r0
        }

        @Override
        public void onWindowFocusChanged(boolean r1) {
                r0 = this;
                super.onWindowFocusChanged(r1)
                return
        }
    }

    public static class AppCompat_Portrait extends com.bytedance.android.openliveplugin.stub.activity.StubActivity.SuperActivity {
        public AppCompat_Portrait() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String getPluginPkgName() {
                r1 = this;
                java.lang.String r0 = super.getPluginPkgName()
                return r0
        }

        @Override
        public void onWindowFocusChanged(boolean r1) {
                r0 = this;
                super.onWindowFocusChanged(r1)
                return
        }
    }

    public static class AppCompat_SingleTask2 extends com.bytedance.android.openliveplugin.stub.activity.StubActivity.SuperActivity {
        public AppCompat_SingleTask2() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String getPluginPkgName() {
                r1 = this;
                java.lang.String r0 = super.getPluginPkgName()
                return r0
        }

        @Override
        public void onWindowFocusChanged(boolean r1) {
                r0 = this;
                super.onWindowFocusChanged(r1)
                return
        }
    }

    public static class AppCompat_T extends com.bytedance.android.openliveplugin.stub.activity.StubActivity.SuperActivity {
        public AppCompat_T() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String getPluginPkgName() {
                r1 = this;
                java.lang.String r0 = super.getPluginPkgName()
                return r0
        }

        @Override
        public void onWindowFocusChanged(boolean r1) {
                r0 = this;
                super.onWindowFocusChanged(r1)
                return
        }
    }

    public static class AppCompat_T_SingleTop1 extends com.bytedance.android.openliveplugin.stub.activity.StubActivity.SuperActivity {
        public AppCompat_T_SingleTop1() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String getPluginPkgName() {
                r1 = this;
                java.lang.String r0 = super.getPluginPkgName()
                return r0
        }

        @Override
        public void onWindowFocusChanged(boolean r1) {
                r0 = this;
                super.onWindowFocusChanged(r1)
                return
        }
    }

    static class SuperActivity extends com.bytedance.pangle.activity.GenerateProxyActivity {
        android.os.Handler handler;



        SuperActivity() {
                r0 = this;
                r0.<init>()
                return
        }

        static void access$000(com.bytedance.android.openliveplugin.stub.activity.StubActivity.SuperActivity r0) {
                r0.execAsyncCheckReport()
                return
        }

        private void execAsyncCheckReport() {
                r2 = this;
                java.util.concurrent.ScheduledExecutorService r0 = com.bytedance.android.openliveplugin.LivePluginHelper.sExecutor
                com.bytedance.android.openliveplugin.stub.activity.StubActivity$SuperActivity$2 r1 = new com.bytedance.android.openliveplugin.stub.activity.StubActivity$SuperActivity$2
                r1.<init>(r2)
                r0.execute(r1)
                return
        }

        @Override
        public java.lang.String getPluginPkgName() {
                r1 = this;
                java.lang.String r0 = "com.byted.live.lite"
                return r0
        }

        @Override
        public void onWindowFocusChanged(boolean r2) {
                r1 = this;
                super.onWindowFocusChanged(r2)
                if (r2 != 0) goto L1e
                android.os.Handler r2 = r1.handler
                if (r2 != 0) goto L14
                android.os.Handler r2 = new android.os.Handler
                android.os.Looper r0 = android.os.Looper.getMainLooper()
                r2.<init>(r0)
                r1.handler = r2
            L14:
                android.os.Handler r2 = r1.handler
                com.bytedance.android.openliveplugin.stub.activity.StubActivity$SuperActivity$1 r0 = new com.bytedance.android.openliveplugin.stub.activity.StubActivity$SuperActivity$1
                r0.<init>(r1)
                r2.post(r0)
            L1e:
                return
        }
    }

    public StubActivity() {
            r0 = this;
            r0.<init>()
            return
    }
}
