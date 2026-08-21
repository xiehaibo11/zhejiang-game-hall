package com.bykv.vk.openvk.api.plugin;

public class c {
    private static volatile boolean c;
    private static final java.util.HashMap<java.lang.String, com.bykv.vk.openvk.TTPluginListener> df = null;
    private static volatile com.bykv.vk.openvk.TTPluginListener hq;
    private static volatile com.bykv.vk.openvk.api.plugin.c pp;
    private static volatile dalvik.system.BaseDexClassLoader pt;
    private static final java.util.HashMap<java.lang.String, android.os.Handler> q = null;
    private static final java.lang.String rg = null;
    private org.json.JSONObject b;
    private final android.content.Context bm;
    private final java.util.concurrent.CountDownLatch fw;
    private volatile java.lang.String rz;
    private volatile boolean ux;





    static final class df implements com.bykv.vk.openvk.TTAdEvent {
        df() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onEvent(int r5, android.os.Bundle r6) {
                r4 = this;
                r0 = 1
                if (r5 != r0) goto L6f
                java.lang.String r5 = "config"
                java.lang.String r5 = r6.getString(r5)
                java.lang.String r1 = "plugin_pkg_name"
                java.lang.String r1 = r6.getString(r1)
                java.lang.String r2 = "code"
                int r2 = r6.getInt(r2)
                if (r2 == 0) goto L1b
                com.bykv.vk.openvk.api.plugin.c.rg(r1, r2)
                return
            L1b:
                com.bykv.vk.openvk.api.plugin.df r5 = com.bykv.vk.openvk.api.plugin.c.df(r5)
                java.lang.String r1 = "TTPluginManager"
                if (r5 == 0) goto L6a
                java.lang.String r2 = r5.mPackageName
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 == 0) goto L2c
                goto L6a
            L2c:
                java.lang.String r2 = "success"
                boolean r2 = r6.getBoolean(r2)
                if (r2 == 0) goto L62
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "plugin update received: "
                r2.append(r3)
                java.lang.String r3 = r5.mPackageName
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                com.bykv.vk.openvk.api.rg.pt(r1, r2)
                boolean r1 = r5.isRevert()
                if (r1 == 0) goto L56
                java.lang.String r5 = r5.mPackageName
                com.bytedance.pangle.Zeus.unInstallPlugin(r5)
                goto L6f
            L56:
                boolean r5 = com.bykv.vk.openvk.api.plugin.c.rg(r5)
                if (r5 == 0) goto L6f
                java.lang.String r5 = "installed"
                r6.putBoolean(r5, r0)
                goto L6f
            L62:
                java.lang.String r5 = r5.mPackageName
                r6 = 1004(0x3ec, float:1.407E-42)
                com.bykv.vk.openvk.api.plugin.c.rg(r5, r6)
                goto L6f
            L6a:
                java.lang.String r5 = "plugin update received with invalid config"
                com.bykv.vk.openvk.api.rg.pt(r1, r5)
            L6f:
                return
        }
    }

    static final class q implements com.bykv.vk.openvk.api.proto.EventListener, java.io.Serializable {
        q() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.bykv.vk.openvk.api.proto.ValueSet onEvent(int r6, com.bykv.vk.openvk.api.proto.Result r7) {
                r5 = this;
                com.bykv.vk.openvk.api.q r0 = com.bykv.vk.openvk.api.q.rg()
                r1 = 1
                if (r6 != r1) goto L6b
                com.bykv.vk.openvk.api.proto.ValueSet r6 = r7.values()
                r2 = 0
                if (r6 != 0) goto Lf
                return r2
            Lf:
                r3 = 3
                java.lang.String r3 = r6.stringValue(r3)
                int r4 = r7.code()
                boolean r7 = r7.isSuccess()
                if (r7 != 0) goto L22
                com.bykv.vk.openvk.api.plugin.c.rg(r3, r4)
                return r2
            L22:
                r7 = 2
                java.lang.String r6 = r6.stringValue(r7)
                com.bykv.vk.openvk.api.plugin.df r6 = com.bykv.vk.openvk.api.plugin.c.df(r6)
                java.lang.String r7 = "TTPluginManager"
                if (r6 == 0) goto L65
                java.lang.String r3 = r6.mPackageName
                boolean r3 = android.text.TextUtils.isEmpty(r3)
                if (r3 == 0) goto L38
                goto L65
            L38:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "plugin update received: "
                r2.append(r3)
                java.lang.String r3 = r6.mPackageName
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                com.bykv.vk.openvk.api.rg.pt(r7, r2)
                boolean r7 = r6.isRevert()
                if (r7 == 0) goto L5a
                java.lang.String r6 = r6.mPackageName
                com.bytedance.pangle.Zeus.unInstallPlugin(r6)
                goto L6b
            L5a:
                boolean r6 = com.bykv.vk.openvk.api.plugin.c.rg(r6)
                if (r6 == 0) goto L6b
                r6 = 4
                r0.rg(r6, r1)
                goto L6b
            L65:
                java.lang.String r6 = "plugin update received with invalid config"
                com.bykv.vk.openvk.api.rg.pt(r7, r6)
                return r2
            L6b:
                com.bykv.vk.openvk.api.proto.ValueSet r6 = r0.df()
                return r6
        }
    }

    private static final class rg implements com.bytedance.pangle.log.IZeusLogger {
        private rg() {
                r0 = this;
                r0.<init>()
                return
        }

        rg(com.bykv.vk.openvk.api.plugin.c.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void e(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
                r0 = this;
                com.bykv.vk.openvk.api.rg.df(r1, r2, r3)
                return
        }

        @Override
        public void i(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                com.bykv.vk.openvk.api.rg.q(r1, r2)
                return
        }

        @Override
        public void v(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                com.bykv.vk.openvk.api.rg.rg(r1, r2)
                return
        }

        @Override
        public void w(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                com.bykv.vk.openvk.api.rg.rg(r1, r2)
                return
        }

        @Override
        public void w(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
                r0 = this;
                com.bykv.vk.openvk.api.rg.rg(r1, r2, r3)
                return
        }
    }

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "next"
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bykv.vk.openvk.api.plugin.c.rg = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bykv.vk.openvk.api.plugin.c.df = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bykv.vk.openvk.api.plugin.c.q = r0
            r0 = 0
            com.bykv.vk.openvk.api.plugin.c.pp = r0
            return
    }

    private c(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch
            r1 = 1
            r0.<init>(r1)
            r2.fw = r0
            r0 = 0
            r2.ux = r0
            java.lang.String r0 = "none"
            r2.rz = r0
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r2.b = r0
            android.content.Context r0 = r3.getApplicationContext()
            r2.bm = r0
            com.bykv.vk.openvk.api.plugin.pt.rg(r3)
            android.content.Context r3 = r3.getApplicationContext()
            r2.df(r3)
            return
    }

    static com.bykv.vk.openvk.api.plugin.df df(java.lang.String r0) {
            com.bykv.vk.openvk.api.plugin.df r0 = q(r0)
            return r0
    }

    private void df(android.content.Context r4) {
            r3 = this;
            com.bykv.vk.openvk.api.plugin.c$1 r0 = new com.bykv.vk.openvk.api.plugin.c$1     // Catch: java.lang.Throwable -> L46
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L46
            com.bytedance.pangle.GlobalParam r1 = com.bytedance.pangle.GlobalParam.getInstance()     // Catch: java.lang.Throwable -> L46
            r1.setReporter(r0)     // Catch: java.lang.Throwable -> L46
            r0 = 0
            r1.setCheckPermission(r0)     // Catch: java.lang.Throwable -> L46
            java.io.File r0 = q(r4)     // Catch: java.lang.Throwable -> L46
            r1.setDownloadDir(r0)     // Catch: java.lang.Throwable -> L46
            com.bykv.vk.openvk.api.plugin.c$rg r0 = new com.bykv.vk.openvk.api.plugin.c$rg     // Catch: java.lang.Throwable -> L46
            r2 = 0
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L46
            r1.setLogger(r0)     // Catch: java.lang.Throwable -> L46
            java.lang.String r0 = "com.bykv.vk"
            java.lang.String r2 = "MIIDfTCCAmWgAwIBAgIEfRwYPjANBgkqhkiG9w0BAQsFADBvMQswCQYDVQQGEwJDTjEQMA4GA1UECBMHQmVpamluZzEQMA4GA1UEBxMHQmVpamluZzESMBAGA1UEChMJQnl0ZURhbmNlMQ8wDQYDVQQLEwZQYW5nbGUxFzAVBgNVBAMTDkNodWFuIFNoYW4gSmlhMB4XDTIxMTEwODA2MjQzOVoXDTQ2MTEwMjA2MjQzOVowbzELMAkGA1UEBhMCQ04xEDAOBgNVBAgTB0JlaWppbmcxEDAOBgNVBAcTB0JlaWppbmcxEjAQBgNVBAoTCUJ5dGVEYW5jZTEPMA0GA1UECxMGUGFuZ2xlMRcwFQYDVQQDEw5DaHVhbiBTaGFuIEppYTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAIBKeRL+4mfCn1SLYv6OemfwwItkjlLPyqOEugkV6lanFTcZgLwEl5LIkL0y28UncPtMX1Mii6DzCdJ/plw7S9+RT/hYDneu339IKWojaU2qai/5FokHlQ0MMnYl5yry00ghVPsl1u+03cQA2ZnjIMiFhrBJpQzHt7IYvq2aEEMBcY8uT7iFoBI848e1mL1joVS2z02C3NliP7ZNARkXH+rTQAlCJulT5IZk+V/PTaKqzgNrkhsKh0/tBmU7m8u79x/xpgGsE19H18AgS4P/9/MDCRe2Z35boZeccaUy2MXCwv3djzUcDk3rRzQPYzdpyyRnrFMuhiKesc5VHgUMs9kCAwEAAaMhMB8wHQYDVR0OBBYEFENENrNWGzc2WhxdvhoMDs57U70zMA0GCSqGSIb3DQEBCwUAA4IBAQAHqDCrmvyBBmIGXwuL1rwS/Qv9ZJIZykBIaNMm+H1IfitCl4yXd9N2n+PjE0UZtxZ21UZOt9wAr+RFiSl5YRXqpt7WLARTy4YW3RiQ+wiL7bshzeSYBoSiC427Bfeq0WjwY0/jHlr8uouppyJOz++6U9hrYX2EW/6UjH5XlWiKQJ6b2ZzPcP8Xpg/TJn4tWvXJP6jw9kRRP2GmMttY78leWQst2QEZILmWJubXRLPj9O+qx2uP9oGTD4sc1vb9hzkOHBIHzGaalqLFbbGaeFpLFHoGTsnOfPTwUVKDZYmxbkcmR1bp7eYOW+nSQNMLn0FjDewZl5l37Sa/gz0WVHon"
            r1.setSignature(r0, r2)     // Catch: java.lang.Throwable -> L46
            java.lang.String r0 = "com.byted.csj.ext"
            java.lang.String r2 = "MIIDezCCAmOgAwIBAgIENkE1KDANBgkqhkiG9w0BAQsFADBtMQswCQYDVQQGEwI4NjEQMA4GA1UECBMHYmVpamluZzEQMA4GA1UEBxMHYmVpamluZzESMBAGA1UEChMJYnl0ZWRhbmNlMRIwEAYDVQQLEwlieXRlZGFuY2UxEjAQBgNVBAMTCWJ5dGVkYW5jZTAgFw0yMjExMDIwODI3MzlaGA8yMDUwMDMyMDA4MjczOVowbTELMAkGA1UEBhMCODYxEDAOBgNVBAgTB2JlaWppbmcxEDAOBgNVBAcTB2JlaWppbmcxEjAQBgNVBAoTCWJ5dGVkYW5jZTESMBAGA1UECxMJYnl0ZWRhbmNlMRIwEAYDVQQDEwlieXRlZGFuY2UwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCc9Z2F3xxOMX1qTXMy2aPmS9OSkqrp8C8bHwS1hkNVR4umKREuqOn73INNo+R706jaCVnlPwxDwWjtX6H74DE4CveivyM9f2wNC3yIyDW+5j7lW/keTQcOlGLDEJQv4O/6FbB/jNU6epjyNaNIZhgZcvTpgaSixbdyHzRTFmvMh+WovdVK/J9LnHOQ+pmPZj7NB6MQRGMUrPEotLHQca3cmnLrnPAaZQaVoaFE9lOt9syyqEuf361SprNIGDtbkJuX3EqV/QOKWFwZX94IS7ZGSvfyCojcD4kaUSbaSoZC7zEuBb7l69g+ZMrJ/v6wkm01wxsNNssUwF7k6Sp0zubbAgMBAAGjITAfMB0GA1UdDgQWBBSxk+gVdDco1dP65hP67qoKNlMEYDANBgkqhkiG9w0BAQsFAAOCAQEAfosExl/AYEbS2xqHBTHa28cvnp/SElUQuzW6aWLqkfk9cxmFSI/euUV3/eB8RN+U2X47Y05u6+XUxTv0tSSEtyXNawm0qWH8jkR4gZY38YqBChKjhea668oT5X3Uocrw7SYXO/BfI8SKPa0uI/U8Cyl3uctbmmq/pPUkd3mKAy+HgyJoThD6K0oyiADlygngUMVTv6Uvid4qPj/bBnxI+LvVeX4l1dxGqWkiafQW9sz+RbFdge3X2XsSH4eo01BsCwOYEv1lHO2FrbAtFNpnIsSqrERdFaAJZ3tlJmg9bA03png8A2AajEjkhaOhduJB8zkSlvHNpoQMIAS9WtkG/w=="
            r1.setSignature(r0, r2)     // Catch: java.lang.Throwable -> L46
            java.lang.String r0 = "com.byted.live.lite"
            java.lang.String r2 = "MIIDSTCCAjGgAwIBAgIEaLy5tzANBgkqhkiG9w0BAQsFADBVMQswCQYDVQQGEwIxMTEMMAoGA1UECBMDMTExMQ4wDAYDVQQHEwUxMTExMTEMMAoGA1UEChMDMTExMQwwCgYDVQQLEwMxMTExDDAKBgNVBAMTAzExMTAeFw0yMDEyMDMxMjQyMTJaFw00NTExMjcxMjQyMTJaMFUxCzAJBgNVBAYTAjExMQwwCgYDVQQIEwMxMTExDjAMBgNVBAcTBTExMTExMQwwCgYDVQQKEwMxMTExDDAKBgNVBAsTAzExMTEMMAoGA1UEAxMDMTExMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA45E52YdkJm4gPCXZq7KDoM1h6pgSswllC/CwDOmh8pDGvX4ROaYP1vr2biRlXMHg7G0iXpxWVdlTtx+4QFd3dC+cGJQk0f6apGo2n2RpMA0zIsSf0VO1a3GjWLei5INo+4RDdciqJ4jfsoqBIjZETRkky+UU4eO/oyrAwOu4KdMln3Bg3u7eHWU4kMFrXxrRruT3Q/9gzlO90yQa0CZPWVDrk6cGJtJwJGhWm+62S3U8D26HE++eGP7ve83QBDGtKqx7HpCAFWUiYBgXGq12H0amQDkKcPcr/EFCaBlombSgkN0t6zBX80m+wcUPC75IBTmMV/DT2dXcgjZ2I1JSCQIDAQABoyEwHzAdBgNVHQ4EFgQUPDyIeKI0KhZFPHyn36gMMIYrpukwDQYJKoZIhvcNAQELBQADggEBAHkl0DoCRwn+XKsDJE+wGMpBBqUDzL6DSOnJx4SNqb7YZZU0ThcDK7jY4If3QRkvMio6ODrVZc2U/m/Tc3VeMk5h2W2UZRUWHNH3k9Xe0720uL20ZeH2Y6IG4L5HG8kIbTbFtX3gJpPG/xAcez+CzyCFLWQAZt1N+csG0syWkXJ0Nryq8VrgSCyCXD1KzFxrOe+65wtu50Vi68Vlbk7BZe/G8Qm0RhKmxq5BPMBJ4uY3be+03Ba5qC//o1XQHOEAjrJKXcN5wqHdFZTkmuxVyIPogZOzx4JlNl0zOrYGDJxp7aZfKF9FkXQyF7x0Ns3mZEtjx/+flXRzAAU9MDhPr/0="
            r1.setSignature(r0, r2)     // Catch: java.lang.Throwable -> L46
            com.bykv.vk.openvk.api.plugin.c$2 r0 = new com.bykv.vk.openvk.api.plugin.c$2     // Catch: java.lang.Throwable -> L46
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L46
            com.bytedance.pangle.Zeus.registerPluginStateListener(r0)     // Catch: java.lang.Throwable -> L46
            android.app.Application r4 = (android.app.Application) r4     // Catch: java.lang.Throwable -> L46
            r0 = 1
            com.bytedance.pangle.Zeus.init(r4, r0)     // Catch: java.lang.Throwable -> L46
            r3.ux = r0     // Catch: java.lang.Throwable -> L46
            goto L54
        L46:
            r4 = move-exception
            java.lang.String r0 = "TTPluginManager"
            java.lang.String r1 = "Unexpected error for init zeus."
            com.bykv.vk.openvk.api.rg.rg(r0, r1, r4)
            java.lang.String r4 = r4.getMessage()
            r3.rz = r4
        L54:
            return
    }

    private static void df(com.bytedance.pangle.plugin.Plugin r3) {
            if (r3 != 0) goto La
            java.lang.String r3 = "TTPluginManager"
            java.lang.String r0 = "plugin is null."
            com.bykv.vk.openvk.api.rg.pt(r3, r0)
            return
        La:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1 = 0
            java.lang.String r2 = "action"
            r0.putInt(r2, r1)
            java.lang.String r1 = r3.mPkgName
            java.lang.String r2 = "plugin_pkg_name"
            r0.putString(r2, r1)
            int r3 = r3.getVersion()
            java.lang.String r3 = rg(r3)
            java.lang.String r1 = "plugin_version"
            r0.putString(r1, r3)
            com.bykv.vk.openvk.TTVfManager r3 = com.bykv.vk.openvk.TTVfSdk.getVfManager()
            if (r3 == 0) goto L34
            java.lang.Class<android.os.Bundle> r1 = android.os.Bundle.class
            r3.getExtra(r1, r0)
        L34:
            return
    }

    private void df(java.lang.String r3, int r4) {
            r2 = this;
            java.lang.String r0 = "com.bykv.vk"
            boolean r0 = r0.equals(r3)
            r1 = 6
            if (r0 == 0) goto L10
            if (r4 != r1) goto L10
            java.util.concurrent.CountDownLatch r0 = r2.fw
            r0.countDown()
        L10:
            if (r4 != r1) goto L14
            r4 = 1
            goto L15
        L14:
            r4 = 0
        L15:
            rg(r4, r3)
            return
    }

    private static boolean df(com.bykv.vk.openvk.api.plugin.df r2) {
            if (r2 == 0) goto L19
            java.io.File r0 = r2.df
            if (r0 != 0) goto L7
            goto L19
        L7:
            java.lang.String r0 = r2.mPackageName
            java.io.File r1 = r2.df
            java.lang.String r1 = r1.getAbsolutePath()
            boolean r0 = com.bytedance.pangle.Zeus.syncInstallPlugin(r0, r1)
            java.lang.String r2 = r2.mPackageName
            rg(r0, r2)
            return r0
        L19:
            java.lang.String r2 = "TTPluginManager"
            java.lang.String r0 = "plugin config is null"
            com.bykv.vk.openvk.api.rg.pt(r2, r0)
            r2 = 0
            return r2
    }

    static com.bykv.vk.openvk.TTPluginListener q(com.bykv.vk.openvk.TTPluginListener r0) {
            com.bykv.vk.openvk.api.plugin.c.hq = r0
            return r0
    }

    private static com.bykv.vk.openvk.api.plugin.df q(java.lang.String r3) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L12
            if (r1 == 0) goto L8
            goto L11
        L8:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L12
            r1.<init>(r3)     // Catch: org.json.JSONException -> L12
            com.bykv.vk.openvk.api.plugin.df r0 = rg(r1)     // Catch: org.json.JSONException -> L12
        L11:
            return r0
        L12:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid plugin info:"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "TTPluginManager"
            com.bykv.vk.openvk.api.rg.pp(r1, r3)
            return r0
    }

    private static java.io.File q(android.content.Context r3) {
            java.lang.String r0 = "tt_pangle_bykv_file"
            r1 = 0
            java.io.File r3 = r3.getDir(r0, r1)
            java.io.File r0 = new java.io.File
            java.io.File r1 = new java.io.File
            java.lang.String r2 = "pangle_com.bykv.vk"
            r1.<init>(r3, r2)
            java.lang.String r3 = com.bykv.vk.openvk.api.plugin.c.rg
            r0.<init>(r1, r3)
            return r0
    }

    private static void q(java.lang.String r2, int r3) {
            java.lang.String r0 = "TTPluginManager"
            java.lang.String r1 = "plugin update failed"
            com.bykv.vk.openvk.api.rg.pt(r0, r1)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "code"
            r0.putInt(r1, r3)
            java.util.HashMap<java.lang.String, com.bykv.vk.openvk.TTPluginListener> r3 = com.bykv.vk.openvk.api.plugin.c.df
            java.lang.Object r2 = r3.get(r2)
            com.bykv.vk.openvk.TTPluginListener r2 = (com.bykv.vk.openvk.TTPluginListener) r2
            if (r2 == 0) goto L21
            r3 = 1001(0x3e9, float:1.403E-42)
            r1 = 0
            r2.onPluginListener(r3, r1, r1, r0)
        L21:
            return
    }

    static boolean q() {
            boolean r0 = com.bykv.vk.openvk.api.plugin.c.c
            return r0
    }

    public static com.bykv.vk.openvk.api.plugin.c rg(android.content.Context r2) {
            com.bykv.vk.openvk.api.plugin.c r0 = com.bykv.vk.openvk.api.plugin.c.pp
            if (r0 != 0) goto L17
            java.lang.Class<com.bykv.vk.openvk.api.plugin.c> r0 = com.bykv.vk.openvk.api.plugin.c.class
            monitor-enter(r0)
            com.bykv.vk.openvk.api.plugin.c r1 = com.bykv.vk.openvk.api.plugin.c.pp     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bykv.vk.openvk.api.plugin.c r1 = new com.bykv.vk.openvk.api.plugin.c     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.bykv.vk.openvk.api.plugin.c.pp = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.bykv.vk.openvk.api.plugin.c r2 = com.bykv.vk.openvk.api.plugin.c.pp
            return r2
    }

    private static com.bykv.vk.openvk.api.plugin.df rg(org.json.JSONObject r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            com.bykv.vk.openvk.api.plugin.df r0 = new com.bykv.vk.openvk.api.plugin.df
            r0.<init>()
            java.lang.String r1 = "package_name"
            java.lang.String r1 = r3.optString(r1)
            r0.mPackageName = r1
            java.lang.String r1 = "version_code"
            int r1 = r3.optInt(r1)
            r0.mVersionCode = r1
            java.lang.String r1 = "download_url"
            java.lang.String r1 = r3.optString(r1)
            r0.mUrl = r1
            java.lang.String r1 = "md5"
            java.lang.String r1 = r3.optString(r1)
            r0.mMd5 = r1
            java.lang.String r1 = "min_version"
            int r1 = r3.optInt(r1)
            r0.mApiVersionMin = r1
            java.lang.String r1 = "max_version"
            int r1 = r3.optInt(r1)
            r0.mApiVersionMax = r1
            java.lang.String r1 = "sign"
            java.lang.String r1 = r3.optString(r1)
            r0.rg = r1
            java.lang.String r1 = "is_revert"
            boolean r1 = r3.optBoolean(r1)
            if (r1 == 0) goto L4b
            r1 = 3
            goto L4c
        L4b:
            r1 = 2
        L4c:
            r0.mFlag = r1
            java.io.File r1 = new java.io.File
            java.lang.String r2 = "plugin_file"
            java.lang.String r3 = r3.optString(r2)
            r1.<init>(r3)
            r0.df = r1
            return r0
    }

    public static java.lang.String rg(int r3) {
            java.lang.String r3 = java.lang.String.valueOf(r3)
            char[] r3 = r3.toCharArray()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        Le:
            int r2 = r3.length
            if (r1 >= r2) goto L23
            char r2 = r3[r1]
            r0.append(r2)
            int r2 = r3.length
            int r2 = r2 + (-1)
            if (r1 >= r2) goto L20
            java.lang.String r2 = "."
            r0.append(r2)
        L20:
            int r1 = r1 + 1
            goto Le
        L23:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.lang.String rg(java.lang.String r1) {
            boolean r0 = com.bytedance.pangle.Zeus.isPluginInstalled(r1)     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L1c
            com.bytedance.pangle.plugin.Plugin r1 = com.bytedance.pangle.Zeus.getPlugin(r1)     // Catch: java.lang.Throwable -> L15
            if (r1 == 0) goto L1c
            int r1 = r1.getVersion()     // Catch: java.lang.Throwable -> L15
            java.lang.String r1 = rg(r1)     // Catch: java.lang.Throwable -> L15
            return r1
        L15:
            java.lang.String r1 = "TTPluginManager"
            java.lang.String r0 = "Get local version failed"
            com.bykv.vk.openvk.api.rg.pt(r1, r0)
        L1c:
            r1 = 0
            return r1
    }

    static org.json.JSONObject rg(com.bykv.vk.openvk.api.plugin.c r0) {
            org.json.JSONObject r0 = r0.b
            return r0
    }

    static void rg(com.bykv.vk.openvk.api.plugin.c r0, java.lang.String r1, int r2) {
            r0.df(r1, r2)
            return
    }

    static void rg(com.bytedance.pangle.plugin.Plugin r0) {
            df(r0)
            return
    }

    static void rg(java.lang.String r0, int r1) {
            q(r0, r1)
            return
    }

    public static void rg(java.lang.Throwable r1) {
            boolean r1 = r1 instanceof java.lang.AbstractMethodError
            if (r1 == 0) goto L10
            java.lang.String r1 = "com.bykv.vk"
            com.bytedance.pangle.Zeus.unInstallPlugin(r1)
            java.lang.String r1 = "TTPluginManager"
            java.lang.String r0 = "AbstractMethodError, rollback to builtin version."
            com.bykv.vk.openvk.api.rg.pt(r1, r0)
        L10:
            return
    }

    private static void rg(boolean r6, java.lang.String r7) {
            java.util.HashMap<java.lang.String, com.bykv.vk.openvk.TTPluginListener> r0 = com.bykv.vk.openvk.api.plugin.c.df
            java.lang.Object r0 = r0.get(r7)
            com.bykv.vk.openvk.TTPluginListener r0 = (com.bykv.vk.openvk.TTPluginListener) r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Install dl plugin "
            r1.append(r2)
            r1.append(r7)
            if (r6 == 0) goto L1a
            java.lang.String r2 = " success"
            goto L1c
        L1a:
            java.lang.String r2 = " failed"
        L1c:
            r1.append(r2)
            java.lang.String r2 = ", need notify: "
            r1.append(r2)
            if (r0 == 0) goto L28
            r2 = 1
            goto L29
        L28:
            r2 = 0
        L29:
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "TTPluginManager"
            com.bykv.vk.openvk.api.rg.df(r2, r1)
            java.util.HashMap<java.lang.String, android.os.Handler> r1 = com.bykv.vk.openvk.api.plugin.c.q
            java.lang.Object r1 = r1.get(r7)
            android.os.Handler r1 = (android.os.Handler) r1
            if (r6 == 0) goto L80
            com.bykv.vk.openvk.TTPluginListener r6 = com.bykv.vk.openvk.api.plugin.c.hq
            boolean r2 = rg(r6, r7)
            if (r2 != 0) goto L4c
            if (r0 == 0) goto L4b
            if (r1 != 0) goto L4c
        L4b:
            return
        L4c:
            boolean r2 = com.bytedance.pangle.Zeus.loadPlugin(r7)
            if (r2 == 0) goto L7a
            com.bytedance.pangle.plugin.Plugin r2 = com.bytedance.pangle.Zeus.getPlugin(r7)
            df(r2)
            r3 = 0
            if (r1 == 0) goto L5f
            r1.removeCallbacksAndMessages(r3)
        L5f:
            r1 = 1000(0x3e8, float:1.401E-42)
            if (r0 == 0) goto L6a
            com.bytedance.pangle.PluginClassLoader r4 = r2.mClassLoader
            android.content.res.Resources r5 = r2.mResources
            r0.onPluginListener(r1, r4, r5, r3)
        L6a:
            boolean r0 = rg(r6, r7)
            if (r0 == 0) goto L85
            com.bytedance.pangle.PluginClassLoader r0 = r2.mClassLoader
            android.content.res.Resources r2 = r2.mResources
            r6.onPluginListener(r1, r0, r2, r3)
            com.bykv.vk.openvk.api.plugin.c.hq = r3
            goto L85
        L7a:
            r6 = 1002(0x3ea, float:1.404E-42)
            q(r7, r6)
            goto L85
        L80:
            r6 = 1003(0x3eb, float:1.406E-42)
            q(r7, r6)
        L85:
            java.util.HashMap<java.lang.String, com.bykv.vk.openvk.TTPluginListener> r6 = com.bykv.vk.openvk.api.plugin.c.df
            r6.remove(r7)
            java.util.HashMap<java.lang.String, android.os.Handler> r6 = com.bykv.vk.openvk.api.plugin.c.q
            r6.remove(r7)
            return
    }

    private static boolean rg(com.bykv.vk.openvk.TTPluginListener r1, java.lang.String r2) {
            if (r1 == 0) goto L12
            java.lang.String r0 = r1.packageName()
            if (r0 != 0) goto L9
            goto L12
        L9:
            java.lang.String r1 = r1.packageName()
            boolean r1 = r1.equals(r2)
            return r1
        L12:
            r1 = 0
            return r1
    }

    static boolean rg(com.bykv.vk.openvk.api.plugin.df r0) {
            boolean r0 = df(r0)
            return r0
    }

    public org.json.JSONObject df() {
            r1 = this;
            org.json.JSONObject r0 = r1.b
            return r0
    }

    public void df(com.bykv.vk.openvk.TTPluginListener r3) {
            r2 = this;
            com.bykv.vk.openvk.df.rg r0 = com.bykv.vk.openvk.df.rg.rg()
            com.bykv.vk.openvk.api.plugin.c$4 r1 = new com.bykv.vk.openvk.api.plugin.c$4
            r1.<init>(r2, r3)
            r0.rg(r1)
            return
    }

    public android.os.Bundle rg(java.lang.String r3, android.os.Bundle r4) {
            r2 = this;
            java.lang.String r0 = rg(r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lf
            java.lang.String r1 = "plugin_version"
            r4.putString(r1, r0)
        Lf:
            com.bykv.vk.openvk.api.plugin.fw.rg(r3, r4)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r0.putBundle(r3, r4)
            android.os.Bundle r3 = new android.os.Bundle
            r3.<init>()
            java.lang.String r4 = "_pl_config_info_"
            r3.putBundle(r4, r0)
            return r3
    }

    public dalvik.system.BaseDexClassLoader rg(com.bykv.vk.openvk.api.plugin.pp r11) throws java.lang.Exception {
            r10 = this;
            boolean r0 = r10.ux
            java.lang.String r1 = "TTPluginManager"
            if (r0 == 0) goto L7c
            java.lang.String r0 = "com.bykv.vk"
            boolean r2 = com.bytedance.pangle.Zeus.isPluginInstalled(r0)
            java.lang.String r3 = "install wait timeout"
            r4 = 8
            java.lang.String r5 = "Install wait time out"
            if (r2 != 0) goto L2d
            java.util.concurrent.CountDownLatch r2 = r10.fw     // Catch: java.lang.Exception -> L24
            r6 = 60000(0xea60, double:2.9644E-319)
            java.util.concurrent.TimeUnit r8 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Exception -> L24
            r2.await(r6, r8)     // Catch: java.lang.Exception -> L24
            java.lang.String r2 = "wait_install_cost"
            r11.df(r2)
            goto L2d
        L24:
            com.bykv.vk.openvk.api.rg.pt(r1, r5)
            com.bykv.vk.openvk.api.plugin.q r11 = new com.bykv.vk.openvk.api.plugin.q
            r11.<init>(r4, r3)
            throw r11
        L2d:
            r2 = 0
            boolean r6 = com.bytedance.pangle.Zeus.isPluginLoaded(r0)
            if (r6 != 0) goto L3a
            boolean r6 = com.bytedance.pangle.Zeus.loadPlugin(r0)
            if (r6 == 0) goto L43
        L3a:
            com.bytedance.pangle.plugin.Plugin r0 = com.bytedance.pangle.Zeus.getPlugin(r0)
            com.bytedance.pangle.PluginClassLoader r0 = r0.mClassLoader
            com.bykv.vk.openvk.api.plugin.c.pt = r0
            r2 = 1
        L43:
            java.lang.String r0 = "get_classloader_cost"
            r11.df(r0)
            com.bytedance.pangle.Zeus.installFromDownloadDir()
            dalvik.system.BaseDexClassLoader r0 = com.bykv.vk.openvk.api.plugin.c.pt
            if (r0 != 0) goto L74
            java.util.concurrent.CountDownLatch r0 = r10.fw
            long r6 = r0.getCount()
            r8 = 0
            int r0 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r0 != 0) goto L6b
            if (r2 != 0) goto L5e
            goto L74
        L5e:
            java.lang.String r11 = "Get null after load"
            com.bykv.vk.openvk.api.rg.pt(r1, r11)
            com.bykv.vk.openvk.api.plugin.q r0 = new com.bykv.vk.openvk.api.plugin.q
            r1 = 9
            r0.<init>(r1, r11)
            throw r0
        L6b:
            com.bykv.vk.openvk.api.rg.pt(r1, r5)
            com.bykv.vk.openvk.api.plugin.q r11 = new com.bykv.vk.openvk.api.plugin.q
            r11.<init>(r4, r3)
            throw r11
        L74:
            java.lang.String r0 = "get_classloader_done"
            r11.df(r0)
            dalvik.system.BaseDexClassLoader r11 = com.bykv.vk.openvk.api.plugin.c.pt
            return r11
        L7c:
            java.lang.String r11 = "Zeus init failed."
            com.bykv.vk.openvk.api.rg.pt(r1, r11)
            com.bykv.vk.openvk.api.plugin.q r11 = new com.bykv.vk.openvk.api.plugin.q
            r0 = 4
            java.lang.String r1 = r10.rz
            r11.<init>(r0, r1)
            throw r11
    }

    public void rg() {
            r1 = this;
            r0 = 1
            com.bykv.vk.openvk.api.plugin.c.c = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.bykv.vk.openvk.api.plugin.pt.rg(r0)
            return
    }

    public void rg(com.bykv.vk.openvk.TTPluginListener r8) {
            r7 = this;
            boolean r0 = r7.ux
            java.lang.String r1 = "TTPluginManager"
            r2 = 0
            if (r0 != 0) goto L14
            java.lang.String r0 = "Zeus init failed."
            com.bykv.vk.openvk.api.rg.pt(r1, r0)
            if (r8 == 0) goto L13
            r0 = 1002(0x3ea, float:1.404E-42)
            r8.onPluginListener(r0, r2, r2, r2)
        L13:
            return
        L14:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r3 = android.os.Looper.getMainLooper()
            r0.<init>(r3)
            com.bykv.vk.openvk.api.plugin.c$3 r3 = new com.bykv.vk.openvk.api.plugin.c$3
            r3.<init>(r7, r8)
            r4 = 180000(0x2bf20, double:8.8932E-319)
            r0.postDelayed(r3, r4)
            java.lang.String r3 = r8.packageName()
            boolean r4 = com.bytedance.pangle.Zeus.isPluginInstalled(r3)
            if (r4 == 0) goto L43
            boolean r4 = com.bytedance.pangle.Zeus.isPluginLoaded(r3)
            if (r4 != 0) goto L3e
            boolean r4 = com.bytedance.pangle.Zeus.loadPlugin(r3)
            if (r4 == 0) goto L43
        L3e:
            com.bytedance.pangle.plugin.Plugin r4 = com.bytedance.pangle.Zeus.getPlugin(r3)
            goto L44
        L43:
            r4 = r2
        L44:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Find plugin:"
            r5.append(r6)
            if (r4 == 0) goto L52
            r6 = 1
            goto L53
        L52:
            r6 = 0
        L53:
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.bykv.vk.openvk.api.rg.df(r1, r5)
            if (r4 == 0) goto L6f
            df(r4)
            r0.removeCallbacksAndMessages(r2)
            r0 = 1000(0x3e8, float:1.401E-42)
            com.bytedance.pangle.PluginClassLoader r1 = r4.mClassLoader
            android.content.res.Resources r3 = r4.mResources
            r8.onPluginListener(r0, r1, r3, r2)
            goto L79
        L6f:
            java.util.HashMap<java.lang.String, com.bykv.vk.openvk.TTPluginListener> r1 = com.bykv.vk.openvk.api.plugin.c.df
            r1.put(r3, r8)
            java.util.HashMap<java.lang.String, android.os.Handler> r8 = com.bykv.vk.openvk.api.plugin.c.q
            r8.put(r3, r0)
        L79:
            return
    }
}
