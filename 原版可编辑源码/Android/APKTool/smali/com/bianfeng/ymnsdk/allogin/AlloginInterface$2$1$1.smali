.class Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;
.super Ljava/lang/Object;
.source "AlloginInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;

.field final synthetic val$resultMap:Ljava/util/Map;

.field final synthetic val$resultStatus:Ljava/lang/String;

.field final synthetic val$result_code:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 0

    .line 119
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;->this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;->val$resultStatus:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;->val$result_code:Ljava/lang/String;

    iput-object p4, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;->val$resultMap:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 122
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;->val$resultStatus:Ljava/lang/String;

    const-string v1, "9000"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;->val$result_code:Ljava/lang/String;

    const-string v1, "200"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 123
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;->this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder;->createJson(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;->val$resultMap:Ljava/util/Map;

    const-string v2, "auth_code"

    .line 124
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const-string v2, "session"

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->append(Ljava/lang/String;Ljava/lang/Object;)Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;

    move-result-object v0

    const/16 v1, 0x66

    .line 125
    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;->sendResult(I)V

    goto :goto_0

    .line 128
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;->this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    const/16 v1, 0x69

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;->val$resultStatus:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;->val$result_code:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method
