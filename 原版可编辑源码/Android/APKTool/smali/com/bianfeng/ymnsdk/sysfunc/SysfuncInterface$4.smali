.class Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$4;
.super Ljava/lang/Object;
.source "SysfuncInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/sysfunc/PingCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getPing(Ljava/lang/String;)V
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

    .line 413
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$4;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public call(Ljava/lang/String;)V
    .locals 2

    .line 416
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$4;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 v1, 0x45f

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
