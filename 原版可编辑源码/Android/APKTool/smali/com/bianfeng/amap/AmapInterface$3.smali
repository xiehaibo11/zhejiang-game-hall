.class Lcom/bianfeng/amap/AmapInterface$3;
.super Ljava/lang/Object;
.source "AmapInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/amap/AmapInterface;->getLocationWithSport()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/amap/AmapInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/amap/AmapInterface;)V
    .locals 0

    .line 272
    iput-object p1, p0, Lcom/bianfeng/amap/AmapInterface$3;->this$0:Lcom/bianfeng/amap/AmapInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAllow(ILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onAllowAll(I)V
    .locals 0

    .line 275
    iget-object p1, p0, Lcom/bianfeng/amap/AmapInterface$3;->this$0:Lcom/bianfeng/amap/AmapInterface;

    invoke-static {p1}, Lcom/bianfeng/amap/AmapInterface;->access$500(Lcom/bianfeng/amap/AmapInterface;)V

    return-void
.end method

.method public onDeny(ILjava/lang/String;)V
    .locals 4

    .line 285
    iget-object p1, p0, Lcom/bianfeng/amap/AmapInterface$3;->this$0:Lcom/bianfeng/amap/AmapInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6388\u6743\u5931\u8d25 "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lcom/bianfeng/amap/AmapInterface$3;->this$0:Lcom/bianfeng/amap/AmapInterface;

    invoke-static {v2}, Lcom/bianfeng/amap/AmapInterface;->access$100(Lcom/bianfeng/amap/AmapInterface;)Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x6a7

    invoke-virtual {p1, v3, v0, v2}, Lcom/bianfeng/amap/AmapInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 286
    iget-object p1, p0, Lcom/bianfeng/amap/AmapInterface$3;->this$0:Lcom/bianfeng/amap/AmapInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface$3;->this$0:Lcom/bianfeng/amap/AmapInterface;

    invoke-static {v0}, Lcom/bianfeng/amap/AmapInterface;->access$100(Lcom/bianfeng/amap/AmapInterface;)Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x8a1

    invoke-virtual {p1, v1, p2, v0}, Lcom/bianfeng/amap/AmapInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onDenyIn48Hours(ILjava/lang/String;)V
    .locals 4

    .line 291
    iget-object p1, p0, Lcom/bianfeng/amap/AmapInterface$3;->this$0:Lcom/bianfeng/amap/AmapInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6388\u6743\u5931\u8d25 \u572848\u5c0f\u65f6\u5185\u91cd\u590d\u6388\u6743|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lcom/bianfeng/amap/AmapInterface$3;->this$0:Lcom/bianfeng/amap/AmapInterface;

    invoke-static {v2}, Lcom/bianfeng/amap/AmapInterface;->access$100(Lcom/bianfeng/amap/AmapInterface;)Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x6a7

    invoke-virtual {p1, v3, v0, v2}, Lcom/bianfeng/amap/AmapInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 292
    iget-object p1, p0, Lcom/bianfeng/amap/AmapInterface$3;->this$0:Lcom/bianfeng/amap/AmapInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface$3;->this$0:Lcom/bianfeng/amap/AmapInterface;

    invoke-static {v0}, Lcom/bianfeng/amap/AmapInterface;->access$100(Lcom/bianfeng/amap/AmapInterface;)Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x8a3

    invoke-virtual {p1, v1, p2, v0}, Lcom/bianfeng/amap/AmapInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method
