.class Lcom/bianfeng/pluginlibrary/YmnSupport$1;
.super Ljava/lang/Object;
.source "YmnSupport.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/pluginlibrary/YmnSupport;->init(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/pluginlibrary/YmnSupport;


# direct methods
.method constructor <init>(Lcom/bianfeng/pluginlibrary/YmnSupport;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/bianfeng/pluginlibrary/YmnSupport$1;->this$0:Lcom/bianfeng/pluginlibrary/YmnSupport;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/bianfeng/pluginlibrary/YmnSupport$1;->this$0:Lcom/bianfeng/pluginlibrary/YmnSupport;

    invoke-static {v0}, Lcom/bianfeng/pluginlibrary/YmnSupport;->access$000(Lcom/bianfeng/pluginlibrary/YmnSupport;)Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdk;->initialize(Landroid/app/Activity;)V

    return-void
.end method
