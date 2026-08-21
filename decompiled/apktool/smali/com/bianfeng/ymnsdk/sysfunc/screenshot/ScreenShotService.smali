.class public Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;
.super Landroid/app/Service;
.source "ScreenShotService.java"


# instance fields
.field private callback:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;

.field private manager:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;)Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;
    .locals 0

    .line 10
    iget-object p0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->callback:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;

    return-object p0
.end method

.method public static start(Landroid/content/Context;)V
    .locals 2

    .line 14
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 15
    invoke-virtual {p0, v0}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    return-void
.end method

.method public static stop(Landroid/content/Context;)V
    .locals 2

    .line 19
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 20
    invoke-virtual {p0, v0}, Landroid/content/Context;->stopService(Landroid/content/Intent;)Z

    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public onCreate()V
    .locals 2

    .line 32
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    const-string v0, "\u5f00\u542f\u4e86\u670d\u52a1"

    .line 33
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 34
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->getInstance()Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->getCallback()Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->callback:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;

    if-eqz v0, :cond_0

    .line 36
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;->onStart()V

    .line 40
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->manager:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

    .line 41
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->startListen()V

    .line 42
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->manager:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService$1;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->setListener(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$OnScreenShotListener;)V

    :cond_0
    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 55
    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    const-string v0, "onDestroy: "

    .line 56
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 57
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->manager:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

    if-eqz v0, :cond_0

    .line 58
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->stopListen()V

    :cond_0
    return-void
.end method
