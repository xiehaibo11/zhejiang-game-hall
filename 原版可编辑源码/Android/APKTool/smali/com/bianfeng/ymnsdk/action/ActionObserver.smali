.class public abstract Lcom/bianfeng/ymnsdk/action/ActionObserver;
.super Ljava/lang/Object;
.source "ActionObserver.java"

# interfaces
.implements Ljava/util/Observer;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract onActionResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V
.end method

.method public update(Ljava/util/Observable;Ljava/lang/Object;)V
    .locals 1
    .param p1, "observable"    # Ljava/util/Observable;
    .param p2, "data"    # Ljava/lang/Object;

    .line 15
    move-object v0, p2

    check-cast v0, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionObserver;->onActionResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V

    .line 16
    return-void
.end method
