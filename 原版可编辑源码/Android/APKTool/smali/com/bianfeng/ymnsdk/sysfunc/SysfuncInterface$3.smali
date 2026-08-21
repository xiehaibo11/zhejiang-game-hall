.class Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$3;
.super Ljava/lang/Object;
.source "SysfuncInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getClipboardcontent()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V
    .locals 0

    .line 374
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$3;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 377
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$3;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getClipBoardContent()Ljava/lang/String;

    move-result-object v0

    .line 378
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "clipBoardContent = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 379
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$3;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v2, 0x453

    invoke-virtual {v1, v2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
