.class Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService$1;
.super Ljava/lang/Object;
.source "ScreenShotService.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$OnScreenShotListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->onCreate()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onShotSuccess(Ljava/lang/String;)V
    .locals 2

    .line 45
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onShotSuccess--"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 46
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->access$000(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;)Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 47
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->access$000(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;)Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;->onShot(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
