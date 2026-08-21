.class public abstract Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV2;
.super Ljava/lang/Object;
.source "ActionObserverV2.java"

# interfaces
.implements Ljava/util/Observer;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract onActionResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V
.end method

.method public update(Ljava/util/Observable;Ljava/lang/Object;)V
    .locals 0

    .line 1
    check-cast p2, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    invoke-virtual {p0, p2}, Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV2;->onActionResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V

    return-void
.end method
