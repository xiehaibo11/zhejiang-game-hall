.class final Lcom/bianfeng/platform/PlatformSdk$1;
.super Ljava/lang/Object;
.source "PlatformSdk.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/YmnCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/platform/PlatformSdk;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallBack(ILjava/lang/String;)V
    .locals 1
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 25
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->access$000()Lcom/bianfeng/platform/PlatformSdkListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 26
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->access$000()Lcom/bianfeng/platform/PlatformSdkListener;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/platform/PlatformSdkListener;->onCallBack(ILjava/lang/String;)V

    .line 28
    :cond_0
    return-void
.end method
