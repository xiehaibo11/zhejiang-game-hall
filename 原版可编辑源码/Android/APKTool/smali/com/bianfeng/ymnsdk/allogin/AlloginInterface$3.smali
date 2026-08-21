.class Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;
.super Ljava/lang/Object;
.source "AlloginInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->getInfo()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;)V
    .locals 0

    .line 162
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onPreLoginError(ILjava/lang/String;)V
    .locals 2

    .line 238
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const p2, 0x1ca4852

    invoke-virtual {v0, p2, p1}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onPreLoginSuccess(Ljava/lang/String;)V
    .locals 1

    .line 166
    new-instance v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;-><init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;Ljava/lang/String;)V

    .line 232
    new-instance p1, Ljava/lang/Thread;

    invoke-direct {p1, v0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 233
    invoke-virtual {p1}, Ljava/lang/Thread;->start()V

    return-void
.end method
