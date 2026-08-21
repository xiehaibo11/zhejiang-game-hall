.class Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$2;
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

.field final synthetic val$e:Ljava/lang/Exception;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;Ljava/lang/Exception;)V
    .locals 0

    .line 135
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$2;->this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$2;->val$e:Ljava/lang/Exception;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 138
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$2;->this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$2;->val$e:Ljava/lang/Exception;

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x69

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
