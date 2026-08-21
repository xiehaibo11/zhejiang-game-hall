.class Lcom/bytedance/android/openliveplugin/LivePluginHelper$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;


# instance fields
.field final synthetic this$0:Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;


# direct methods
.method constructor <init>(Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;)V
    .locals 0

    .line 127
    iput-object p1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1$1;->this$0:Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onMaterialGet(Lcom/bytedance/android/openliveplugin/material/ConfigParams;)V
    .locals 4

    const-string v0, "live init : on material get success ~~~"

    .line 130
    invoke-static {v0}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->d(Ljava/lang/String;)V

    .line 131
    new-instance v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;

    iget-object v1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1$1;->this$0:Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;

    iget-object v1, v1, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;->val$context:Landroid/app/Application;

    iget-object v2, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1$1;->this$0:Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;

    iget-object v2, v2, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;->val$builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    iget-object v3, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1$1;->this$0:Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;

    iget-object v3, v3, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;->val$liveInitCallback:Lcom/bytedance/android/live/base/api/ILiveInitCallback;

    invoke-direct {v0, v1, v2, p1, v3}, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;-><init>(Landroid/app/Application;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/openliveplugin/material/ConfigParams;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V

    invoke-virtual {v0}, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;->run()V

    return-void
.end method
