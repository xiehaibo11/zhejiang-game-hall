.class Lcom/bianfeng/ymnshare/YmnShareInterface$4;
.super Ljava/lang/Object;
.source "YmnShareInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareWebPage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnshare/YmnShareInterface;)V
    .locals 0

    .line 550
    iput-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$4;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCall(Landroid/graphics/Bitmap;)V
    .locals 6

    .line 553
    iget-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$4;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    iget-object v1, v0, Lcom/bianfeng/ymnshare/YmnShareInterface;->myurl:Ljava/lang/String;

    iget-object v2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$4;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    iget-object v2, v2, Lcom/bianfeng/ymnshare/YmnShareInterface;->mytitle:Ljava/lang/String;

    iget-object v3, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$4;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    iget-object v3, v3, Lcom/bianfeng/ymnshare/YmnShareInterface;->mydes:Ljava/lang/String;

    iget-object v4, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$4;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    iget-object v4, v4, Lcom/bianfeng/ymnshare/YmnShareInterface;->myShareFlag:Ljava/lang/String;

    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    move-object v4, p1

    invoke-static/range {v0 .. v5}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$300(Lcom/bianfeng/ymnshare/YmnShareInterface;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Bitmap;I)V

    return-void
.end method
