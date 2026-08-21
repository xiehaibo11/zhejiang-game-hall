.class Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7$1;
.super Ljava/lang/Object;
.source "SysfuncInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;->onAllowAll(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;)V
    .locals 0

    .line 611
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7$1;->this$1:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onShot(Ljava/lang/String;)V
    .locals 2

    .line 614
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7$1;->this$1:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;->val$waterMarkText:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/WaterMarkHelp;->saveImageWithWatermark(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 615
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7$1;->this$1:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v1, 0x462

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onStart()V
    .locals 3

    .line 620
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7$1;->this$1:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v1, 0x460

    const-string v2, "\u542f\u52a8\u6210\u529f\uff0c\u5f00\u59cb\u76d1\u542c"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    .line 621
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7$1;->this$1:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->access$002(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;Z)Z

    return-void
.end method
