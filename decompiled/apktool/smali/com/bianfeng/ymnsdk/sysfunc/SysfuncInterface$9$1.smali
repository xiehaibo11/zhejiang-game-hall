.class Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9$1;
.super Ljava/lang/Object;
.source "SysfuncInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9;->onAllowAll(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9;)V
    .locals 0

    .line 672
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9$1;->this$1:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onShot(Ljava/lang/String;)V
    .locals 2

    .line 675
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9$1;->this$1:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v1, 0x462

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onStart()V
    .locals 3

    .line 680
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9$1;->this$1:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v1, 0x460

    const-string v2, "\u542f\u52a8\u6210\u529f\uff0c\u5f00\u59cb\u76d1\u542c"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
