.class Lcom/bianfeng/privategetui/GetuiActivity$1;
.super Ljava/lang/Object;
.source "GetuiActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/privategetui/GetuiActivity;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/privategetui/GetuiActivity;

.field final synthetic val$intent:Landroid/content/Intent;


# direct methods
.method constructor <init>(Lcom/bianfeng/privategetui/GetuiActivity;Landroid/content/Intent;)V
    .locals 0

    .line 18
    iput-object p1, p0, Lcom/bianfeng/privategetui/GetuiActivity$1;->this$0:Lcom/bianfeng/privategetui/GetuiActivity;

    iput-object p2, p0, Lcom/bianfeng/privategetui/GetuiActivity$1;->val$intent:Landroid/content/Intent;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 23
    iget-object v0, p0, Lcom/bianfeng/privategetui/GetuiActivity$1;->val$intent:Landroid/content/Intent;

    const-string v1, "key"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 24
    iget-object v0, p0, Lcom/bianfeng/privategetui/GetuiActivity$1;->val$intent:Landroid/content/Intent;

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 25
    invoke-static {v1, v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 28
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/privategetui/GetuiActivity$1;->val$intent:Landroid/content/Intent;

    const-string v1, "params"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 30
    iget-object v0, p0, Lcom/bianfeng/privategetui/GetuiActivity$1;->val$intent:Landroid/content/Intent;

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 32
    invoke-static {v1, v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "click"

    .line 33
    invoke-static {v1, v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    const-string v0, "offline"

    const-string v1, "true"

    .line 35
    invoke-static {v0, v1}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
