.class Lcom/bianfeng/ymnshare/YmnShareInterface$5;
.super Ljava/lang/Object;
.source "YmnShareInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareMinProgram(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

.field final synthetic val$path:Ljava/lang/String;

.field final synthetic val$sharePath:Ljava/lang/String;

.field final synthetic val$text:Ljava/lang/String;

.field final synthetic val$title:Ljava/lang/String;

.field final synthetic val$username:Ljava/lang/String;

.field final synthetic val$version:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnshare/YmnShareInterface;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 660
    iput-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    iput-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->val$title:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->val$text:Ljava/lang/String;

    iput-object p4, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->val$sharePath:Ljava/lang/String;

    iput-object p5, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->val$username:Ljava/lang/String;

    iput-object p6, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->val$path:Ljava/lang/String;

    iput-object p7, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->val$version:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCall(Landroid/graphics/Bitmap;)V
    .locals 8

    .line 663
    iget-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    iget-object v2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->val$title:Ljava/lang/String;

    iget-object v3, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->val$text:Ljava/lang/String;

    iget-object v4, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->val$sharePath:Ljava/lang/String;

    iget-object v5, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->val$username:Ljava/lang/String;

    iget-object v6, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->val$path:Ljava/lang/String;

    iget-object v7, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$5;->val$version:Ljava/lang/String;

    move-object v1, p1

    invoke-static/range {v0 .. v7}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$400(Lcom/bianfeng/ymnshare/YmnShareInterface;Landroid/graphics/Bitmap;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
