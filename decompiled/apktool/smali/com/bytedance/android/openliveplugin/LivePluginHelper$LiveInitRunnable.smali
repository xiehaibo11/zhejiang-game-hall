.class Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bytedance/android/openliveplugin/LivePluginHelper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "LiveInitRunnable"
.end annotation


# instance fields
.field builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

.field context:Landroid/app/Application;

.field liveInitCallback:Lcom/bytedance/android/live/base/api/ILiveInitCallback;

.field params:Lcom/bytedance/android/openliveplugin/material/ConfigParams;


# direct methods
.method public constructor <init>(Landroid/app/Application;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/openliveplugin/material/ConfigParams;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V
    .locals 0

    .line 200
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 201
    iput-object p1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->context:Landroid/app/Application;

    .line 202
    iput-object p2, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    .line 203
    iput-object p3, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->params:Lcom/bytedance/android/openliveplugin/material/ConfigParams;

    .line 204
    iput-object p4, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->liveInitCallback:Lcom/bytedance/android/live/base/api/ILiveInitCallback;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 209
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->params:Lcom/bytedance/android/openliveplugin/material/ConfigParams;

    if-eqz v1, :cond_0

    .line 210
    iget-object v1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->context:Landroid/app/Application;

    invoke-virtual {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setContext(Landroid/app/Application;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    .line 211
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    iget-object v1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->params:Lcom/bytedance/android/openliveplugin/material/ConfigParams;

    iget-wide v1, v1, Lcom/bytedance/android/openliveplugin/material/ConfigParams;->webcastAppID:J

    long-to-int v1, v1

    invoke-virtual {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setAid(I)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    .line 212
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    iget-object v1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->params:Lcom/bytedance/android/openliveplugin/material/ConfigParams;

    iget-wide v1, v1, Lcom/bytedance/android/openliveplugin/material/ConfigParams;->appID:J

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setGeneralAppId(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    .line 213
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    iget-object v1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->params:Lcom/bytedance/android/openliveplugin/material/ConfigParams;

    iget-wide v1, v1, Lcom/bytedance/android/openliveplugin/material/ConfigParams;->ttsdkAppID:J

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setTtSDKAppId(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    .line 214
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "file://"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->params:Lcom/bytedance/android/openliveplugin/material/ConfigParams;

    iget-object v2, v2, Lcom/bytedance/android/openliveplugin/material/ConfigParams;->ttSDKLicensePath:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setTtSDKCertAssetsPath(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    .line 215
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    iget-object v1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->params:Lcom/bytedance/android/openliveplugin/material/ConfigParams;

    iget-object v1, v1, Lcom/bytedance/android/openliveplugin/material/ConfigParams;->clientKey:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setClientKey(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    .line 216
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    const-string v1, "com.byted.live.lite"

    invoke-static {v1}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bytedance/pangle/plugin/Plugin;->getNativeLibraryDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setNativeLibraryDir(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    .line 217
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setCjAppId(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    .line 218
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-virtual {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->setCjMerchantId(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    .line 219
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-virtual {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->build()Lcom/bytedance/android/live/base/api/ILiveHostContextParam;

    move-result-object v0

    iget-object v1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->liveInitCallback:Lcom/bytedance/android/live/base/api/ILiveInitCallback;

    invoke-static {v0, v1}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->initLivePlugin(Lcom/bytedance/android/live/base/api/ILiveHostContextParam;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V

    :cond_0
    return-void
.end method
