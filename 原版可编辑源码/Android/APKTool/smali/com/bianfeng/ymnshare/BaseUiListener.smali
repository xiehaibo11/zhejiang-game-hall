.class public Lcom/bianfeng/ymnshare/BaseUiListener;
.super Ljava/lang/Object;
.source "BaseUiListener.java"

# interfaces
.implements Lcom/tencent/tauth/IUiListener;


# static fields
.field private static final QQ_FLAG_SHARERESULT_DENY:I = 0x323

.field public static final QQ_FLAG_SHARERESULT_FAIL:I = 0x322

.field private static final QQ_FLAG_SHARERESULT_SUCCESS:I = 0x321

.field private static final QQ_FLAG_SHARERESULT_UNKNOWN:I = 0x324


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCancel()V
    .locals 2

    const/16 v0, 0x322

    const-string v1, "\u53d1\u9001\u53d6\u6d88"

    .line 25
    invoke-static {v0, v1}, Lcom/bianfeng/ymnshare/YmnShareInterface;->notifyResult(ILjava/lang/String;)V

    return-void
.end method

.method public onComplete(Ljava/lang/Object;)V
    .locals 1

    const/16 p1, 0x321

    const-string v0, "\u53d1\u9001\u6210\u529f"

    .line 15
    invoke-static {p1, v0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->notifyResult(ILjava/lang/String;)V

    return-void
.end method

.method public onError(Lcom/tencent/tauth/UiError;)V
    .locals 1

    .line 20
    iget-object p1, p1, Lcom/tencent/tauth/UiError;->errorMessage:Ljava/lang/String;

    const/16 v0, 0x322

    invoke-static {v0, p1}, Lcom/bianfeng/ymnshare/YmnShareInterface;->notifyResult(ILjava/lang/String;)V

    return-void
.end method

.method public onWarning(I)V
    .locals 2

    .line 30
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "BaseUiListener--->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return-void
.end method
