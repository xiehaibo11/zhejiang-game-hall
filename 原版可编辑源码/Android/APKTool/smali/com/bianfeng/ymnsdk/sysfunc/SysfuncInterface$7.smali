.class Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;
.super Ljava/lang/Object;
.source "SysfuncInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->startScreenShotListenAndAddWaterMark(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

.field final synthetic val$waterMarkText:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;Ljava/lang/String;)V
    .locals 0

    .line 607
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;->val$waterMarkText:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAllow(ILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onAllowAll(I)V
    .locals 2

    .line 610
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v0, 0x8a0

    const-string v1, "\u6388\u6743\u6210\u529f"

    invoke-virtual {p1, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    .line 611
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->getInstance()Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;

    move-result-object p1

    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7$1;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;)V

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->setCallback(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;)V

    .line 624
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->start(Landroid/content/Context;)V

    return-void
.end method

.method public onDeny(ILjava/lang/String;)V
    .locals 1

    .line 634
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const-string p2, "\u6388\u6743\u5931\u8d25"

    const/16 v0, 0x8a1

    invoke-virtual {p1, v0, p2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    .line 635
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v0, 0x461

    invoke-virtual {p1, v0, p2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onDenyIn48Hours(ILjava/lang/String;)V
    .locals 1

    .line 640
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 p2, 0x8a3

    const-string v0, "48\u5c0f\u65f6\u5185\uff0c\u7528\u6237\u66fe\u62d2\u7edd\u9700\u8981\u6388\u4e88\u7684\u6743\u9650"

    invoke-virtual {p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
