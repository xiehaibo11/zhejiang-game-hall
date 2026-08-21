.class public Lcom/bykv/vk/openvk/stub/server/MainServerManager;
.super Lcom/bytedance/pangle/servermanager/AbsServerManager;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Lcom/bytedance/pangle/servermanager/AbsServerManager;-><init>()V

    return-void
.end method


# virtual methods
.method public onCreate()Z
    .locals 2

    .line 15
    invoke-virtual {p0}, Lcom/bykv/vk/openvk/stub/server/MainServerManager;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    .line 16
    invoke-static {v0}, Lcom/bykv/vk/openvk/TTAppContextHolder;->setContext(Landroid/content/Context;)V

    .line 18
    invoke-static {v0}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Landroid/content/Context;)Lcom/bykv/vk/openvk/api/plugin/c;

    .line 21
    instance-of v1, v0, Landroid/app/Application;

    if-eqz v1, :cond_0

    .line 22
    check-cast v0, Landroid/app/Application;

    invoke-static {}, Lcom/bykv/vk/openvk/rg/df;->rg()Lcom/bykv/vk/openvk/rg/df;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bykv/vk/openvk/rg/df;->df()Landroid/app/Application$ActivityLifecycleCallbacks;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    .line 25
    :cond_0
    invoke-super {p0}, Lcom/bytedance/pangle/servermanager/AbsServerManager;->onCreate()Z

    move-result v0

    return v0
.end method
