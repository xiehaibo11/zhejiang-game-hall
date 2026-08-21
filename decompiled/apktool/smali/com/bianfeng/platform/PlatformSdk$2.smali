.class Lcom/bianfeng/platform/PlatformSdk$2;
.super Ljava/lang/Object;
.source "PlatformSdk.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/platform/PlatformSdk;->init(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/platform/PlatformSdk;

.field final synthetic val$activity:Landroid/app/Activity;


# direct methods
.method constructor <init>(Lcom/bianfeng/platform/PlatformSdk;Landroid/app/Activity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/platform/PlatformSdk;

    .line 59
    iput-object p1, p0, Lcom/bianfeng/platform/PlatformSdk$2;->this$0:Lcom/bianfeng/platform/PlatformSdk;

    iput-object p2, p0, Lcom/bianfeng/platform/PlatformSdk$2;->val$activity:Landroid/app/Activity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 62
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->access$100()Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 63
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PlatformSdk init: \u5f53\u524d\u7ebf\u7a0b\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymnsdk"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 64
    iget-object v0, p0, Lcom/bianfeng/platform/PlatformSdk$2;->val$activity:Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->initialize(Landroid/app/Activity;)V

    .line 65
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/platform/PlatformSdk$2;->val$activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/UserInterface;->init(Landroid/app/Activity;)V

    .line 66
    invoke-static {}, Lcom/bianfeng/platform/PaymentInterface;->getInstance()Lcom/bianfeng/platform/PaymentInterface;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/platform/PlatformSdk$2;->val$activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/PaymentInterface;->init(Landroid/app/Activity;)V

    .line 67
    return-void
.end method
