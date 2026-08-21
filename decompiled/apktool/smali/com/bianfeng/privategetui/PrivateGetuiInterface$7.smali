.class Lcom/bianfeng/privategetui/PrivateGetuiInterface$7;
.super Ljava/lang/Object;
.source "PrivateGetuiInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/privategetui/PrivateGetuiInterface;->isPushTurnedOn()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/privategetui/PrivateGetuiInterface;)V
    .locals 0

    .line 259
    iput-object p1, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$7;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 262
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$7;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    invoke-virtual {v1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/igexin/sdk/PushManager;->isPushTurnedOn(Landroid/content/Context;)Z

    move-result v0

    const-string v1, "getui_is_push_turnedon"

    if-eqz v0, :cond_0

    .line 264
    iget-object v0, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$7;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v2, 0x5e5

    const-string v3, "\u5f00\u542f\u72b6\u6001"

    invoke-virtual {v0, v2, v3, v1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 266
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$7;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v2, 0x5e6

    const-string v3, "\u5173\u95ed\u72b6\u6001"

    invoke-virtual {v0, v2, v3, v1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
