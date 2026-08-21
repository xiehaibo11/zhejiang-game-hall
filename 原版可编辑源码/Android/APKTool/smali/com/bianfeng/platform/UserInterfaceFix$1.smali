.class final Lcom/bianfeng/platform/UserInterfaceFix$1;
.super Ljava/lang/Object;
.source "UserInterfaceFix.java"

# interfaces
.implements Lcom/bianfeng/platform/PlatformSdkListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/platform/UserInterfaceFix;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallBack(ILjava/lang/String;)V
    .locals 0
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 19
    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->dispatchMessage(ILjava/lang/String;)V

    .line 20
    return-void
.end method
