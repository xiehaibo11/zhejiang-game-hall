.class Lcom/bianfeng/ymnshare/YmnShareInterface$3;
.super Ljava/lang/Object;
.source "YmnShareInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnshare/YmnShareInterface$downCallBack;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnshare/YmnShareInterface;->wxShareImage(Ljava/lang/String;Ljava/lang/String;)V
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

    .line 444
    iput-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$3;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCall(Landroid/graphics/Bitmap;)V
    .locals 2

    .line 447
    iget-object v0, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$3;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    iget-object v1, v0, Lcom/bianfeng/ymnshare/YmnShareInterface;->myShareFlag:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-static {v0, p1, v1}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$200(Lcom/bianfeng/ymnshare/YmnShareInterface;Landroid/graphics/Bitmap;I)V

    return-void
.end method
