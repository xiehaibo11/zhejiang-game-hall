.class public Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
.super Ljava/lang/Object;
.source "YmnCallbackInterceptor.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/YmnCallback;


# instance fields
.field private callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final dispatchNext(ILjava/lang/String;)V
    .locals 1
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 26
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    if-eqz v0, :cond_0

    .line 27
    invoke-interface {v0, p1, p2}, Lcom/bianfeng/platform/PlatformSdkListener;->onCallBack(ILjava/lang/String;)V

    .line 29
    :cond_0
    return-void
.end method

.method public onCallBack(ILjava/lang/String;)V
    .locals 0
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 22
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->dispatchNext(ILjava/lang/String;)V

    .line 23
    return-void
.end method

.method protected final setNext(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V
    .locals 0
    .param p1, "callback"    # Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    .line 11
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    .line 12
    return-void
.end method
