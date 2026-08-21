.class Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$2;
.super Ljava/lang/Object;
.source "RegWebViewMethodMaganer.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/BridgeHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->transUserData()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;


# direct methods
.method constructor <init>(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$2;->this$0:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 2

    .line 73
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "transUserData-->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 75
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getYmnDatafun()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onClickWithH5(Ljava/lang/String;)V

    return-void
.end method
