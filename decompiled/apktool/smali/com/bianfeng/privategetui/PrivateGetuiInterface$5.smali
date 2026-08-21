.class Lcom/bianfeng/privategetui/PrivateGetuiInterface$5;
.super Ljava/lang/Object;
.source "PrivateGetuiInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/privategetui/PrivateGetuiInterface;->turnOnPush()V
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

    .line 239
    iput-object p1, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$5;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 242
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$5;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    invoke-virtual {v1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/igexin/sdk/PushManager;->turnOnPush(Landroid/content/Context;)V

    return-void
.end method
