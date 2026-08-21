.class Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$2;
.super Ljava/lang/Object;
.source "SysfuncInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isEmulator()V
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

    .line 321
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$2;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

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

    .line 324
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$2;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v0, 0x8a0

    const-string v1, "\u6388\u6743\u6210\u529f"

    invoke-virtual {p1, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    .line 325
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$2;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/sysfunc/utils/SimulatorUtil;->isSimulator(Landroid/content/Context;)Z

    move-result p1

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    const-string p1, "\u662f\u6a21\u62df\u5668"

    .line 326
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 327
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$2;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v1, 0x451

    invoke-virtual {p1, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string p1, "\u662f\u624b\u673a"

    .line 329
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 330
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$2;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v1, 0x452

    invoke-virtual {p1, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onDeny(ILjava/lang/String;)V
    .locals 1

    .line 341
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$2;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 p2, 0x8a1

    const-string v0, "\u6388\u6743\u5931\u8d25"

    invoke-virtual {p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onDenyIn48Hours(ILjava/lang/String;)V
    .locals 1

    .line 346
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$2;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 p2, 0x8a3

    const-string v0, "48\u5c0f\u65f6\u5185\uff0c\u7528\u6237\u66fe\u62d2\u7edd\u9700\u8981\u6388\u4e88\u7684\u6743\u9650"

    invoke-virtual {p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
