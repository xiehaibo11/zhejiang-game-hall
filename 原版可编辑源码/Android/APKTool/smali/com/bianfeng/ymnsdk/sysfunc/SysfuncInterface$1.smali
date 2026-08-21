.class Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$1;
.super Ljava/lang/Object;
.source "SysfuncInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getCps()V
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

    .line 288
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

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

    .line 291
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v0, 0x8a0

    const-string v1, "\u6388\u6743\u6210\u529f"

    invoke-virtual {p1, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    .line 292
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->GetLatitudeAndLongitude(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    return-void
.end method

.method public onDeny(ILjava/lang/String;)V
    .locals 1

    .line 302
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 p2, 0x8a1

    const-string v0, "\u6388\u6743\u5931\u8d25"

    invoke-virtual {p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onDenyIn48Hours(ILjava/lang/String;)V
    .locals 1

    .line 307
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 p2, 0x8a3

    const-string v0, "48\u5c0f\u65f6\u5185\uff0c\u7528\u6237\u66fe\u62d2\u7edd\u9700\u8981\u6388\u4e88\u7684\u6743\u9650"

    invoke-virtual {p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
