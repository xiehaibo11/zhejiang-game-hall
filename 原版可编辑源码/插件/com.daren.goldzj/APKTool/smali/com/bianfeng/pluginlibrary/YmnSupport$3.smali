.class Lcom/bianfeng/pluginlibrary/YmnSupport$3;
.super Ljava/lang/Object;
.source "YmnSupport.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/pluginlibrary/YmnSupport;->invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/pluginlibrary/YmnSupport;

.field final synthetic val$params:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/pluginlibrary/YmnSupport;Ljava/lang/String;)V
    .locals 0

    .line 253
    iput-object p1, p0, Lcom/bianfeng/pluginlibrary/YmnSupport$3;->this$0:Lcom/bianfeng/pluginlibrary/YmnSupport;

    iput-object p2, p0, Lcom/bianfeng/pluginlibrary/YmnSupport$3;->val$params:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 256
    iget-object v0, p0, Lcom/bianfeng/pluginlibrary/YmnSupport$3;->this$0:Lcom/bianfeng/pluginlibrary/YmnSupport;

    invoke-static {v0}, Lcom/bianfeng/pluginlibrary/YmnSupport;->access$000(Lcom/bianfeng/pluginlibrary/YmnSupport;)Landroid/app/Activity;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/pluginlibrary/YmnSupport$3;->val$params:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    return-void
.end method
