.class Lcom/bytedance/android/openliveplugin/LivePluginHelper$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic val$appId:Ljava/lang/String;

.field final synthetic val$builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

.field final synthetic val$context:Landroid/app/Application;

.field final synthetic val$liveInitCallback:Lcom/bytedance/android/live/base/api/ILiveInitCallback;


# direct methods
.method constructor <init>(Landroid/app/Application;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V
    .locals 0

    .line 149
    iput-object p1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$2;->val$context:Landroid/app/Application;

    iput-object p2, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$2;->val$appId:Ljava/lang/String;

    iput-object p3, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$2;->val$builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    iput-object p4, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$2;->val$liveInitCallback:Lcom/bytedance/android/live/base/api/ILiveInitCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 152
    iget-object v0, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$2;->val$context:Landroid/app/Application;

    iget-object v1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$2;->val$appId:Ljava/lang/String;

    iget-object v2, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$2;->val$builder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    iget-object v3, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$2;->val$liveInitCallback:Lcom/bytedance/android/live/base/api/ILiveInitCallback;

    invoke-static {v0, v1, v2, v3}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->access$200(Landroid/app/Application;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V

    return-void
.end method
