.class Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic val$appId:Ljava/lang/String;

.field final synthetic val$builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

.field final synthetic val$context:Landroid/app/Application;

.field final synthetic val$liveInitCallback:Lcom/bytedance/android/live/base/api/ILiveInitCallback;


# direct methods
.method constructor <init>(Ljava/lang/String;Landroid/app/Application;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V
    .locals 0

    .line 123
    iput-object p1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;->val$appId:Ljava/lang/String;

    iput-object p2, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;->val$context:Landroid/app/Application;

    iput-object p3, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;->val$builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    iput-object p4, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;->val$liveInitCallback:Lcom/bytedance/android/live/base/api/ILiveInitCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    const-string v0, "live init : material task run"

    .line 126
    invoke-static {v0}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->d(Ljava/lang/String;)V

    .line 127
    invoke-static {}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->access$100()Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

    move-result-object v0

    iget-object v1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;->val$appId:Ljava/lang/String;

    iget-object v2, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;->val$context:Landroid/app/Application;

    new-instance v3, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1$1;

    invoke-direct {v3, p0}, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1$1;-><init>(Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;)V

    invoke-virtual {v0, v1, v2, v3}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->run(Ljava/lang/String;Landroid/app/Application;Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;)V

    return-void
.end method
