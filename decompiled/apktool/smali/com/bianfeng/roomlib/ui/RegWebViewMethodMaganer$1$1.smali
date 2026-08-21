.class Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$1$1;
.super Ljava/lang/Object;
.source "RegWebViewMethodMaganer.java"

# interfaces
.implements Lcom/bianfeng/roomlib/ui/WebCallBack;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$1;->handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$1;

.field final synthetic val$function:Lcom/github/lzyzsd/jsbridge/CallBackFunction;


# direct methods
.method constructor <init>(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$1;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 0

    .line 65
    iput-object p1, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$1$1;->this$1:Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$1;

    iput-object p2, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$1$1;->val$function:Lcom/github/lzyzsd/jsbridge/CallBackFunction;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public sendDataToWeb(Ljava/lang/String;)V
    .locals 3

    .line 68
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "callBackFromH5ssss\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 69
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$1$1;->val$function:Lcom/github/lzyzsd/jsbridge/CallBackFunction;

    invoke-interface {v0, p1}, Lcom/github/lzyzsd/jsbridge/CallBackFunction;->onCallBack(Ljava/lang/String;)V

    return-void
.end method
