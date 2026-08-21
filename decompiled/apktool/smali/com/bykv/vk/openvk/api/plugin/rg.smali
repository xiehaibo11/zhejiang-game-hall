.class final Lcom/bykv/vk/openvk/api/plugin/rg;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfManager;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/api/plugin/rg$df;,
        Lcom/bykv/vk/openvk/api/plugin/rg$q;,
        Lcom/bykv/vk/openvk/api/plugin/rg$rg;,
        Lcom/bykv/vk/openvk/api/plugin/rg$pt;
    }
.end annotation


# static fields
.field static final rg:Lcom/bykv/vk/openvk/api/plugin/rg;


# instance fields
.field private volatile df:Lcom/bykv/vk/openvk/TTVfManager;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 29
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg;

    invoke-direct {v0}, Lcom/bykv/vk/openvk/api/plugin/rg;-><init>()V

    sput-object v0, Lcom/bykv/vk/openvk/api/plugin/rg;->rg:Lcom/bykv/vk/openvk/api/plugin/rg;

    return-void
.end method

.method constructor <init>()V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private final call(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bykv/vk/openvk/api/plugin/rg$rg<",
            "Lcom/bykv/vk/openvk/TTVfManager;",
            ">;)V"
        }
    .end annotation

    .line 175
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    const-string v1, "PluginDefaultAdManager"

    if-eqz v0, :cond_0

    .line 177
    :try_start_0
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$rg;->rg(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 179
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Unexpected manager call error: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    .line 180
    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Ljava/lang/Throwable;)V

    :goto_0
    return-void

    .line 184
    :cond_0
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/fw;->rg:Ljava/util/concurrent/ScheduledExecutorService;

    if-eqz v0, :cond_1

    .line 185
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/fw;->rg:Ljava/util/concurrent/ScheduledExecutorService;

    new-instance v1, Lcom/bykv/vk/openvk/api/plugin/rg$8;

    invoke-direct {v1, p0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$8;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ScheduledExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    goto :goto_1

    :cond_1
    const-string p1, "Not ready, no executor"

    .line 204
    invoke-static {v1, p1}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/api/plugin/rg;)Lcom/bykv/vk/openvk/TTVfManager;
    .locals 0

    .line 26
    iget-object p0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    return-object p0
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/api/plugin/rg;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg;->call(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method


# virtual methods
.method public createVfNative(Landroid/content/Context;)Lcom/bykv/vk/openvk/TTVfNative;
    .locals 2

    .line 38
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    .line 39
    new-instance p1, Lcom/bykv/vk/openvk/api/plugin/rg$pt;

    new-instance v1, Lcom/bykv/vk/openvk/api/plugin/rg$1;

    invoke-direct {v1, p0, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$1;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg;Ljava/lang/ref/WeakReference;)V

    invoke-direct {p1, v1}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$df;)V

    return-object p1
.end method

.method public getBiddingToken(Lcom/bykv/vk/openvk/VfSlot;)Ljava/lang/String;
    .locals 1

    .line 147
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    invoke-interface {v0, p1}, Lcom/bykv/vk/openvk/TTVfManager;->getBiddingToken(Lcom/bykv/vk/openvk/VfSlot;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method

.method public getBiddingToken(Lcom/bykv/vk/openvk/VfSlot;ZI)Ljava/lang/String;
    .locals 1

    .line 152
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    invoke-interface {v0, p1, p2, p3}, Lcom/bykv/vk/openvk/TTVfManager;->getBiddingToken(Lcom/bykv/vk/openvk/VfSlot;ZI)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method

.method public getExtra(Ljava/lang/Class;Landroid/os/Bundle;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;",
            "Landroid/os/Bundle;",
            ")TT;"
        }
    .end annotation

    .line 93
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    if-eqz v0, :cond_0

    .line 94
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    invoke-interface {v0, p1, p2}, Lcom/bykv/vk/openvk/TTVfManager;->getExtra(Ljava/lang/Class;Landroid/os/Bundle;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    .line 97
    :cond_0
    const-class v0, Landroid/os/Bundle;

    if-ne p1, v0, :cond_1

    if-eqz p2, :cond_1

    const/4 v0, 0x0

    const-string v1, "action"

    invoke-virtual {p2, v1, v0}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    .line 98
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$4;

    invoke-direct {v0, p0, p2, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$4;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg;Landroid/os/Bundle;Ljava/lang/Class;)V

    invoke-direct {p0, v0}, Lcom/bykv/vk/openvk/api/plugin/rg;->call(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    goto :goto_0

    .line 110
    :cond_1
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$5;

    invoke-direct {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$5;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg;Ljava/lang/Class;Landroid/os/Bundle;)V

    invoke-direct {p0, v0}, Lcom/bykv/vk/openvk/api/plugin/rg;->call(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    :goto_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getPluginVersion()Ljava/lang/String;
    .locals 1

    .line 142
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTVfManager;->getPluginVersion()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, ""

    :goto_0
    return-object v0
.end method

.method public getSDKVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "5.1.1.4"

    return-object v0
.end method

.method public getThemeStatus()I
    .locals 1

    .line 171
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTVfManager;->getThemeStatus()I

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public register(Ljava/lang/Object;)V
    .locals 3

    .line 63
    instance-of v0, p1, Lcom/bykv/vk/openvk/TTPluginListener;

    if-eqz v0, :cond_0

    .line 64
    move-object v0, p1

    check-cast v0, Lcom/bykv/vk/openvk/TTPluginListener;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTPluginListener;->packageName()Ljava/lang/String;

    move-result-object v1

    .line 65
    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTPluginListener;->config()Landroid/os/Bundle;

    move-result-object v0

    .line 66
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Landroid/content/Context;)Lcom/bykv/vk/openvk/api/plugin/c;

    move-result-object v2

    invoke-virtual {v2, v1, v0}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, p1

    .line 70
    :goto_0
    new-instance v1, Lcom/bykv/vk/openvk/api/plugin/rg$2;

    invoke-direct {v1, p0, v0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$2;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg;Ljava/lang/Object;Ljava/lang/Object;)V

    invoke-direct {p0, v1}, Lcom/bykv/vk/openvk/api/plugin/rg;->call(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public requestPermissionIfNecessary(Landroid/content/Context;)V
    .locals 1

    .line 122
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$6;

    invoke-direct {v0, p0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$6;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg;Landroid/content/Context;)V

    invoke-direct {p0, v0}, Lcom/bykv/vk/openvk/api/plugin/rg;->call(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public rg(Lcom/bykv/vk/openvk/TTVfManager;)V
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    return-void
.end method

.method public setThemeStatus(I)V
    .locals 1

    .line 161
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$7;

    invoke-direct {v0, p0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$7;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg;I)V

    invoke-direct {p0, v0}, Lcom/bykv/vk/openvk/api/plugin/rg;->call(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public tryShowInstallDialogWhenExit(Landroid/app/Activity;Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;)Z
    .locals 1

    .line 132
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg;->df:Lcom/bykv/vk/openvk/TTVfManager;

    invoke-interface {v0, p1, p2}, Lcom/bykv/vk/openvk/TTVfManager;->tryShowInstallDialogWhenExit(Landroid/app/Activity;Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public unregister(Ljava/lang/Object;)V
    .locals 1

    .line 83
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$3;

    invoke-direct {v0, p0, p1}, Lcom/bykv/vk/openvk/api/plugin/rg$3;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg;Ljava/lang/Object;)V

    invoke-direct {p0, v0}, Lcom/bykv/vk/openvk/api/plugin/rg;->call(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method
