.class Lcom/bianfeng/paylib/action/ActionSupport$1;
.super Ljava/lang/Object;
.source "ActionSupport.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/paylib/action/ActionSupport;->processResponseResult(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/paylib/action/ActionSupport;

.field final synthetic val$result:Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;


# direct methods
.method constructor <init>(Lcom/bianfeng/paylib/action/ActionSupport;Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V
    .locals 0

    .line 172
    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionSupport$1;->this$0:Lcom/bianfeng/paylib/action/ActionSupport;

    iput-object p2, p0, Lcom/bianfeng/paylib/action/ActionSupport$1;->val$result:Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 175
    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionSupport$1;->this$0:Lcom/bianfeng/paylib/action/ActionSupport;

    iget-object v1, p0, Lcom/bianfeng/paylib/action/ActionSupport$1;->val$result:Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;

    invoke-static {v0, v1}, Lcom/bianfeng/paylib/action/ActionSupport;->access$000(Lcom/bianfeng/paylib/action/ActionSupport;Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V

    return-void
.end method
