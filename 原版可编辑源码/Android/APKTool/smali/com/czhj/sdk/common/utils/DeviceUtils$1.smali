.class Lcom/czhj/sdk/common/utils/DeviceUtils$1;
.super Landroid/net/ConnectivityManager$NetworkCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/sdk/common/utils/DeviceUtils;->registerNetworkChange(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/utils/DeviceUtils$1;->a:Landroid/content/Context;

    invoke-direct {p0}, Landroid/net/ConnectivityManager$NetworkCallback;-><init>()V

    return-void
.end method


# virtual methods
.method public onAvailable(Landroid/net/Network;)V
    .locals 1

    const-string v0, "updateNetworkType registerNetworkCallback  onAvailable"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-super {p0, p1}, Landroid/net/ConnectivityManager$NetworkCallback;->onAvailable(Landroid/net/Network;)V

    invoke-static {}, Lcom/czhj/sdk/common/utils/DeviceUtils;->a()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object p1, p0, Lcom/czhj/sdk/common/utils/DeviceUtils$1;->a:Landroid/content/Context;

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/DeviceUtils;->updateNetworkType(Landroid/content/Context;)V

    return-void
.end method

.method public onCapabilitiesChanged(Landroid/net/Network;Landroid/net/NetworkCapabilities;)V
    .locals 0

    invoke-super {p0, p1, p2}, Landroid/net/ConnectivityManager$NetworkCallback;->onCapabilitiesChanged(Landroid/net/Network;Landroid/net/NetworkCapabilities;)V

    iget-object p1, p0, Lcom/czhj/sdk/common/utils/DeviceUtils$1;->a:Landroid/content/Context;

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/DeviceUtils;->updateNetworkType(Landroid/content/Context;)V

    return-void
.end method

.method public onLost(Landroid/net/Network;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "updateNetworkType registerNetworkCallback  onLost"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-super {p0, p1}, Landroid/net/ConnectivityManager$NetworkCallback;->onLost(Landroid/net/Network;)V

    sget-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->UNKNOWN:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->a(Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;)Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->a(Z)Z

    :try_start_0
    invoke-static {p1}, Lcom/czhj/sdk/common/utils/DeviceUtils;->a(Landroid/net/Network;)Landroid/net/Network;

    invoke-static {}, Lcom/czhj/sdk/common/utils/DeviceUtils;->a()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    iget-object p1, p0, Lcom/czhj/sdk/common/utils/DeviceUtils$1;->a:Landroid/content/Context;

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/DeviceUtils;->updateNetworkType(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
