.class final Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckApi$1;
.super Lcom/bianfeng/ymnsdk/allogin/checkAction/ActionObserverV3;
.source "CheckApi.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckApi;->requestCheckLogin(Landroid/content/Context;Ljava/lang/Object;Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckCallBack;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$checkCallBack:Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckCallBack;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckCallBack;)V
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckApi$1;->val$checkCallBack:Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckCallBack;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/allogin/checkAction/ActionObserverV3;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V
    .locals 2

    .line 25
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckApi$1;->val$checkCallBack:Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckCallBack;

    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckCallBack;->CheckSuccess(Ljava/lang/String;)V

    .line 26
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "result is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method
