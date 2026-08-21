.class public abstract Lcom/bianfeng/netlib/ActionObserver;
.super Ljava/lang/Object;
.source "ActionObserver.java"

# interfaces
.implements Ljava/util/Observer;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract onActionResult(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V
.end method

.method public update(Ljava/util/Observable;Ljava/lang/Object;)V
    .locals 0

    .line 16
    check-cast p2, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;

    invoke-virtual {p0, p2}, Lcom/bianfeng/netlib/ActionObserver;->onActionResult(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V

    return-void
.end method
