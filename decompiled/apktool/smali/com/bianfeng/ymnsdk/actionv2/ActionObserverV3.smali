.class public abstract Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV3;
.super Ljava/lang/Object;
.source "ActionObserverV3.java"

# interfaces
.implements Ljava/util/Observer;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract onActionResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V
.end method

.method public update(Ljava/util/Observable;Ljava/lang/Object;)V
    .locals 1
    .param p1, "observable"    # Ljava/util/Observable;
    .param p2, "data"    # Ljava/lang/Object;

    .line 10
    move-object v0, p2

    check-cast v0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV3;->onActionResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V

    .line 11
    return-void
.end method
