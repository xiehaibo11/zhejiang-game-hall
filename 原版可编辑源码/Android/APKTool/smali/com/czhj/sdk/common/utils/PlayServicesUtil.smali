.class public Lcom/czhj/sdk/common/utils/PlayServicesUtil;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInterface;,
        Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingConnection;,
        Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getAdvertisingIdInfo(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    const/4 v2, 0x0

    if-ne v0, v1, :cond_0

    return-object v2

    :cond_0
    const-string v0, "private : getAdvertisingIdInfo"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    new-instance v0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingConnection;

    invoke-direct {v0, v2}, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingConnection;-><init>(Lcom/czhj/sdk/common/utils/PlayServicesUtil$1;)V

    new-instance v1, Landroid/content/Intent;

    const-string v2, "com.google.android.gms.ads.identifier.service.START"

    invoke-direct {v1, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v2, "com.google.android.gms"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    const/4 v2, 0x1

    :try_start_0
    invoke-virtual {p0, v1, v0, v2}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v1, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInterface;

    invoke-virtual {v0}, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingConnection;->a()Landroid/os/IBinder;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInterface;-><init>(Landroid/os/IBinder;)V

    new-instance v2, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;

    invoke-virtual {v1}, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInterface;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1}, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInterface;->b()Z

    move-result v1

    invoke-direct {v2, v3, v1}, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;-><init>(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-virtual {p0, v0}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    return-object v2

    :cond_1
    invoke-virtual {p0, v0}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    new-instance p0, Ljava/io/IOException;

    const-string v0, "Google Play connection failed"

    invoke-direct {p0, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p0

    :catchall_0
    move-exception v1

    invoke-virtual {p0, v0}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    throw v1
.end method
