.class Lorg/cocos2dx/lua/XhSupport$1;
.super Ljava/lang/Object;
.source "XhSupport.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lua/XhSupport;->initSdk(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 72
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 75
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-static {}, Lorg/cocos2dx/lua/XhSupport;->access$000()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/PlatformSdk;->init(Landroid/app/Activity;)V

    return-void
.end method
