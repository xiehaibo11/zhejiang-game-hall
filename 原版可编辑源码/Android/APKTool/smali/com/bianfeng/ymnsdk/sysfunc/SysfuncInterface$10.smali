.class Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$10;
.super Ljava/lang/Object;
.source "SysfuncInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->startScreenShotListen()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V
    .locals 0

    .line 702
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$10;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onShot(Ljava/lang/String;)V
    .locals 2

    .line 705
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$10;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v1, 0x462

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onStart()V
    .locals 3

    .line 710
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$10;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v1, 0x460

    const-string v2, "\u542f\u52a8\u6210\u529f\uff0c\u5f00\u59cb\u76d1\u542c"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
