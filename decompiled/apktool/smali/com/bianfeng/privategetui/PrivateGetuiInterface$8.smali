.class Lcom/bianfeng/privategetui/PrivateGetuiInterface$8;
.super Ljava/lang/Object;
.source "PrivateGetuiInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/privategetui/PrivateGetuiInterface;->setTag(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

.field final synthetic val$tags:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/privategetui/PrivateGetuiInterface;Ljava/lang/String;)V
    .locals 0

    .line 278
    iput-object p1, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$8;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    iput-object p2, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$8;->val$tags:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 281
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$8;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    invoke-virtual {v1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$8;->val$tags:Ljava/lang/String;

    invoke-static {v2}, Lcom/bianfeng/privategetui/YmnGetuiUtils;->getTags(Ljava/lang/String;)[Lcom/igexin/sdk/Tag;

    move-result-object v2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/sdk/PushManager;->setTag(Landroid/content/Context;[Lcom/igexin/sdk/Tag;Ljava/lang/String;)I

    return-void
.end method
