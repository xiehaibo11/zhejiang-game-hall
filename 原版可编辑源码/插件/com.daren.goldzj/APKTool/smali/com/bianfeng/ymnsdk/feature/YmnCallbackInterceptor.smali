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

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final dispatchNext(ILjava/lang/String;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    if-eqz v0, :cond_0

    .line 2
    invoke-interface {v0, p1, p2}, Lcom/bianfeng/platform/PlatformSdkListener;->onCallBack(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onCallBack(ILjava/lang/String;)V
    .locals 0

    .line 1
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->dispatchNext(ILjava/lang/String;)V

    return-void
.end method

.method protected final setNext(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method
