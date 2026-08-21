.class public Lcom/bykv/vk/openvk/api/plugin/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/api/plugin/c$q;,
        Lcom/bykv/vk/openvk/api/plugin/c$rg;,
        Lcom/bykv/vk/openvk/api/plugin/c$df;
    }
.end annotation


# static fields
.field private static volatile c:Z

.field private static final df:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/bykv/vk/openvk/TTPluginListener;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile hq:Lcom/bykv/vk/openvk/TTPluginListener;

.field private static volatile pp:Lcom/bykv/vk/openvk/api/plugin/c;

.field private static volatile pt:Ldalvik/system/BaseDexClassLoader;

.field private static final q:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/os/Handler;",
            ">;"
        }
    .end annotation
.end field

.field private static final rg:Ljava/lang/String;


# instance fields
.field private b:Lorg/json/JSONObject;

.field private final bm:Landroid/content/Context;

.field private final fw:Ljava/util/concurrent/CountDownLatch;

.field private volatile rz:Ljava/lang/String;

.field private volatile ux:Z


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 61
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "next"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bykv/vk/openvk/api/plugin/c;->rg:Ljava/lang/String;

    .line 63
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bykv/vk/openvk/api/plugin/c;->df:Ljava/util/HashMap;

    .line 64
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bykv/vk/openvk/api/plugin/c;->q:Ljava/util/HashMap;

    const/4 v0, 0x0

    .line 66
    sput-object v0, Lcom/bykv/vk/openvk/api/plugin/c;->pp:Lcom/bykv/vk/openvk/api/plugin/c;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 75
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 68
    new-instance v0, Ljava/util/concurrent/CountDownLatch;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    iput-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/c;->fw:Ljava/util/concurrent/CountDownLatch;

    const/4 v0, 0x0

    .line 69
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/api/plugin/c;->ux:Z

    const-string v0, "none"

    .line 70
    iput-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/c;->rz:Ljava/lang/String;

    .line 72
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/c;->b:Lorg/json/JSONObject;

    .line 76
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/c;->bm:Landroid/content/Context;

    .line 77
    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/pt;->rg(Landroid/content/Context;)V

    .line 78
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/c;->df(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic df(Ljava/lang/String;)Lcom/bykv/vk/openvk/api/plugin/df;
    .locals 0

    .line 47
    invoke-static {p0}, Lcom/bykv/vk/openvk/api/plugin/c;->q(Ljava/lang/String;)Lcom/bykv/vk/openvk/api/plugin/df;

    move-result-object p0

    return-object p0
.end method

.method private df(Landroid/content/Context;)V
    .locals 3

    .line 144
    :try_start_0
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/c$1;

    invoke-direct {v0, p0}, Lcom/bykv/vk/openvk/api/plugin/c$1;-><init>(Lcom/bykv/vk/openvk/api/plugin/c;)V

    .line 165
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v1

    .line 166
    invoke-virtual {v1, v0}, Lcom/bytedance/pangle/GlobalParam;->setReporter(Lcom/bytedance/pangle/log/IZeusReporter;)V

    const/4 v0, 0x0

    .line 167
    invoke-virtual {v1, v0}, Lcom/bytedance/pangle/GlobalParam;->setCheckPermission(Z)V

    .line 168
    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/c;->q(Landroid/content/Context;)Ljava/io/File;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/bytedance/pangle/GlobalParam;->setDownloadDir(Ljava/io/File;)V

    .line 169
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/c$rg;

    const/4 v2, 0x0

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/api/plugin/c$rg;-><init>(Lcom/bykv/vk/openvk/api/plugin/c$1;)V

    invoke-virtual {v1, v0}, Lcom/bytedance/pangle/GlobalParam;->setLogger(Lcom/bytedance/pangle/log/IZeusLogger;)V

    const-string v0, "com.bykv.vk"

    const-string v2, "MIIDfTCCAmWgAwIBAgIEfRwYPjANBgkqhkiG9w0BAQsFADBvMQswCQYDVQQGEwJDTjEQMA4GA1UECBMHQmVpamluZzEQMA4GA1UEBxMHQmVpamluZzESMBAGA1UEChMJQnl0ZURhbmNlMQ8wDQYDVQQLEwZQYW5nbGUxFzAVBgNVBAMTDkNodWFuIFNoYW4gSmlhMB4XDTIxMTEwODA2MjQzOVoXDTQ2MTEwMjA2MjQzOVowbzELMAkGA1UEBhMCQ04xEDAOBgNVBAgTB0JlaWppbmcxEDAOBgNVBAcTB0JlaWppbmcxEjAQBgNVBAoTCUJ5dGVEYW5jZTEPMA0GA1UECxMGUGFuZ2xlMRcwFQYDVQQDEw5DaHVhbiBTaGFuIEppYTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAIBKeRL+4mfCn1SLYv6OemfwwItkjlLPyqOEugkV6lanFTcZgLwEl5LIkL0y28UncPtMX1Mii6DzCdJ/plw7S9+RT/hYDneu339IKWojaU2qai/5FokHlQ0MMnYl5yry00ghVPsl1u+03cQA2ZnjIMiFhrBJpQzHt7IYvq2aEEMBcY8uT7iFoBI848e1mL1joVS2z02C3NliP7ZNARkXH+rTQAlCJulT5IZk+V/PTaKqzgNrkhsKh0/tBmU7m8u79x/xpgGsE19H18AgS4P/9/MDCRe2Z35boZeccaUy2MXCwv3djzUcDk3rRzQPYzdpyyRnrFMuhiKesc5VHgUMs9kCAwEAAaMhMB8wHQYDVR0OBBYEFENENrNWGzc2WhxdvhoMDs57U70zMA0GCSqGSIb3DQEBCwUAA4IBAQAHqDCrmvyBBmIGXwuL1rwS/Qv9ZJIZykBIaNMm+H1IfitCl4yXd9N2n+PjE0UZtxZ21UZOt9wAr+RFiSl5YRXqpt7WLARTy4YW3RiQ+wiL7bshzeSYBoSiC427Bfeq0WjwY0/jHlr8uouppyJOz++6U9hrYX2EW/6UjH5XlWiKQJ6b2ZzPcP8Xpg/TJn4tWvXJP6jw9kRRP2GmMttY78leWQst2QEZILmWJubXRLPj9O+qx2uP9oGTD4sc1vb9hzkOHBIHzGaalqLFbbGaeFpLFHoGTsnOfPTwUVKDZYmxbkcmR1bp7eYOW+nSQNMLn0FjDewZl5l37Sa/gz0WVHon"

    .line 170
    invoke-virtual {v1, v0, v2}, Lcom/bytedance/pangle/GlobalParam;->setSignature(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "com.byted.csj.ext"

    const-string v2, "MIIDezCCAmOgAwIBAgIENkE1KDANBgkqhkiG9w0BAQsFADBtMQswCQYDVQQGEwI4NjEQMA4GA1UECBMHYmVpamluZzEQMA4GA1UEBxMHYmVpamluZzESMBAGA1UEChMJYnl0ZWRhbmNlMRIwEAYDVQQLEwlieXRlZGFuY2UxEjAQBgNVBAMTCWJ5dGVkYW5jZTAgFw0yMjExMDIwODI3MzlaGA8yMDUwMDMyMDA4MjczOVowbTELMAkGA1UEBhMCODYxEDAOBgNVBAgTB2JlaWppbmcxEDAOBgNVBAcTB2JlaWppbmcxEjAQBgNVBAoTCWJ5dGVkYW5jZTESMBAGA1UECxMJYnl0ZWRhbmNlMRIwEAYDVQQDEwlieXRlZGFuY2UwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCc9Z2F3xxOMX1qTXMy2aPmS9OSkqrp8C8bHwS1hkNVR4umKREuqOn73INNo+R706jaCVnlPwxDwWjtX6H74DE4CveivyM9f2wNC3yIyDW+5j7lW/keTQcOlGLDEJQv4O/6FbB/jNU6epjyNaNIZhgZcvTpgaSixbdyHzRTFmvMh+WovdVK/J9LnHOQ+pmPZj7NB6MQRGMUrPEotLHQca3cmnLrnPAaZQaVoaFE9lOt9syyqEuf361SprNIGDtbkJuX3EqV/QOKWFwZX94IS7ZGSvfyCojcD4kaUSbaSoZC7zEuBb7l69g+ZMrJ/v6wkm01wxsNNssUwF7k6Sp0zubbAgMBAAGjITAfMB0GA1UdDgQWBBSxk+gVdDco1dP65hP67qoKNlMEYDANBgkqhkiG9w0BAQsFAAOCAQEAfosExl/AYEbS2xqHBTHa28cvnp/SElUQuzW6aWLqkfk9cxmFSI/euUV3/eB8RN+U2X47Y05u6+XUxTv0tSSEtyXNawm0qWH8jkR4gZY38YqBChKjhea668oT5X3Uocrw7SYXO/BfI8SKPa0uI/U8Cyl3uctbmmq/pPUkd3mKAy+HgyJoThD6K0oyiADlygngUMVTv6Uvid4qPj/bBnxI+LvVeX4l1dxGqWkiafQW9sz+RbFdge3X2XsSH4eo01BsCwOYEv1lHO2FrbAtFNpnIsSqrERdFaAJZ3tlJmg9bA03png8A2AajEjkhaOhduJB8zkSlvHNpoQMIAS9WtkG/w=="

    .line 197
    invoke-virtual {v1, v0, v2}, Lcom/bytedance/pangle/GlobalParam;->setSignature(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "com.byted.live.lite"

    const-string v2, "MIIDSTCCAjGgAwIBAgIEaLy5tzANBgkqhkiG9w0BAQsFADBVMQswCQYDVQQGEwIxMTEMMAoGA1UECBMDMTExMQ4wDAYDVQQHEwUxMTExMTEMMAoGA1UEChMDMTExMQwwCgYDVQQLEwMxMTExDDAKBgNVBAMTAzExMTAeFw0yMDEyMDMxMjQyMTJaFw00NTExMjcxMjQyMTJaMFUxCzAJBgNVBAYTAjExMQwwCgYDVQQIEwMxMTExDjAMBgNVBAcTBTExMTExMQwwCgYDVQQKEwMxMTExDDAKBgNVBAsTAzExMTEMMAoGA1UEAxMDMTExMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA45E52YdkJm4gPCXZq7KDoM1h6pgSswllC/CwDOmh8pDGvX4ROaYP1vr2biRlXMHg7G0iXpxWVdlTtx+4QFd3dC+cGJQk0f6apGo2n2RpMA0zIsSf0VO1a3GjWLei5INo+4RDdciqJ4jfsoqBIjZETRkky+UU4eO/oyrAwOu4KdMln3Bg3u7eHWU4kMFrXxrRruT3Q/9gzlO90yQa0CZPWVDrk6cGJtJwJGhWm+62S3U8D26HE++eGP7ve83QBDGtKqx7HpCAFWUiYBgXGq12H0amQDkKcPcr/EFCaBlombSgkN0t6zBX80m+wcUPC75IBTmMV/DT2dXcgjZ2I1JSCQIDAQABoyEwHzAdBgNVHQ4EFgQUPDyIeKI0KhZFPHyn36gMMIYrpukwDQYJKoZIhvcNAQELBQADggEBAHkl0DoCRwn+XKsDJE+wGMpBBqUDzL6DSOnJx4SNqb7YZZU0ThcDK7jY4If3QRkvMio6ODrVZc2U/m/Tc3VeMk5h2W2UZRUWHNH3k9Xe0720uL20ZeH2Y6IG4L5HG8kIbTbFtX3gJpPG/xAcez+CzyCFLWQAZt1N+csG0syWkXJ0Nryq8VrgSCyCXD1KzFxrOe+65wtu50Vi68Vlbk7BZe/G8Qm0RhKmxq5BPMBJ4uY3be+03Ba5qC//o1XQHOEAjrJKXcN5wqHdFZTkmuxVyIPogZOzx4JlNl0zOrYGDJxp7aZfKF9FkXQyF7x0Ns3mZEtjx/+flXRzAAU9MDhPr/0="

    .line 199
    invoke-virtual {v1, v0, v2}, Lcom/bytedance/pangle/GlobalParam;->setSignature(Ljava/lang/String;Ljava/lang/String;)V

    .line 201
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/c$2;

    invoke-direct {v0, p0}, Lcom/bykv/vk/openvk/api/plugin/c$2;-><init>(Lcom/bykv/vk/openvk/api/plugin/c;)V

    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->registerPluginStateListener(Lcom/bytedance/pangle/ZeusPluginStateListener;)V

    .line 217
    check-cast p1, Landroid/app/Application;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/bytedance/pangle/Zeus;->init(Landroid/app/Application;Z)V

    .line 218
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/api/plugin/c;->ux:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string v0, "TTPluginManager"

    const-string v1, "Unexpected error for init zeus."

    .line 220
    invoke-static {v0, v1, p1}, Lcom/bykv/vk/openvk/api/rg;->rg(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 221
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/c;->rz:Ljava/lang/String;

    :goto_0
    return-void
.end method

.method private static df(Lcom/bytedance/pangle/plugin/Plugin;)V
    .locals 3

    if-nez p0, :cond_0

    const-string p0, "TTPluginManager"

    const-string v0, "plugin is null."

    .line 354
    invoke-static {p0, v0}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 357
    :cond_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const/4 v1, 0x0

    const-string v2, "action"

    .line 358
    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    .line 359
    iget-object v1, p0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    const-string v2, "plugin_pkg_name"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 360
    invoke-virtual {p0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result p0

    invoke-static {p0}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(I)Ljava/lang/String;

    move-result-object p0

    const-string v1, "plugin_version"

    invoke-virtual {v0, v1, p0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 361
    invoke-static {}, Lcom/bykv/vk/openvk/TTVfSdk;->getVfManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 363
    const-class v1, Landroid/os/Bundle;

    invoke-interface {p0, v1, v0}, Lcom/bykv/vk/openvk/TTVfManager;->getExtra(Ljava/lang/Class;Landroid/os/Bundle;)Ljava/lang/Object;

    :cond_1
    return-void
.end method

.method private df(Ljava/lang/String;I)V
    .locals 2

    const-string v0, "com.bykv.vk"

    .line 226
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x6

    if-eqz v0, :cond_0

    if-ne p2, v1, :cond_0

    .line 227
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/c;->fw:Ljava/util/concurrent/CountDownLatch;

    invoke-virtual {v0}, Ljava/util/concurrent/CountDownLatch;->countDown()V

    :cond_0
    if-ne p2, v1, :cond_1

    const/4 p2, 0x1

    goto :goto_0

    :cond_1
    const/4 p2, 0x0

    .line 229
    :goto_0
    invoke-static {p2, p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(ZLjava/lang/String;)V

    return-void
.end method

.method private static df(Lcom/bykv/vk/openvk/api/plugin/df;)Z
    .locals 2

    if-eqz p0, :cond_1

    .line 388
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/df;->df:Ljava/io/File;

    if-nez v0, :cond_0

    goto :goto_0

    .line 392
    :cond_0
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/df;->mPackageName:Ljava/lang/String;

    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/df;->df:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bytedance/pangle/Zeus;->syncInstallPlugin(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    .line 393
    iget-object p0, p0, Lcom/bykv/vk/openvk/api/plugin/df;->mPackageName:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(ZLjava/lang/String;)V

    return v0

    :cond_1
    :goto_0
    const-string p0, "TTPluginManager"

    const-string v0, "plugin config is null"

    .line 389
    invoke-static {p0, v0}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x0

    return p0
.end method

.method static synthetic q(Lcom/bykv/vk/openvk/TTPluginListener;)Lcom/bykv/vk/openvk/TTPluginListener;
    .locals 0

    .line 47
    sput-object p0, Lcom/bykv/vk/openvk/api/plugin/c;->hq:Lcom/bykv/vk/openvk/TTPluginListener;

    return-object p0
.end method

.method private static q(Ljava/lang/String;)Lcom/bykv/vk/openvk/api/plugin/df;
    .locals 3

    const/4 v0, 0x0

    .line 324
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {v1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Lorg/json/JSONObject;)Lcom/bykv/vk/openvk/api/plugin/df;

    move-result-object v0
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    return-object v0

    .line 326
    :catch_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Invalid plugin info:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v1, "TTPluginManager"

    invoke-static {v1, p0}, Lcom/bykv/vk/openvk/api/rg;->pp(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method private static q(Landroid/content/Context;)Ljava/io/File;
    .locals 3

    const-string v0, "tt_pangle_bykv_file"

    const/4 v1, 0x0

    .line 233
    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object p0

    .line 234
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/io/File;

    const-string v2, "pangle_com.bykv.vk"

    invoke-direct {v1, p0, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    sget-object p0, Lcom/bykv/vk/openvk/api/plugin/c;->rg:Ljava/lang/String;

    invoke-direct {v0, v1, p0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v0
.end method

.method private static q(Ljava/lang/String;I)V
    .locals 2

    const-string v0, "TTPluginManager"

    const-string v1, "plugin update failed"

    .line 443
    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    .line 444
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "code"

    .line 445
    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    .line 446
    sget-object p1, Lcom/bykv/vk/openvk/api/plugin/c;->df:Ljava/util/HashMap;

    invoke-virtual {p1, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bykv/vk/openvk/TTPluginListener;

    if-eqz p0, :cond_0

    const/16 p1, 0x3e9

    const/4 v1, 0x0

    .line 448
    invoke-interface {p0, p1, v1, v1, v0}, Lcom/bykv/vk/openvk/TTPluginListener;->onPluginListener(ILjava/lang/ClassLoader;Landroid/content/res/Resources;Landroid/os/Bundle;)V

    :cond_0
    return-void
.end method

.method static synthetic q()Z
    .locals 1

    .line 47
    sget-boolean v0, Lcom/bykv/vk/openvk/api/plugin/c;->c:Z

    return v0
.end method

.method public static rg(Landroid/content/Context;)Lcom/bykv/vk/openvk/api/plugin/c;
    .locals 2

    .line 82
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/c;->pp:Lcom/bykv/vk/openvk/api/plugin/c;

    if-nez v0, :cond_1

    .line 83
    const-class v0, Lcom/bykv/vk/openvk/api/plugin/c;

    monitor-enter v0

    .line 84
    :try_start_0
    sget-object v1, Lcom/bykv/vk/openvk/api/plugin/c;->pp:Lcom/bykv/vk/openvk/api/plugin/c;

    if-nez v1, :cond_0

    .line 85
    new-instance v1, Lcom/bykv/vk/openvk/api/plugin/c;

    invoke-direct {v1, p0}, Lcom/bykv/vk/openvk/api/plugin/c;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/bykv/vk/openvk/api/plugin/c;->pp:Lcom/bykv/vk/openvk/api/plugin/c;

    .line 87
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 89
    :cond_1
    :goto_0
    sget-object p0, Lcom/bykv/vk/openvk/api/plugin/c;->pp:Lcom/bykv/vk/openvk/api/plugin/c;

    return-object p0
.end method

.method private static rg(Lorg/json/JSONObject;)Lcom/bykv/vk/openvk/api/plugin/df;
    .locals 3

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 333
    :cond_0
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/df;

    invoke-direct {v0}, Lcom/bykv/vk/openvk/api/plugin/df;-><init>()V

    const-string v1, "package_name"

    .line 334
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/bykv/vk/openvk/api/plugin/df;->mPackageName:Ljava/lang/String;

    const-string v1, "version_code"

    .line 335
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    iput v1, v0, Lcom/bykv/vk/openvk/api/plugin/df;->mVersionCode:I

    const-string v1, "download_url"

    .line 336
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/bykv/vk/openvk/api/plugin/df;->mUrl:Ljava/lang/String;

    const-string v1, "md5"

    .line 337
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/bykv/vk/openvk/api/plugin/df;->mMd5:Ljava/lang/String;

    const-string v1, "min_version"

    .line 338
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    iput v1, v0, Lcom/bykv/vk/openvk/api/plugin/df;->mApiVersionMin:I

    const-string v1, "max_version"

    .line 339
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    iput v1, v0, Lcom/bykv/vk/openvk/api/plugin/df;->mApiVersionMax:I

    const-string v1, "sign"

    .line 340
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/bykv/vk/openvk/api/plugin/df;->rg:Ljava/lang/String;

    const-string v1, "is_revert"

    .line 342
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v1, 0x3

    goto :goto_0

    :cond_1
    const/4 v1, 0x2

    :goto_0
    iput v1, v0, Lcom/bykv/vk/openvk/api/plugin/df;->mFlag:I

    .line 343
    new-instance v1, Ljava/io/File;

    const-string v2, "plugin_file"

    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iput-object v1, v0, Lcom/bykv/vk/openvk/api/plugin/df;->df:Ljava/io/File;

    return-object v0
.end method

.method public static rg(I)Ljava/lang/String;
    .locals 3

    .line 368
    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    .line 369
    invoke-virtual {p0}, Ljava/lang/String;->toCharArray()[C

    move-result-object p0

    .line 370
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v1, 0x0

    .line 371
    :goto_0
    array-length v2, p0

    if-ge v1, v2, :cond_1

    .line 372
    aget-char v2, p0, v1

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 373
    array-length v2, p0

    add-int/lit8 v2, v2, -0x1

    if-ge v1, v2, :cond_0

    const-string v2, "."

    .line 374
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 377
    :cond_1
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static rg(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 254
    :try_start_0
    invoke-static {p0}, Lcom/bytedance/pangle/Zeus;->isPluginInstalled(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 255
    invoke-virtual {p0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result p0

    invoke-static {p0}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(I)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const-string p0, "TTPluginManager"

    const-string v0, "Get local version failed"

    .line 258
    invoke-static {p0, v0}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/api/plugin/c;)Lorg/json/JSONObject;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/bykv/vk/openvk/api/plugin/c;->b:Lorg/json/JSONObject;

    return-object p0
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/api/plugin/c;Ljava/lang/String;I)V
    .locals 0

    .line 47
    invoke-direct {p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/c;->df(Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic rg(Lcom/bytedance/pangle/plugin/Plugin;)V
    .locals 0

    .line 47
    invoke-static {p0}, Lcom/bykv/vk/openvk/api/plugin/c;->df(Lcom/bytedance/pangle/plugin/Plugin;)V

    return-void
.end method

.method static synthetic rg(Ljava/lang/String;I)V
    .locals 0

    .line 47
    invoke-static {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/c;->q(Ljava/lang/String;I)V

    return-void
.end method

.method public static rg(Ljava/lang/Throwable;)V
    .locals 1

    .line 436
    instance-of p0, p0, Ljava/lang/AbstractMethodError;

    if-eqz p0, :cond_0

    const-string p0, "com.bykv.vk"

    .line 437
    invoke-static {p0}, Lcom/bytedance/pangle/Zeus;->unInstallPlugin(Ljava/lang/String;)V

    const-string p0, "TTPluginManager"

    const-string v0, "AbstractMethodError, rollback to builtin version."

    .line 438
    invoke-static {p0, v0}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private static rg(ZLjava/lang/String;)V
    .locals 6

    .line 398
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/c;->df:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bykv/vk/openvk/TTPluginListener;

    .line 399
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Install dl plugin "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz p0, :cond_0

    const-string v2, " success"

    goto :goto_0

    :cond_0
    const-string v2, " failed"

    :goto_0
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", need notify: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v0, :cond_1

    const/4 v2, 0x1

    goto :goto_1

    :cond_1
    const/4 v2, 0x0

    :goto_1
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "TTPluginManager"

    invoke-static {v2, v1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    .line 400
    sget-object v1, Lcom/bykv/vk/openvk/api/plugin/c;->q:Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/os/Handler;

    if-eqz p0, :cond_7

    .line 402
    sget-object p0, Lcom/bykv/vk/openvk/api/plugin/c;->hq:Lcom/bykv/vk/openvk/TTPluginListener;

    .line 403
    invoke-static {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Lcom/bykv/vk/openvk/TTPluginListener;Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_3

    if-eqz v0, :cond_2

    if-nez v1, :cond_3

    :cond_2
    return-void

    .line 406
    :cond_3
    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->loadPlugin(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_6

    .line 407
    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v2

    .line 408
    invoke-static {v2}, Lcom/bykv/vk/openvk/api/plugin/c;->df(Lcom/bytedance/pangle/plugin/Plugin;)V

    const/4 v3, 0x0

    if-eqz v1, :cond_4

    .line 410
    invoke-virtual {v1, v3}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    :cond_4
    const/16 v1, 0x3e8

    if-eqz v0, :cond_5

    .line 413
    iget-object v4, v2, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    iget-object v5, v2, Lcom/bytedance/pangle/plugin/Plugin;->mResources:Landroid/content/res/Resources;

    invoke-interface {v0, v1, v4, v5, v3}, Lcom/bykv/vk/openvk/TTPluginListener;->onPluginListener(ILjava/lang/ClassLoader;Landroid/content/res/Resources;Landroid/os/Bundle;)V

    .line 415
    :cond_5
    invoke-static {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Lcom/bykv/vk/openvk/TTPluginListener;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 416
    iget-object v0, v2, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    iget-object v2, v2, Lcom/bytedance/pangle/plugin/Plugin;->mResources:Landroid/content/res/Resources;

    invoke-interface {p0, v1, v0, v2, v3}, Lcom/bykv/vk/openvk/TTPluginListener;->onPluginListener(ILjava/lang/ClassLoader;Landroid/content/res/Resources;Landroid/os/Bundle;)V

    .line 417
    sput-object v3, Lcom/bykv/vk/openvk/api/plugin/c;->hq:Lcom/bykv/vk/openvk/TTPluginListener;

    goto :goto_2

    :cond_6
    const/16 p0, 0x3ea

    .line 420
    invoke-static {p1, p0}, Lcom/bykv/vk/openvk/api/plugin/c;->q(Ljava/lang/String;I)V

    goto :goto_2

    :cond_7
    const/16 p0, 0x3eb

    .line 423
    invoke-static {p1, p0}, Lcom/bykv/vk/openvk/api/plugin/c;->q(Ljava/lang/String;I)V

    .line 426
    :cond_8
    :goto_2
    sget-object p0, Lcom/bykv/vk/openvk/api/plugin/c;->df:Ljava/util/HashMap;

    invoke-virtual {p0, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 427
    sget-object p0, Lcom/bykv/vk/openvk/api/plugin/c;->q:Ljava/util/HashMap;

    invoke-virtual {p0, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private static rg(Lcom/bykv/vk/openvk/TTPluginListener;Ljava/lang/String;)Z
    .locals 1

    if-eqz p0, :cond_1

    .line 381
    invoke-interface {p0}, Lcom/bykv/vk/openvk/TTPluginListener;->packageName()Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 384
    :cond_0
    invoke-interface {p0}, Lcom/bykv/vk/openvk/TTPluginListener;->packageName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/api/plugin/df;)Z
    .locals 0

    .line 47
    invoke-static {p0}, Lcom/bykv/vk/openvk/api/plugin/c;->df(Lcom/bykv/vk/openvk/api/plugin/df;)Z

    move-result p0

    return p0
.end method


# virtual methods
.method public df()Lorg/json/JSONObject;
    .locals 1

    .line 98
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/c;->b:Lorg/json/JSONObject;

    return-object v0
.end method

.method public df(Lcom/bykv/vk/openvk/TTPluginListener;)V
    .locals 2

    .line 301
    invoke-static {}, Lcom/bykv/vk/openvk/df/rg;->rg()Lcom/bykv/vk/openvk/df/rg;

    move-result-object v0

    new-instance v1, Lcom/bykv/vk/openvk/api/plugin/c$4;

    invoke-direct {v1, p0, p1}, Lcom/bykv/vk/openvk/api/plugin/c$4;-><init>(Lcom/bykv/vk/openvk/api/plugin/c;Lcom/bykv/vk/openvk/TTPluginListener;)V

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/df/rg;->rg(Ljava/lang/Runnable;)V

    return-void
.end method

.method public rg(Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;
    .locals 2

    .line 239
    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 240
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "plugin_version"

    .line 241
    invoke-virtual {p2, v1, v0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 243
    :cond_0
    invoke-static {p1, p2}, Lcom/bykv/vk/openvk/api/plugin/fw;->rg(Ljava/lang/String;Landroid/os/Bundle;)V

    .line 244
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    .line 245
    invoke-virtual {v0, p1, p2}, Landroid/os/Bundle;->putBundle(Ljava/lang/String;Landroid/os/Bundle;)V

    .line 246
    new-instance p1, Landroid/os/Bundle;

    invoke-direct {p1}, Landroid/os/Bundle;-><init>()V

    const-string p2, "_pl_config_info_"

    .line 247
    invoke-virtual {p1, p2, v0}, Landroid/os/Bundle;->putBundle(Ljava/lang/String;Landroid/os/Bundle;)V

    return-object p1
.end method

.method public rg(Lcom/bykv/vk/openvk/api/plugin/pp;)Ldalvik/system/BaseDexClassLoader;
    .locals 10
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 102
    iget-boolean v0, p0, Lcom/bykv/vk/openvk/api/plugin/c;->ux:Z

    const-string v1, "TTPluginManager"

    if-eqz v0, :cond_6

    const-string v0, "com.bykv.vk"

    .line 106
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->isPluginInstalled(Ljava/lang/String;)Z

    move-result v2

    const-string v3, "install wait timeout"

    const/16 v4, 0x8

    const-string v5, "Install wait time out"

    if-nez v2, :cond_0

    .line 113
    :try_start_0
    iget-object v2, p0, Lcom/bykv/vk/openvk/api/plugin/c;->fw:Ljava/util/concurrent/CountDownLatch;

    const-wide/32 v6, 0xea60

    sget-object v8, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {v2, v6, v7, v8}, Ljava/util/concurrent/CountDownLatch;->await(JLjava/util/concurrent/TimeUnit;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "wait_install_cost"

    .line 118
    invoke-virtual {p1, v2}, Lcom/bykv/vk/openvk/api/plugin/pp;->df(Ljava/lang/String;)J

    goto :goto_0

    .line 115
    :catch_0
    invoke-static {v1, v5}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    .line 116
    new-instance p1, Lcom/bykv/vk/openvk/api/plugin/q;

    invoke-direct {p1, v4, v3}, Lcom/bykv/vk/openvk/api/plugin/q;-><init>(ILjava/lang/String;)V

    throw p1

    :cond_0
    :goto_0
    const/4 v2, 0x0

    .line 121
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->isPluginLoaded(Ljava/lang/String;)Z

    move-result v6

    if-nez v6, :cond_1

    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->loadPlugin(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_2

    .line 122
    :cond_1
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    iget-object v0, v0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    sput-object v0, Lcom/bykv/vk/openvk/api/plugin/c;->pt:Ldalvik/system/BaseDexClassLoader;

    const/4 v2, 0x1

    :cond_2
    const-string v0, "get_classloader_cost"

    .line 125
    invoke-virtual {p1, v0}, Lcom/bykv/vk/openvk/api/plugin/pp;->df(Ljava/lang/String;)J

    .line 128
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->installFromDownloadDir()V

    .line 129
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/c;->pt:Ldalvik/system/BaseDexClassLoader;

    if-nez v0, :cond_5

    .line 130
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/c;->fw:Ljava/util/concurrent/CountDownLatch;

    invoke-virtual {v0}, Ljava/util/concurrent/CountDownLatch;->getCount()J

    move-result-wide v6

    const-wide/16 v8, 0x0

    cmp-long v0, v6, v8

    if-nez v0, :cond_4

    if-nez v2, :cond_3

    goto :goto_1

    :cond_3
    const-string p1, "Get null after load"

    .line 134
    invoke-static {v1, p1}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    .line 135
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/q;

    const/16 v1, 0x9

    invoke-direct {v0, v1, p1}, Lcom/bykv/vk/openvk/api/plugin/q;-><init>(ILjava/lang/String;)V

    throw v0

    .line 131
    :cond_4
    invoke-static {v1, v5}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    .line 132
    new-instance p1, Lcom/bykv/vk/openvk/api/plugin/q;

    invoke-direct {p1, v4, v3}, Lcom/bykv/vk/openvk/api/plugin/q;-><init>(ILjava/lang/String;)V

    throw p1

    :cond_5
    :goto_1
    const-string v0, "get_classloader_done"

    .line 138
    invoke-virtual {p1, v0}, Lcom/bykv/vk/openvk/api/plugin/pp;->df(Ljava/lang/String;)J

    .line 139
    sget-object p1, Lcom/bykv/vk/openvk/api/plugin/c;->pt:Ldalvik/system/BaseDexClassLoader;

    return-object p1

    :cond_6
    const-string p1, "Zeus init failed."

    .line 103
    invoke-static {v1, p1}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    .line 104
    new-instance p1, Lcom/bykv/vk/openvk/api/plugin/q;

    const/4 v0, 0x4

    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/c;->rz:Ljava/lang/String;

    invoke-direct {p1, v0, v1}, Lcom/bykv/vk/openvk/api/plugin/q;-><init>(ILjava/lang/String;)V

    throw p1
.end method

.method public rg()V
    .locals 1

    const/4 v0, 0x1

    .line 93
    sput-boolean v0, Lcom/bykv/vk/openvk/api/plugin/c;->c:Z

    .line 94
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-static {v0}, Lcom/bykv/vk/openvk/api/plugin/pt;->rg(Ljava/util/List;)V

    return-void
.end method

.method public rg(Lcom/bykv/vk/openvk/TTPluginListener;)V
    .locals 7

    .line 264
    iget-boolean v0, p0, Lcom/bykv/vk/openvk/api/plugin/c;->ux:Z

    const-string v1, "TTPluginManager"

    const/4 v2, 0x0

    if-nez v0, :cond_1

    const-string v0, "Zeus init failed."

    .line 265
    invoke-static {v1, v0}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_0

    const/16 v0, 0x3ea

    .line 267
    invoke-interface {p1, v0, v2, v2, v2}, Lcom/bykv/vk/openvk/TTPluginListener;->onPluginListener(ILjava/lang/ClassLoader;Landroid/content/res/Resources;Landroid/os/Bundle;)V

    :cond_0
    return-void

    .line 272
    :cond_1
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v3

    invoke-direct {v0, v3}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 273
    new-instance v3, Lcom/bykv/vk/openvk/api/plugin/c$3;

    invoke-direct {v3, p0, p1}, Lcom/bykv/vk/openvk/api/plugin/c$3;-><init>(Lcom/bykv/vk/openvk/api/plugin/c;Lcom/bykv/vk/openvk/TTPluginListener;)V

    const-wide/32 v4, 0x2bf20

    invoke-virtual {v0, v3, v4, v5}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 281
    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTPluginListener;->packageName()Ljava/lang/String;

    move-result-object v3

    .line 283
    invoke-static {v3}, Lcom/bytedance/pangle/Zeus;->isPluginInstalled(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 284
    invoke-static {v3}, Lcom/bytedance/pangle/Zeus;->isPluginLoaded(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_2

    invoke-static {v3}, Lcom/bytedance/pangle/Zeus;->loadPlugin(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 285
    :cond_2
    invoke-static {v3}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v4

    goto :goto_0

    :cond_3
    move-object v4, v2

    .line 289
    :goto_0
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Find plugin:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v4, :cond_4

    const/4 v6, 0x1

    goto :goto_1

    :cond_4
    const/4 v6, 0x0

    :goto_1
    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v1, v5}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v4, :cond_5

    .line 291
    invoke-static {v4}, Lcom/bykv/vk/openvk/api/plugin/c;->df(Lcom/bytedance/pangle/plugin/Plugin;)V

    .line 292
    invoke-virtual {v0, v2}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    const/16 v0, 0x3e8

    .line 293
    iget-object v1, v4, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    iget-object v3, v4, Lcom/bytedance/pangle/plugin/Plugin;->mResources:Landroid/content/res/Resources;

    invoke-interface {p1, v0, v1, v3, v2}, Lcom/bykv/vk/openvk/TTPluginListener;->onPluginListener(ILjava/lang/ClassLoader;Landroid/content/res/Resources;Landroid/os/Bundle;)V

    goto :goto_2

    .line 295
    :cond_5
    sget-object v1, Lcom/bykv/vk/openvk/api/plugin/c;->df:Ljava/util/HashMap;

    invoke-virtual {v1, v3, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 296
    sget-object p1, Lcom/bykv/vk/openvk/api/plugin/c;->q:Ljava/util/HashMap;

    invoke-virtual {p1, v3, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :goto_2
    return-void
.end method
