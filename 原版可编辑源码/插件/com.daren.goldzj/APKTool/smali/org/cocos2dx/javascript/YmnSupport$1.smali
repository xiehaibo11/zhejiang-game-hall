.class Lorg/cocos2dx/javascript/YmnSupport$1;
.super Ljava/lang/Object;
.source "YmnSupport.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/javascript/YmnSupport;->init(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/cocos2dx/javascript/YmnSupport;


# direct methods
.method constructor <init>(Lorg/cocos2dx/javascript/YmnSupport;)V
    .locals 0

    .line 41
    iput-object p1, p0, Lorg/cocos2dx/javascript/YmnSupport$1;->this$0:Lorg/cocos2dx/javascript/YmnSupport;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 44
    invoke-static {}, Lorg/cocos2dx/javascript/YmnSupport;->access$000()Lorg/cocos2dx/javascript/AppActivity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdk;->initialize(Landroid/app/Activity;)V

    return-void
.end method
