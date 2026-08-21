.class Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$1;
.super Ljava/lang/Object;
.source "AlloginInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->preLogin(Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

.field final synthetic val$callBack:Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;)V
    .locals 0

    .line 80
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$1;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$1;->val$callBack:Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onPreLoginError(ILjava/lang/String;)V
    .locals 1

    .line 88
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$1;->val$callBack:Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;->onPreLoginError(ILjava/lang/String;)V

    return-void
.end method

.method public onPreLoginSuccess(Ljava/lang/String;)V
    .locals 1

    .line 83
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$1;->val$callBack:Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;

    invoke-interface {v0, p1}, Lcom/bianfeng/ymnsdk/allogin/net/AlloginCallBack;->onPreLoginSuccess(Ljava/lang/String;)V

    return-void
.end method
